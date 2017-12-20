#include<iostream>
#include<cstdio>
int array[10];
int size;
void sum(){
	int sum=0;
	for(int i=0;i<size;i++)
		 sum +=array[i];
}

int main(){
  printf("ENTER THE SIZE OF THE ARRAY\n");
	scanf("%d",size);
	printf("ENTER THE ELEMENTS OF THE ARRAY\n");
	for(int i=0;i<size;i++)
	scanf("%d",	&array[i]);
	sum();
return 0;

}
