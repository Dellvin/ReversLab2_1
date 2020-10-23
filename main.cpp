#include<iostream>
#include "tree_handler/TreeHandler.h"

int main(int argc, char **argv){
    uint16_t command;
    TreeHandler tree;
    do{
        std::cout<<"\nWhat do you want to do?\n";
        std::cout<<"1.Insert\n";
        std::cout<<"2.Delete\n";
        std::cout<<"3.Show\n";
        std::cout<<"4.Inorder\n";
        std::cout<<"5.Preorder\n";
        std::cout<<"6.Postorder\n";
        std::cout<<"7.Exit\n";
        std::cout<<"Enter your choice:";
        std::cin>>command;
        int64_t arg;
        switch (command) {
            case 1:
                std::cout<<"\nEnter The Data for Inserting:";
                std::cin>>arg;
                std::cout<<"\nInserting!\n\n";
                tree.add(arg);
                break;
            case 2:
                std::cout<<"\nEnter The Data for Deleting:";
                std::cin>>arg;
                tree.remove(arg);
                break;
            case 3:
                std::cout<<tree.show();
                break;
            case 4:
                std::cout<<tree.showInorder()<<std::endl;
                break;
            case 5:
                std::cout<<tree.showPreorder()<<std::endl;
                break;
            case 6:
                std::cout<<tree.showPostorder()<<std::endl;
                break;
            case 7:
                std::cout<<"\nExiting......";
                return 0;
            default:
                std::cout<<"Please Enter a valid number!!\n";
                break;
        }
    }while(true);
}

