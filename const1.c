#include<stdio.h>

void main()
{
	int a=10,b=20;//a & b are not constant
	int* const const_ptr=&a;//const_ptr now points to a/contans the address of a
//	int* const const_ptr1=&b;
	*const_ptr=30;//const pointer can change the value at the address
	const_ptr=&b;//this will give an error bcz constant pointer can not point to an another memory location 
	//error: assignment of read-only variable ‘const_ptr'
}

	
