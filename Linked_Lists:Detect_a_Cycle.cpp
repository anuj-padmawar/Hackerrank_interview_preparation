/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) 
{
    // Complete this function
    // Do not write the main method
    Node* x=head;
    Node* y=head;
    while(y!=NULL && y->next!=NULL) 
    {
        x=x->next;
        y=y->next->next;
        
        if(x==y)
        {      
            return true;
        }
    }
    return false; 
}
