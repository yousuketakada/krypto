namespace krypto {

inline int f()
{
    return 42;
}

}

#ifndef KRYPTO_MAIN
#define KRYPTO_MAIN 1
#endif

#if KRYPTO_MAIN
int main() {}
#endif
