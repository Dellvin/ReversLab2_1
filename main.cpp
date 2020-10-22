#include<iostream>
#include <cstring>


int main(int argc, char **argv){
    uint8_t command;
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
                //TODO: Insert func
                break;
            case 2:
                std::cout<<"\nEnter The Data for Deleting:";
                std::cin>>arg;
                //TODO: Delete func
                break;
            case 3:
                //TODO: show func
                break;
            case 4:
                //TODO: Inorder func
                break;
            case 5:
                //TODO: Preorder func
                break;
            case 6:
                //TODO: Postorder func
                break;
            case 7:
                std::cout<<"\nExiting......";
                return 1;
            default:
                std::cout<<"Please Enter a valid number!!\n";
                break;
        }
    }while(true);
    return 0;
}

