#include<stdio.h>
#define C_size 10
union details
{
    char name[C_size];
    char house[C_size];
    char city[C_size];
    char state[C_size];
    int pin[C_size];
}person;
int main()
{
    printf("Enter your name:");
    gets(person.name);
    printf("%s\n",person.name);

    printf("Enter house name:");
    gets(person.house);
    printf("%s\n",person.house);
    
    printf("Enter city:");
    gets(person.city);
    printf("%s\n",person.city);
    
    printf("Enter state:");
    gets(person.state);
    printf("%s\n",person.state);
    
    printf("Enter pincode:");
    scanf("%[^\n]",person.pin);
    printf("%s\n",person.pin);
    
    return 0;
    
}