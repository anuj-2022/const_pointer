#include<stdio.h>

void main()
{
	int a=20,b=40;//a &b is not constant
	const int *ptr_to_const=&a;//assigning the address of a
	printf("%d\n",*ptr_to_const);
//	*ptr_to_const=100//error bez trying to change the value at the address using ptr_to_const //error: assignment of read-only location ‘*ptr_to_const’
	ptr_to_const=&b;//assigning the address of b to pointer to const
	printf("%d\n",*ptr_to_const);
}
