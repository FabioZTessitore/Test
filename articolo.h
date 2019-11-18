#ifndef ARTICOLO_H
#define ARTICOLO_H

#define TITLE_MAX_SIZE 80
#define TEXT_MAX_SIZE 1024

struct articolo {
    char title[TITLE_MAX_SIZE];
    char text[TEXT_MAX_SIZE];
};
typedef struct articolo Articolo;

void articolo_init(Articolo *pa);
void articolo_set_title(Articolo *pa, char title[]);
void articolo_set_text(Articolo *pa, char text[]);
void articolo_print(Articolo *pa);
void articolo_copy(Articolo *dst, Articolo *src);

#endif