#include<iostream>
#include"Grafo.cpp"

int main(){

//creazione del grafo
Grafo<int> GrafoNumeri;

//inserisci nodi al grafo
GrafoNumeri.aggiungiNodo(1);
GrafoNumeri.aggiungiNodo(2);
GrafoNumeri.aggiungiNodo(3);
GrafoNumeri.aggiungiNodo(4);
GrafoNumeri.aggiungiNodo(5);


//inserisci archi al grafo
GrafoNumeri.aggiungiArco(1, 3, 5);
GrafoNumeri.aggiungiArco(2, 4, 7);
GrafoNumeri.aggiungiArco(3, 2, 8);
GrafoNumeri.aggiungiArco(4, 5, 10);
GrafoNumeri.aggiungiArco(4, 1, 7);
GrafoNumeri.aggiungiArco(5, 4, 6);


std::cout << "il grafo che hai appena creato e':" << std::endl;

//stampa del grafo
GrafoNumeri.stampa();

//verifica se un nodo esiste
std::cout << "esiste il nodo 4 ? " << (GrafoNumeri.verificaNodo(4) ? "Si" : "No") << std::endl;

//verifica se un arco esiste
std::cout << "esiste un arco tra 5 e 4 ? " << (GrafoNumeri.verificaArco(5, 4) ? "Si" : "No") <<std::endl;

//visualizza i nodi adiacenti a un altro nodo
GrafoNumeri.nodiAdiacenti(3);

//rimuove arco
GrafoNumeri.rimuoviArco(3, 6);
std::cout << "matrice dopo la rimozione dell'arco tra 3 e 6:" <<std::endl;
GrafoNumeri.stampa();

//rimuove un nodo
GrafoNumeri.rimuoviNodo(2);
std::cout << "Matrice dopo la rimozione del nodo 2:" << std::endl;
GrafoNumeri.stampa();

//aggiunta di un nuovo nodo e di un nuovo arco
GrafoNumeri.aggiungiNodo(6);
GrafoNumeri.aggiungiArco(5, 6, 7);
std::cout << "Matrice dopo l'aggiunta del nodo 6 e dell'arco tra 5 e 6:" << std::endl;
GrafoNumeri.stampa();

//verifica la  connettività tra due nodi
std::cout << "Il nodo 1 e' connesso al nodo 5? " << (GrafoNumeri.verificaArco(1, 5) ? "Sì" : "No") << std::endl;


//trova l'arco con il peso minore per un nodo
    int arcoMinimo = GrafoNumeri.arcoConPesoMinore(5);
    if (arcoMinimo != -1) {
        std::cout << "L'arco con il peso minimo da 5 ha un peso: " << arcoMinimo << std::endl;
    } else {
        std::cout << "Non ci sono archi uscenti da 5" << std::endl;
    }


}