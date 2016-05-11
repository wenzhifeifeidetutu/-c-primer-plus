#include <stdio.h>
#include <string.h>
 
char* del_substr(char* rowstr, char const* substr)
{
    char *idx, *jdx;
    while(idx = strstr(rowstr, substr))
    {
        jdx = idx + strlen(substr);
        while (*idx++ = *jdx++)
            ;
        *idx = '\0';
    }
    return rowstr;
}
 
int main(int argc, const char* argv[])
{
    char s1[81];
    char s2[81];
    scanf("%s %s", s1, s2);
    char *s = del_substr(s1, s2);
    printf("%s\n", s);
    return 0;
}
