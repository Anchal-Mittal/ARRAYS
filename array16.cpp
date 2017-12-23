#include<iostream>
#include<string>
using namespace std;

void countWords(string str,int size){
	int count=1;
	for(int i=1;i<size;i++){
		if(isupper(str[i]))
		   count++;
	}
cout << "TOTAL NO. OF WORDS "<< count << endl;
}

int main(){
	int size;
	string str;
	cout << "ENTER THE STRING IN CAMEL CASE FORM"<< endl;
	getline(cin,str);
	size=str.length();
	countWords(str,size);
return 0;
}
