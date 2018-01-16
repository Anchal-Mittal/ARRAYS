#include<iostream>
#include<climits>
using namespace std;

void maxSumSub(signed int array[10],int size){
    signed int temp=0;
    signed int prev=INT_MIN;
     for(int i=0;i<size;i++){
        temp=temp+array[i];
           if(prev< temp)
               prev =temp;
            if(temp<0)
                temp=0;
            
       }
    cout << prev;
}
int main(){
 int size;
 signed int array[10];
 cout << "ENTER THE SIZE OF THE ARRAY"<< endl;
 cin >> size;
 cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
 for(int i=0;i<size;i++)
    cin >> array[i];
 maxSumSub(array,size);    
}
