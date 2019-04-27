int getaline(char s[], int maxlen)
{
    int c;
    int i = 0;

    while (maxlen-- && (c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }
    s[i++] = '\0';
    return i;
}

int strindex(char source[], char search[])
{
    int i, j, k;
    for (i = 0; source[i] != '\0'; i++)
    {
        k = i;
        for (j = 0; search[j] == source[k++]; j++)
            ;
        if (search[j] == '\0')
            return i;
    }

    return -1;
}