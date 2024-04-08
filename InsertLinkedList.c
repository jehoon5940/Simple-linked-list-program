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
