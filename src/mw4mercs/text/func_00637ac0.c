/*
 * FUN_00637ac0 (66 B) — lazily allocates a singleton object (0x4f0 bytes)
 * via FUN_00630fe0, stores it in g_007f2d1c, and bumps its refcount at
 * [obj+0x4a0]. If already allocated, just bumps the refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2d1c;   /* DAT_007f2d1c */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00630fe0(void);

__declspec(naked) void FUN_00637ac0(void)
{
    __asm {
        mov     eax, dword ptr [g_007f2d1c]
        test    eax, eax
        jnz     L_afb
        push    0x4f0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_af4
        mov     ecx, eax
        call    FUN_00630fe0
        mov     ecx, dword ptr [eax + 0x4a0]
        inc     ecx
        mov     dword ptr [g_007f2d1c], eax
        mov     dword ptr [eax + 0x4a0], ecx
        ret
L_af4:
        xor     eax, eax
        mov     dword ptr [g_007f2d1c], eax
L_afb:
        inc     dword ptr [eax + 0x4a0]
        ret
    }
}
