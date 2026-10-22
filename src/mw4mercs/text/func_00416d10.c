/*
 * FUN_00416d10 (45 B) — __thiscall (RET 0x4): walk the list at
 * [this+0x10] (via [node+0x10] links) to the node at index [arg];
 * set [this+0x10] = that node and return [node+0xc], or 0 if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416d10(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        xor     edx, edx
        test    eax, eax
        push    esi
        jz      L1
        mov     esi, dword ptr [esp + 0x8]
L2:
        cmp     edx, esi
        jz      L3
        mov     eax, dword ptr [eax + 0x10]
        inc     edx
        test    eax, eax
        jnz     L2
L1:
        xor     eax, eax
        pop     esi
        ret     0x4
L3:
        mov     dword ptr [ecx + 0x10], eax
        mov     eax, dword ptr [eax + 0xc]
        pop     esi
        ret     0x4
    }
}
