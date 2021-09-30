#include <stdio.h>
int iterFib(int);
int recurFib(int);

int main(){
   int n;
   printf("n:(>=0): ");
   scanf("%d", &n);
   printf("%d Fibonacci is %d.\n", n, iterFib(n));
   printf("%d Fibonacci is %d.\n", n, recurFib(n));
}

int recurFib(int n)
{ /*recursive version */
  if (n==0) return 0;
  if ((n==1) || (n==2))  return 1;
  return recurFib(n-1) + recurFib(n-2);
}

int iterFib(int n)
{/* find the factorial, return as a double
    to keep it from overflowing */
   int i;
   int fib, fib1, fib2;
   if (n==0) return 0;
   if ((n==1) || (n==2))  return 1;
   fib1 = fib2 = 1;
   for (i = 3; i <=n; i++) {
     fib = fib1+fib2;
	 fib2 = fib1;
	 fib1 = fib;
   }
   return fib;
}