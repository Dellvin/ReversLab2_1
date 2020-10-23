//
// Created by dellv on 23.10.2020.
//

#ifndef UNTITLED_TREEHANDLER_H
#define UNTITLED_TREEHANDLER_H
#include <cstdint>
#include "../tree/tree.h"

class TreeHandler {
public:
    TreeHandler();

    ~TreeHandler();

    void add(int64_t var);

    void remove(int64_t var);

    std::string show();

    std::string showInorder();

    std::string showPreorder();

    std::string showPostorder();

protected:
    void showBST(Node *,std::string &, uint64_t &);

private:
    RBTree *tree;
};


#endif //UNTITLED_TREEHANDLER_H
