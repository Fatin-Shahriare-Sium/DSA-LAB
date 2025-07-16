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
struct Node *addNodeTOFirst(struct Node *HEAD,int data){
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->link=HEAD;
    ptr->data=data;
    return ptr;
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
   Head= addNodeTOFirst(Head,40);
    traverseNode(Head);
    return 0;

}