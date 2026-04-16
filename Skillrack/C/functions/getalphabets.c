int getAlphabetsCount(char *S, int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isalpha(S[i])) {
            count++;
        }
    }
    return count;
}
