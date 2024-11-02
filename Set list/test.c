void Insert(ListType* l, entryType item, int pos) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->info = item;

    if (pos == 0 || l->head == NULL) {
        p->next = l->head;
        l->head = p;
    } else {
        Node* q;
        int i;
        for (q = l->head, i = 0; i < pos - 1; i++) {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
    l->listSize++;
}
