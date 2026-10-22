/*
 * func_00515F30 - Initialize global state
 * Sets fields at +0x20 and +0x1c to 5, writes 0x00535260 to 0x00858A38,
 * returns 1
 */
__declspec(naked) void __stdcall func_00515F30()
{
    

extern int DAT_007dd268;
extern int DAT_00858a38;
__asm {
        mov eax, dword ptr [DAT_007dd268]
        mov  ecx, 5
        mov  [eax+0x20], ecx
        mov  [eax+0x1c], ecx
        mov dword ptr [DAT_00858a38], 0x535260
        mov  eax, 1
        ret  8
    }


}
