/*
 * FUN_004CDF10 (52 B) — Switch on param_1 (1/2/3), returns value from
 * global or XOR'd value from encrypted pointer.
 *
 * __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __stdcall FUN_004cdf10(int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        dec     edx
        mov     eax, ecx
        jz      l_case_1
        dec     edx
        jz      l_case_2
        dec     edx
        jz      l_case_3
        xor     eax, eax
        ret     4

    l_case_3:
        _emit 0xA1
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     ecx, dword ptr [eax]
        _emit 0x33
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     eax, dword ptr [ecx + 0xc]
        xor     eax, 0x85739531
        ret     4

    l_case_2:
        _emit 0xA1
        _emit 0x90
        _emit 0xB0
        _emit 0x7D
        _emit 0x00

    l_case_1:
        ret     4
    }
}
