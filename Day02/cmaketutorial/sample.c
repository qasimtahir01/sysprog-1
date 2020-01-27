#include <stdio.h>
#include <stdlib.h>     /* atof */
#include <TutorialConfig.h>
#include <mysqrt.h>

int main(int argc, char* argv[])
{
   printf("Subhan Allah\n");

  if (argc < 2) {
    // report version
    printf("%s%s%d%s%d\n", argv[0]," Version ", Tutorial_VERSION_MAJOR, ".",
              Tutorial_VERSION_MINOR);
    printf("%s%s%s\n","Usage: " , argv[0], " number");
    return 1;
  }
  double inputValue = atof(argv[1]); 
  printf("Squre root of given number:%f\n", mysqrt(inputValue));

   return 0;
}
