#include<iostream>
using namespace std;
class BinaryTree{
    public:
    class Node{
        public:
        int value;
        Node *left;
        Node *right;
        Node(int value){
            this->value = value;
            left = nullptr;
            right = nullptr;
        }
    };
    Node *root = nullptr;
    Node *insert(Node *node, int value , string dirs ,int idx){
        if(node == nullptr){
            Node *base  = new Node(value);
            return base;
        }
        if(dirs.length()==idx){
            node->value = value;
            return node;
        }
        if(dirs[idx]=='R'){
            node->right = insert(node->right,value,dirs,idx+1);
        }
        else {
            node->left  = insert(node->left,value,dirs,idx+1);
        }
        return node;
    }
    void insert(int value, string dirs){
        this->root = insert(root,value,dirs,0);
    }
    void display(Node *node){
        if(node==nullptr)return;
        if(node->left == nullptr) cout<<" -> ";
        else        cout<<node->left->value<<" -> ";
        
        cout<<node->value;
        
        if(node->right == nullptr) cout<<" <- ";
        else cout<<node->right->value<<" <- ";
        cout<<"\n";
        display(node->left);
        display(node->right);

    }
    void display(){
        display(root);
    }
};
int main(){
    BinaryTree bt;
    bt.insert(10,"");
    bt.insert(14,"L");
    bt.insert(18,"R");
    bt.insert(19,"LR");
    bt.insert(21,"LRL");
    bt.display();
    return 0;
}