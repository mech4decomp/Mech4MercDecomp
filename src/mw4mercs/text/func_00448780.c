/*
 * FUN_00448780 (73 B) — MLR global cleanup: destroys/frees the objects at
 * g_007b98a4 and g_007b98a0, nulls the globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b98a4;
extern int g_007b98a0;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00448780(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b98a4]
        test    esi, esi
        jz      L9b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L9b:
        mov     esi, dword ptr [g_007b98a0]
        test    esi, esi
        mov     dword ptr [g_007b98a4], 0
        jz      Lc7
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      Lbe
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
Lbe:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
Lc7:
        pop     esi
        ret
    }
}
