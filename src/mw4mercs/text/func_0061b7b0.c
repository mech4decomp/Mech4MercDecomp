/*
 * FUN_0061B7B0 (92 B) — Object update helper.
 *
 * __fastcall (ECX = this), RET 4 (one stack param).
 * Calls a virtual method on this->+0x30, then conditionally calls
 * another virtual method pair.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0061b7b0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [ecx + 0x30]
        mov     eax, dword ptr [esi]
        push    edi
        push    0
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0x18]
        mov     edi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi]
        sub     ecx, eax
        push    4
        lea     eax, [esp + 0xc]
        mov     dword ptr [esi + 8], 0xffffffec
        mov     dword ptr [esp + 0xc], ecx
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jle     l_806
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ebx, dword ptr [edi]
        sub     ecx, eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        push    eax
        mov     ecx, edi
        call    dword ptr [ebx + 0x24]
        pop     ebx
    l_806:
        pop     edi
        pop     esi
        pop     ecx
        ret     4
    }
}
