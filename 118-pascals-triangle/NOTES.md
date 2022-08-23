TYPE 1:

>Create N Vectors, one for each row, of 0 size

>Set Size → Column size = Row number

>Set first and last element as 1

>Second loop to input values

>O(N*N) time and space


TYPE 2: Print an element at **Row r and Cloumn c**

>(r-1) **C** (c-1)   

TYPE 3: If asked to print **only a particular row** → nCr takes 0(N*N) → but we can do it in 0(N) using

ex : 1 4 6 4 1

for (int i = 0; i < k; ++i) 
{
res * = (n - i);
res /= (i + 1);
}

>Basically we are using the shortcut trick to find nCr
