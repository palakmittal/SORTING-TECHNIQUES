//
// merge sort in cpp in increasing order
#include <iostream>
#include<vector>
using namespace std;

//merge function
void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start; //to point left array
    int right=mid+1;// to point right array
    int index=0;  // to fill inside temp array
    // comparing left and right elements
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++;
            left++;
        }
        else{
            temp[index]=arr[right];
            index++;
            right++;
        }
    }
    // agar left array me elements reh gaye
    while(left<=mid){
        temp[index]=arr[left];
            index++;
            left++;
    }
    // agar right array me elements reh gaye
    while(right<=end){
        temp[index]=arr[right];
            index++;
            right++;
    }
    
//now copying the values inside temp to original array
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    }
}

//mergesort function
void mergesort(int arr[],int start, int end){
    if(start==end){
        return;
    }
    //dividing
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);//left side
    mergesort(arr,mid+1,end);  //right side
    //merging
    merge(arr,start,mid,end);
}

int main() {
   int arr[]={6,3,1,2,8,9,10,7,3,10};
   int size=10;
   mergesort(arr,0,size-1);
   //printing sorted array
   for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}


// time complexity is same in every case=> O(nlogn)
//space complexity=o(n)




