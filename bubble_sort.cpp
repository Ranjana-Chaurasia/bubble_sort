#include<iostream>
using namespace std;
int arr[]={23,56,87,96,45,13,57,37,92,49}; //Global array

//Function to swap two elements
void swap(int i,int j){
    int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    int pass,pass_no=0;
    for(pass=1;pass<n;pass++){
        int count=0;
        for(int i=0;i<n-pass;i++){
            if(arr[i]>arr[i+1]){
                swap(i,i+1);
                count++;
            }
        }
        if(count==0){
            break;
        }    
        pass_no++;
    }
    cout << "The sorted array is: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\nNo. of passes used: " << pass_no << endl;
    return 0;
}