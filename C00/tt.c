unsigned int strlen(char *str) {
    unsigned int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int len_d = strlen(dest);
    unsigned int len_s = strlen(src);
    unsigned int result = 0;
    unsigned int i = 0;

    // Calculate the total length of the resulting string
    if (size > len_d) {
        result = len_d + len_s;
    } else {
        result = len_s + size;
    }

    // If size is less than or equal to len_d, no concatenation will happen
    if (size <= len_d) {
        return result;
    }

    // Copy src to dest, ensuring not to exceed size - 1
    while (src[i] != '\0' && len_d < size - 1) {
        dest[len_d] = src[i];
        len_d++;
        i++;
    }

    // Null-terminate the destination string
    dest[len_d] = '\0';

    return result;
}

