/*
 * FUN_00490820 (17 B) — __stdcall, RET 4 (1 param).
 * Calls vtable method at offset 0 with arg 1 if param is non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00490820(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      l_ret
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_ret:
        ret     0x4
    }
}
