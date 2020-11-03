#include <algorithm>
#include "ejercicios.h"

// EJERCICIO 1
bool toroideValido(vector<vector<bool>> const &t) {
    bool resp = true;
    int filas = t.size();
    int columnas = t[0].size();
    if (filas < 3 || columnas < 3) resp = false;
    for (int i = 0; i < filas - 1; ++i) {
        resp = resp && (t[i].size() == t[i+1].size());
    }
    return resp;
}

// EJERCICIO 2
bool toroideMuerto(toroide const &t) {
    bool resp = true;
    int filas = t.size();
    int columnas = t[0].size();
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (t[i][j]) resp = false;
        }
    }
    return resp;
}

// EJERCICIO 3
vector<posicion> posicionesVivas(toroide const &t) {
    vector<posicion> vivos;
    posicion pos;
    int filas = t.size();
    int columnas = t[0].size();
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (t[i][j]){
                pos = std::make_pair(i,j);
                vivos.push_back(pos);
            }
        }
    }
    return vivos;
}

// EJERCICIO 4
float densidadPoblacion(toroide const &t) {
    float resp = cantidadVivas(t)/(t.size()*t[0].size());
    return resp;
}

// EJERCICIO 5
int cantidadVecinosVivos(toroide const &t, int f, int c) {
    int resp = 0;
    int filas = t.size();
    int columnas = t[0].size();
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (t[i][j] && sonVecinos(i,j,f,c,t)) resp++;
        }
    }
    return resp;
}

// EJERCICIO 6
bool evolucionDePosicion(toroide const &t, posicion x) {
	bool resp = false;
    int i = x.first;
    int j = x.second;
    int vecinosVivos = cantidadVecinosVivos(t,i,j);
    if (t[i][j]){
        resp = vecinosVivos >= 2 && vecinosVivos <= 3;
    } else {
        resp = vecinosVivos == 3;
    }
    return resp;
}

// EJERCICIO 7
void evolucionToroide(toroide &t){
    toroide t0 = t;
    int filas = t.size();
    int columnas = t[0].size();
    posicion pos;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            pos = {i,j};
            t[i][j] = evolucionDePosicion(t0,pos);
        }
    }
}

// EJERCICIO 8
toroide evolucionMultiple(toroide const &t, int K) {
    toroide out = t;
    for (int i = 0; i < K; ++i) {
        evolucionToroide(out);
    }
    return out;
}

// EJERCICIO 9
bool esPeriodico(toroide const &t, int &p) {
    bool resp = false;
    int p0 = p;
    resp = esEvolucionDe(t,t,p);
    if (resp == false) p = p0;
    return resp;
}

// EJERCICIO 10
bool primosLejanos(toroide const &t, toroide const &u) {
	bool resp = false;
    int p;
    resp = esEvolucionDe(t,u,p) || esEvolucionDe(u,t,p);
    return resp;
}

// EJERCICIO 11
int seleccionNatural(vector <toroide> ts) {
    int resp = -1;
	// Implementacion
    return resp;
}

// EJERCICIO 12
toroide fusionar(toroide const &t, toroide const &u) {
    toroide out(t.size(),vector<bool>(t[0].size(), false));
    int filas = t.size();
    int columnas = t[0].size();

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            out[i][j] = t[i][j] && u[i][j];
        }
    }

    return out;
}

// EJERCICIO 13
bool vistaTrasladada(toroide const &t, toroide const &u){
	bool resp = false;
    // Implementacion
    return resp;
}

// EJERCICIO 14
int menorSuperficieViva(toroide const &t){
	int resp = -1;
	// Implementacion
	return resp;
}
