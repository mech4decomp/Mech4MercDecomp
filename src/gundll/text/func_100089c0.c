/*
 * FUN_100089c0 (29 B) - __stdcall, RET 0x4. If *(param_1+4) != 0, call
 * through its vtable slot +4 and return 0; else return 0xc1120008.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_100089c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jz      L_err
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        xor     eax, eax
        ret     4
L_err:
        mov     eax, 0xc1120008
        ret     4
    }
}
