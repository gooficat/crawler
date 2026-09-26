#ifndef E
#define E(name, class, hp, damage_multiplier, ...)
#define UNDEFCHECK
#endif

E(rat, vermin, 7, 0.3, attack_brute_force, attack_animalistic)
E(ratman, vermin, 23, 0.6, attack_brute_force, attack_animalistic, attack_concoction)
E(miasma, disease, 0, 0.1, attack_concoction)
E(spall, disease, 0, 0.1, attack_striking)
E(beastman, monster, 40, 1.2, attack_brute_force, attack_animalistic, attack_striking)


#ifdef UNDEFCHECK
#undef E
#undef UNDEFCHECK
#endif