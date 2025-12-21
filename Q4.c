int main(){
    char pwd[30];
    char correct_pwd[]="rakshan";
    int attempts=3;
    while(attempts>0){
        printf("Enter password: ");
        if(scanf("%29s",pwd)!=1){
            printf("Invalid input\n");
            return 1;
        }
        if(strchr(pwd,' ')!=NULL){
            printf("Spaces are not allowed in password\n");
            continue;
        }
        if(strlen(pwd)==0){
            printf("Password cannot be empty\n");
            continue;
        }
        if(strcmp(pwd,correct_pwd)==0){
            printf("Login successful\n");
            return 0;
        }else{
            attempts--;
            printf("Incorrect password\n");
        }
    }
    printf("Too many failed attempts\n");
    return 0;
}

