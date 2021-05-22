/**
 * \file main-hexadecimal.c
 * \brief Programme principal pour la conversion d'un nombre hexadécimal
 * \author Benoit Donnet -- Université de Liège (ULiège)
 * \version 0.1
 * \date 19/04/2021
 *
 * Programme principal.  Contient les exemples de l'énoncé.
 */

#include <stdio.h>
#include <stdlib.h>

#include "hexadecimal.h"

int main(){
  char hexa1[] = "27";
  char hexa2[] = "A23";
  char hexa3[] = "A78E";

  printf("%s: %u\n", hexa1, hexa_dec_rec(hexa1, 2));
  printf("%s: %u\n", hexa2, hexa_dec_rec(hexa2, 3));
  printf("%s: %u\n", hexa3, hexa_dec_rec(hexa3, 4));
  
  return EXIT_SUCCESS;
}//fin programme
