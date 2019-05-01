//B519095 이세은
//addrear 함수로 리스트를 추가

#include <stdio.h>
#include <stdlib.h>

struct Node {
 int data;
 struct Node * next;
};

 struct Node *pStart = NULL; // 리스트의 첫 노드의  포인터
 struct Node *pEnd = NULL; // 리스트의 마지막 노드의 포인터
 struct Node * Current; // 새로 추가할 노드 포인터

void addrear(int val)
{ 
 Current = (struct Node *) malloc(sizeof(struct Node));
 Current -> data = val;
 Current -> next = NULL;
 
  if(pStart == NULL)
   pStart = pEnd = Current;
else {
   pEnd -> next = Current;
   pEnd = Current;
  }
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
  addrear(i); //새 노드를 만들어 리스트 뒤에 i를 추가
 printlist(pStart);

 return 0;
}

//실행 결과
//1
//2
//3
//4
//5
