- 👋 Hi, I’m @hussainsw21
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...

<!---
hussainsw21/hussainsw21 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
#include <stdio.h>
#include <math.h>
int main()
{
    int z;
    printf("Enter the key of the program that you want to run...\n");
    printf("PRESS 1- To find the ASCII value of a character .\n");
    printf("PRESS 2- To print the first n natural numbers and hence find their sum");
    printf("PRESS 3- To find the sum of two  numbers.\n");
    printf("PRESS 4- To find the area of a circle.\n");
    printf("PRESS 5- To find that a number is even or odd.\n");
    printf("PRESS 6- To find that a character is a vowel or consonant.\n");
    printf("PRESS 7- To print right angle triangle using asterisk.\n");
    printf("PRESS 8- To swap to numbers without using the third variable.\n");
  printf("PRESS 9- To find whether a number is positive, negative or zero.\n");
    printf("PRESS 10- To find the factorial of any number.\n");
    // Each key leads the user to a different program
     scanf("%d",&z);
     printf("YOUR DESIRED PROGRAM IS BELOW\n"); // inter processory comment
     switch (z)
     {
     case 1: {
         char ex;
         printf("Enter the character:\n"); //input from user
         scanf("%c",&ex);
         printf("The ASCII value of the character is: %d",ex); // final output
         return 0;
     }
     case 2: {
             int i,n, sum=0;
    printf("Enter any number :\n"); // input from user
    scanf("%d",&n);
    printf("The first %d natural numbers are : \n",n); // printing first n numbers
    printf("\n"); // to change line after each number
    for (i=1;i<=n;i++)
       {
       sum = sum + i;
       printf("%d\n",i); // printing the sum  
       }
   printf("\n The sum of numbers is :%d \n", sum); // final output
     }
     case 3: {
            int a, b, sum;
    
    printf("Enter the first number:"); // input from user
    scanf("%d", &a);
    printf("Enter the second number:");// input from user 
    scanf("%d", &b);
    printf("The sum is : %d",a+b); // printing the sum
    return 0;
    }
    case 4: {
        float radius,area;
        printf ("Enter the radius of circle: \n"); // input from user
        scanf("%f", &radius);
        area = 3.14 * radius * radius; // formula for area of circle
        printf ("The area of circle is %f",area); // final output
        return 0;
    }
    case 5: {
        int num;
        printf("Enter any number:\n"); // input from user
        scanf ("%d",&num);
        if (num %2 == 0) // condition for even 
        {
            printf ("The number is even");// final output 
        }
        else
        {
            printf("The number is odd"); // final output
        }
        return 0;
    }
    case 6: {
        char ex;
        printf("Enter any alphabet:\n");
        scanf(" %c",&ex);
        if(ex=='a'||ex=='e'||ex=='i'||ex=='o'||ex=='u'||ex=='A'||ex=='E'||ex=='I'||ex=='O'||ex=='U')
                {
                    printf("The entered alphabet is a vowel.");
                }
                else{
                    printf("The entered alphabet is a consonant.");
                }
                return 0;
    }
    case 7: {
           int i,j,n;
    printf("ENTER ANY NUMBER :");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
      { for(j=1;j<=i;j++)
     printf("*");
        printf("\n");
      }
    return 0;
    }
    case 8: {
       int a = 10,b = 20;
        printf ("Before swap a=10, b=20\n");
        a=a+b;
        b=a-b;
        a=a-b;
        printf("After swap a=%d, b=%d",a,b);
        return 0;
    }
    case 9: {
        int i;
        printf("Enter any number:\n");
        scanf("%d",&i);
        if (i<0) // condition for negative
        {
            printf("You entered a negative number."); // final output if you have entered a negative number
        }
        else if (i>0)// condition for positive
        {
            printf("You entered a positive number."); // final output if you have entered a positive number
        }
        else
        {
            printf("You entered zero."); // final output if you have entered  0
        }
        return 0;
    }
    case 10: {
            int n , i;
    unsigned long long fact = 1;
    printf("Enter any number:\n");
    scanf("%d",&n);
   
       for (i = 1; i <= n ; ++i)
       fact *= i;
   {
    printf("Factorial of %d is %llu",n,fact);
   }
   return 0; 
    }
}
}
