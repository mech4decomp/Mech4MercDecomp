/*
 * func_00515F00 - Global state setter
 * Loads global pointer, sets fields at +0x20 and +0x1c, writes 0x00535260 to 0x00858A38,
 * returns 1
 */
__declspec(naked) void __stdcall func_00515F00()
{
    

extern int DAT_007dd268;
extern int DAT_00858a38;
__asm {
        mov eax, dword ptr [DAT_007dd268]
        mov dword ptr [eax+0x20], 4
        mov dword ptr [eax+0x1c], 5
        mov dword ptr [DAT_00858a38], 0x535260
        mov  eax, 1
        ret  8
    }


}
