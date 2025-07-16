#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *link;
};
void traverseNode(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
int main(){
    struct Node *Head;
    struct Node *Second;
    struct Node *Third;
    Head=(struct Node* )malloc(sizeof(struct Node));
    Second=(struct Node*)malloc(sizeof(struct Node));
    Third=(struct Node*)malloc(sizeof(struct Node));
    Head->data=10;
    Head->link=Second;
    Second->data=11;
    Second->link=Third;
    Third->data=12;
    Third->link=NULL;
    traverseNode(Head);
    return 0;

}