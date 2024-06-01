#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    /* programa para calcular a distância entre dois pontos (x e y) 
    de acordo com suas coordenadas (x1, x2) e (y1, y2) */
    
    float x1, x2, y1, y2, d;
    
    cout << "Digite o primeiro número da coordenada 'x': ";
    cin >> x1;
    
    cout << "Digite o segundo número da coordenada 'x': ";
    cin >> x2;
    
    cout << "Digite o primeiro número da coordenada 'y': ";
    cin >> y1;
    
    cout << "Digite o segundo número da coordenada 'y': ";
    cin >> y2;
    
    d = sqrt (pow ((x2 - x1), 2) + (pow ((y2 - y1), 2)));
    
    cout << "A distância é de: " << d; 
    
    return 0;
}
