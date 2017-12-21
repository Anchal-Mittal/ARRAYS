// moving negative element at the end of the array
#include<iostream>
#include<cstdio>
using namespace std;
void moveElements(int array[10],int size){
	int tempArray[size],j=0;
	for(int i=0;i<size;i++)
		    tempArray[i]=array[i];
	for(int i=0;i<size;i++)
		    tempArray[i]=array[i];
	for(int i=0;i<size;i++)
		    if(array[i]>=0)
  		     tempArray[j++]=array[i];
	for(int i=0;i<size;i++)
	      if(array[i]<0)
	         tempArray[j++]=array[i];
	for(int i=0;i<size;i++)
		    array[i]=tempArray[i];
}

int main(){
	int size,array[10];
	cout << "ENTER THE SIZE OF THE ELEMENT "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF ARRAY "<< endl;
	for (int i=0;i<size;i++)
	  cin >> array[i];
	moveElements(array,size);
  for(int i=0;i<size;i++)
    cout << array[i] << " ";
  return 0;
}
