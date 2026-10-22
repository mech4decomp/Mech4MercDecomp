/*
 * func_00511aa0 @ 0x00511AA0 (54B)
 * Push a script path string and call FUN_006BBC00 based on conditions.
 */
extern void __cdecl FUN_006BBC00(int);

__declspec(naked) void func_00511aa0()
{
    
__asm {
push esi
        mov  esi, ecx
        cmp  dword ptr [esi+0x1c], -1
        jne  shared_epilogue
        cmp  dword ptr [esi+0x24], 2
        push 0
        push 0x2000
        jne  use_campaign_str
        push 0x779930
        call FUN_006BBC00
        mov  byte ptr [esi+0x28], 0
        pop  esi
        ret
use_campaign_str:
        push 0x7798fc
        call FUN_006BBC00
shared_epilogue:
        mov  byte ptr [esi+0x28], 0
        pop  esi
        ret
    }


}
