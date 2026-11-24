
#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t)
{
    int frequency[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        frequency[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++)
    {
        frequency[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char s1[] = "anagram";
    char t1[] = "nagaram";

    char s2[] = "rat";
    char t2[] = "car";

    char s3[] = "listen";
    char t3[] = "silent";

    printf("Test Case 1: %s\n",
           isAnagram(s1, t1) ? "true" : "false");

    printf("Test Case 2: %s\n",
           isAnagram(s2, t2) ? "true" : "false");

    printf("Test Case 3: %s\n",
           isAnagram(s3, t3) ? "true" : "false");

    return 0;
}
