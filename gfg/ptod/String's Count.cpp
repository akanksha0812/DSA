long long int countStr(long long int n) {
    const long long res = 2 * n + (3 * (n - 1) * n) / 2 + (n * (n - 1) * (n - 2)) / 2 + 1;
    return res;
}
