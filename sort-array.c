#include<stdio.h>
void sortArray(int arr[],int length){
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }

    }
}
void showArray(int arr[],int length){
    for(int K=0;K<length;K++){
        printf("%d ",arr[K]);
    }
}
int main(){
    int givenArray[]={5,4,3,1,2};
    int size=sizeof(givenArray)/sizeof(givenArray[0]);
    sortArray(givenArray,size);
    showArray(givenArray,size);


}
