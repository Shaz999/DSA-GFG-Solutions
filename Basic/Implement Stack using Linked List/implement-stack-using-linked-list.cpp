//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends


//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    if (top == NULL) 
    {
        top = new StackNode(x);
    } 
    else 
    {
        //creating a new temp node in the stack
        StackNode *temp = new StackNode(x);
        //assigning link part of new node to top and making it top node.
        temp->next = top;
        top = temp;
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    StackNode *temp = top;

    //if node at temp pointer is null, the stack is empty so we return -1.
    if (temp == NULL) 
    {
        return -1;
    } 
    else 
    {
        //storing the data at top node and deleting that node.
        temp = temp->next;
        int r = top->data;
        delete (top);
        top = temp;
        
        //returning the data.
        return r;
    }
}