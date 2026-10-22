extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void func_004e15d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, [ecx+0x14]
        mov     ecx, [ebp+8]
        mov     edx, [ecx+eax*4+0xCC]
        test    edx, edx
        je      l_skip
        push    0x0076D414
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      l_skip
        int     3
l_skip:
        pop     ebp
        ret     4
    }
}
