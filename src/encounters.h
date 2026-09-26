#ifndef E
#define E(name, desc)
#define UNDEFCHECK
#endif

E(vault, "A sealed container. Open it and you may access an item untouched by the vile surroundings")
E(door, "A door leading to another room")

#ifdef UNDEFCHECK
#undef E
#undef UNDEFCHECK
#endif