#include<cstdio>

int main() {
    long long vas = 0, pety = 0;
    int index[100001];
    int n, a, m,b;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        scanf("%d", &a);
        index[a] = i; //ponemos un valor de indice en un arreglo 
                        //aprovechamos la estructura ordenada de un arreglo 
                        //aparte que recorremos el arreglo de 1-n 
    }
    scanf("%d" ,&m);
    for(int i = 0; i<m; i++){
        scanf("%d", &b);
        vas += index[b];
        pety += n-index[b] + 1;
    }
    printf("%I64d %I64d", vas , pety);
    return 0;
}