/*
 * FUN_004172a0 (32 B) - __thiscall container element accessor.
 * If index < count, stores index into this[0x10] and returns the
 * element's [0xc] field; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004172a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [esp + 0x4]
        cmp     edx, dword ptr [eax + 0x14]
        jnc     L_ret0
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x10], edx
        mov     ecx, dword ptr [eax + edx*4]
        mov     eax, dword ptr [ecx + 0xc]
        ret     0x4
    L_ret0:
        xor     eax, eax
        ret     0x4
    }
}
