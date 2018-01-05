//=================================== move all negative at the end ======================================================

#include<iostream>
using namespace std;

//======================================  swap two numbers  ==========================================================

void swap(signed int &num1 , signed int &num2){
    signed int temp=num1;
    num1=num2;
    num2=temp;
}

//============================================move negative at the end ===========================
void MoveNegative(signed int Array[50],int size){
    int end =size;
    for(int i=0;i<=end;i++){
    if(Array[i]<0)
        swap(Array[i],Array[--end]);
    }
     
 cout << "THE OUTPUT ARRAY IS "<< endl;
 for(int i=0;i<size;i++)
    cout << Array[i] <<" ";
}

//======================================   main function  =============================================================
int main(){
    int size;
    signed int array[50];
    cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
    cin  >>size;
    cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
    for(int i=0;i<size;i++)
        cin >>array[i];
    MoveNegative(array,size);
return 0;    
}
