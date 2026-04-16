int getIndex(char *s, char ch) {
    for (int i = 0; s[i]; i++) {
        if (s[i] == ch) return i;
    }
    return -1;
}
