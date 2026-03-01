#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    Node* detectCycle(Node* head)
    {
        Node*p = head;
        unordered_set<Node*> set;
        while (p->next != NULL) {
            if (set.count(p)) {
                return p;
            }
            set.emplace(p);
            p = p->next;
        }
        return NULL;
    }
};

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        Node *res = ob.detectCycle(head);
        if (res == NULL)
            cout << "Loop does not exist"<<endl;
        else
            cout << res->data<<endl;
    }
	return 0;
}
