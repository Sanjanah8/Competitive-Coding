int isConsonant(char ch) {
    char lower = ch;
    if (lower >= 'A' && lower <= 'Z') {
        lower = lower + 32;
    }

    if (lower >= 'a' && lower <= 'z') {
        if (!(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')) {
            return 1;
        }
    }
    
    return 0;
}
