// A really bad way to print hello World.....
#include <stdio.h>
#include <string.h>

int i;
char element[1];

int loopit(char *output, int output_length);
int printit(char element);

int main(void)
{
    char output[] = "HelloWorld!";
    int output_length = strlen(output);
    loopit(output, output_length);   
return 0;
}

int loopit(char *output, int output_length)
{
    for (i = 0; i < output_length; i++)
    {
        printit(output[i]);  
    }
    putchar('\n');
}

int printit(char element)
{
    putchar(element);  
}