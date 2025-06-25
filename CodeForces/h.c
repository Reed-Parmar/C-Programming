#include<stdio.h>
#include<string.h>

#define MAX_N 100005
#define MAX_A 100005

int primeFactors[MAX_A][20]; // Store prime factors for numbers up to MAX_A
int primeCount[MAX_A];       // Store the count of prime factors for each number

// Function to precompute prime factors for all numbers up to MAX_A
void preprocessPrimeFactors() {
    for (int i = 2; i < MAX_A; i++) {
        if (primeCount[i] == 0) { // If `i` is prime
            for (int j = i; j < MAX_A; j += i) {
                primeFactors[j][primeCount[j]++] = i; // Add `i` as a prime factor of `j`
            }
        }
    }
}

// Optimized function to compute f(k, a, l, r)
long long optimizedF(long long k, int a[], int l, int r) {
    long long ans = 0;
    for (int i = l; i <= r; i++) {
        // Divide k by the prime factors of a[i]
        for (int j = 0; j < primeCount[a[i]]; j++) {
            int p = primeFactors[a[i]][j];
            while (k % p == 0) {
                k /= p;
            }
        }
        ans += k;
    }
    return ans;
}

int main() {
    preprocessPrimeFactors(); // Precompute prime factors

    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q); // Read n (size of array) and q (number of queries)

        int a[n + 1];
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]); // Read the array elements
        }

        while (q--) {
            long long k;
            int l, r;
            scanf("%lld %d %d", &k, &l, &r); // Read k, l, r for each query
            printf("%lld\n", optimizedF(k, a, l, r)); // Compute and output the result of f(k, a, l, r)
        }
    }

    return 0;
}