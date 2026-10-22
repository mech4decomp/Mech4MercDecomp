/*
 * FUN_1003aff9 (13 B) - __cdecl. Increments *param_1 by 4, returns
 * dword at (*param_1 - 4).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003aff9(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        add     dword ptr [eax], 4
        mov     eax, dword ptr [eax]
        mov     eax, dword ptr [eax - 4]
        ret
    }
}
