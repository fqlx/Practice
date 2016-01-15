class Solution{
    public:
    Node* insert(Node *head,int _data) {
        Node* _new = new Node(_data);
        _new->next = NULL;
        if (head == NULL) {
            // don't forget the initial case!
            // head is NULL b.a.e. on first run
            head = _new;
        } else if (head->next == NULL) {
            head->next = _new;
        } else {
            Node* start = head;
            while(start->next != NULL) {
                start = start->next;
            }
            start->next = _new;
        }
        return head;
    }