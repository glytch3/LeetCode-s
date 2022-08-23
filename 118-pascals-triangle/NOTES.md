TYPE 1:

>Create N Vectors, one for each row, of 0 size

>Set Size → Column size = Row number

>Set first and last element as 1

>Second loop to input values

>O(N*N) time and space

TYPE 2: Print an element at **Row r and Cloumn c**

(r-1) **C** (c-1)   →   For every element 

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/c331eab5-1f45-43e8-ab29-0163e1589871/Untitled.png)

TYPE 3: If asked to print **only a particular row** → nCr takes 0(N*N) → but we can do it in 0(N) using

ex : 1 4 6 4 1

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/0f6026b8-4044-47b2-942d-f20070fe77a9/Untitled.png)

Basically we are using the shortcut trick to find nCr
