
#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
                return false;

            char last = stack[top--];

            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '['))
            {
                return false;
            }
        }
    }

    return top == -1;
}

int main()
{
    printf("Test Case 1: %s\n",
           isValid("()") ? "true" : "false");

    printf("Test Case 2: %s\n",
           isValid("()[]{}") ? "true" : "false");

    printf("Test Case 3: %s\n",
           isValid("(]") ? "true" : "false");

    printf("Test Case 4: %s\n",
           isValid("([)]") ? "true" : "false");

    printf("Test Case 5: %s\n",
           isValid("{[]}") ? "true" : "false");

    return 0;
}
