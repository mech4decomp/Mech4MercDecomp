/*
 * FUN_00760e00 (14 B) — __cdecl, one param.
 * Loads param from [esp+4], forwards it to FUN_0075dbd6, cleans stack, ret.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dbd6(void *param);

__declspec(naked) void __cdecl FUN_00760e00(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_0075dbd6
        add     esp, 4
        ret
    }
}
