//======================================three way partition of a array around a given range============================= 
#include<iostream>
using namespace std;

//=================================================swap two numbers=====================================================
void swap(int &num1 , int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}

//===========================================partation the array==========================================================

void partationArray(int Array[50],int size,int lower,int upper){
    int j=0;
    int k=size-1;
    for(int i=0;i<=k;){
    if(Array[i]<lower)
        swap(Array[i++],Array[j++]);
        
    else if(Array[i]>upper)
        swap(Array[i],Array[k--]);
     
    else
        i++;    
    }
     
 cout << "THE OUTPUT ARRAY IS "<< endl;
 for(int i=0;i<size;i++)
    cout << Array[i] <<" ";
}

//=====================================================main function===================================================

int main(){
    int size;
    int array[50];
    int lower,upper;
    
    cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
    cin  >>size;
    
    cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
    for(int i=0;i<size;i++)
        cin >>array[i];

    cout << "ENTER THE LOWER BOUND "<< endl;
    cin >> lower;
    
    cout << "ENTER THE UPPER BOUND "<< endl;
    cin >> upper;
    
    partationArray(array,size,lower,upper);
return 0;    
}
