#ifndef E
#define E(name, class, hp, damage_multiplier, ...)
#define UNDEFCHECK
#endif

E(rat, vermin, 7, 0.3, attack_brute_force, attack_animalistic)

#ifdef UNDEFCHECK
#undef E
#undef UNDEFCHECK
#endif