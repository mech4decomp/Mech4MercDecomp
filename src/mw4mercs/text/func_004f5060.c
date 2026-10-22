extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(int);

__declspec(naked) void func_004f5060(void)
{
    __asm {
        mov     edx, [ecx+0x10]
        push    esi
        or      edx, 0x1000000
        lea     esi, [ecx+0x218]
        mov     [ecx+0x10], edx
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     eax, [esp+8]
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
        pop     esi
        ret     4
    }
}
