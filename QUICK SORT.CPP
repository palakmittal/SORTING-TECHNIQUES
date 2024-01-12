// quick sort in ascending order
//if you want for descending order then just reverse the//sign of < to > in the partition function
#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int pivot=partition(arr,start,end);
    quickSort(arr,start,pivot-1);// left half
    quickSort(arr,pivot+1,end);// right half
}

int main() {
    
    int arr[]={10,3,4,1,5,6,3,2,11,9};
    int index=0,size=10;
    
    //printing the unsorted array
    cout<<"printing the unsorted array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,index,size-1);
    
    //printing the sorted array
      cout<<"printing the sorted array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


//output
//printing the unsorted array
//10 3 4 1 5 6 3 2 11 9 
//printing the sorted array
//1 2 3 3 4 5 6 9 10 11 

//time complexity=> best= 0(nlogn)    average= 0(nlogn)   worst=o(n^2)
//space complexity=> O(n)

