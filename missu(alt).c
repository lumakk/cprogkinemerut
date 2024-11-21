#include <stdio.h>

int main() {

char name[80];
float height;
float weight;
int age;
int educ; // 1 HS grad, 2 = not

printf("Name: ");
scanf("%s", name);
printf("Height (in.): ");
scanf("%f", &height);
printf("Weight (kg.): ");
scanf("%f", &weight);
printf("Age: ");
scanf("%d", &age);
printf("Educational (1 = HS grad, 2 = not): ");
scanf("%d", &educ);

printf("\nName: %s", name);
    if (height >= 5) 
        if (weight == 50)
            if (age >= 18)
                switch(educ)
                    {
                        case 1:
                            printf("\nBongga, pasok ka na!!!");
                            break;
                        case 2:
                            printf("\nAral muna ya.");
                            break;
                        default:
                            printf("\nUnspecified");
                            break;
                    }
            else printf("\nGrow up ka muna as an applicant.");
        else printf("\nGawa ka muna healthy goals.");
    else printf("\nMagcherifer ka na lang.");
    return 0;
}
