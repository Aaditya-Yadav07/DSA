// find the maximum and minimum element of the the array
#include <iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no of elements :";
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxno=arr[0];
    int minno=arr[0];

    for(int i=0;i<n;i++){

        maxno = max(maxno , arr[i]);
        minno = min(minno , arr[i]);
    }
    
    cout <<("maximum element:", maxno)<<endl;;
    cout <<("minimum element:",minno)<<endl;

    return 0;
}