/*
 * FUN_006053a0 (61 B) — allocates an Animation-BlendHeirarchy object (0x2c
 * bytes), initializes it via FUN_00415d70, stores it in global g_007f27ac.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849304;
extern int g_007f27ac;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);

__declspec(naked) void FUN_006053a0(void)
{
    __asm {
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_ret0
        mov     eax, dword ptr [g_00849304]
        push    eax
        push    0x78b984
        push    2
        push    0xa
        push    0x2c
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [g_007f27ac], esi
        pop     esi
        ret
L_ret0:
        mov     dword ptr [g_007f27ac], 0
        pop     esi
        ret
    }
}
