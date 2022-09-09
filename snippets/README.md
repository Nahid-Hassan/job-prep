# Code Snippets for Data Structure and Algorithm

**Table of Contents**:

- [Code Snippets for Data Structure and Algorithm](#code-snippets-for-data-structure-and-algorithm)
  - [Number Theory](#number-theory)
    - [Prime Number Checking](#prime-number-checking)
    - [Sieve of Eratosthenes](#sieve-of-eratosthenes)
    - [Prime Factorization](#prime-factorization)
    - [Binary Exponentiation](#binary-exponentiation)
    - [Number of Divisors](#number-of-divisors)



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

### Prime Factorization

```c++
void printPrimeFactor(int n) {
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        if (n % i == 0) {
            while (n % i == 0) {
                count++;
                n /= i;
            }
            cout << i << " " << count << endl;
        }
    }

    if (n > 1) cout << n << " " << 1 << endl;
}
```

### Binary Exponentiation

```text
Suppose we want to calculate 2^9 = 512

Condition:
---------------------
If power % 2 == 1:
    res *= base;
    power--
Else:
    base *= base;
    power >>= 1

res     base        power
-----   ----        ------
1       2             9     (odd)
2       2             8     (even)
2       4             4     (even)
2       16            2     (even)
2       256           1     (odd)
512     256           0     break
```

```c++
ll power(ll base, ll power) {
    ll res = 1;

    while (power) {
        if (power % 2) {
            res *= base;
            power--;
        } else {
            base *= base;
            power /= 2;
        }
    }

    return res;
}
```

### Number of Divisors

```c++
void divisors(int n) {
    set<int> divs;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.insert(i);
            divs.insert(n/i);
        }
    }
    cout << divs.size() << endl;
}
```

- Solve leetcode [Four Divisors](https://leetcode.com/problems/four-divisors/) problem.

```text
Idea: 

    * If i * i == n; there are always odd number of divisors; so ignore this number;
    * First added 1 + n;
    * And find the next divisors. If you find more than or less than one. Then ignore that number.

```