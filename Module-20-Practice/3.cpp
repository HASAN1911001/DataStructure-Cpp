/*-----------------------------

Why is the complexity of binary search O(logN) where N is the size of the list? Explain.

--------------------------------*/

//Answer: 
/*-----------------------------

If we consider the relation between N and logN(base2), 

N          2  4  8  16  32  64  128
logN       1  2  3  4   5   6   7

It is clear from the above relation that when N doubled logN increased by 1. 

Now, O(logN) means when N or element of array doubled it required only 1 extra operation.
In binary search array becomes half after every iteration. It means if we doubled the 
elements it will take only a extra operation, which leads to the complexity of binary search 
to O(logN). 

--------------------------------*/