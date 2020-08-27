#include <bits/stdc++.h>
#define maxn 100005

using namespace std;

struct Queue
{
    int val;
    Queue* next;

    Queue(int value)
    {
        val = value;
        next = NULL;
    }
};

Queue* tail = NULL;

/// quy uoc: tail la dau cua Queue

int n;

void Print()
{
    if(tail == NULL)
    {
        cout << "NULL\n";
        return;
    }
    Queue* head = tail->next;
    Queue* pseu_head = head->next;

    cout << head->val << " ";
    while(pseu_head != head)
    {
        cout << pseu_head->val << " ";
        pseu_head = pseu_head->next;
    }
    cout << endl;
}

int main()
{
    freopen("a.inp","r",stdin);

    cin >> n;

    while(n--)
    {
        int type, val;

        cin >> type;

        if(type == 1)
        {
            /// add to Queue
            cin >>  val;
            Queue* new_queue = new Queue(val);

            if(tail == NULL)
            {
                tail = new_queue;
                new_queue->next = new_queue;
            }
            else
            {
                new_queue->next = tail->next;
                tail->next = new_queue;

                tail = new_queue;
                /// erase this line, you get stack, trust me :>
            }
        }
        else if(type == 2)
        {
            /// print value in head

            if(tail == NULL)
            {
                cout << tail->next->val << endl;
            }
            else
            {
                cout << "Blame Dang!! \n";
            }
        }
        else
        {
            /// erase value in head

            if(tail->next == tail)
            {
                tail = NULL;
            }
            else
            {
                Queue* head = tail->next;
                tail->next = head->next;
                delete head;
            }
        }
        Print();
    }
}
