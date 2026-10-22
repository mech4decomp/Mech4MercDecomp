/*
 * func_00512ff0 @ 0x00512FF0 (45B)
 */

__declspec(naked) void __stdcall func_00512ff0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00513030(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov  eax, [eax]
        mov ecx, dword ptr [DAT_007dab40]
        mov  edx, [esp+8]
        xor  eax, ecx
        mov  ecx, [esp+0xC]
        mov  eax, [eax+0xC]
        push ecx
        xor  eax, 0x85739531
        mov  ecx, [eax+0x50]
        push edx
        push ecx
        call FUN_00513030
        ret  0xC
    }


}
