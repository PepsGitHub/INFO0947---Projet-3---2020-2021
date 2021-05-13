#include <assert.h>

#include "hexadecimal.h"

/**
 * \fn static unsigned int convert(char hex)
 * \brief Conversion entre un symbole hexadécimal et son équivalent décimal
 *
 * \param hex, le symbole hexadécimal
 *
 * \return la représentation décimale du symbole hexadécimal.  -1 en cas d'erreur.
 */
static unsigned int convert(char hex){
  switch(hex){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    case 'A': return 10;
    case 'B': return 11;
    case 'C': return 12;
    case 'D': return 13;
    case 'E': return 14;
    case 'F': return 15;
  }
  return -1;
}//fin convert()

unsigned int hexa_dec_rec(char *hexa, int n){
  assert(hexa != (void*)0 && n >= 0);//préconditions

  static int puissance = 1, resultat = 0, i = 0;
  int final;

  if(i == 0){
    if(convert(hexa[n - 1]) != -1)
      resultat = convert(hexa[n - 1]);
    else
      return -1;//dans le cas où l'un des char n'existe pas en hexadécimal

    i++;

    return hexa_dec_rec(hexa, n - 1);//cas de base + appel récursif
  }

  if(n > 0){
    puissance *= 16;
    if(convert(hexa[n - 1]) != -1)
      resultat += convert(hexa[n - 1]) * puissance;
    else
      return -1;//dans le cas où l'un des char n'existe pas en hexadécimal

    return hexa_dec_rec(hexa, n - 1);//récursivité
  }else{
    final = resultat;
    i = 0;//réinit des var statiques
    puissance = 1;
    resultat = 0;

    return final;//retourne la valeur finale
  }
}//fin hexa_dec_rec()