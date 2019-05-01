//B519095 이세은
//addfront 함수와 delete 함수 작성

#include <stdio.h>
#include <stdlib.h>

struct Node {
 int data;
 struct Node * next;
};

 struct Node *pStart = NULL; // 리스트의 첫 노드의  포인터
// struct Node *pEnd = NULL; // 리스트의 마지막 노드의 포인터
 struct Node * Current; // 새로 추가할 노드 포인터

void addfront(int val)
{ 
 Current = (struct Node *) malloc(sizeof(struct Node));
 Current -> data = val;
 Current -> next = NULL;
 
  if(pStart == NULL){
   pStart = Current;
  }
  else {
   Current -> next = pStart;
   pStart = Current;
  }
}

void *delete(int val)
{
 Current = pStart;
 while (Current -> next != NULL) {
  if (pStart -> data == val){
    free(pStart);
  }
  else if (Current -> next -> data == val) {
   Current -> next = Current -> next -> next;
   free(Current -> next);
  }
  Current = Current -> next;
 }
 //첫 노드의 data가val인 경우 : 
 //기타 경우 : 
}

void printlist(struct Node *Current)
{
 Current = pStart;
 while (Current != NULL) {
  printf("%d\n", Current -> data);
  Current = Current -> next;
 }
}

int main(void)
{
 int i ;
 
 for(i = 1; i <= 5; i++)
  addfront(i); //새 노드를 만들어 리스트 뒤에 i를 추가
 
// delete(1);
 delete(2);
// delete(3);
// delete(4);
 delete(5);
 printlist(pStart);

 return 0;
}

