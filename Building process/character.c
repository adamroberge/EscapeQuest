#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define COLOR_BACKGROUND 0x0000 /* Black, or transparent */
#define COLOR_HAIR 0x7C1F       /* Brown hair */
#define COLOR_SKIN 0xFEA0       /* Skin tone */
#define COLOR_SHIRT 0x03BF      /* Blue shirt */
#define COLOR_SHIRT_RED 0xF800  /* Red shirt */
#define COLOR_PANTS 0x001F      /* Dark blue pants */

unsigned int character1[15][15] = {
    // Top rows (mostly hair)
    {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_HAIR,
     COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
     COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
     COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
     COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
     COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND},

    // Shirt and arms
    {COLOR_BACKGROUND, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SKIN,
     COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
     COLOR_SKIN, COLOR_SHIRT, COLOR_SHIRT, COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
     COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
     COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_BACKGROUND},
    {COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
     COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
     COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT},
    {COLOR_BACKGROUND, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
     COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
     COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_BACKGROUND},

    // Pants and legs
    {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS,
     COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS,
     COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND}};

unsigned int character2[15][15] = {
    // Top rows (mostly hair)
    {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_HAIR,
     COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
     COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
     COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
     COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
     COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
     COLOR_SKIN, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND},

    // Shirt and arms
    {COLOR_BACKGROUND, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SKIN, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SKIN, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_BACKGROUND},
    {COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED},
    {COLOR_BACKGROUND, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
     COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_BACKGROUND},

    // Pants and legs
    {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS,
     COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS,
     COLOR_BACKGROUND, COLOR_BACKGROUND},
    {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
     COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND}};

unsigned int character[2][15][15] = {
    {// Top rows (mostly hair)
     {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_HAIR,
      COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
      COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
      COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
      COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
      COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND},

     // Shirt and arms
     {COLOR_BACKGROUND, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SKIN,
      COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
      COLOR_SKIN, COLOR_SHIRT, COLOR_SHIRT, COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
      COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
      COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_BACKGROUND},
     {COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
      COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
      COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT},
     {COLOR_BACKGROUND, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
      COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT,
      COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_SHIRT, COLOR_BACKGROUND},

     // Pants and legs
     {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS,
      COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS,
      COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND}},

    // Top rows (mostly hair)
    {{COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_HAIR,
      COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
      COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
      COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
      COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR,
      COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_HAIR, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_HAIR, COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN, COLOR_SKIN,
      COLOR_SKIN, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND},

     // Shirt and arms
     {COLOR_BACKGROUND, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SKIN, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SKIN, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_BACKGROUND},
     {COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED},
     {COLOR_BACKGROUND, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_SHIRT_RED,
      COLOR_SHIRT_RED, COLOR_SHIRT_RED, COLOR_BACKGROUND},

     // Pants and legs
     {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS,
      COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS, COLOR_PANTS,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_PANTS, COLOR_PANTS,
      COLOR_BACKGROUND, COLOR_BACKGROUND},
     {COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND,
      COLOR_BACKGROUND, COLOR_BACKGROUND, COLOR_BACKGROUND}}};