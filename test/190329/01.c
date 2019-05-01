//구조체


#include <stdio.h>

struct Point {
 int x,y;
};

struct Point Sum(struct Point P1, struct Point *P2)
{
 struct Point Po;
 Po.x = P1.x + P2 -> x;
 Po.y = P1.x + P2 -> y;

 return Po;
}

int main(void)
{
 struct Point A = {1,2};
 struct Point B = {3,4};
 struct Point C;
 //struct Point *D;

 C = Sum(A,&B);
 //*D = &C;

 printf("Point C : (%d, %d)\n", C.x,C.y);
 //printf("Point D : (%d, %d)\n", D->x,D->y);

 return 0;
}
