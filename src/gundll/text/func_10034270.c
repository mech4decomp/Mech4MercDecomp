/* src/modules/gundll/sockets/func_10034270.c — FUN_10034270 (69 B) __stdcall, RET 0x4. */

extern void __cdecl FUN_10033ad0(void);

__declspec(naked) void __stdcall FUN_10034270(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        lea     edi, [esi - 0x18]
        mov     ecx, edi
        call    FUN_10033ad0
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [ecx + 0x4], eax
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x10]
        mov     ecx, dword ptr [esi + 0xc]
        mov     word ptr [ecx + 0x8], ax
        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, dword ptr [eax]
        push    ecx
        push    edi
        push    eax
        call    dword ptr [edx]
        test    edi, edi
        mov     esi, eax
        jz      L1
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
    L1:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
