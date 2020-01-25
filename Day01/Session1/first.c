#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*copy from stdin to stdout */
int main ( )
{
//int c;

char* username = getenv("LOGNAME");
printf("The user's user-name is %s\n", username);

char* pPath;
pPath = getenv ("PATH");

if (pPath!=NULL)
    printf ("The current path is: %s",pPath);
  return 0;

//while(( c = getchar ()) != EOF )
//putchar ( c ) ;
return 0;
}
