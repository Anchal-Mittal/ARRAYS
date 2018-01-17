#include<iostream>
using namespace std;

//===================================================finding subsequence=================================================================

void subsequence(int array[10], int size){
    signed int sum=0;
    int start=0;
    int last=size-1;
   for(int i=0;i<size;i++){
    if(array[i]==0)
       sum+=-1;
       else
       sum+=1;
    }
    while(sum!=0){
        if(sum<0){
            if(array[last]==0)
               last--;
            else if(array[start]==0)   
               start++;
             sum++;  
             }
        if(sum>0){
            if(array[last]==1)
               last--;
            else if(array[start]==1)   
               start++;
            sum--;   
         }
}
cout << "THE REQUIRED SUB ARRAY IS " << endl;
for(int i=start;i<=last;i++)
    cout << array[i]<< " ";
}

//==========================================================main function ==============================================================

int main(){
int size;
int array[10];
cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
cin >> size;
cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
for(int i=0;i<size;i++)
  cin >> array[i];
subsequence(array,size);
  
}
