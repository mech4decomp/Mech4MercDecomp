/*
 * FUN_0042bc80 (73 B) — MLR global light/color teardown. Releases the
 * light object at 0x007b97f8 (virtual dtor + free) and frees the buffer
 * at 0x007b97f4, clearing both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b97f8;
extern int g_007b97f4;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0042bc80(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b97f8]
        test    esi, esi
        jz      L_bc9b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_bc9b:
        mov     esi, dword ptr [g_007b97f4]
        test    esi, esi
        mov     dword ptr [g_007b97f8], 0
        jz      L_bcc7
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_bcbe
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_bcbe:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_bcc7:
        pop     esi
        ret
    }
}
