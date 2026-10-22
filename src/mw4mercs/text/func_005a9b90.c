/*
 * FUN_005a9b90 (11 B) — __thiscall; sets vtable pointer 0x785200 and
 * tail-jumps to FUN_005e6de0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a9b90(void)
{
    

extern void __cdecl FUN_005e6ddf(void);
__asm {
mov     dword ptr [ecx], 0x785200
        jmp FUN_005e6ddf
    }


}
