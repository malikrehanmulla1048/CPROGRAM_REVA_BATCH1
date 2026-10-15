#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    int hash[26] = {0};
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            hash[str[i] - 'a']++;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            hash[str[i] - 'A']++;
        }
    }
    printf("Input string: %s\n", str);
    printf("Character frequencies:\n");
    for(int i = 0; i < 26; i++) {
        if(hash[i] > 0) {
            printf("%c: %d\n", 'a' + i, hash[i]);
        }
    }

    return 0;
}