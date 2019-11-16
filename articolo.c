#include <stdio.h>
#include <string.h>
#include "articolo.h"

void articolo_set_title(Articolo *pa, char title[])
{
    strncpy(pa->title, title, TITLE_MAX_SIZE);
    pa->title[TITLE_MAX_SIZE-1] = '\0';
}

void articolo_set_text(Articolo *pa, char text[])
{
    strncpy(pa->text, text, TEXT_MAX_SIZE);
    pa->text[TEXT_MAX_SIZE-1] = '\0';
}

void articolo_print(Articolo *pa)
{
    printf("%s\n", pa->title);
    printf("---\n");
    printf("%s\n\n", pa->text);
}