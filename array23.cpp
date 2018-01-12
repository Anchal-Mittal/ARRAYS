#include<iostream>
using namespace std;

//==========================================================swap two numbers =============================================================

void swap(int &num1 , int &num2){
    int temp = num1;
    num1 =num2;
    num2=temp;
}

//============================================================even odd segegrate==========================================================

void evenOddSegegrate(int array[10], int size){
   int k=size-1;
   int i=0;
  while(i<=k){
    if(array[i]%2!=0)
       swap(array[i],array[k--]);
    else
    ++i;
  }
    cout << "THEE RESULT IS "<< endl;
    for(int i=0;i<size;i++)
     cout << array[i]<<" ";
    
}

//==============================================================main ====================================================================

int  main(){
    int size, array[10];
    cout << "ENTER THE SIZE OF THE ARRAY "<<endl;
    cin >> size;
    cout << "ENTER THE ELEMENTS OF THE ARRAY" <<endl;
    for(int i=0;i<size;i++)
      cin >> array[i];
      evenOddSegegrate(array,size);
    return 0;
}
