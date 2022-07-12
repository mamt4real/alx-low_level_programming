#include "main.h"
#include<stdio.h>

int main(void)
{
	char str[98], *cpy;
	int arr[5] = {98,402,-198,298,-1024};
	
	//str = "0123456789";
	//puts_half(str);
	cpy = _strcopy(str, "This is an examole");
	printf("%s\n", str);
	printf("%s\n", cpy);
	print_rev(cpy);
	
	//str = "012345678";
	//puts_half(str);
	//print_array(arr, 5);
	return (0);
}
