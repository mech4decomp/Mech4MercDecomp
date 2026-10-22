extern int __cdecl FUN_0040ecc0(int);
extern void __cdecl FUN_00411cb0(void);

__declspec(naked) void func_004d3460(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, [esp+8]
        push    0x007727B4
        call    FUN_0040ecc0
        test    eax, eax
        je      l_skip
        push    0
        add     esi, 0x1C
        push    esi
        push    0x00772790
        mov     ecx, eax
        call    FUN_00411cb0
l_skip:
        pop     esi
        ret     4
    }
}
