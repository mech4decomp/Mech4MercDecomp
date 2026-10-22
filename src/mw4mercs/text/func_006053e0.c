/*
 * FUN_006053e0 (39 B) — destroys the Animation-BlendHeirarchy object stored in
 * g_007f27ac (calls FUN_00415e30 then frees via FUN_004084e0) and nulls it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27ac;
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006053e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f27ac]
        test    esi, esi
        jz      L_ret
        mov     ecx, esi
        call    FUN_00415e30
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_ret:
        mov     dword ptr [g_007f27ac], 0
        pop     esi
        ret
    }
}
