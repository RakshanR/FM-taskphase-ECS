#include<stdio.h>
void compress(char str[], int index) {
    if (str[index]=='\0')
        return;
    char current=str[index];
    int count=1;
    while(str[index+count]==current)
        count++;
    printf("%c%d", current, count);
    compress(str, index+count);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    compress(str, 0);
    return 0;
}
