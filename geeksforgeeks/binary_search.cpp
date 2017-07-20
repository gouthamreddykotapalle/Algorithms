#include<iostream>
//sorted input is the clue
//sorted -> look for binary search
 using namespace std;

  // Prototypes of Functions
  bool binarySearch(int array[], int size,int key);//blank array with size formal parameters

  int main(){
      cout<<"Enter 5 numbers sorted : "<<endl;

      // Size can be change by replacing 5
      int array[5]; //Declaring array
     for(int i=0; i<5; i++)
      {
       cout<<"\t";  cin>>array[i]; // Initializing array
      }

    // array is always pass by reference cuz thee address of the first location is only passed
    // Array has Sorted At This Point
    cout<<"\n\t\t\tEnter Key To Search: ";
    int key;
    cin>>key;

//Passing Array, size and key To Search Key
int result=binarySearch(array,5,key);

if(result==1)
cout<<"\n\t\t\tKey Found in Array "<<endl;
else
cout<<"\n\t\t\tKey NOT Found in Array "<<endl;


return 0;
}

bool binarySearch(int array[],int size, int key){
         int start=1, end=size;
         int mid=(start+end)/2;

  while(start<=end&&array[mid]!=key){
        if(array[mid]<key){
          start=mid+1;
      }
     else{
          end=mid-1;
          }
       mid=(start+end)/2;
     }// While Loop End

   if(array[mid]==key)
    return true; //Returnig to main
    else
   return false;//Returnig to main

   cout<<"\n\n\n";
}// binarySearch Function Ends Here
