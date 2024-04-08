// 단순 연결 리스트의 노드 구조를 구조체로 정의
typedef struct ListNode {
    char data[4];
    struct ListNode* link;
} listNode;

// 리스트의 시작을 나타내는 head 노드를 구조체로 정의
typedef struct {
    listNode head;
} linkedList_h;

linkedList_h createLinkedList_h(void);
vold freeLinkedList_h(linkedList_h* L);
void printList (linkedList_h L);
void insert First Node(linkedList_h L. char* x);
void insert MiddleNode(linkedList_h* L, listNode pre, char* x);
vold insert Last Node(linkedList_h* L, char* x);
