#include <stdio.h>

int main()

{

    int height, age, citizenship, recommendation;

    printf("What is your height?\n");
    scanf("%d", &height);

    if (height >= 200);
    {
        printf("What is your age?\n");
        scanf("%d", &age);
        if (age >= 21 && age <= 25)
        {
            printf("Are you a citizen of the Planet Endor?\n");
            scanf("%s", &height);
            if (height = 'y' || 'Y')
            {
                printf("Congrats! You are accepted into the Jedi Knight Academy!");
            }

        }
        
    }


}
