#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    //Constructor
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;

    }
};

//traversing a linked list
void print(Node* head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    cout<<endl;

}

//gives length of a LL
int getlength(Node *head)
{
    int len=0;
    Node* temp=head;

    while(temp != NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

int main()
{
    Node* node1 =new Node(10);
    Node* head= node1;

    print(head);

    cout<<getlength(head)<<endl;

    insertAtHead(head,11);
    print(head);

        insertAtHead(head,15);
    print(head);

        insertAtHead(head,13);
    print(head);

    return 0;
}