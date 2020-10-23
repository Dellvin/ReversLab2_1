//
// Created by dellv on 23.10.2020.
//

#ifndef UNTITLED_TREE_H
#define UNTITLED_TREE_H
#include <iostream>
#include <vector>
enum Color {RED, BLACK, DOUBLE_BLACK};

struct Node
{
    int data;
    int color;
    Node *left, *right, *parent;

    explicit Node(int);
};

class RBTree
{
private:
    Node *root;
protected:
    void rotateLeft(Node *&);
    void rotateRight(Node *&);
    void fixInsertRBTree(Node *&);
    void fixDeleteRBTree(Node *&);
    void inorderBST(Node *&, std::vector<int> &);
    void preorderBST(Node *&, std::vector<int> &);
    void postorderBST(Node *&, std::vector<int> &);
    int getColor(Node *&);
    void setColor(Node *&, int);
    Node *minValueNode(Node *&);
    Node *maxValueNode(Node *&);
    Node* insertBST(Node *&, Node *&);
    Node* deleteBST(Node *&, int);
    int getBlackHeight(Node *);
public:
    RBTree();
    void insertValue(int);
    void deleteValue(int);
    std::vector<int> inorder();
    std::vector<int> preorder();
    std::vector<int> postorder();
    Node *treeGetter();
};
#endif //UNTITLED_TREE_H
