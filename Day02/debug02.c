
#include <stdio.h>

int main(int argc, char* argv[])
{    
	FILE* fp = fopen(“argv[1]”, “r”);
	char* word;
	while (fscanf(fp,”%s”,word)>0)
	{  }
	return 0; 
} 

//The purpose of the program is to read a set of strings from a file. 
//But the program seg faults. Use gdb to find the error.  
