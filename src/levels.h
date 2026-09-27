#ifndef L
#define L(name, ...)
#define UNDEFCHECK
#endif

#ifdef UNDEFCHECK
#undef L
#undef UNDEFCHECK
#endif
