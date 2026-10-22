/*
 * FUN_5e01e6e0 (22 B) — __stdcall (RET 0x4), 1 param.
 * Returns floor(log2(param_1)) for param_1 > 1, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e01e6e0(unsigned int param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        xor     eax, eax
        cmp     ecx, 0x1
        jbe     L_e6f3
    L_e6eb:
        shr     ecx, 0x1
        inc     eax
        cmp     ecx, 0x1
        ja      L_e6eb
    L_e6f3:
        ret     0x4
    }
}
