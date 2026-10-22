/*
 * FUN_00518100 (78 B) — Sets a flag byte at offset 0x3531 in a structure
 * Uses XOR with global keys at 0x007DAB44 and 0x007DAB40
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00518100(void *param_1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov  eax, [esp+4]
        mov  ecx, [eax+4]
        mov  eax, [ecx]
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        test eax, eax
        mov  eax, [edx]
        jz   use_zero
        xor  eax, ecx
        mov  ecx, [eax+0xC]
        xor  ecx, 0x85739531
        mov  eax, 1
        mov  byte ptr [ecx+0x3531], al
        ret  8
use_zero:
        xor  eax, ecx
        mov  ecx, [eax+0xC]
        xor  ecx, 0x85739531
        mov  byte ptr [ecx+0x3531], 0
        mov  eax, 1
        ret  8
    }


}
