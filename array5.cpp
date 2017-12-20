#include<iostream>
using namespace std;

void leaderArray(int array[10],int size){
				   int flag;
				  for(int i=0;i<size;i++){
					  for(int j=i+1;j<size;j++){
						   if(array[i]>array[j])
								flag=1;
							 else flag =0;
						   }
						 if(flag==1)
						 cout << array[i]<< endl;

				  }
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
leaderArray(array,size-1);
return 0;
}
