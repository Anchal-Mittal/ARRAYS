//==================================find the elemnet which r repeated twice when other r repeated thrice=================
#include<iostream>
using namespace std;

void findDuplicate(int Array[10],int size){

	   int countArray[size];
	   
	   for(int i=0;i<size;i++)
	       countArray[i]=0;


	   for(int i=0;i<size;i++)
	       ++countArray[Array[i]];


 	   for(int i=0;i<size;i++){
	       if(countArray[i]==2)
			  cout<< i << " ";
		}
return;
}

//================================================main fun()===========================================================

int main(){
	int array[10];
	int size;
	cout << "ENETR THE SIZE OF THE ARRAY "<< endl;
	cin  >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAAY "<< endl;
	for(int i=0;i<size;i++)
		cin >> array[i];
	findDuplicate(array,size);
return 0;
}

