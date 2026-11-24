
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    int len = strlen(strs[0]);

    char* prefix = malloc((len + 1) * sizeof(char));

    if (prefix == NULL)
    {
        return NULL;
    }

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        while (len > 0 &&
               strncmp(prefix, strs[i], len) != 0)
        {
            len--;
            prefix[len] = '\0';
        }

        if (len == 0)
        {
            break;
        }
    }

    return prefix;
}

int main()
{
    char* words1[] = {"flower", "flow", "flight"};
    char* words2[] = {"dog", "racecar", "car"};
    char* words3[] = {"apple", "application", "apply"};

    char* result1 = longestCommonPrefix(words1, 3);
    char* result2 = longestCommonPrefix(words2, 3);
    char* result3 = longestCommonPrefix(words3, 3);

    printf("Test Case 1: \"%s\"\n", result1);
    printf("Test Case 2: \"%s\"\n", result2);
    printf("Test Case 3: \"%s\"\n", result3);

    free(result1);
    free(result2);
    free(result3);

    return 0;
}
