/*
 * FUN_0044cf40 (106 B) — MLR_I_L_TMesh teardown/cleanup. Frees the
 * 0x400-byte buffer and the 0x18-byte mesh object, then releases the
 * MLR_I_L_TMesh class registration (FUN_006f4850) and clears globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b98b8;
extern int g_007b98b4;
extern int g_007b98bc;

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_0044cf40(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b98b8]
        test    esi, esi
        jz      L_cf63
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_cf5a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_cf5a:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_cf63:
        mov     esi, dword ptr [g_007b98b4]
        test    esi, esi
        mov     dword ptr [g_007b98b8], 0x0
        jz      L_cf87
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_cf87:
        mov     eax, dword ptr [g_007b98bc]
        push    0x1
        push    eax
        mov     dword ptr [g_007b98b4], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007b98bc], 0x0
        pop     esi
        ret
    }
}
