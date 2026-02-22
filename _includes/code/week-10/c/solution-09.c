#include <stdio.h>

void RemoveCommas(char * oldval, char * newval)
{
    char * p1, * p2;
    p1 = oldval;
    p2 = newval;
    while (*p1 != '\0')
    {
        if (*p1 != ',')
        {
            *p2 = *p1;
            p2++;
        }
        p1++;
    }
    *p2 = '\0';
}

int main()
{
    char Name[] = "v1,v2,v3";
    char FilteredName[20];
    RemoveCommas(Name, FilteredName);
    printf("Name before filter is %s \n", Name);
    printf("Name after filter is %s \n", FilteredName);

    return 0;
}