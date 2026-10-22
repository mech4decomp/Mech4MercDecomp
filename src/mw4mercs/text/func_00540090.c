/*
 * MW4 Mercenaries decompilation
 * Function: func_00540090
 * VA: 0x00540090
 * Size: 99 bytes
 * Calling convention: __thiscall
 */

__declspec(naked) void func_00540090(void)
{
    

extern void __cdecl FUN_005400e9(void);
extern void __cdecl FUN_005402f5(void);
extern void __cdecl FUN_005475a2(void);
extern void __cdecl FUN_005475eb(void);
__asm {
push ebx
        mov  ebx, ecx
        mov  al, [ebx+0x16]
        test al, al
        je   check_alt
        push esi
        push edi
        xor  esi, esi
        lea  edi, [ebx+0x3539]
loop1:
        cmp  byte ptr [edi], 0
        jne  skip1
        push esi
        mov  ecx, ebx
        call FUN_005400e9
skip1:
        inc  esi
        add  edi, 0x2038
        cmp  esi, 0xFF
        jl   loop1
        xor  esi, esi
        lea  edi, [ebx+0x205F35]
loop2:
        cmp  byte ptr [edi], 0
        jne  skip2
        push esi
        mov  ecx, ebx
        call FUN_005402f5
skip2:
        inc  esi
        add  edi, 0x22AC
        cmp  esi, 0x18
        jl   loop2
        mov  ecx, ebx
        call FUN_005475a2
        mov  ecx, ebx
        call FUN_005475eb
        pop  edi
        pop  esi
check_alt:
        pop  ebx
        ret
    }


}
