//
// Created by Ahmed on 25/10/2025.
//

#ifndef MINI_PROJET_STRUCTURES_H
#define MINI_PROJET_STRUCTURES_H

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;




typedef struct {
    int heure;
    int minute;
} Heure;




typedef struct {
    char nom[50];
    char prenom[50];
    char nationalite[50];
    char ecurie[50];
    int points;
    int numero;
    int age;
    int actif;
    int podiums;
} Pilote;




typedef struct {
    char nom[50];
    char pays[50];
    int points;
    int anneeCreation;
    char directeur[50];
    int actif;
} Ecurie;




typedef struct {
    char nomPilote[50];
    char prenomPilote[50];
    char nationalite[50];
    int position;
    char tempsRealise[20];
    int pointsObtenus;
} ResultatCourse;




typedef struct {
    char nomCircuit[50];
    char pays[50];
    int nombreTours;
    date date;
    heure horaire;
    resultatsCourse resultats[20];
    int nombreResultats;
    int actif;
} GrandPrix;




#endif //MINI_PROJET_STRUCTURES_H