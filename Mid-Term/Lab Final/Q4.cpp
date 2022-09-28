#include<bits/stdc++.h>
using namespace std;

vector<int> heapTree;

class node
{
    public:
    int data;
    node *left,*right;

    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};




node *buildtree()
{
    queue<node*> q;
    int x;
    cin>>x;
    node* root=new node(x);
    q.push(root);
    while(!q.empty())
    {
        node* p=q.front();
        q.pop();
        int a,b;
        cin>>a>>b;
        if(a!=-1) p->left=new node(a);
        if(b!=-1) p->right=new node(b);
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

// Function to swap position of two elements
void swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

// Function to heapify the tree
void heapify(vector<int> &hT, int i) {
  int size = hT.size();
  
  // Find the largest among root, left child and right child
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  if (l < size && hT[l] > hT[largest])
    largest = l;
  if (r < size && hT[r] > hT[largest])
    largest = r;

  // Swap and continue heapifying if root is not largest
  if (largest != i) {
    swap(&hT[i], &hT[largest]);
    heapify(hT, largest);
  }
}

// Function to insert an element into the tree
void insert(vector<int> &hT, int newNum) {
  int size = hT.size();
  if (size == 0) {
    hT.push_back(newNum);
  } else {
    hT.push_back(newNum);
    for (int i = size / 2 - 1; i >= 0; i--) {
      heapify(hT, i);
    }
  }
}

// Function to delete an element from the tree
void deleteNode(vector<int> &hT, int num) {
  int size = hT.size();
  int i;
  for (i = 0; i < size; i++) {
    if (num == hT[i])
      break;
  }
  swap(&hT[i], &hT[size - 1]);

  hT.pop_back();
  for (int i = size / 2 - 1; i >= 0; i--) {
    heapify(hT, i);
  }
}

// Print the tree
void printArray(vector<int> &hT) {
  for (int i = 0; i < hT.size(); ++i)
    cout << hT[i] << " ";
  cout << "\n";
}


// Breadth First Search (BFS)
void BFS(node *root)
{
	queue<node*> q;

	q.push(root);
	q.push(NULL);	//	To print each level on new line

	while(!q.empty())
	{
		node *f=q.front();
		if(f==NULL)
		{
			//cout<<"\n";
			q.pop();

			if(!q.empty())
			q.push(NULL);
		}

		else
		{
			//cout<<f->data<<" ";
            insert(heapTree, f->data);
			q.pop();

		if(f->left)
			{
				q.push(f->left);
			}

		if(f->right)
			{
				q.push(f->right);
			}

		}

	}
}

int main()
{
    node *root=buildtree();
    BFS(root);

    int T;
    cin>>T;

    for(int i=0; i<T; i++)
    {
        int t;
        cin>>t;
        if(t == 2){
        int a = heapTree.front();
        cout<<a<<endl;
        deleteNode(heapTree, a);
    }

        if(t == 1){
            int a;
            cin>>a;
            insert(heapTree, a);
        }
    }
    

    return 0;
}
