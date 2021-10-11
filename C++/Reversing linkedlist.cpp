#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

Node* reverseit(Node* head)
{
    Node *current =head;
    Node *next = NULL;
    Node *prev = NULL;

     //   head->next = NULL;
        while (current != NULL)
        {
            
            next = current->next;
            current->next = prev;
            prev=current;
            current=next;
        }

        return prev;
    }


// Driver code
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    
    head = new Node();
    second = new Node();
    third = new Node();
   

    head->data = 1;     
    head->next = second; 

    second->data = 2;
    second->next = third;

    third->data = 3; 
    third->next = NULL;

   

//    printList(head);
//   reverseit(head);
 printList(reverseit(head));

    return 0;
}
