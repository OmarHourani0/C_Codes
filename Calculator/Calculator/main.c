
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


float discriminant(float a, float b, float c)
{
    float d;
    d = pow(b,2) - 4 * a * c;
    return d;
}

void printroot(float a, float b, float c)
{
    float d = pow(b,2) - 4 * a * c;
    float root2 = ((-1*b) + sqrt(d)) / (2*a);
    float root1 = ((-1*b) - sqrt(d)) / (2*a);
    
    printf("\nThe first root is: %.2f\n", root1);
    printf("The second root is: %.2f\n\n", root2);

    if(root1 < 0 && root2 < 0){
        float root11 = abs(root1);
        float root22 = abs(root2);
        printf("(x + %.2f)*(x + %.2f) = 0\n", root11, root22);
    }else if(root1 > 0 && root2 < 0){
        float root22 = abs(root2);
        printf("(x - %.2f)*(x + %.2f) = 0\n", root1, root22);
    }else if(root1 < 0 && root2 > 0){
        float root11 = abs(root1);
        printf("(x + %.2f)*(x - %.2f) = 0\n", root11, root2);
    }else{
        printf("(x - %.2f)*(x - %.2f) = 0\n", root1, root2);
    }
}

int randnum(int max, int min)
{
    int num = (rand() %max + 1);
    return num;
}


float add()
{
    float n1 , n2, sum;
    
    printf("\nADDITION\n");
    printf("\nEnter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    
    sum = n1 + n2;
    
    printf("= %.2f\n\n", sum);
    return sum;
}

float minus()
{
    float n1, n2, diff;
    
    printf("\nSUBTRACTION\n");
    printf("\nEnter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    
    diff = n1 - n2;
    
    printf("= %.2f\n\n", diff);
    
    return diff;
}

float multi()
{
    float n1, n2, prod;
    
    printf("\nMULTIPLICATION\n");
    printf("\nEnter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    
    prod = n1 * n2;
    
    printf("= %.2f\n\n", prod);
    return prod;
}

float divi()
{
    float n1, n2, quo;
    
    printf("\nDIVISION\n");
    printf("\nEnter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    
    quo = n1 / n2;
    printf("= %.2f\n\n", quo);
    return quo;
}

float power()
{
    float n1, n2, res;
    
    printf("\nPOWER\n");
    printf("\nEnter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    
    res = pow(n1, n2);
    printf("= %.2f\n\n", res);
    return res;
}

int mod()
{
    int n1, n2, res;
    
    printf("\nMOD\n");
    printf("\nEnter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    res = n1 % n2;
    printf("= %d\n\n", res);
    return res;
}

int quadraticformula()
{
    srand(time(0));
    
    float a, b, c;
    
    printf("\nEnter the first coefficient: ");
    scanf("%f", &a);
    printf("Enter the second coefficient: ");
    scanf("%f", &b);
    printf("Enter the third coefficient: ");
    scanf("%f", &c);
    
    //printf("\nThe value of the discriminant is: %0.2f \n\n", discriminant(a, b, c));

    printroot(a, b, c);
    return 0;
}

float average()
{
    // printf("Enter numbers and the output will be the average");
    float sum = 0;
    int k = 0;
    float average = 0;

    printf("\nHow many numbers will you enter? ");
    scanf("%d", &k);
    //scanf("%f", &n1);


    float nums[k];

    for(int j = 0; j < k; j++){
        printf("> ");
        scanf("%f", &nums[j]);
    }
    
    printf("\n");
    
    for (int i = 0; i < k; i++){
        if (nums[i] == '\0'){
            break;
        }else{
        sum = sum + nums[i];
        }
    }

    average = sum/k;

    printf("The average of your numbers is: %.2f\n", average);

    return average;
}

void bye()
{
    printf("Thank you for using my program\n\n\n");
}

void greeting()
{
    printf("Calculator program\n\n");
    printf("Choose a mathmatical operation (+, -, *, /, %%, ^, Q, A)\n");
    printf("Enter the mathmatical operation you want: ");
}


int main()
{
    char opp;
    char flag = 'Y';
    
    greeting();
    
    while(flag == 'Y'){
        scanf("%c", &opp);
        opp = toupper(opp);
        switch(opp)
        {
            case '+': add(); break;
            case '-': minus(); break;
            case '*': multi(); break;
            case '/': divi(); break;
            case '^': power(); break;
            case '%': mod(); break;
            case 'Q': quadraticformula(); break;
            case 'A': average(); break;
            default : printf("Invalid input\n\n");
        }
        
        printf("\nDo you want to do another operation? [Y/N]: ");
        scanf("%c", &flag);
        flag = toupper(flag);
    }    
    bye();
    
    return 0;
}
