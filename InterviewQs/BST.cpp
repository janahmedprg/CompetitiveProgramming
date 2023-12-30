#include <bits/stdc++.h>

using namespace std;
struct Node {
    Node* left;
    Node* right;
    int val;

    Node(int value) : left(nullptr), right(nullptr), val(value) {}
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->val) {
        root->left = insert(root->left, value);
    } else if (value > root->val) {
        root->right = insert(root->right, value);
    }

    return root;
}

void insertBad(Node*& root, int value) {
    if (root == nullptr) {
        root = new Node(value);
    } else {
        int random = rand() % 2;

        if (random == 0) {
            insertBad(root->left, value);
        } else {
            insertBad(root->right, value);
        }
    }
}

void insertToLeftmost(Node*& root, int value) {
    if (root == nullptr) {
        root = new Node(value);
    } else {
        insertToLeftmost(root->left, value);
    }
}

// Create a function that check if a binary tree is
// a binary search tree.
// Return true if it is a BST
// Return false if it is NOT a BST
bool isBST(Node* root){
    // TO-DO: Implement your function HERE
    return true;
}

int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int treeNumber = 1; treeNumber <= 5; ++treeNumber) {
        Node* root = nullptr;
        vector<int> values = { 5, 15, 3, 7, 12, 18, 2, 4, 6, 8, 11, 13, 17, 19, 1, 9, 14, 16, 20};
        random_shuffle(values.begin(), values.end());
        root = insert(root,10);
        for (int i = 0; i < values.size(); ++i) {
            insert(root, values[i]);
        }

        if(isBST(root) == true){
            cout<<"Test "<<treeNumber<<": Passed"<<"\n";
        }
        else{
            cout<<"Test "<<treeNumber<<": Failed"<<"\n";
        }
        cout<<"\n";
    }

    for (int treeNumber = 1; treeNumber <= 5; ++treeNumber) {
        Node* root = nullptr;
        vector<int> values = {10, 5, 15, 3, 7, 12, 18, 2, 4, 6, 8, 11, 13, 17, 19, 1, 9, 14, 16, 20};
        random_shuffle(values.begin(), values.end());
        for (int i = 0; i < values.size(); ++i) {
            insertBad(root, values[i]);
        }
        insertToLeftmost(root,21);

        if(isBST(root) == false){
            cout<<"Test "<<treeNumber+5<<": Passed"<<"\n";
        }
        else{
            cout<<"Test "<<treeNumber+5<<": Failed"<<"\n";
        }
        cout<<"\n";
    }

    return 0;
}