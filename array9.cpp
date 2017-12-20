#include<iostream>
using namespace std;
void swap(int &num1 ,int &num2){
	int temp=num1;
	num1=num2;
	num2=temp;
}
void find(int array[10],int size,int k){
     int min,j;
     int tempArray[size];
   	 for(int i=0;i<size;i++){
	      	tempArray[i]=array[i];//copy the element in temporary array
	   }
	  for(int i=0;i<k;i++){    //applying the same approach as in selection sort
		    min=i;
		    for(j=i+1;j<size;j++){
             if(tempArray[j]<tempArray[min])
			          min=j;
    		}
		 swap(tempArray[i],tempArray[min]);
  	}
	for(int i=0;i<k;i++)
	  cout << tempArray[i]<< " ";
 }
 
int main(){
	int size, k;
	cout << "ENTER THE SIZE OF THE ARRAY"<< endl;
	cin>> size;
	int array[10];
	cout << "ENTER THE ELEMENTS OF THE ARRAY " <<endl;
	for(int i=0;i<size;i++){
		cin>> array[i];
	}
	cout << "ENTER THE ELEMENT UPTO WHICH DO U WANT TO FIND MINIMUM  "<< endl;
	cin >> k;
	find(array,size,k);
}
