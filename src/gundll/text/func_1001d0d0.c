/*
 * FUN_1001d0d0 (41 B) — __thiscall, RET 0x4. Stack pop.
 * If count at +0x208 == 0, return 0xc1121c02. Else decrement count,
 * pop element from array at +0x8 into *param_1, return 0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1001d0d0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x208]
        xor     eax, eax
        cmp     edx, 0x1
        jnc     normal
        mov     eax, 0xc1121c02
        ret     0x4
    normal:
        dec     edx
        mov     dword ptr [ecx + 0x208], edx
        mov     ecx, dword ptr [ecx + edx*4 + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx], ecx
        ret     0x4
    }
}
