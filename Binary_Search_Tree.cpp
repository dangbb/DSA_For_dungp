#include <bits/stdc++.h>
#define maxn 200005

using namespace std;

struct Node
{
    int val;

    Node* l;
    Node* r;
    Node* parent;

    Node(int val)
    {
        this->val = val;
        l = NULL;
        r = NULL;
        parent = NULL;
    }

    int degree()
    {
        return (l != NULL) + (r != NULL);
    }
};

Node* root = NULL;

int q;

void Add(int val)
{
    if(root == NULL)
    {
        root = new Node(val);
        return;
    }

    Node* cur_node = root;
    Node* new_node = new Node(val);

    while(true)
    {
        if(val < cur_node->val)
        {
            if(cur_node->l == NULL)
            {
                cur_node->l = new_node;
                new_node->parent = cur_node;
                return;
            }
            else
            {
                cur_node = cur_node->l;
            }
        }
        else
        {
            if(cur_node->r == NULL)
            {
                cur_node->r = new_node;
                new_node->parent = cur_node;
                return;
            }
            else
            {
                cur_node = cur_node->r;
            }
        }
    }
}

Node* Check(int val)
{
    Node* cur_node = root;

     while(cur_node != NULL)
    {
        if(val < cur_node->val)
        {
            if(cur_node->l == NULL)
            {
                return NULL;
            }
            else
            {
                cur_node = cur_node->l;
            }
        }
        else if(val > cur_node->val)
        {
            if(cur_node->r == NULL)
            {
                return NULL;
            }
            else
            {
                cur_node = cur_node->r;
            }
        }
        else
        {
            return cur_node;
        }
    }
}

Node* Find_Leftest(Node* root)
{
    Node* cur_node = root;

    while(cur_node->l != NULL)
    {
        cur_node = cur_node->l;
    }

    return cur_node;
}

void Erase(int val)
{
    Node* cur_node = Check(val);

    if(cur_node == NULL)
    {
        cout << "Can't find " << val << " in BST. Blame Dang !!\n";
        return;
    }

    if(cur_node->degree() == 2)
    {
        Node* Left_Most_Node = Find_Leftest(cur_node);

        cur_node->l = Left_Most_Node->r;
        cur_node->val = Left_Most_Node->val;

        if(Left_Most_Node->parent != NULL)
        {
            Left_Most_Node->parent->l = Left_Most_Node->r;
        }

        cur_node->val = Left_Most_Node->val;
        delete Left_Most_Node;

        return;
    }
}

void Print(Node* root)
{
    if(root == NULL) return;

    Print(root->l);
    cout << root->val << " ";
    Print(root->r);
}

int main()
{
    freopen("a.inp","r",stdin);
    cin >> q;

    while(q--)
    {
        int type, val;

        cin >> type >> val;

        if(type == 1)
        {
            /// add val
            Add(val);
        }
        else if(type == 2)
        {
            /// check if exist in BST
            Node* pos = Check(val);

            if(pos != NULL) cout << "YES\n";
            else cout << "NO\n";
        }
        else
        {
            /// erase, val has to be in BST
            Erase(val);
        }

        Print(root);
        cout << "\n";
    }
}

