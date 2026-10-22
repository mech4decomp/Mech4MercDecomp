// FUN_0059db40 - __stdcall: copy dword-aligned data from src to dst
// Returns dst + bytes_copied

__declspec(naked) void __stdcall FUN_0059db40(void)
{
    __asm {
        mov     edx, [esp + 8]
        mov     eax, [esp + 0xC]
        push    esi
        mov     esi, [esp + 8]
        sub     edx, esi
        sar     edx, 2
        test    edx, edx
        jle     L1
        push    edi
        mov     edi, eax
        mov     ecx, edx
        rep     movsd
        lea     eax, [eax + edx*4]
        pop     edi
    L1:
        pop     esi
        ret
    }
}
