//
// Created by floryan on 20/09/17.
//
#ifndef SERVEUR_STRUCTS_H
#define SERVEUR_STRUCTS_H

#include <netdb.h>

struct ip {
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned char b4;
};

enum TypeRequete {
    LOGIN_OFFICER  = 1,
    LOGOUT_OFFICER   = 2,
    CHECK_TICKET = 3
};

struct Requete {
    enum TypeRequete Type;
    char             Message[40];
    int              Compteur;
    int              Numero;
    unsigned short   crc;
    unsigned short   s0;
};

struct STBF {
    int                DescPublic;
    struct sockaddr_in psorPublic; /* r = remote */
    struct Requete     UneRequeteR;
};

#endif //SERVEUR_STRUCTS_H
