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

 enum Choices {
  ROCK,
  PAPER,
  SCISSORS
};

int getChoice(int input){
    char* choice;
    enum Choices c;
    switch (input)
    {
    case 0:
        c = ROCK;
        printf("Rock");
        break;
    
    case 1:
        c = PAPER;
        printf("Paper");
        break;
    
    case 2:
        c = SCISSORS;
        printf("Scissors");
        break;

    default:
        choice="Does Not Exist";
        break;
    }
    return c;
}
int main(){
    
    int choice;
    scanf("%d", &choice);

    int temp = getChoice(choice);
    printf("%d\n", temp);
    // char* temp = name(choice);
    // printf("%s\n", temp);

    return 0;
}

