/*
 * MW4 Mercenaries decompilation
 * Function: func_0054e8a0
 * VA: 0x0054E8A0
 * Size: 110 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void __stdcall func_0054e8a0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10054d03d(void);
extern void __cdecl FUN_10054d4c4(void);
extern void __cdecl FUN_10054d9db(void);
extern void __cdecl FUN_10054c562(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        push ebx
        mov ebx, dword ptr [DAT_007dab40]
        push esi
        mov  esi, ecx
        mov  ecx, [eax]
        xor  ecx, ebx
        mov  edx, [ecx+0xC]
        xor  edx, 0x85739531
        mov  eax, [edx+0x4C]
        cmp  dword ptr [eax+0x14], 5
        jne  done
        mov  ecx, [esi+0x558]
        mov  ebx, [esp+0xC]
        push edi
        mov  edi, [esp+0x14]
        push edi
        mov  [esi+0x2D4], ecx
        push ebx
        mov  ecx, esi
        mov  dword ptr [esi+0x2D8], 0
        call FUN_10054d03d
        push edi
        push ebx
        mov  ecx, esi
        call FUN_10054d4c4
        push edi
        push ebx
        mov  ecx, esi
        call FUN_10054d9db
        push edi
        push ebx
        mov  ecx, esi
        call FUN_10054c562
        pop  edi
done:
        pop  esi
        pop  ebx
        ret  8
    }


}
