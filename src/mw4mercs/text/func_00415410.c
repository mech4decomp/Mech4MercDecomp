/*
 * FUN_00415410 (42 B) — archive/database registered-class subsystem:
 * __thiscall circular-list walk. Starting at this[8], scans the sibling
 * list (next = node[8]) for a node whose [4] equals the arg; if found,
 * calls its virtual method (node[0])(this). this=ECX, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00415410(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x8]
        mov     eax, edx
        test    eax, eax
        push    esi
        jz      L1
        mov     esi, dword ptr [esp + 0x8]
        cmp     dword ptr [eax + 0x4], esi
        jz      L2
    L3:
        mov     eax, dword ptr [eax + 0x8]
        cmp     eax, edx
        jz      L1
        cmp     dword ptr [eax + 0x4], esi
        jnz     L3
    L2:
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx]
    L1:
        pop     esi
        ret     4
    }
}
