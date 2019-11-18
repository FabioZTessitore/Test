#include <stdio.h>
#include "articolo.h"
#include "pagina.h"

int main()
{
    Articolo a1;
    Articolo a2;
    Articolo a3;

    Pagina p1;

    articolo_init(&a1);
    articolo_init(&a2);
    articolo_init(&a3);

    pagina_init(&p1);

    articolo_set_title(&a1, "Allerta Meteo");
    articolo_set_text(
        &a1,
        "Purtroppo stavolta no"
    );

    articolo_set_title(&a2, "Godzilla ad Afragola");
    articolo_set_text(
        &a2,
        "Distrutto il locale vicino la scuola"
    );

    /*articolo_print(&a1);
    articolo_print(&a2);
    articolo_print(&a3);
    */

    pagina_insertArticolo(&p1, &a1);
    pagina_insertArticolo(&p1, &a2);
    pagina_insertArticolo(&p1, &a3);

    pagina_print(&p1);
    
    return 0;
}