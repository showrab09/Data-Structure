#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // ber kore ana
        Node *f = q.front();
        q.pop();

        // jabotiyo kaaj
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        f->left = myleft;
        f->right = myright;

        // push the childrens
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
    return root;
}
void levelOrder(Node *root)
{
    if (root == NULL)
    {

        cout << "Tree Khali";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // ber kore anaa
        Node *f = q.front();
        q.pop();

        // jabotiyo kaaj
        cout << f->val << " ";

        // children gulo ke rakha queue te
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}
int main()
{
    Node *root = inputTree();
    levelOrder(root);
    return 0;
}