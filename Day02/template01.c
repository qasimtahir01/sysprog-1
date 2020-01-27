#include <stdio.h>  
// One function works for all data types. This would work 
// even for user defined types if operator '>' is overloaded 
template <typename T> 
T myMax(T x, T y) 
{ 
return (x > y)? x: y; 
} 

int main() 
{ 
printf("%d\n", myMax<int>(3, 7)); // Call myMax for int 
printf("%f\n", myMax<double>(3.0, 7.0)); // call myMax for double 
printf("%c\n", myMax<char>('g', 'e')); // call myMax for char 

return 0; 
}

