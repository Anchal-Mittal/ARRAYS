#include<iostream>
using namespace std;

void swap(int *num1,int *num2){
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}

void reverseArray(int array[10],int size){
	int *pointer1=&array[0];
	int *pointer2=&array[size-1];
	while(pointer1<pointer2){
		swap(pointer1,pointer2);
          pointer1++;
		  --pointer2;
	}
	for (int i=0;i<size;i++)
		cout << array[i]<< " ";

	
}
int main(){
	int size,array[10];
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	cin>> size;
	cout << "ENTER THE ELEMENT OF THE ARRAY "<< endl;
	for(int i=0;i<size;i++)
		cin>> array[i];
	reverseArray(array,size);
	cout << "THE REVERSE ARRAY IS "<< endl;
	for (int i=0;i<size;i++)
		cout << array[i]<< " ";

}
