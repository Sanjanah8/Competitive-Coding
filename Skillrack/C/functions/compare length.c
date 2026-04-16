int compareLength(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    if (len1 > len2) return 1;
    if (len1 < len2) return -1;
    return 0;
}
