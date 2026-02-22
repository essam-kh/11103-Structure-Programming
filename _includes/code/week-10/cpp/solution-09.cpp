#include <iostream>
using namespace std;

void RemoveCommas(char *oldval, char *newval) {
    char *p1, *p2;
    p1 = oldval;
    p2 = newval;
    while (*p1 != '\0') {
        if (*p1 != ',') {
            *p2 = *p1;
            p2++;
        }
        p1++;
    }
    *p2 = '\0';
}

int main() {
    char Name[] = "v1,v2,v3";
    char FilteredName[20];
    RemoveCommas(Name, FilteredName);
    cout << "Name before filter is " << Name << "\n";
    cout << "Name after filter is " << FilteredName << "\n";

    return 0;
}
