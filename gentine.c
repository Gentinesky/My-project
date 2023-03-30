#include <stdio.h>
void password();
void timeTaken();
void fertility();
void medicationReminder();
void BMI();
int main()
{
    int password,x=20;
    while (x!=0)
    {
        printf("Enter password:\n");
        scanf("%d", &password);
        if(password==9897)
        {
            printf("correct password:\n");
            x=0;
        }
        else
          {
              printf("Wrong password,try again");
          }
          printf("\n");
        }
        }
void timeTaken()
{
    int how_long,cycle,days;
    printf("On average how long is your period?\n");
    scanf("%d", &period);
    printf("On average how long is your cycle?\n");
    scanf("%d", &cycle);
    if((period<=5) && (cycle<=28))
    {
        printf("REGULAR:\n");
    }
    else
    {
        printf("IRREGULAR:\n");
    }
    printf("How many days ago was your last period?\n");
    scanf("%d", &days);
    if(days>=21)
    {
        printf("You are approaching your period:\n");
        scanf("%d", &days);
    }
    else if(days>=28)
    {
        printf("Your periods are late:\n");
    }
}
void fertility()
{
    int no_of_days;
    printf("Enter the number of days remaining to your period:\n");
    scanf("%d", &no_of_days);
    if(no_of_days<=4)
    {
        printf("Less fertile:\n");
    }
    else
    {
       printf("highly fertile:\n");
    }
}
void medicationReminder()
char extreme;
printf("is your pain extreme:\n");
if(extreme==yes)
{
    printf("Take painkillers and drink a lot of water:\n");
}
else
{
    printf("No need for painkillers just take a lot of water:\n");
}
void BMI()
int main()
{
    int weight;
    float height;
    printf("Input your weight:\n");
    scanf("%d", &weight);
    printf("Input your height:\n");
    scanf("%f", &height);
    float temp=weight/(height*height);
    printf("BMI=%f\n",temp);
    printf("Grade:\n");
    if(temp<18.5)
    {
        printf("Under:\n");
    }
    else if(temp<25)
    {
        printf("Normal:\n");
    }


}



