#include<stdio.h>

void main()
{
	int a=10,b=10;//a&b not constant variable
	const int* const  const_ptr_to_const=&a;//asigning the address of a
	printf("%d",*const_ptr_to_const);//printing the value of a using const_ptr_to_const
//	const_ptr_to_const=&b;//error: assignment of read-only variable ‘const_ptr_to_const
//	*const_ptr_to_const=40;// error: assignment of read-only location ‘*const_ptr_to_const

}
