long int memo[81];
int inicializado = 0;

long int fibonacci(int n) {
    if (!inicializado) {
        for (int i = 0; i <= 80; i++) {
            memo[i] = -1;
        }
        inicializado = 1;
    }

    if (n == 1 || n == 2) {
        return 1;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return memo[n];
}