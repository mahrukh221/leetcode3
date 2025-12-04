#include <stdio.h>
#include <string.h>

// Palindromic String

int isPalindrome(char *s)
{
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right)
    {
        if (s[left] != s[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

char *firstPalindrome(char **words, int wordsSize)
{
    for (int i = 0; i < wordsSize; i++)
    {
        if (isPalindrome(words[i]))
            return words[i];
    }
    return "";
}

int main()
{
    char *words[] = {"abc", "car", "ada", "racecar", "cool"};
    int size = 5;

    printf("First palindrome: %s\n",
        firstPalindrome(words, size));

    return 0;
}
