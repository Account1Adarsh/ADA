#include<iostream>
using namespace std;

void merge(int arr[],int const left,int const mid, int const right){
    
    int n1=mid-left+1,n2=right-mid;
    int temp1[n1],temp2[n2];
    
    for(int i=0;i<n1;i++){
        temp1[i]=arr[left+i];
    }
    for(int i=0;i<n2;i++){
        temp2[i]=arr[mid+i+1];
    }
    int j=0,k=0;
    
    for(int i=left;i<=right;i++){
        if(k>=n2){
            while(i<=right){
                arr[i]=temp1[j];
                j++;
            }
        }
        else if(j>=n1){
            while(i<=right){
                arr[i]=temp2[k];
                k++;
            }
            
        }
        else if(temp1[j]<temp2[k]){
            arr[i]=temp1[j];
            j++;
        }
        else {
            arr[i]=temp2[k];
            k++;
        }
    }
    
    // for(int i=left;i<=right;i++){
    //     if(j==mid-1){
    //         while(i<=right){
    //             arr[i]=temp2[p];
    //             p++;
                
    //         }
    //     }
    //     else if(p==right){
    //         while(i<=right){
    //             arr[i]=temp1[j];
    //             j++;
    //         }
    //     }
    //     else if(temp1[j]<temp2[p]){
    //         arr[i]=temp1[j];
    //         j++;
    //     }
    //     else{
    //         arr[i]=temp2[p];
    //         p++;
    //     }
    // }
    // if(p==right){
        
    // }
    
    
}

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array is: ";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    mergeSort(arr,0,n-1);
    
    cout<<"Sorted array is: ";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
