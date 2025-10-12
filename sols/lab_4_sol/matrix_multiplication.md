### Computational Complexity

Compute the matrix multiplication of two matrices with sizes 

$A \in \mathbb{R}^{m \times n}$

and 

$B \in \mathbb{R}^{n \times l}$. 

The solution will have a size of 

$C \in \mathbb{R}^{m \times l}$. 

However, for each element in the matrix C, you need to compute $C_{i,j} = \sum_{k = 1}^{n} A_{i,k} B_{k,j}$, which itself will have n iterations. 

Therefore, the total number of computing cycles is $ml*n$. 

If a matrix scales up by two times ($A \in \mathbb{R}^{2m \times 2n}$, $B \in \mathbb{R}^{2n \times 2l}$
), the computing time increase eight folds, since $mln = T \implies 2m*2l*2n = 8T$.  

