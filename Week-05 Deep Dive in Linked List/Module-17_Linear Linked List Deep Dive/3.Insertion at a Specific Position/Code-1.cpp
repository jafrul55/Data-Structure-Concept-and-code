#include<bits/stdc++.h>
using namespace std;
//Insertion at a Specific Position
class Node
{
public:
    int value;
    Node *Next;  //Node type pointer


    //Construction Creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }

};


void insertAtTail(Node* &head,int val);
void insertAtHead(Node* &head,int val);
void display(Node *n);
int countLength(Node* &head);
void insertionAtSpecificPosition(Node* &head,int pos,int val);








void insertAtTail(Node* &head,int val) //Here we will work with head address
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;  //copy head in temp

    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }

    temp->Next = newNode;

}

void insertAtHead(Node* &head,int val)
{
    //step-1:NewNode Creation
    Node* newNood = new Node(val);   //parameter

    //Step-2:Update of newNode->Next
    newNood->Next = head;

    //Step-3:Update of head
    head = newNood;
}


void display(Node *n)  //Node type pointer
{
    while(n != NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
            cout<<" -> ";
        n = n->Next;  //To drive loop
    }
    cout<<endl<<endl;

}


int countLength(Node* &head)
{
    int count = 0;
    Node * temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->Next;
    }

    return count;

}
//insertionAtspecific position:
void insertionAtSpecificPosition(Node* &head,int pos,int val)
{
    int i=0;
    Node* temp = head;

    while(i<pos-2)
    {
        temp = temp->Next;
        i++;

    }

    //create New node
    Node *newNode = new Node(val);

    newNode->Next = temp->Next;
    temp->Next = newNode;
}
int main()
{
    Node *head = NULL;

    //we can take input from user:

    int Value,Position;

    //Choice 1:Insertion at Head
    //Choice 2:Insertion at Tail
    cout<<"Choice 1:Insertion at Head"<<endl
        <<"Choice 2:Insertion at Tail"<<endl
        <<"Choice 3:Insertion at Specific Position"<<endl
        <<"Choice 0:Exit"<<endl
        <<endl;
    cout<<"Next Choice: ";
    int choice;
    cin>>choice;

    while(choice != 0)
    {
        //Instead of if/else we will use Switch
        switch(choice)
        {
        case 1:
            cout<<"Enter the Value: ";
            cin>>Value;
            insertAtHead(head,Value);
            break;
        case 2:
            cout<<"Enter the Value: ";
            cin>>Value;
            insertAtTail(head,Value);
            break;
        case 3:
            cout<<"Enter the Desire Position: ";
            cin>>Position;
             cout<<"Enter the Value: ";
            cin>>Value;

            insertionAtSpecificPosition(head,Position,Value);
            break;
        default:
            break;

        }
        cout<<"Next Choice: ";
        cin>>choice;

    }

    cout<<endl<<"Linked List: ";
    display(head);
    cout<<"Length of the List: "<<countLength(head)<<endl;





    return 0;
}




