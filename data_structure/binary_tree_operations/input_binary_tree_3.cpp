#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *left;
    Node *right;
    
    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int value;
    cin >> value;
    
    Node *root = NULL;
    if (value != -1)
        root = new Node(value);
    
    queue<Node*> q;
    if (root)
        q.push(root);
    
    while (!q.empty()) {
        Node *p = q.front();
        q.pop();
        
        int l, r;
        cin >> l >> r;
        
        Node *myLeft = NULL;
        Node *myRight = NULL;
        
        if (l != -1)
            myLeft = new Node(l);
        if (r != -1)
            myRight = new Node(r);
        
        p->left = myLeft;
        p->right = myRight;
        
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    
    return root;
}

void level_order(Node *root) {
    if (root == NULL) {
        cout << "Tree is empty";
        return;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node *f = q.front();
        q.pop();
        
        cout << f->value << " ";
        
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main() {
    Node *root = input_tree();
    level_order(root);
    
    return 0;
}
