/*
 * func_00518280 @ 0x00518280 (61B)
 */
__declspec(naked) void func_00518280()
{
    

extern void __cdecl FUN_10041256a(void);
extern void __cdecl FUN_1005178c5(void);
extern void __cdecl FUN_006140aa(void);
__asm {
push esi
        mov  esi, ecx
        push ecx
        mov  ecx, esp
        push 0x779f54
        call FUN_10041256a
        call FUN_1005178c5
        mov  ecx, [eax+0x84]
        call FUN_006140aa
        mov  cx, word ptr [eax+0x10]
        mov  ax, word ptr [eax+0x12]
        mov  word ptr [esi+0x4097E], ax
        mov  word ptr [esi+0x4097C], cx
        mov  eax, 1
        pop  esi
        ret
    }


}
