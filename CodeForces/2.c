#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        int n, m, l, r;
        scanf("%d %d %d %d", &n, &m, &l, &r); // Read n, m, l, r for each test case

        // Calculate l' and r' for day m
        int l_prime = l;
        int r_prime = l_prime + m ; // Corrected calculation for r'

        // Output the result
        printf("%d , %d\n", l_prime, r_prime);
    }

    return 0;
}