#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/* determining whether the numbers are positive or negative
 *if the number > 0 then it is positive
 *if the number is < 0 then it is negative
 if the number is 0 then it is 0 */
int main(void)
{ int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
{ printf ("%d is positive \n",n); }
else if (n == 0)
{ printf ("%d is zero \n", n); }
else
{ printf ("%d is negative \n", n) ;}
return (0); }
