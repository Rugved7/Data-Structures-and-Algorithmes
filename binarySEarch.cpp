#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2; // this is done to not exceed the size of int .
    while (start <=end){
         if(arr[mid] == key){
             return mid;
         }
        //  go to right part of array
        if (key > arr[mid]) {
            start = mid+1;
        }
        else{
            end -mid-1;
        }
      mid = start + (end-start)/2;  
    }
    
  return -1;  
}
int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[6] = {1,3,5,7,9,11};
   
    int evenIndex =binarySearch(even,6,4);

    cout << "Index of 4 is " <<evenIndex << endl;

    int oddIndex =binarySearch(odd,6,5);

    cout << "Index of 5 is " <<oddIndex << endl;

    return 0;
}