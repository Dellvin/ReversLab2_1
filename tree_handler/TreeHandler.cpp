//
// Created by dellv on 23.10.2020.
//

#include "TreeHandler.h"

TreeHandler::TreeHandler() {
    tree=new RBTree;
}

TreeHandler::~TreeHandler() {
    delete tree;
}


void TreeHandler::add(int64_t var) {
    tree->insertValue(var);
}

void TreeHandler::remove(int64_t var) {
    tree->deleteValue(var);
}

std::string TreeHandler::showInorder() {
    auto v1=tree->inorder();
    std::string res;
    for (const auto &e:v1){
        res+=std::to_string(e);
        res+=" -> ";
    }
    return res;
}

std::string TreeHandler::showPreorder() {
    auto v1=tree->preorder();
    std::string res;
    for (const auto &e:v1){
        res+=std::to_string(e);
        res+=" -> ";
    }
    return res;
}

std::string TreeHandler::showPostorder() {
    auto v1=tree->postorder();
    std::string res;
    for (const auto &e:v1){
        res+=std::to_string(e);
        res+=" -> ";
    }
    return res;
}

void TreeHandler::showBST(Node *root,std::string &treeView, uint64_t &rang) {
    if(root== nullptr){
        rang--;

        return;
    }

    rang++;
    showBST(root->right, treeView, rang);
    for(uint64_t i =0;i<rang;++i){
        treeView+="     ";
    }
    treeView+=std::to_string(root->data);
    if(!root->right&&!root->left){treeView+=")";}
    treeView+="\n";
    rang++;
    //treeView+="     ";
    showBST(root->left, treeView, rang);
    rang--;
}

std::string TreeHandler::show() {
    std::string res;
    auto root=tree->treeGetter();
    uint64_t rang=0;
    showBST(root, res, rang);
    return res;
}
