#include <stdio.h>

int main() {
    char ch[9] = "abhishek";
    char ch1[7] = " sinha";
    
    char ch2[17]; // Make sure ch2 has enough space
    
    int i = 0, j = 0;
    
    // Copy characters from ch to ch2
    while (ch[i] != '\0') {
        ch2[j] = ch[i];
        i++;
        j++;
    }
    
    i = 0; // Reset i for ch1
    // Append characters from ch1 to ch2
    while (ch1[i] != '\0') {
        ch2[j] = ch1[i];
        i++;
        j++;
    }
    
    ch2[j] = '\0'; // Add null terminator to the end of ch2
    
    printf("Concatenated string: %s\n", ch2);
    
    return 0;
}
