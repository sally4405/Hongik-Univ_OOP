// 구조체 : 단방향 링크드 리스트

#include <stdio.h>
#include <stdlib.h>

struct Node { 
 int data;
 struct Node *next;
};

int main(void)
{
 int i;
 struct Node *pStart = NULL;
 struct Node *pEnd = NULL;
 struct Node *Current;

 for (i = 1; i <= 5; i++) {
  Current = (struct Node *) malloc(sizeof(struct Node));
  Current -> data = i;
  Current -> next = NULL;

  if (pStart == NULL)
   pStart = pEnd = Current;
  else {
   pEnd -> next = Current;
   pEnd = Current;
  }
 }

 Current = pStart;
 while (Current != NULL) {
  printf("%d\n", Current -> data);
  Current = Current -> next;
 } 




 return 0;
}
