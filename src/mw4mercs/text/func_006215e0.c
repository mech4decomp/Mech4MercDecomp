/*
 * FUN_006215e0 (48 B) — ABL interpreter __thiscall, 1 stack arg (RET 0x4).
 * Looks up an element in a member container via FUN_00624e70; returns the
 * element count (>>2) or 0 if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00624e70(void);

__declspec(naked) void FUN_006215e0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        lea     esi, [ecx+0x2a0]
        push    eax
        lea     ecx, [esp+0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_00624e70
        mov     ecx, dword ptr [eax]
        cmp     ecx, dword ptr [esi]
        pop     esi
        jnz     L_621604
        xor     eax, eax
        ret     0x4
L_621604:
        mov     eax, dword ptr [ecx+0x18]
        sub     eax, dword ptr [ecx+0x14]
        sar     eax, 0x2
        ret     0x4
    }
}
