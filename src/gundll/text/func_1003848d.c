/*
 * FUN_1003848d (84 B) - __stdcall.
 * Calls FUN_10039a84, then an IAT function; stores its result in
 * g_100518b4. If != -1, allocates 0x74 bytes via FUN_1003c027, calls
 * IAT(g_100518b4, ptr), FUN_100384ff(ptr), IAT, and fills the object.
 * Returns 0 on failure.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039a84(void);   /* rel32 call */
extern void __cdecl FUN_1003c027(void);   /* rel32 call */
extern void __cdecl FUN_100384ff(void);   /* rel32 call */

extern int *g_100490dc;   /* IAT call dword ptr */
extern int *g_100490d8;   /* IAT call dword ptr */
extern int *g_10049094;   /* IAT call dword ptr */
extern int g_100518b4;    /* data */

__declspec(naked) void __stdcall FUN_1003848d(void)
{
    __asm {
        push    esi
        call    FUN_10039a84
        call    dword ptr [g_100490dc]
        cmp     eax, -1
        mov     dword ptr [g_100518b4], eax
        jz      L_3dd
        push    0x74
        push    1
        call    FUN_1003c027
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jz      L_3dd
        push    esi
        push    dword ptr [g_100518b4]
        call    dword ptr [g_100490d8]
        test    eax, eax
        jz      L_3dd
        push    esi
        call    FUN_100384ff
        pop     ecx
        call    dword ptr [g_10049094]
        or      dword ptr [esi + 0x4], -1
        push    1
        mov     dword ptr [esi], eax
        pop     eax
        pop     esi
        ret
    L_3dd:
        xor     eax, eax
        pop     esi
        ret
    }
}
