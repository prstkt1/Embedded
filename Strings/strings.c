#include <stdio.h>

#define MAX_LEN 256

int main() {
    char str[MAX_LEN];
    int length = 0;

    printf("Enter a string: ");
    
 
    if (fgets(str, MAX_LEN, stdin) != NULL) {
        
 
        while (str[length] != '\0') {
 
            if (str[length] == '\n') {
                str[length] = '\0';
                break;
            }
            length++;
        }

 
        int left = 0;
        int right = length - 1;
        char temp;

        while (left < right) {
 
            temp = str[left];
            str[left] = str[right];
            str[right] = temp;

            left++;
            right--;
        }

 
        printf("Reversed string: %s\n", str);
    }

    return 0;
}