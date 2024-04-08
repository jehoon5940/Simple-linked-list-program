#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "InsertLinkedList.h"

LinkedList_h* h createLinkedList_h(void) {
    LinkedList_h* L;
    L = (LinkedList_h*)malloc(sizeof(LinkedList_h));
    L->head = null;
    return L;
}

void freeLinkedList_h(LinkedList* L)
{
    ListNode* p;
    while (L->head != NULL)
    {
        p = L->head;
        L->head = L->head->link;
        p = NULL;
    }
}

void printList(LinkedList_h* L)
{
    ListNode* p;
    printf("L = (");
    p = L->head;
    while (p != NULL)
    {
        printf("%s", p->data);
        p = p->link;
        if (p != NULL) printf(", ");
    }
    printf(") \n");
}

// 첫 번째 노드로 삽입하는 연산
void InsertFirst Node(IinkedList_he L. char*x) {
    listNode* newNode;
    newNode(listNode*)malloc( sizeof(istNode)); // 삽입할 새 노드 할당
    strcpy(newNode->data.x);
    newNode->link = L-head;
    L-head-newNode;
}
// 노드를 pre 뒤에 삽입하는 연산
void InsertMiddleNode(IinkedList_he L. listNoden pre. char* x) {
    ListNode newNode;
    newNode(listNode*)malloc( sizeof(istNode));
    strcpy(newNode->data.x);
    if (L-head - NULL) {
        newNode->link- NULL; 
        L-head = newNode;
    }
    else if (pre- NULL) { 
        newNode->link = L-head;
        L->head - newNode;
    else { 
    newNode->link-pre->link;
    pre->link = newNode; }
    }
}
void InsertLastNode(IinkedList_h* L. char* x) {
    listNode* newNode;
    listNode* temp;
    newNode= (listNode*)malloc(sizeof(listNode)); 
    strcpy(newNode->data, x);
    newNode->link = NULL;
    if (L->head == NULL) {
        L-head = newNode;
       return;
    }
    temp-> L->head;
    while (temp->link != NULL) temp = temp->link;
    temp->link = newNode;
}
