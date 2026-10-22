/*
 * FUN_004df8b0 (53 B) — MLR/Adept input-binding registration. __thiscall,
 * RET 0x4 (1 param). Computes a sub-object pointer at [this + idx*0x1c +
 * 0x15c], registers it into the 0x3b80 binding list (or appends via
 * FUN_004179b0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415510(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004df8b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        lea     edx, [eax*8 + 0x0]
        push    edi
        sub     edx, eax
        lea     edi, [ecx + 0x3b80]
        lea     esi, [ecx + edx*4 + 0x15c]
        push    edi
        mov     ecx, esi
        call    FUN_00415510
        test    al, al
        jnz     L8E0
        push    esi
        mov     ecx, edi
        call    FUN_004179b0
L8E0:
        pop     edi
        pop     esi
        ret     0x4
    }
}
