#include "main.h"
#include<stdio.h>

int main(void)
{
	char str[98] = "Hello", str2[] = " World", *cpy;
	int arr[] = {98,402,-198,298,-1024};
	
	//str = "0123456789";
	//puts_half(str);
	//cpy = _strncat(str, str2, 3);
	//printf("%s\n", cpy);
	//cpy = _strncat(str, " an attachment", 5);
	//cpy = string_toupper(str);
	//printf("%s\n", cpy);
	//print_rev(cpy);
	
	//str = "012345678";
	//puts_half(str);
	//print_array(arr, 4);
	//reverse_array(arr,5);
	//print_array(arr, 5);
	char smpl[] = "Expect the wirst, do the?best.kallo!muhimmin\nlallai\tkuma,ni)lop";
	cpy = cap_string(smpl);
	printf("%s\n", cpy);
	return (0);
}
