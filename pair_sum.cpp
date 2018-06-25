#include<iostream>
#include<algorithm>
using namespace std;
void pair_sum(int array[10],int size,int sum){
	sort(array,array+size);
	int i=0;
	int j =size-1;
	while(i<j){
		if(array[i]+array[j]==sum){
			cout << array[i]<< " "<< array[j]<< endl;
			return ;
		}
		else if(array[i]+array[j]<sum)
			i++;
		else 
			j--;
	}
cout << "PAIR DOES NOT EXIST"<< endl;
return ;	
}
int main(){
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	int size;
	cin >> size;
	int array[10];
	cout << "ENTER THE ELEMENTS OF THE ARRAY  "<< endl;
	for (int i=0;i<size;i++){
	    cin>>array[i];
	}
	cout << "ENTER THE SUM ELEMENT "<< endl;
	int sum;
	cin >> sum;
	pair_sum(array,size,sum);
	return 0;
}
