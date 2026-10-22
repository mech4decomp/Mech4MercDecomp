/*
 * FUN_00415230 (40 B) — archive/database subsystem: __thiscall list-membership
 * check. Returns 1 if param (arg at [esp+4]) equals this or is reachable by
 * following this[4]'s next pointers (offset 0x10); else 0. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00415230(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    edx, edx
        jz      not_found
        cmp     edx, ecx
        jnz     walk
    found:
        mov     al, 0x1
        ret     0x4
    walk:
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      not_found
    loop_cmp:
        cmp     eax, edx
        jz      found
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        jnz     loop_cmp
    not_found:
        xor     al, al
        ret     0x4
    }
}
