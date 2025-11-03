#include<iostream>

using namespace std;

int main(){
    int a[9] = {1,2,3,4,5,6,7,8,9};

    int n;
    cin>>n;
// new branch created

//branch demo

    int low = 0;
    int high = 8;

    bool found = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==n){
            cout<<"Elements found"<<endl;
            found = true;
            break;
        }
        else if(a[mid]<n){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(!found){
        cout<<"Elements not found"<<endl;
    }
}
