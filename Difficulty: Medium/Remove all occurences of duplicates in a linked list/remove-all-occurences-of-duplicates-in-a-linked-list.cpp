//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        
        // code here
        
        Node*tmp=head;
        
        map<int,int>mp;
        
        while(tmp){ // mapping 
            mp[tmp->data]++;
            tmp=tmp->next;
        }
        // now recreating linked list from set 
        
        Node* dummy= new Node(-1);
        Node* current=dummy;
        
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second==1){
                
                Node*newNode= new Node(it->first);
                current->next=newNode;
                current=newNode;
            }
        }
        Node *result=dummy->next;
        
        return result;  // returning the head address  of the  new linked list 
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends