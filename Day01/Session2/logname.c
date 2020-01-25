#include <stdio.h>
int main()
{

char* username= getenv("LOGNAME");
printf("The  user's user-name is  %s\n",  username);

}
