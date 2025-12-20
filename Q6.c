#include <stdio.h>
int main() {
    char str[250];
    int vowels= 0, consonants= 0;
    int i, j;
    char temp;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++) {
        char ch=str[i];
        if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    for(int k=0; k<3;k++) {
        for(i=0;str[i+1]!='\0';i++){
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
    }
    printf("Scrambled string: %s\n", str);
    return 0;
}
