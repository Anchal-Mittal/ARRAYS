#include<iostream>
using namespace std;
int outputArray[20];
void merge(int array1[10],int array2[10],int size1,int size2){
	int i=0;
	int k=0;
	int j=0;
	while((i<size1)&&(j<size2)){
		if(array1[i]>array2[j])
		 outputArray[k]=array2[j++];
		else
		 outputArray[k]=array1[i++];
		k++;
	}
	while(i<size1)
		outputArray[k++]=array1[i++];
	while(j<size2)
		outputArray[k++]=array2[j++];
	cout <<"THE MERGED ARRAY IS ";
	for(int in=0;in<(size1+size2);in++)
	  cout << outputArray[in]<< " ";

}
int main(){
	int size1,size2,array1[10],array2[10];
	cout << "ENTER THE SIZE OF THE FIRST ARRAY " << endl;
	cin>>size1;
	cout << "ENTER THE ELEMENT OF THE ARRAY"<<endl;
	for(int i=0;i<size1;i++)
	 cin>> array1[i];
	cout <<"ENTER THE SIZE OF THE SECOND ARRAY "<< endl;
	cin >>size2;
	cout <<"ENTER THE ELEMENT OF THE ARRAY "<< endl;
	for(int j=0;j<size2;j++)
	cin >>array2[j];
	merge(array1,array2,size1,size2);
return 0;
}
