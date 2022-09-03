# Code Snippets for Data Structure and Algorithm

**Table of Contents**:

- [Code Snippets for Data Structure and Algorithm](#code-snippets-for-data-structure-and-algorithm)
  - [Number Theory](#number-theory)
    - [Prime Number Checking](#prime-number-checking)
    - [Sieve of Eratosthenes](#sieve-of-eratosthenes)



## Number Theory

### Prime Number Checking

- **Wiki**: [Prime Number](https://en.wikipedia.org/wiki/Prime_number)
- **Blog**: [Primality Testing](https://www.rookieslab.com/posts/fastest-way-to-check-if-a-number-is-prime-or-not)

```c++
bool prime(int n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
```

**Time Complexity**: `O(sqrt(n))`

### Sieve of Eratosthenes

- [Benchmark Testing for Prime Sieve](https://gist.github.com/jakobkogler/e6359ea9ced24fe304f1a8af3c9bee0e)

```c++
int n = 1e6+7;   // 1000007
vector <bool> is_prime(n+1, true); // additional 1 for boundary checking.

void sieve() {
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) 
                is_prime[j] = false;
        }
    }
}
```

**Problems**:

- [230B(T Primes) - Codeforces](https://codeforces.com/problemset/problem/230/B)

```
Definition: A number that has exactly three distinct positive divisors is a T-prime number.

Solution Idea: It can be shown that only squares of prime numbers are T-primes, and that there are not too many of them — as many as there are prime numbers not greater than . Precompute these numbers (using, for example, the sieve of Eratosthenes) and store them in an array or an std::set, then we can answer each query by simply checking whether the number in question is amongst the precomputed numbers.

4 = 1, 2, 4      ; sqrt(4) = 2 is prime && 2 * 2 == 4 (whole square number)
9 = 1, 3, 9      ; sqrt(9) = 3 is prime && 3 * 3 == 9 (whole square number)
25 = 1, 5, 25
49 = 1, 7, 49 
```
