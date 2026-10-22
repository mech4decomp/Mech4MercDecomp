/*
 * FUN_1001daa0 (18 B) - __stdcall, RET 0x4.
 * *(param_1+8) = *(*(param_1+8)+0x20); return 0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_1001daa0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [ecx + 0x20]
        mov     dword ptr [eax + 8], edx
        xor     eax, eax
        ret     4
    }
}
