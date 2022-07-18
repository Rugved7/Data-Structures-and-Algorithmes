// This is the sample code of selection sort and this type of code is used to solve 
//   problems of sites. In this code no output will be formed as no input id given but, 
// this same code will work on any sites as there input is already given.
 
 #include<iostream>
 using namespace std;
 
 void selectionSort(int arr[] ,int n){   // givig what we are using 
     for (int  i = 0; i < n; i++)   // loop to get min index and we are assuming i=0 as minIndex

     {
       int minIndex = i;

       for (int j = i + 1; j < n; j++) // another loop for finding a number greater than minIndex.
       {
           if (arr[j] < arr[minIndex])
           minIndex = j;
       }
        swap(arr[minIndex], arr[i]); // If number greater than minIndex is found swap it.
     }
     
 }
 int main(){
    
     return 0;
 }

// This is simple approach to solve any question given on selection sort.  
