#include <bits/stdc++.h>
#define maxn 100005

using namespace std;

struct linked_list
{
    int val;
    linked_list* next;

    linked_list(int value)
    {
        val = value;
        next = NULL;
    }
};

int SIZE = 811; /// using a prime number as example
int a[maxn];

linked_list* ll[maxn];

/// we will use circle linked list

void ll_Add(int index, int val)
{
    if(ll[index] == NULL)
    {
        ll[index] = new linked_list(val);
        ll[index]->next = ll[index];
        return;
    }

    ll[index]->next = new linked_list(val);
    ll[index] = ll[index]->next;
}

bool ll_Check(int index, int val)
{
    if(ll[index] == NULL)
    {
        return false;
    }

    linked_list* tail = ll[index];

    if(tail->val == val) return true;
    tail = tail->next;

    while(tail != ll[index])
    {
        if(tail->val == val) return true;
        tail = tail->next;
    }

    return false;
}

void linear_ThamDoTuyenTinh(int index, int val)
{
    int pseu_int = index;
    while(a[index] != 0)
    {
        index = (index + 1) % SIZE;

        if(index == pseu_int)
        {
            cout << "Can't add, Blame Dang!!\n";
            return;
        }
    }

    a[index] = val;
}


void linear_ThamDoBinhPhuong(int index, int val)
{
    int squared_num = 0;

    while(a[(index + squared_num * squared_num) % SIZE] != 0)
    {
        squared_num++;

        if(squared_num == SIZE)
        {
            cout << "Can't add, blame Dang!!\n";
            return;
        }
    }

    a[(index + squared_num * squared_num) % SIZE] = val;
}

void linear_BamKep(int index, int step, int val)
{
    int num = 0;

    while(a[(index + num * step) % SIZE] != 0)
    {
        ++num;

        if(num == SIZE)
        {
            cout << "Can't add, blame Dang!!\n";
            return;
        }
    }

    a[(index + num * step) % SIZE] = val;
}

