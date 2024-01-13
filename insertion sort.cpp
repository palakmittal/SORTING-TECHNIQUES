//insertion sort in ascending order in cpp

#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void printarray(int arr[],int size){
  for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
  }
}
void insertionsort(int arr[],int size){
  for(int i=1;i<size;i++){
    for(int j=i;j>0;j--){
       if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
      }else{
         break;
       }
  }
}
}
int main(){
  int arr[]={3,8,7,5,9,56,97,12};
  int size=8;
  insertionsort(arr,size);
  printarray(arr,size);
  return 0;
}


// time complexity=> best-o(n)  avg=o(n*n)       worst=o(n*n)
//space complexity=>o(1)


