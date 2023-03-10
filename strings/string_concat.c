#include <stdio.h>
int length(char s[]);
int main()
{
    char s[100], s1[100], s2[100], n, m, k = 0;
    scanf("%s", &s1);
    n = length(s1);
    for (int i = 0; i < n; i++)
    {
        s[i] = s1[i];
    }
    scanf("%s", &s2);
    m = length(s2);
    for (int i = n; i < (n + m); i++)
    {
        s[i] = s2[k];
        k++;
    }
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s", s);
    return 0;
}
int length(char s[])
{
    int le = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        le += 1;
    }
    return le;
}