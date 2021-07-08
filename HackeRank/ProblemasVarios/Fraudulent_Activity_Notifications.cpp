#include <bits/stdc++.h>

using namespace std;

int getMediana(vector<int> &count, int d)
{   
    vector<int> cantVeces(count);
    for(int i = 1; i< cantVeces.size(); i++)
    {
        cantVeces[i] += cantVeces[i-1];
    }
    int mediana;
    int medioA = 0;
    int medioB = 0;

    //La mediana sera diferente dependiendo del tamaño del d
    // si el d es par entonces sumaremos los 2 valores del medio

    if(d%2 == 0)
    {
        int primero  = d/2; //la posición del primer valor central
        int segundo = primero+1;    //la posicion del segundo valor central 
        int i = 0;
        for (;i<201;i++) //utilzamos la misma variable i para no tener que iterar desde 0 en el otro bucle 
        {
            if (primero <= cantVeces[i]) //buscamos el valor de la mediana a través de su posición
            {
                medioA = i;
                break;
            }
        }
        for (;i<201;i++){
            if(segundo <= cantVeces[i])
            {
                medioB = i;
                break;
            }
        }
    }
    else //si es impar el valor del medio es la mediana 
    {
        int primero = d/2 + 1; //la posicion de la mediana
        for(int i = 0; i<201; i++){
            if (primero<=cantVeces[i])
            {
                medioA = 2*i;
                break;
            }
        }
    }
    mediana = medioA + medioB;
    return mediana;
}

int activityNotifications(vector<int> expenditure, int d) 
{
    int alerta = 0;
    vector<int> count(201,0); //inicializamos un arreglo de 201 con 0's 
    int n = expenditure.size();
    
    for (int i = 0; i < d; i++) //solamente ponemos la cantidad de los valores en el subArreglo
    {
        count[expenditure[i]]++;
    }
    for (int i = d; i<n; i++)
    {
        int mediana = getMediana(count, d); //en el problema te dan que debe ser el doble de la mediana 
        if (expenditure[i]>= mediana) alerta++;

        //aprovechamos el bucle para ir aumentando la cantidad de apariciones en el subArreglo

        count[expenditure[i]]++;
        count[expenditure[i-d]]--;
    }
    return alerta;
}



int main()
{
    vector<int> ar ={2, 3, 4, 2, 3, 6, 8, 4, 5};

    int n = activityNotifications(ar, 5);

    cout << n << endl;

return 0;
}
