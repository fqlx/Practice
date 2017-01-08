#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public: //Solution actually begins
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
        } //solution ends here
        return head;
    } //solution ends heres
      void display(Node *head)
      {
          Node *start=head;
          while(start!=NULL)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}