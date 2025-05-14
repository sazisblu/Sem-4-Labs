#include <stdio.h>
    struct info
    {
        char name[100];
        int dob;
        int roll;
        int marks[5];
        float avg;
        float percentage;
        int age;
    }
    ram;



void greet(struct info *a)
{
    printf("Hello there %s", a->name);
}

void getInfo(struct info *a)
{
    printf("Enter the name:");
    scanf("%s",a->name);
    
    printf("Enter the DOB:");
    scanf("%d",&a->dob);
    
    printf("Enter the roll:");
    scanf("%d",&a->roll);

    for(int i=0; i<5; i++)
   { 
    printf("Enter marks of subject for %dst subject:",i+1);
    scanf("%d",&a->marks[i]);
   }
}

float calculateAvg(struct info *a )
{
    int sum= 0;
    float avg= 0;
    for (int i=0; i< 5; i ++)
    {
        sum+=a->marks[i];
    }
    avg=sum/5;
    return avg;
}


void calculateAge(struct info *a )
{
    a->age= 2025-a->dob;

}


float calculatePercent(float avg , int marks[])
{
    float percentage;
    int sum=0;
    for (int i=0; i< 5; i ++)
    {
        sum+=marks[i];
    }
    percentage=(avg/sum)*100;
    // printf("The percentage obtained is %f ",percentage);
    return percentage;
}

void displayResult(struct info a)
{
 printf("Name:%s",a.name);
 printf("Dob:%d",a.dob);
 printf("Roll:%d",a.roll);
 printf("age:%d",a.age);
 printf("avg:%f",a.avg);
 printf("percentage:%f",a.percentage);
}



void main()
{
    printf("hello world");
    getInfo(&ram);
    greet(&ram);
    ram.age=calculateAvg(&ram);
    ram.age=calculatePercent(&ram);
    displayResult(ram);
}