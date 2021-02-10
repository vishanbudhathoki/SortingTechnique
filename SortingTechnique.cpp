#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size of an array:";
    cin>>n;
    
    int arr[n];
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*
    //code for Selection sort
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    
   //code for Bubble sort
   int counter=1;
   while(counter<n){
       for(int i=0;i<n-counter;i++){
           if(arr[i]>arr[i+1]){
               int temp=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=temp;
           }
       }
       counter++;
   }
   */

  //code for insertion sort
  for(int i=1;i<n;i++){
      int current=arr[i];
      int j=i-1;
      while(arr[j]>current && j>=0){
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=current;
  }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
