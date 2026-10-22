/*
 * FUN_10032DA0 (321 B) - __stdcall, RET 0xc.  COM enumeration helper: calls
 * vtable[0x15] (@+0x54) to get a count, then loops calling vtable[0x1a]
 * (@+0x68) per element, collecting results into an output array.  Handles
 * E_PENDING (0x80158420) and E_OUTOFMEMORY (0x8007000e) / E_INVALIDARG
 * (0x80070057).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10032DA0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    esi
        xor     esi, esi
        cmp     ebx, esi
        mov     dword ptr [esp + 8], esi
        mov     dword ptr [esp + 0xc], esi
        je      L_ed4
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, esi
        je      L_ed4
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx], esi
        mov     dword ptr [eax], esi
    L_dd1:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        push    1
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx + 0x54]
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        mov     ebp, eax
        je      L_eba
        test    ebp, ebp
        jge     L_e25
        test    esi, esi
        je      L_e06
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
    L_e06:
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, dword ptr [eax]
        shl     ecx, 2
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        test    esi, esi
        je      L_e40
        cmp     ebp, 0x80158100
        je      L_dd1
        mov     ecx, dword ptr [esp + 0x10]
    L_e25:
        test    ecx, ecx
        je      L_eba
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, dword ptr [eax]
        shl     ecx, 2
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        mov     dword ptr [ebx], eax
        jne     L_e51
    L_e40:
        mov     ebp, 0x8007000e
        pop     edi
        mov     eax, ebp
        pop     ebp
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0xc
    L_e51:
        mov     eax, dword ptr [esp + 0x10]
        xor     ebx, ebx
        test    eax, eax
        jbe     L_eae
        nop
        __emit 0x8D   /* lea esp,[esp] -> 8D 64 24 00; MSVC6 drops zero disp */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_e60:
        mov     eax, dword ptr [edi + 0xc]
        push    0
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esi + ebx*4]
        push    ecx
        mov     dword ptr [esp + 0x28], 0
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x68]
        mov     ebp, eax
        cmp     ebp, 0x80158420
        je      L_ea1
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je      L_ea1
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, ebx
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ecx + edx*4], eax
        jmp     L_ea5
    L_ea1:
        inc     dword ptr [esp + 0x14]
    L_ea5:
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, eax
        jb      L_e60
    L_eae:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x24]
        sub     eax, ecx
        mov     dword ptr [edx], eax
    L_eba:
        test    esi, esi
        je      L_ec8
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi]
        push    esi
        push    edi
        call    dword ptr [eax + 0x14]
    L_ec8:
        pop     edi
        mov     eax, ebp
        pop     ebp
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0xc
    L_ed4:
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
