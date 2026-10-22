/*
 * FUN_005008a0 (12 B) — Sleep wrapper, calls Sleep(param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_005008a0(unsigned int dwMilliseconds)
{
    

extern int DAT_0076b0d8;
__asm {
mov     eax, [esp + 4]
        push    eax
        call dword ptr [DAT_0076b0d8]
        ret
    }


}
