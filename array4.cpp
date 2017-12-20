#include<iostream>
using namespace std;

void swap(int &num1,int &num2){
	int temp=num1;
	num1=num2;
	num2=temp;
}

void reverseArray(int array[10],int size){
		   for(int i=0;i<=size/2;i++){
		   	swap(array[i],array[size-i]);
		   }
		   cout << "THE REVERSE ARRAY IS "<< endl;
		   for (int i=0;i<=size;i++)
		   	 cout <<array[i] << " ";
}

int main(){
	int size;
	int array[10];
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
	for (int i=0;i<size;i++){
		cin >> array[i];
	}
	reverseArray(array,size-1);
return 0;
}
