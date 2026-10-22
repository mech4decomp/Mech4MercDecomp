/*
 * FUN_0051F700 (73 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0051f700(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00617903(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov  eax, [eax]
        xor  eax, ecx
        mov  ecx, [esp+4]
        mov  edx, [ecx+4]
        mov  ecx, [edx]
        push ecx
        mov  ecx, [eax+0x44]
        xor  ecx, 0x85739531
        call FUN_00617903
        mov edx, dword ptr [DAT_007dab44]
        mov  ecx, [edx]
        xor ecx, dword ptr [DAT_007dab40]
        mov  edx, [ecx+0x44]
        xor  edx, 0x85739531
        mov  [edx+0x3C], eax
        mov  eax, 1
        ret  8
    }


}
