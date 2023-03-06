#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int val;
    struct node *prev;
} node;

class MinStack
{
    node *top = new node;

    MinStack()
    {
        top->prev = nullptr;
    }

    void push(int val)
    {
        node *temp = new node;
        temp->val = val;
        temp->prev = top;
    }
};

int main()
{
}