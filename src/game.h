#ifndef CRAWLER_H
#define CRAWLER_H

enum attack_type
{
    attack_brute_force,
    attack_animalistic,
    attack_striking,
    attack_fleeing,
    attack_sneak,
    attack_concoction,
    attack_ranged,
};

enum character_type
{
#define C(name, hp, damage_multiplier, ...) character_##name,
#include "characters.h"
#undef C
};

enum enemy_type
{
#define E(name, class, hp, damage_multiplier, ...) enemy_##name,
#include "enemies.h"
#undef E
};

enum enemy_class
{
    enemy_vermin,
    enemy_monster,
    enemy_fodder,
    enemy_boss,
};

struct status
{
    unsigned short
                blood,
                energy,
                hatred,
                air;
};

struct character
{
    unsigned long long id, uuid;
    enum character_type type;
    struct status status;
};

struct enemy
{
    unsigned long long id, uuid;
    enum enemy_type type;
    struct status status;
};

#endif