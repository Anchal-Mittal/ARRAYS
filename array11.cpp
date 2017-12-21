#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int subset(int array[10],int size){
	int res=0;
	sort(array,&array[size-1]);
	for(int i=0;i<size;i++){
		int count =1;
		 for(int j=0;j<size-1;j++) {
	        if(array[j]==array[j+1])
					count++;
			else break; }
        res=max(res,count);
	}
	return res;
}

int main(){
	int array[10];
	int size;
	cout << "ENTER THE SIZE OF THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
	for(int i=0;i< size;i++)
	    cin >> array[i];
   int res= subset(array,size);
   cout << "MINIMUM NO OF SUBSETS WILL BE TO MAKE NO REDUNDANCY OF ELEMENTS "<<res<< endl;
return 0;
}
