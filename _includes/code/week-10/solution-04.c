1. p = q;   -> INVALID. You cannot assign a new address to an array name (constant pointer).
2. *p = 56; -> VALID. Changes p[0] to 56.
3. *p = *q; -> VALID. Assigns value of y (3) to p[0].
4. q = &x;  -> VALID. Changes q to point to x.
