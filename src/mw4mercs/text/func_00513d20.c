/*
 * FUN_00513D20 (73 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00513d20(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov  eax, [esp+0xC]
        mov  ecx, [eax]
        mov  edx, [eax+4]
        mov eax, dword ptr [DAT_007dab44]
        mov  eax, [eax]
        mov  ecx, [ecx]
        push esi
        xor eax, dword ptr [DAT_007dab40]
        mov  eax, [eax+0xC]
        xor  eax, 0x85739531
        cmp  ecx, [eax+0x205D20]
        mov  dword ptr [edx], 0
        jl   found
        xor  eax, eax
        pop  esi
        ret  0xC
found:
        mov  esi, [eax+ecx*4+0x205924]
        mov  eax, [eax+ecx*4+0x205528]
        mov  [edx], esi
        pop  esi
        ret  0xC
    }


}
