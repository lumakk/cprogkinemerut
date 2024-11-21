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

printf("Please enter your height (in cm): ");
scanf("%d", &height);

printf("Please enter your citizenship code (1 - Citizen of Planet Endor | 0 - not citizen): ");
scanf("%d", &citizenshipCode);

printf("Please enter your recomendee's code (1 - Recomendee of Master Obi Wan | 0 - not recomendee): ");
scanf("%d", &recomendeesCode);

if(age > 0 && height > 0 && recomendeesCode == 1 || 0 && citizenshipCode == 1 || 0){
    if (recomendeesCode == 1){
        printf("Congrats, %s! You're accepted to the Jedi Knight Academy.", name);
    } else if (recomendeesCode == 0){
        if(age <= 21 && age >= 25){
            if(citizenshipCode == 1){
                if(height >= 200){
                    printf("Congrats %s! You're accepted to the Jedi Knight Academy.", name);
                }
            }
        } else {
            printf("You do not meet the qualifications for the Jedi Knight Academy.");
        }
    } else {
        printf("You input a wrong recomendee's code.");
    }
} else {
    printf("Invalid input. Please enter a valid number.");
} 

}
