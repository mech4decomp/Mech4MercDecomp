/*
 * FUN_00548f50 (10 B) — Sets global dword at [0x7B46C0] from stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00548f50(void)
{
    

extern int DAT_007b46c0;
__asm {
mov  eax, dword ptr [esp+4]
        mov dword ptr [DAT_007b46c0], eax
        ret
    }


}
