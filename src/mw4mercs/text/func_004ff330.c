/*
 * FUN_004ff330 (93 B) — MLR/Adept init dispatcher. If the object's first
 * dword is non-zero returns 4; otherwise runs a sequence of sub-init
 * routines (FUN_004ff3e0 / FUN_004ff490 / FUN_004ff390) and, if all
 * succeed, zeroes two fields and optionally calls FUN_004ff600.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004ff3e0(void);
extern int __cdecl FUN_004ff490(void);
extern int __cdecl FUN_004ff390(void);
extern void __cdecl FUN_004ff600(void);

__declspec(naked) void FUN_004ff330(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        cmp     dword ptr [esi], 0x0
        jz      L1
        mov     eax, 0x4
        pop     esi
        ret
L1:
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x10]
        push    eax
        push    ecx
        push    esi
        call    FUN_004ff3e0
        add     esp, 0xc
        test    eax, eax
        jnz     L2
        push    esi
        call    FUN_004ff490
        add     esp, 0x4
        test    eax, eax
        jnz     L2
        push    esi
        call    FUN_004ff390
        add     esp, 0x4
        test    eax, eax
        jnz     L2
        mov     dword ptr [esi+0x70], eax
        mov     dword ptr [esi+0x74], eax
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jnz     L3
        push    esi
        call    FUN_004ff600
        add     esp, 0x4
L3:
        xor     eax, eax
L2:
        pop     esi
        ret
    }
}
