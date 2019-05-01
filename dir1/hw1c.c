#include <stdio.h>
void swap(int *xp, int *yp) { int temp = *xp; *xp = *yp; *yp = temp; }
int main(void)
{
 int a = 2; int b = 3;
 swap(&a, &b); printf("a : %d, b : %d\n", a, b);
}
