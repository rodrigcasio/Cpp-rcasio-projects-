
#include <stdio.h>
#include <string.h>

int main() {
    // Pointer and arrays.
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";
   
   //1. checkpoint
   int *ptr = &arr[9];
   //2.
   int len = sizeof(arr)/sizeof(arr[0]); // len = 10;
   for(int i = 0; i < len; i++){
       printf("%i\n", *ptr);
       ptr--;
   }
   //3. 
   char *ptr2 = &s[0];
   //4. 
   int len2 = strlen(s);
   for(int i = 0; i < len2; i++){
       *ptr2 = '#';
       printf("%c", *ptr2);
       ptr2++;
   }

    return 0;
}