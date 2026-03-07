#include <stdio.h>

// 1. Custom String Length
int my_strlen(char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

// 2. Custom String Lowercase (converts A-Z to a-z)
char *my_strlwr(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // If character is Uppercase (ASCII 65-90)
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Add 32 to convert to Lowercase
        }
    }
    return str; // Return pointer to support chaining
}

// 3. Custom String Uppercase (converts a-z to A-Z)
char *my_strupr(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // If character is Lowercase (ASCII 97-122)
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Subtract 32 to convert to Uppercase
        }
    }
    return str;
}

// 4. Custom String Reverse
char *my_strrev(char *str) {
    int i, len;
    char temp;
    len = my_strlen(str); // Use our custom len function

    // Swap characters from start and end moving towards center
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return str;
}

// 5. Custom String Copy
char *my_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Don't forget to terminate the destination string
    return dest;
}

// 6. Custom String Compare
int my_strcmp(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]); // Return the ASCII difference
        }
        i++;
    }
    // If we reached here, one or both strings ended. check for length difference
    return (str1[i] - str2[i]);
}

// 7. Custom Find First Character (strchr)
char *my_strchr(char *str, int ch) {
    while (*str != '\0') {
        if (*str == (char)ch) {
            return str; // Return pointer to the found location
        }
        str++;
    }
    return NULL; // Return NULL if not found
}

// 8. Custom Find Last Character (strrchr)
char *my_strrchr(char *str, int ch) {
    char *last_occurrence = NULL;
    while (*str != '\0') {
        if (*str == (char)ch) {
            last_occurrence = str; // Update whenever we find it
        }
        str++;
    }
    return last_occurrence;
}

// 9. Custom Concatenation
char *my_strcat(char *dest, char *src) {
    int i = 0, j = 0;

    // Find end of dest string
    while (dest[i] != '\0') {
        i++;
    }

    // Append src to dest
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Terminate result
    return dest;
}

int main()
{
    char ch[] = "I love my Country, India.";
    char v[60], g[60];

    // 1. Length
    int l = my_strlen(ch);
    printf("Length: %d\n", l);

    // 2. Lower case
    printf("Lower case: %s\n", my_strlwr(ch));

    // 3. Upper case
    printf("Upper case: %s\n", my_strupr(ch));

    // 4. Reverse
    printf("Reverse: %s\n", my_strrev(ch));

    /* Logic Note:
       ch is currently REVERSED UPPERCASE due to previous calls.
       The next line:
       1. my_strlwr(ch) -> turns it to REVERSED LOWERCASE.
       2. my_strrev(...) -> turns it back to NORMAL LOWERCASE.
       3. my_strcpy -> copies NORMAL LOWERCASE to v.
    */
    my_strcpy(v, my_strrev(my_strlwr(ch)));

    // 5. Compare
    int r = my_strcmp(ch, v);
    printf("Copied String: %s\n", v);
    printf("Comparison Result: %d\n", r);

    // 6. First occurrence (Pointer arithmetic: Address found - Base Address = Index)
    // Note: Searching for 'c' inside ch (which is currently "i love my country, india.")
    char *ptr1 = my_strchr(ch, 'c');
    if(ptr1 != NULL)
        printf("First char index: %ld\n", ptr1 - ch);
    else
        printf("First char not found\n");

    // 7. Last occurrence
    char *ptr2 = my_strrchr(ch, 'i');
    if(ptr2 != NULL)
        printf("Last char index: %ld\n", ptr2 - ch);
    else
        printf("Last char not found\n");

    // 8. Concatenation
    printf("Concatenation: %s\n", my_strcat(ch, v));

    return 0;
}
