#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//========================================finding alternate sorting========================================================================
void alternate(int array[10], int size){
        int k=size-1;
        int j=0;
        int tempArray[size];
for(int i=0;i<size;i++){
    if(array[i]==0){
      tempArray[j]=array[i];
       j++;
    }
   else{ 
    tempArray[k]=array[i];
    --k;
    }
  }

for(int i=0;i< size ;i++)
     cout << tempArray[i] << " ";

}

//================================================================main function ===========================================================
int main(){
int size , array[10];
cout <<"ËNTER THE SIZE OF THE ARRAY "<<endl;
cin >> size;
cout << "ENTER THE ELEMENT OF THE ARRAY "<< endl;
for(int i=0;i< size ;i++)
cin >> array[i];
alternate(array,size);
}
