/*
 * func_00739BC0 - stdcall wrapper (ret 4)
 * Calls IAT function at 0x76b2d0 with [esp+4]
 */

extern void *g_76b2d0;

__declspec(naked) void func_00739BC0()
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_76b2d0]
        pop     ecx
        ret     4
    }
}
