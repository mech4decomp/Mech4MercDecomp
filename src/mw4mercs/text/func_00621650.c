/*
 * FUN_00621650 (70 B) — ABL interpreter __thiscall, 2 stack args (RET 0x8).
 * Looks up an element via FUN_00624f00, then scans a sub-array for a
 * matching key; returns the found element or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00624f00(void);

__declspec(naked) void FUN_00621650(void)
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
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        jz      L_62168a
        mov     ecx, dword ptr [eax+0x14]
        mov     eax, dword ptr [eax+0x18]
        cmp     ecx, eax
        jz      L_62168a
        mov     edx, dword ptr [esp+0xc]
L_62167c:
        mov     esi, dword ptr [ecx]
        cmp     dword ptr [esi+0x4], edx
        jz      L_621690
        add     ecx, 0x4
        cmp     ecx, eax
        jnz     L_62167c
L_62168a:
        xor     eax, eax
        pop     esi
        ret     0x8
L_621690:
        mov     eax, dword ptr [ecx]
        pop     esi
        ret     0x8
    }
}
