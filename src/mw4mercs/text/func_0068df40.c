/*
 * FUN_0068df40 (56 B) — 2-arg __stdcall, RET 8. Compares two floats
 * indexed via param_1/param_2; returns 1 if first < second else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_0068df40(int *param_1, int *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x2c]
        fld     dword ptr [ecx + edx*4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [eax + 4]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [edx + 0x2c]
        fld     dword ptr [eax + ecx*4]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_ret0
        mov     eax, 1
        ret     8
L_ret0:
        xor     eax, eax
        ret     8
    }
}
