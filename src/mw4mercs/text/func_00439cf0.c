/*
 * FUN_00439cf0 (106 B) — MLR static teardown. Frees the buffer and class
 * objects, resets globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(int, int);

extern int g_7b983c; /* 0x007b983c */
extern int g_7b9838; /* 0x007b9838 */
extern int g_7b9840; /* 0x007b9840 */

__declspec(naked) void FUN_00439cf0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_7b983c]
        test    esi, esi
        jz      L_439d13
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_439d0a
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_439d0a:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_439d13:
        mov     esi, dword ptr [g_7b9838]
        test    esi, esi
        mov     dword ptr [g_7b983c], 0
        jz      L_439d37
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_439d37:
        mov     eax, dword ptr [g_7b9840]
        push    1
        push    eax
        mov     dword ptr [g_7b9838], 0
        call    FUN_006f4850
        mov     dword ptr [g_7b9840], 0
        pop     esi
        ret
    }
}
