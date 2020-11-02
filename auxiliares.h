//


#ifndef REUNIONESREMOTAS_AUXILIARES_H
#define REUNIONESREMOTAS_AUXILIARES_H

#include "definiciones.h"

using namespace std;

int mod(int n, int m);
bool sonVecinos(int i, int j, int f, int c, toroide const &t);
float cantidadVivas(toroide const &t);
bool esEvolucionDe(toroide const &t1, toroide const &t2, int &p);

pair<int,int> mp(int a, int b);
vector<posicion> ordenar(vector<posicion> &v);

#endif //REUNIONESREMOTAS_AUXILIARES_H
