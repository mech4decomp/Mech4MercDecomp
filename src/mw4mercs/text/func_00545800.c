/*
 * FUN_0x00545800 (118 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00545800(void)
{
    

extern void __cdecl FUN_00545a27(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10041fd29(void);
extern void __cdecl FUN_1004da4ee(void);
__asm {
push ebx
        mov  ebx, ecx
        mov  al, [ebx+0x17]
        test al, al
        push esi
        push edi
        je   use_xor_path
        xor  esi, esi
        lea  edi, [ebx+0x353B]
loop_check:
        cmp  byte ptr [edi], 0
        je   next_slot
        push 0
        push esi
        mov  ecx, ebx
        call FUN_00545a27
next_slot:
        inc  esi
        add  edi, 0x2038
        cmp  esi, 0xFF
        jl   loop_check
        pop  edi
        pop  esi
        pop  ebx
        ret
use_xor_path:
        mov eax, dword ptr [DAT_007dab44]
        mov  ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov  eax, [ecx+0x10]
        xor  eax, 0x85739531
        mov  ecx, [eax+0x1C]
        test ecx, ecx
        jle  done_xor
        mov  esi, [eax+0x18]
        add  esi, 0x14
        mov  edi, ecx
loop_xor:
        mov  ecx, [esi]
        call FUN_10041fd29
        test eax, eax
        je   next_xor
        mov  ecx, eax
        call FUN_1004da4ee
next_xor:
        add  esi, 0x1C
        dec  edi
        jne  loop_xor
done_xor:
        pop  edi
        pop  esi
        pop  ebx
        ret
    }


}
