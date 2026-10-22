/*
 * FUN_00548f40 (12 B) — Copies global dword [0x7B46C0] to [ecx+0x368].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00548f40(void)
{
    

extern int DAT_007b46c0;
__asm {
        mov eax, dword ptr [DAT_007b46c0]
        mov  dword ptr [ecx+0x368], eax
        ret
    }


}
