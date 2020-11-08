#include "definiciones.h"
#include "auxiliares.h"
#include "ejercicios.h"

using namespace std;

int mod(int n, int m){ //funciona para m > 0, devuelve siempre un número positivo
    int resultado;
    if (n>=0) {
        resultado = n%m;
    } else {
        resultado = (m+(n%m))%m;
    }
    return resultado;
}

bool sonVecinos(int i, int j, int f, int c, toroide const &t){
    int filas = t.size();
    int columnas = t[0].size();
    bool resp = (i != f || j != c)
                && (i == mod(f-1,filas) || i == f || i == mod(f+1,filas))
                && (j == mod(c-1,columnas) || j == c || j == mod(c+1,columnas));
    return resp;
}

float cantidadVivas(toroide const &t){
    float cantVivas = 0;
    int filas = t.size();
    int columnas = t[0].size();
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (t[i][j]){
                cantVivas++;
            }
        }
    }
    return cantVivas;
}

bool pertenece(toroide const &t, vector<toroide> const &ts){
    bool resp = false;
    int n = ts.size();
    for (int i = 0; i < n; ++i) {
        resp = resp || t == ts[i];
    }
    return resp;
}

bool esEvolucionDe(toroide const &t1, toroide const &t2, int &p){
    bool resp = false;
    p = 1;
    toroide evo = t1;
    evolucionToroide(evo);
    vector<toroide> historialEvoluciones; //este vector salva de que el ciclo se cuelgue en el caso de que el toroide entre en un periodo
    historialEvoluciones.push_back(t1);
    while (!toroideMuerto(evo) && (evo != t2) && !pertenece(evo,historialEvoluciones)){
        historialEvoluciones.push_back(evo);
        evolucionToroide(evo);
        p++;
    }
    resp = evo == t2;
    return resp;
}

int cantidadDeToroidesVivos(vector<toroide> ts){
    int resultado = 0;
    for (int i = 0; i < ts.size(); ++i) {
        if (cantidadVivas(ts[i])>0){
            resultado++;
        }
    }
    return resultado;
}

int posicionDelPrimerToroideVivo(vector<toroide> ts){
    int posicion = -1;
    int i = 0;
    while (posicion == -1 && i<ts.size()){
        if (cantidadVivas(ts[i])>0){
            posicion = i;
        }
        i++;
    }
    return posicion;
}

toroide traslacionPorXY(toroide const &t, int x, int y){
    int filas = t.size();
    int columnas = t[0].size();
    toroide out(filas,vector<bool>(columnas,false));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            out[i][j] = t[mod(i+x,filas)][mod(j+y,columnas)];
        }
    }
    return out;
}

int menorRectanguloValido(toroide const &t){
    int resp = 0;
    int filaMin = t.size();
    int filaMax = -1;
    int colMin = t[0].size();
    int colMax = -1;
    for (int i = 0; i < t.size(); ++i) {
        for (int j = 0; j < t[i].size(); ++j) {
            if (t[i][j]){
                if (i < filaMin ) filaMin = i;
                if (i > filaMax ) filaMax = i;
                if (j < colMin ) colMin = j;
                if (j > colMax ) colMax = j;
            }
        }
    }

    resp = (filaMax-filaMin+1)*(colMax-colMin+1);

    return resp;
}

pair<int,int> mp(int a, int b) {
    return make_pair(a, b);
}
//No pueden usar esta función para resolver el TPI.
//Tampoco pueden usar iteradores, como usa esta función.
vector<posicion> ordenar(vector<posicion> &v) {
    sort(v.begin(), v.end());
    return v;
}
