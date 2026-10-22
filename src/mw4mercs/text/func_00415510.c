/*
 * FUN_00415510 (40 B) — archive/database registered-class subsystem:
 * __thiscall circular-list membership test. Starting at this[0xc], scans
 * the sibling list (next = node[0x10]) for a node whose [0xc] equals the
 * arg; returns 1 if found, else 0. this=ECX, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00415510(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0xc]
        mov     eax, ecx
        test    eax, eax
        jz      L1
        mov     edx, dword ptr [esp + 0x4]
        cmp     dword ptr [eax + 0xc], edx
        jz      L2
    L3:
        mov     eax, dword ptr [eax + 0x10]
        cmp     eax, ecx
        jz      L1
        cmp     dword ptr [eax + 0xc], edx
        jnz     L3
    L2:
        mov     al, 1
        ret     4
    L1:
        xor     al, al
        ret     4
    }
}
