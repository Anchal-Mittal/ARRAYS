// searching in sorted and rotated array

#include<iostream>
using namespace std;
int find(int array[10],int size){
	for(int i=0;i<=size;i++)
			  if(array[i]>array[i+1])
			  return i;
}

int search(int array[10],int size,int key){
			 int i=find(array,size);
			 int mid;
			 int first=0;int last=size;
			 mid=i;
			 while((first<last )&&(array[mid]!=key)){
				   if(array[mid]==key)
					   return mid;
					   else if(array[first]>key)
						   first=i+1;
						   else last=i;
						   mid=(first+last)/2;
				}
				cout << "ELEMENT IS NOT EXIST!!!"<< endl;
			 }


int main(){
	int size;
	int key;
	int array[10];
	cout << "ENTER THE SIZE OF THE ARRAY  "<< endl;
	cin  >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY WHICH IS SORTED BUT ROTATED "<< endl;
	for(int i=0;i<size;i++)
	 cin >>array[i];
	cout << "ENTER THE ELEMENT DO U WANT TO SEARCH "<< endl;
	cin >> key;
	cout <<"ELEMENT EXIST AT POSITION " << search(array,size,key);
return 0;
}
