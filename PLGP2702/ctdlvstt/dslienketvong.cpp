#include <bits/stdc++.h>

using namespace std;

struct Node
{
   int data;
   Node * left;
   Node * right;
}; 

typedef Node * tree;
tree t;

void khoitaocay(tree T)
{
    T = NULL;
}

Node * Taoptu(int value)
{
    Node * NewNode = new Node;
    NewNode -> data = value;
    NewNode -> left = NULL;
    NewNode -> right = NULL;
    return NewNode;
}

void NLR(tree T)
{
    if(T != NULL)
    {
        cout << T -> data;
        NLR(T -> left);
        NLR(T -> right);
    }
}

void LNR(tree T)
{
    if(T != NULL)
    {
        LNR(T -> left);
        cout << T -> data;
        LNR(T -> right);
    }
}

void LRN(tree T)
{
    if(T != NULL)
    {
        LRN(T -> left);
        LRN(T -> right);
        cout << T -> data << " ";
    }
}
int main()
{

}