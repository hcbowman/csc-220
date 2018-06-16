main()
{
    char a[10], b[10], *p, *combine();

    strcpy(a, "horse");
    strcpy(b, "fly");

    p = combine(a, b);

    printf("%s\n", p);
}

char *combine(char *s, char *t) {
    int x, y;
    char r[100];
    strcpy(r, s);
    y = strlen(r);
    for (x = y; *t != '\0'; ++x)
        r[x] = *t++;
    r[x] = '\0';

    return(r);
}
