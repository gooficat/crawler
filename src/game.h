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
#define C(name, hp, damage_multiplier, desc, ...) character_##name,
#include "characters.h"
#undef C
};

enum enemy_type
{
#define E(name, class, hp, damage_multiplier, desc, ...) enemy_##name,
#include "enemies.h"
#undef E
};

enum item_type
{
#define I(name, class, weight, desc) item_##name,
#include "items.h"
#undef I
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
    bool fighting;
};

struct character
{
    unsigned long id, uuid;
    enum character_type type;
    struct status status;
    struct room *current_room;
};

struct enemy
{
    unsigned long id, uuid;
    enum enemy_type type;
    struct status status;
};

struct item
{
    unsigned long id, uuid;
    enum item_type type;
};

struct game_state
{
    struct character player;
    struct
    {
        struct room *val;
        unsigned long len;
    } rooms;
};

extern struct game_state state;

#endif
