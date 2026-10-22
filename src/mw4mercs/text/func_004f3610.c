/*
 * FUN_004f3610 (85 B) — MLR/Adept component release/refcount teardown
 * (__thiscall, RET 0x4, 1 param). Decrements a global refcount and frees
 * a global singleton when it hits zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007dc87c;   /* DAT_007dc87c */
extern int g_007dc880;   /* DAT_007dc880 */

__declspec(naked) void FUN_004f3610(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L365F
        mov     ecx, dword ptr [g_007dc87c]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc880]
        jnz     L365F
        push    edi
        mov     edi, dword ptr [g_007dc87c]
        test    edi, edi
        jz      L364E
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L364E:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc87c], 0x0
        pop     esi
        ret     0x4
L365F:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
