/*
 * FUN_10038de2 (93 B) - __cdecl. Heap init: HeapCreate(0x1000, param_1==0),
 * stores handle in g_10076a90; dispatches on FUN_10038c9a() result (3/2) to
 * allocate a sub-object; on failure destroys the heap and returns 0, else 1.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 */

extern void *g_1004911c;              /* IAT: HeapCreate */
extern void *g_10049118;              /* IAT: HeapDestroy */
extern unsigned int g_10076a90;       /* heap handle */
extern unsigned int g_10076a94;       /* FUN_10038c9a result */
extern void __cdecl FUN_10038c9a(void);   /* rel32 call */
extern void __cdecl FUN_1003d23a(void);   /* rel32 call */
extern void __cdecl FUN_1003e1a3(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10038de2(void)
{
    __asm {
        xor     eax, eax
        push    0
        cmp     dword ptr [esp + 8], eax
        push    0x1000
        setz    al
        push    eax
        call    dword ptr [g_1004911c]
        test    eax, eax
        mov     dword ptr [g_10076a90], eax
        jz      L_e38
        call    FUN_10038c9a
        cmp     eax, 3
        mov     dword ptr [g_10076a94], eax
        jnz     L_e1e
        push    0x3f8
        call    FUN_1003d23a
        pop     ecx
        jmp     L_e28
L_e1e:
        cmp     eax, 2
        jnz     L_e3b
        call    FUN_1003e1a3
L_e28:
        test    eax, eax
        jnz     L_e3b
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049118]
L_e38:
        xor     eax, eax
        ret
L_e3b:
        push    1
        pop     eax
        ret
    }
}
