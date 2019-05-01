//B519095 이세은
//연결리스트 앞뒤에 노드 추가 및 연결리스트 출력에 대해 이해하기

#include <stdio.h>
#include <stdlib.h>

struct Node {
 int data;
 struct Node * next;
};

int main(void)
{
 int i;
 struct Node * pStart = NULL; // 첫 번째 노드 포인터
 struct Node * pEnd = NULL; // 마지막 노드 포인터
 struct Node * Current; // 새로 추가할 노드 포인터

 for (i = 1; i <= 5; i++) {
  //노드 생성
  Current = (struct Node *) malloc(sizeof(struct Node));
  Current -> data = i;
  Current -> next = NULL;

  if(pStart == NULL)
   pStart = pEnd = Current;
  else {
   pEnd -> next = Current;
   pEnd = Current;
  }
 }

 // 첫 번째 노드부터 출력
 Current = pStart;
 while (Current != NULL) {
  printf("%d\n", Current -> data);
  Current = Current -> next;
 }

 return 0;
}
