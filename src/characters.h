#ifndef C
#define C(name, hp, damage_multiplier, ...)
#define UNDEFCHECK
#endif


C(brawler, 50, 1.5, attack_striking, attack_brute_force, attack_animalistic)
C(coward, 30, 0.8, attack_striking, attack_animalistic, attack_fleeing, attack_sneak, attack_concoction)
C(medicine_man, 25, 1, attack_sneak, attack_ranged, attack_concoction)

#ifdef UNDEFCHECK
#undef C
#undef UNDEFCHECK
#endif