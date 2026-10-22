/*
 * FUN_1003ff9f (135 B) - __stdcall. Checks locale string lengths, sets
 * globals, calls EnumSystemLocalesA, and validates a flags word.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c5f0(void);   /* rel32 call (_strlen) */
extern void __cdecl FUN_10040650(void);   /* rel32 call */

extern int g_10075708;   /* [0x10075708] */
extern int g_1007570c;   /* [0x1007570c] */
extern int g_10075704;   /* [0x10075704] */
extern int g_100756f8;   /* [0x100756f8] */
extern int g_100756fc;   /* [0x100756fc] */
extern int g_10075700;   /* [0x10075700] */
extern int g_10075710;   /* [0x10075710] */
extern int *g_10049174;  /* IAT [0x10049174] */

__declspec(naked) void __stdcall func_1003ff9f(void)
{
    __asm {
        push    dword ptr [g_10075708]
        call    FUN_1003c5f0
        push    dword ptr [g_1007570c]
        sub     eax, 0x3
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     dword ptr [g_10075704], eax
        call    FUN_1003c5f0
        sub     eax, 0x3
        pop     ecx
        neg     eax
        sbb     eax, eax
        and     dword ptr [g_100756f8], 0x0
        inc     eax
        cmp     dword ptr [g_10075704], 0x0
        pop     ecx
        mov     dword ptr [g_100756fc], eax
        jz      L_ffed
        mov     dword ptr [g_10075700], 0x2
        jmp     L_fffe
    L_ffed:
        push    dword ptr [g_10075708]
        call    FUN_10040650
        pop     ecx
        mov     dword ptr [g_10075700], eax
    L_fffe:
        push    0x1
        push    0x10040026
        call    dword ptr [g_10049174]
        mov     eax, dword ptr [g_10075710]
        test ah, 0x01
        jz      L_1e
        test ah, 0x02
        jz      L_1e
        test    al, 0x7
        jnz     L_25
    L_1e:
        and     dword ptr [g_10075710], 0x0
    L_25:
        ret
    }
}
