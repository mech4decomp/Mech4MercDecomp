/*
 * FUN_00511C30 (72 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006BBC00(int);

__declspec(naked) void func_00511c30(void)
{
    

extern int DAT_007ddd21;
extern int DAT_00858a38;
__asm {
        mov al, byte ptr [DAT_007ddd21]
        test al, al
        push esi
        mov  esi, ecx
        jne  skip_load
        mov  al, byte ptr [esp+8]
        test al, al
        push 0
        push 0x1000
        je   use_loading
        push 0x779a2c
        jmp  do_call
use_loading:
        push 0x779a00
do_call:
        call FUN_006BBC00
        mov  [esi+0x2C], eax
skip_load:
        mov dword ptr [esi+0x1c], 1
        mov  byte ptr [esi+0x28], 0
        mov dword ptr [DAT_00858a38], 0x535260
        pop  esi
        ret  4
    }


}
