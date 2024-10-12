#include <stdio.h>

int main() {
    int X;
    
    // Input the points scored by the team
    scanf("%d", &X);
    
    // Check if the team has scored 12 or more points
    if (X >= 12) {
        printf("Yes\n");  // The team qualifies
    } else {
        printf("No\n");   // The team does not qualify
    }
    
    return 0;
}