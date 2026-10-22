/*
 * MW4 Mercenaries decompilation
 * Function: func_00545760
 * VA: 0x00545760
 * Size: 90 bytes
 * Calling convention: __stdcall
 */

__declspec(naked) void __stdcall func_00545760(void)
{
    extern void __cdecl FUN_00545700(void);
    __asm {
        mov  eax, [esp+4]
        push esi
        push edi
        push eax
        call FUN_00545700
        mov  ecx, [esp+0x14]
        push ecx
        mov  esi, eax
        call FUN_00545700
        add  esp, 8
        test esi, esi
        mov  edi, eax
        je   return_false
        test edi, edi
        je   return_false
        cmp  esi, edi
        jne  compare_loop
        pop  edi
        mov  al, 1
        pop  esi
        ret  8
compare_loop:
        mov  edx, [esi]
        mov  ecx, esi
        call dword ptr [edx+0x60]
        mov  esi, eax
        test esi, esi
        je   l_ret1
        mov  eax, [edi]
        mov  ecx, edi
        call dword ptr [eax+0x60]
        test eax, eax
        je   l_ret1
        cmp  eax, esi
        jne  return_false
    l_ret1:
        pop  edi
        mov  al, 1
        pop  esi
        ret  8
return_false:
        pop  edi
        xor  al, al
        pop  esi
        ret  8
    }
}
