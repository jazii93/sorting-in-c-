#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int comparator(const void *v1, const void *v2)
{
    unsigned char c1 = *(unsigned char *)v1;
    unsigned char c2 = *(unsigned char *)v2;
    unsigned char u1 = toupper(c1);
    unsigned char u2 = toupper(c2);
    if (u1 != u2)
        return (u1 > u2) - (u1 < u2);
    return (c1 > c2) - (c1 < c2);
}

int main(void)
{
    assert('A' < 'a');
    char sample[] = "baadxBD";

    printf("Unsorted [%s]\n", sample);
    qsort(sample, strlen(sample), sizeof(char), comparator);
    printf("Sorted   [%s]\n", sample);

    char buffer[4096];
    while (fgets(buffer, sizeof(buffer), stdin) != 0)
    {
        buffer[strcspn(buffer, "\n")] = '\0';
        printf("Unsorted [%s]\n", buffer);
        qsort(buffer, strlen(buffer), sizeof(char), comparator);
        printf("Sorted   [%s]\n", buffer);
    }
    return 0;
}
