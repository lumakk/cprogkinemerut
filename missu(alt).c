#include <stdio.h>

int main() {

char name[80];
float height;
float weight;
int age;
int educ; // 1 HS grad, 2 = not

printf("Name: ");
scanf("%s", name);
printf("Height: ");
scanf("%f", &height);
printf("Weight: ");
scanf("%f", &weight);
printf("Age: ");
scanf("%d", &age);
printf("Educational (1 = HS grad, 2 = not): ");
scanf("%d", &educ);

printf("\nName: %s", name);
    if (height >= 5) 
    {
        if (weight == 50)
            if (age >= 18)
                switch(educ)
                    {
                        case 1:
                            printf("\nBongga!!!");
                            break;
                        case 2:
                            printf("\nPractice ka muna.");
                            break;
                        default:
                            printf("\nUnspecified");
                            break;
                    }
    }
    else
    {
        printf("\nPractice ka muna.");
    }
    return 0;
}