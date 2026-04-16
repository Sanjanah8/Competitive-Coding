char getCharacter(char *S, int K) {
    int n = strlen(S);
    int index = (K - 1) % n;
    return S[n - 1 - index];
}
