/*
 * func_00518150 @ 0x00518150 (47B)
 */
__declspec(naked) void __stdcall func_00518150()
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov  ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov  edx, [ecx+0xC]
        mov  ecx, [esp+4]
        xor  eax, eax
        xor  edx, 0x85739531
        mov  al, byte ptr [edx+0x3531]
        mov  edx, [ecx+4]
        mov  [edx], eax
        mov  eax, 1
        ret  8
    }


}
