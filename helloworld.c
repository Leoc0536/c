#include <stdio.h>
// struct Person
// {
//     /* data */
//     unsigned num;
//     char name[];
// };

// printf("hello world");
    // int num = 10;
    // // float 4 bit
    // // double 8 bit
    // float num2 = 10;
    // printf("%d %d %d %d\n",num, num+1, num+2, num+3);
    // printf("%i\n", num);
    // printf("%.1f\n", num2);
    // printf("%i\n", ++num);
    // printf("%i\n", num);
    // printf("%d\n", num++);
    // printf("%i\n", num);

    // int x;
    // printf("Enter a number\n");
    // scanf("%d", &x);
    // printf("Entered %d\n", x);

    // struct Person p;
    // p.num=2147483647;
    
    // printf("My string: %s", p.name);
char* name(int choice){
    char* name;
    switch (choice)
    {
    case 0:
        name="Choice 0";
        break;
    
    case 1:
        name="Choice 1";
        break;
    
    default:
        name="Does Not Exist";
        break;
    }
    return name;
}
int main(){
    
    int choice;
    scanf("%d", &choice);
    char* temp = name(choice);
    printf("%s\n", temp);

    return 0;
}

