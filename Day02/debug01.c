#include <stdio.>
int main(int argc, char* argv[])
{    
	int x;    
	printf("Please enter an integer : ");    
	scanf("%d",x);    
	printf("the integer entered was %d \n", x);    
	return EXIT_SUCCESS; 
}

// The purpose of the program is to read an integer and print it out. 
// But the program seg faults. Use gdb to find the error. 
