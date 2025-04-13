// In an array delete the element of the given index
#include<iostream>
#include<vector>
using namespace std; 

void del_ele ( vector<int> &arr, int n, int ind){        // where n denotes no of elements in the arrray and ind denotes index of elements to be deleted

        for(int i=ind;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=0;
        return ;
}

int main(){
     
    int N;
    cout<<"Enter the no of elements :";
    cin>>N;

    vector<int>array(N);
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    
    cout<<"Before the delete operation the elements are:";
    for(int i=0;i<N;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int index ;
    cout<<"Enter the index which you want to delete :";
    cin>>index;
    if(index<=N-1){
    del_ele(array, N, index);
    cout<<"After the delete operation the elements of array are :";
    for(int i=0;i<N;i++){
        cout<<array[i]<<" ";
    }
    }
    else{
        cout<<"Invalid index";
    }
}