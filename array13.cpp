// finding maximum producted
#include<iostream>
using namespace std;
int maximumProduct(int array[10],int size){
	int res;
	int set=0;
	for (int i=0;i<size;i++){
		  res=array[i];
		for(int j=i+1;j<size;j++){
			if(array[i]<array[j]){
			    res*=array[j];
          i=j;
         }
		 }
		set=max(set,res);
	 }
return set;
}

int main(){
int size;
int array[10];
cout << "ENTER THE SIZE OF THE ARRAY  "<< endl;
cin  >> size;
cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
for(int i=0;i<size;i++)
	 cin >>array[i];
cout <<"MAXIMUM PRODUCT " << maximumProduct(array,size);
return 0;
}
