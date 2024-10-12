#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        // Read scores for Dragon
        int dragon_dsa, dragon_toc, dragon_dm;
        scanf("%d %d %d", &dragon_dsa, &dragon_toc, &dragon_dm);

        // Read scores for Sloth
        int sloth_dsa, sloth_toc, sloth_dm;
        scanf("%d %d %d", &sloth_dsa, &sloth_toc, &sloth_dm);

        // Calculate total scores
        int dragon_total = dragon_dsa + dragon_toc + dragon_dm;
        int sloth_total = sloth_dsa + sloth_toc + sloth_dm;

        // Determine the result based on the ranking rules
        if (dragon_total > sloth_total) {
            printf("Dragon\n");
        } else if (sloth_total > dragon_total) {
            printf("Sloth\n");
        } else {
            // Total scores are tied, compare DSA
            if (dragon_dsa > sloth_dsa) {
                printf("Dragon\n");
            } else if (sloth_dsa > dragon_dsa) {
                printf("Sloth\n");
            } else {
                // DSA scores are tied, compare TOC
                if (dragon_toc > sloth_toc) {
                    printf("Dragon\n");
                } else if (sloth_toc > dragon_toc) {
                    printf("Sloth\n");
                } else {
                    // Everything is tied
                    printf("Tie\n");
                }
            }
        }
    }
    
    return 0;
}

