/*
 * FUN_5e00e020 (54 B) — getter. If param_2==0 and param_3<0x19, reads
 * param_1[0x4810 + param_3*4] into *param_4; else *param_4=0. Returns 0.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00e020(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jnz     L1
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, 0x18
        jg      L1
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + eax*4 + 0x4810]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax], edx
        xor     eax, eax
        ret     0x10
    L1:
        mov     ecx, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     dword ptr [ecx], 0
        ret     0x10
    }
}
