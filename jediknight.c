#include <stdio.h>

int main()

{
    char name [80];
    int height, age, citizenship, recommendation;

    printf("What is your name?\n");
    scanf("%s", &name);

    printf("Are you recommended by Jedi Master Obi Wan? (Asnwer in numbers: Y = 1, N = 0)\n");
    scanf("%d", &recommendation);
    if (recommendation == 1)
    {
        printf("Congrats! %s you are accepted into the Jedi Knight Academy!", name);
        return 0;
    }

    printf("What is your height?\n");
    scanf("%d", &height);

    if (height >= 200);
    {
        printf("What is your age?\n");
        scanf("%d", &age);
        if (age >= 21 && age <= 25)
        {
            printf("Are you a citizen of the Planet Endor? (Asnwer in numbers: Y = 1, N = 0)\n");
            scanf("%d", &citizenship);
            if (citizenship == 1)
            {
                printf("Congrats! %s you are accepted into the Jedi Knight Academy!", name);
            }
            else {
            printf("Invalid citizenship\n");
            }
            return 0;
        }
        else {
            printf("Age range is not accepted\n");
        }
        return 0;
    }

}
