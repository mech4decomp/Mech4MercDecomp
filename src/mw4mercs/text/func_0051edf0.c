/*
 * FUN_0051EDF0 (69 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0051edf0(void)
{
    extern int DAT_007dab44;
    extern int DAT_007dab40;
    extern void __cdecl FUN_004CDFA0(void);
    __asm {
        mov  eax, [esp+0xC]
        mov  ecx, [eax]
        mov  ecx, [ecx]
        cmp  ecx, 0xFF
        jle  l_cmp1
        xor  eax, eax
        ret  0xC
    l_cmp1:
        cmp  ecx, 1
        jge  l_main
        xor  eax, eax
        ret  0xC
    l_main:
        mov  edx, dword ptr [DAT_007dab44]
        mov  eax, [edx]
        xor  eax, dword ptr [DAT_007dab40]
        push ecx
        mov  ecx, [eax+0x14]
        xor  ecx, 0x85739531
        call FUN_004CDFA0
        neg  eax
        sbb  eax, eax
        neg  eax
        ret  0xC
    }
}
