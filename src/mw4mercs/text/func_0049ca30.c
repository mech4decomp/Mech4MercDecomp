extern void __cdecl FUN_00494960(void);

__declspec(naked) void __fastcall FUN_0049ca30(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xa4]
        push    edi
        xor     edi, edi
        test    eax, eax
        jbe     l_call_dtor
    l_loop:
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x1c]
        mov     eax, dword ptr [esi + 0xa4]
        inc     edi
        cmp     edi, eax
        jb      l_loop
    l_call_dtor:
        mov     ecx, esi
        call    FUN_00494960
        pop     edi
        pop     esi
        ret
    }
}
