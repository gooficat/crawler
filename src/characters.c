#include "game.h"

struct character_class
{
    char const *const name;
    unsigned long long hp;
    double damage_multiplier;
    char const *const desc;
};

struct character_class const CHARACTER_CLASSES[] = {
#define C(name, hp, damage_multiplier, desc, ...) {#name, hp, damage_multiplier, desc},
#include "characters.h"
#undef C
};