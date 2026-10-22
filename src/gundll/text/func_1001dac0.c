/*
 * FUN_1001dac0 (19 B) - __stdcall, RET 0x8.
 * Stores [ESP+8] into [ [ESP+4]->[+8] + 8 ], returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_1001dac0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 8], edx
        xor     eax, eax
        ret     0x8
    }
}
