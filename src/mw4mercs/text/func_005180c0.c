/*
 * func_005180c0 @ 0x005180C0 (52B)
 */
__declspec(naked) void __stdcall func_005180c0()
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_0061791e(void);
__asm {
mov  eax, [esp+4]
        mov  ecx, [eax+8]
        mov  edx, [ecx]
        mov  eax, [eax+4]
        mov  ecx, [eax]
        push edx
        mov edx, dword ptr [DAT_007dab44]
        mov  eax, [edx]
        push ecx
        xor eax, dword ptr [DAT_007dab40]
        mov  ecx, [eax+0x44]
        xor  ecx, 0x85739531
        call FUN_0061791e
        mov  eax, 1
        ret  8
    }


}
