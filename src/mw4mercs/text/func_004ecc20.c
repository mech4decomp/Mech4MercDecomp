/*
 * FUN_004ecc20 (44 B) — __thiscall destructor. Sets vtable 0x774828,
 * decrements a refcount at +0x14 (with free when it hits 0), then calls
 * base destructor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004ecc20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x774828
        mov     eax, dword ptr [esi+0x14]
        test    eax, eax
        jz      L_43
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_43
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_43:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
