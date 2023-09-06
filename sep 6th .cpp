#include <iostream>
using namespace std;
class Node{
public:
    int Vaule;
    Node* Next;

};
void printlis(Node*n){
    while(n!=NULL){
        cout << n-> Vaule << endl;
        n= n-> Next;
    }
}

int main()
{
    Node*head=new Node();
    Node*second=new Node();
    Node*third=new Node();

    head -> Vaule = 1;
    head-> Next = second;
    second -> Vaule =2;
    second-> Next = third;
    third -> Vaule = 3;
    third -> Next = NULL;

   printlis(head);
//use a loop to create a linked list of ten nodes
//remmember these steps
//1. create a new node
//2. fill the new node data fields
//3.attch the new nodes to the end of the list
//4repation list pointers
// create the head of the list
Node* pHead;
// create a a helper pointer nammed current
Node*pCurrent;

Node*pNext;

pHead = new Node();

pHead -> vaule = 1;

pCurrent = new Node();
pCurrent -> vaule =2;

pHead -> next = pCurrent;

pCurrent -> next = NULL;

printlis(pHead);

for (int i =0; i < 10 ; i++){



}




    return 0;
}
