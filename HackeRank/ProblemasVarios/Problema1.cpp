#include <bits/stdc++.h>

using namespace std;

typedef struct posicion
{
    int fila;
    int columna;
    int valor;
    struct posicion *next;

}posicion;

posicion* construirMatrizIdentidad(int n)
{
    posicion* head;
    head = new (posicion); //inicializar el nodo

    head->columna = 0; 
    head->fila = 0;
    head->next = NULL;
    head->valor = 1;

    posicion* ptr = head; 

    for (int i = 0; i < n; i++) //columnas
    {
        for (int j = 0; j < n; j++) //filas 
        {
            if (i == 0 && j==0) continue; //como ya tenemos el primer nodo hecho
            posicion* node;         //creacion del nodo puntero
            node = new (posicion); //incializarlo 

            /*
                ASIGNAR LOS VALORES DEL NODO TANTO COLUMNAS COMO 
                FILAS Y SU VALOR CORRESPONDIENTE
            */

            node->valor = (i==j) ? 1:0;
            node->fila = j;
            node->columna = i;

            /*
                ENLAZAMOS LOS NODOS Y AVANZAMOS AL SIGUIENTE 
            */

            ptr->next = node; //inserto el nodo al final 
            ptr = ptr->next;  //avanzo a la siguiente posicion
        }
    }

    return head;
}

int main()
{
    int n = 10;
    posicion* ans = construirMatrizIdentidad(n);
    int cont = 0;
    while(ans != NULL)
    {
        cout << ans->valor << " ";
        cont++;
        if(cont==n)
        {
            cont = 0;
            cout<<endl;
        }
        ans = ans->next;
    }
    return 0;
}