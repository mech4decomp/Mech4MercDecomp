/*
 * FUN_5e00f990 (25 B) — forwards to inner object's vtable[0x68/4] method
 * (1 arg), or returns 0.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f990(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        jz      L_9a4
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x68]
        ret     0x4
L_9a4:
        xor     eax, eax
        ret     0x4
    }
}
