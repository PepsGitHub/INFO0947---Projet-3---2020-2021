/**
 * \file hexadecimal.h
 * \brief Header pour le calcul récursif d'un nombre hexadécimal
 * \author Benoit Donnet -- Université de Liège (ULiège)
 * \version 0.1
 * \date 19/04/2021
 *
 * Convertis un nombre hexadécimal en nombre décimal
 */

#ifndef __HEXADECIMAL__
#define __HEXADECIMAL__

/**
 * \fn unsigned int hexa_dec_rec(char *hexa, int n)
 * \brief Convertir un nombre hexadécimal en nombre décimal
 *
 * \param hexa, le nombre hexadécimal
 * \param n, le nombre de symboles dans le nombre hexadécimal
 *
 * \return la représentation décimale du nombre hexadécimal.
 */
unsigned int hexa_dec_rec(char *hexa, int n);

#endif
