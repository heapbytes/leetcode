int min(int a, int b) {
    return a < b ? a : b;
}

int minOperations(char *s) {
    int length = strlen(s);

    if (length == 1) {
        return 0; // Single character string is already alternating.
    }

    int count = 0;
    for (int i = 0; i < length; i++) {
        char expected = (i % 2 == 0) ? '0' : '1';
        if (s[i] != expected) {
            count++;
        }
    }

    return min(count, length - count); 
}