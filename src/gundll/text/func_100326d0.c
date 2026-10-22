/*
 * FUN_100326d0 (16 B) - __stdcall, RET 0x4.
 * *(*(param_1+0xc)+0x18) = *(param_1+4).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_100326d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 0x18], edx
        ret     4
    }
}
