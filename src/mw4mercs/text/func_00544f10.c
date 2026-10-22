/*
 * MW4 Mercenaries decompilation
 * Function: func_00544f10
 * VA: 0x00544F10
 * Size: 103 bytes
 * Calling convention: __stdcall
 */

__declspec(naked) void __stdcall func_00544f10(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_004ce190(void);
__asm {
mov  eax, [ecx+0x3088]
        test eax, eax
        jz   use_xor_path
        mov  eax, [ecx+0x3084]
        test eax, eax
        jz   use_xor_path
        mov  eax, [esp+4]
        mov  edx, eax
        shl  edx, 7
        add  edx, eax
        shl  edx, 3
        sub  edx, eax
        lea  eax, [ecx+edx*8]
        mov  byte ptr [eax+0x3541], 1
        mov  dword ptr [eax+0x3558], 0
        ret  8
use_xor_path:
        mov ecx, dword ptr [DAT_007dab44]
        mov  edx, [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov  eax, [esp+4]
        push 1
        push 0
        xor  edx, ecx
        mov  ecx, [edx+0x14]
        push 0x2E
        push eax
        xor  ecx, 0x85739531
        call FUN_004ce190
        ret  8
    }


}
