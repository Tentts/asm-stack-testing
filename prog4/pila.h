/* 
 * Estudio de un Sistema Operativo
 * Problemas de Aula. Sesión 2
 *
 * Fichero: pila.h
 * 
 */

#define guarda_registros()                        \
        __asm__ __volatile__(                     \
            "pushl %ebx\n"                        \
            "pushl %ecx\n"                        \
            "pushl %edx\n"                        \
            )

#define recupera_registros()                      \
        __asm__ __volatile__(                     \
            "popl %edx\n"                         \
            "popl %ecx\n"                         \
            "popl %ebx\n"                         \
            )

#define invoca(f,r)                               \
    __asm__ __volatile__(                         \
        "call "#f"\n"                             \
        "add $0x8, %%esp\n"                       \
        : "=a" (r)                                \
    )

#define invoca_salto(f,r)                          \
    __asm__ __volatile__(                          \
        "pushl $1f\n"                              \
        "jmp "#f"\n"                               \
        "1:"                                       \
        "add $0x8, %%esp\n"                        \
        : "=a" (r)                                 \
        )

#define salto(f,d)                                 \
    __asm__ __volatile__(                          \
        "pushl $"#d"\n"                            \
        "jmp "#f"\n"                               \
    )

#define destino(s,r)                              \
    __asm__ __volatile__(                         \
        #s":\n"                                   \
        "add $0x8, %%esp\n"                       \
        : "=a" (r)                                \
    )

#define parametro(p)                             \
    __asm__ __volatile__(                        \
        "push %%eax\n"                           \
        : : "a" (p)                              \
    )

#define pila2variable(n,v)                       \
    __asm__ __volatile__(                        \
        "mov "#n"(%%ebp), %0\n"                  \
        : "=r" (v)                               \
    )

#define muestrapila(n)                          \
    do {                                        \
        int v;                                  \
        pila2variable((n),v);                   \
        printf("ebp + 0x%x= 0x%x\n", n,v);          \
    } while (0)
