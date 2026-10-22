/*
 * FUN_00621610 (51 B) — ABL interpreter __thiscall, 2 stack args (RET 0x8).
 * Looks up an element via FUN_00624f00; returns indexed element or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00624f00(void);

__declspec(naked) void FUN_00621610(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        lea     esi, [ecx+0x2a0]
        push    eax
        lea     ecx, [esp+0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_00624f00
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [eax]
        cmp     eax, ecx
        pop     esi
        jnz     L_621636
        xor     eax, eax
        ret     0x8
L_621636:
        mov     edx, dword ptr [eax+0x14]
        mov     eax, dword ptr [esp+0x8]
        mov     eax, dword ptr [edx+eax*0x4]
        ret     0x8
    }
}
