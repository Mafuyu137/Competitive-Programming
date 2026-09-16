# Parkour Minecraftero

## Problema

[Enlace del problema](https://cpcjudge.com/problem/parkour)
<br>
<br>

## Análisis

Dado que existen millones de combinaciones posibles para formar caminos, además de no tener certeza que la coordenada final sea valida, en inviable reconstruir un camino, por lo que es mejor enfocarnos en los saltos disponibles ¿Qué tienen de especial? ¿Por qué esos? ¿Qué pasa si los combino?

Con ello, dado los saltos disponibles, podemos determinar que usar 1 vez el primer salto y 1 vez el tercer salto es equivalente a usar 2 veces el segundo salto, por ende, siempre y cuando la coordenada en `y` sea igual a 0, únicamente es posible llegar a la coordenada `x` a traves de salto del segundo tipo. En otras palabras, si la coordenada en `x` mod 3 es distinto de 0, es imposible llegar a tal coordenada.
<br>
<br>

## Propuesta de solución

En caso de que la coordenada en `y` no sea igual a 0, tocará "revertir" saltos de la siguiente manera:
- Si la coordenada en `y` es positiva, la única manera de que esto haya ocurrido es dando saltos del primer tipo debido que es el único que avanza por la coordenada en `y` en positivo.  Para revertir los pasos, bastara con restar del eje `x` la cantidad de pasos del tipo 1 dados, la cual es equivalente al valor de `y`, entonces restamos `2 * y`.
- Si la coordenada en `y` es negativa, la única manera de que esto haya ocurrido es dando saltos del tercer tipo debido que es el único que avanza por la coordenada en `y` en negativo.  Para revertir los pasos, bastara con restar del eje `x` la cantidad de pasos del tipo 3 dados, la cual es equivalente al valor absoluto de `y`, entonces restamos `4 * abs(y)`.
Por último queda hacer la comprobación final, tal que `x` deba ser mayor o igual a 0 (debido a que ningún movimiento retrocede en el eje `x`) y que `x | 3`.
<br>
<br>

## Complejidad

- Tiempo: `O(n)`
- Memoria: `O(1)`
<br>

## Implementación

```cpp
#include <iostream>
using namespace std;
typedef long long int ll;
#define nl "\n"

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;

    while(n--){
        ll x, y; cin >> x >> y;

        if (y > 0) x -= (2 * y);
        if (y < 0) x -= (4 * abs(y));

        if (x >= 0 && !(x % 3)) cout << "SI" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}
// By - Mafuyu <3
