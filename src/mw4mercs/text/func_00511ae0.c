/*
 * FUN_00511AE0 (70 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006BBC00(int);

__declspec(naked) void func_00511ae0(void)
{
    
__asm {
push esi
        mov  esi, ecx
        cmp  dword ptr [esi+0x1c], -1
        jne  shared_epilogue
        mov  eax, [esi+0x24]
        cmp  eax, 2
        je   use_modal
        test eax, eax
        je   use_modal
        push 0
        push 0x1000
        push 0x7799a0
        call FUN_006BBC00
        mov  [esi+0x34], eax
        mov  byte ptr [esi+0x28], 0
        pop  esi
        ret
use_modal:
        push 0
        push 0x2000
        push 0x77996c
        call FUN_006BBC00
shared_epilogue:
        mov  byte ptr [esi+0x28], 0
        pop  esi
        ret
    }


}
