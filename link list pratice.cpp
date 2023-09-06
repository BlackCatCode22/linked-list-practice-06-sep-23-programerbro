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

    return 0;
}
