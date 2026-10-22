extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004e46e0(void);

__declspec(naked) void func_004e4870(void)
{
    __asm {
        push    0x28
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      l_fail
        mov     ecx, [esp+8]
        mov     edx, [esp+4]
        push    ecx
        _emit 0x8B
        _emit 0x0D
        _emit 0x34
        _emit 0xC7
        _emit 0x7D
        _emit 0x00
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004e46e0
        ret
l_fail:
        xor     eax, eax
        ret
    }
}
