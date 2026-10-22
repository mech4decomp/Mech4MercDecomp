/*
 * FUN_1004151e (16 B) - __cdecl. *param_1 += 8; returns the 64-bit value
 * at (*param_1 - 8) in EDX:EAX.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1004151e(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        add     dword ptr [eax], 8
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ecx - 8]
        mov     edx, dword ptr [ecx - 4]
        ret
    }
}
