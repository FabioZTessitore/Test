#include "pagina.h"
#include "articolo.h"

void pagina_init(Pagina *pp)
{
    pp->quanti = 0;
}

void pagina_insertArticolo(Pagina *pp, Articolo *pa)
{
    int indice = pp->quanti;

    if (indice >= PAGINA_MAX_ARTICOLI) {
        return;
    }

    articolo_copy(&(pp->articoli[indice]), pa);
    pp->quanti++;
}

void pagina_print(Pagina *pp)
{
    int i;

    for (i = 0; i < pp->quanti; i++) {
        articolo_print(&(pp->articoli[i]));
    }
}