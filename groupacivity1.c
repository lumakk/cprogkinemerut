#include <stdio.h>



int main(){
    
int age;
int citizenshipCode;
int recomendeesCode;
char name[80];
int height;


printf("Hello! What is your name?: ");
scanf("%s", &name);

printf("Please enter your age: ");
scanf("%d", &age);

printf("Please enter your height");
scanf("%d", &height);

printf("Please enter your citizenship code: ");
scanf("%d", &citizenshipCode);

printf("Please enter your recomendee's code: ");
scanf("%d", &recomendeesCode);


if (recomendeesCode == 1){
    printf("Congrats, you're accepted to the Jedi Knight Academy.");
} else if (recomendeesCode == 0){
    if(age <= 21 && age >= 25){
        if(citizenshipCode == 1){
            if(height >= 200){
                printf("Congrats, you're accepted to the Jedi Knight Academy!");
            }
        }
    } else {
        printf("You do not meet the qualifications for the Jedi Knight Academy.");
    }
} else {
    printf("You input a wrong recomendee's code.");
}
}