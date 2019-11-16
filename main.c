#include <stdio.h>
#include "articolo.h"

int main()
{
    Articolo a1;
    Articolo a2;

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

    articolo_print(&a1);
    articolo_print(&a2);

    return 0;
}