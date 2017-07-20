#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)

{
    char password[20];
    int flag1, flag2, flag3;
    int i;
    char specChar = '"!#¤%&/()=?`@£$€{[]}\"';
    printf("Please enter your password \n");

    scanf(" %s",&password);

    for (i = 0; i <=20; i++) {
        if (isupper(password[i])){
        flag1 = 1;
    } if  (password[i] == specChar){
            flag2 = 1;
        } if (isdigit(password[i])){
            flag3 = 1;
            }
            }

        if ( flag1 == 1 && flag2 == 1 && flag3 == 1) {
            printf("Strong password! \n");
            } else {

        printf("Weak password! \n");

    }

}


