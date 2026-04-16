int areSameCase(char *s1, char *s2) {
    int hasUpper = 0, hasLower = 0;
    char *strArr[] = {s1, s2};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; strArr[i][j] != '\0'; j++) {
            if (isupper(strArr[i][j])) hasUpper = 1;
            if (islower(strArr[i][j])) hasLower = 1;
        }
    }

    return (hasUpper && hasLower) ? 0 : 1;
}
