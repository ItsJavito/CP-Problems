#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
    int valor;
    struct node* next;
}node;

node* crearNode(int valor);
void insertarFinal(node* head, int valor);
void imprimirList(node* head);

int main()
{
    node* head = crearNode(1);
    insertarFinal(head, 2);
    insertarFinal(head, 3);
    insertarFinal(head, 4);
    insertarFinal(head, 5);

    imprimirList(head); 

    return 0;
}

node* crearNode(int valor) 
{
    node* nodo;
    nodo = new(node);
    nodo->valor = valor;
    nodo->next = NULL;
    return nodo;
}

void insertarFinal(node* head, int valor)
{
    node* newNode = crearNode(valor);

    if (head->next == NULL)
    {
        head->next = newNode;
    }
    else
    {
        node* ptr; 
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

void imprimirList(node* head)
{
    node* ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->valor << " -->" << " ";
        ptr = ptr->next;
    }
    cout << "NULL" <<endl;
}
