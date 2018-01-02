//=========================SORT THE ARRAY IN WAVING FORM================================================================

#include<iostream>
using namespace std;

//========================================SORT THE ARRAY================================================================

void sort(int array[10],int size){
   int key,j;
	 for(int i=0;i<size;i++){
	  	key=array[i];
		  j=i-1;
		  while((j>=0)&&(array[j]>key)){
			    array[j+1]=array[j];
			    j--;
		  }
		 array[j+1]=key;
	}
}

//===========================================SWAPING TWO NUMBERS=========================================================

void swap(int &num1, int &num2){
	int a=num1;
	num1=num2;
	num2=a;
}

//======================================SORT THE ARRAY IN WAVE FORM====================================================

void sortWave(int Array[10],int size){
  	 sort(Array,size);
	  for(int i=0;i<size;i++)
	    	cout << Array[i] << " ";

	  for(int i=0;i<size-1;i=i+2)
	      swap(Array[i],Array[i+1]);
	 
	  cout << "AFTER SORTING IN WAVE FORM "<< endl;
	 
    for(int i=0;i<size;i++)
		    cout << Array[i]<< " ";
return;
}

//==================================MAIN FUNCTION=========================================================================

int main(){
	int array[10];
	int size;
	cout << "ENETR THE SIZE OF THE ARRAY "<< endl;
	cin  >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAAY "<< endl;
	for(int i=0;i<size;i++)
		cin >> array[i];
	sortWave(array,size);
return 0;
}
