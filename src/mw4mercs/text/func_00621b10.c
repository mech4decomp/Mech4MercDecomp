/*
 * FUN_00621b10 (40 B) — __thiscall, RET 0x8 (2 params).
 *
 * If param1 is in [0, (this[1]-this[0])>>2) and the indexed element
 * is non-null, store param2 into it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00621b10(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    edx, edx
        jl      L_ret
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        sub     ecx, eax
        sar     ecx, 0x2
        cmp     edx, ecx
        jnc     L_ret
        mov     ecx, dword ptr [eax + edx*0x4]
        test    ecx, ecx
        jz      L_ret
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, ecx
        mov     dword ptr [edx], eax
L_ret:
        ret     0x8
    }
}
