#include <stdio.h>

void main(){
     //single character uses ''. DONT USE ""!!
     //do not forget 0 at the end of the string
    char a[] = {'A', 'B', 'C', 0};
    char b[] = "ABC";
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", "ABC"); 
}