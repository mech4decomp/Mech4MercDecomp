/*
 * FUN_004f3670 (85 B) — MLR/Adept component release/refcount teardown
 * (__thiscall, RET 0x4, 1 param). Decrements a global refcount and frees
 * a global singleton when it hits zero. Twin of FUN_004f3610 with a
 * different global pair.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416910(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007dc884;   /* DAT_007dc884 */
extern int g_007dc888;   /* DAT_007dc888 */

__declspec(naked) void FUN_004f3670(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416910
        test    byte ptr [esp + 0x8], 0x1
        jz      L36BF
        mov     ecx, dword ptr [g_007dc884]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc888]
        jnz     L36BF
        push    edi
        mov     edi, dword ptr [g_007dc884]
        test    edi, edi
        jz      L36AE
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L36AE:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc884], 0x0
        pop     esi
        ret     0x4
L36BF:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
