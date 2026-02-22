1. p = q;   -> VALID. p is a variable, can point to start of array q.
2. *p = 56; -> VALID. Changes value of y to 56.
3. *p = *q; -> VALID. Assigns q[0] (5) to y.
4. q = &x;  -> INVALID. You cannot assign a new address to an array name (constant pointer).
