/*
 * FUN_10036DF0 (321 B) - __stdcall, RET 0xc.  Enumerates a collection via
 * virtual calls ([vtable+0x48] fetch, [vtable+0xc] alloc, [vtable+0x70]
 * per-element, [vtable+0x14] release).  Validates args (E_INVALIDARG
 * 0x80070057), handles E_OUTOFMEMORY (0x8007000e) and the 0x80158100 /
 * 0x80158420 special HRESULTs.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10036DF0(void)
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
        je      L_36f24
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, esi
        je      L_36f24
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx], esi
        mov     dword ptr [eax], esi
L_36e21:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        push    1
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx + 0x48]
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        mov     ebp, eax
        je      L_36f0a
        test    ebp, ebp
        jge     L_36e75
        test    esi, esi
        je      L_36e56
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
L_36e56:
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, dword ptr [eax]
        shl     ecx, 2
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        test    esi, esi
        je      L_36e90
        cmp     ebp, 0x80158100
        je      L_36e21
        mov     ecx, dword ptr [esp + 0x10]
L_36e75:
        test    ecx, ecx
        je      L_36f0a
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, dword ptr [eax]
        shl     ecx, 2
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        mov     dword ptr [ebx], eax
        jne     L_36ea1
L_36e90:
        mov     ebp, 0x8007000e
        pop     edi
        mov     eax, ebp
        pop     ebp
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0xc
L_36ea1:
        mov     eax, dword ptr [esp + 0x10]
        xor     ebx, ebx
        test    eax, eax
        jbe     L_36efe
        nop
        __emit 0x8d   /* lea esp,[esp] alignment; MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
L_36eb0:
        mov     eax, dword ptr [edi + 0xc]
        push    0
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esi + ebx*4]
        push    ecx
        mov     dword ptr [esp + 0x28], 0
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x70]
        mov     ebp, eax
        cmp     ebp, 0x80158420
        je      L_36ef1
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je      L_36ef1
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, ebx
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ecx + edx*4], eax
        jmp     L_36ef5
L_36ef1:
        inc     dword ptr [esp + 0x14]
L_36ef5:
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, eax
        jb      L_36eb0
L_36efe:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x24]
        sub     eax, ecx
        mov     dword ptr [edx], eax
L_36f0a:
        test    esi, esi
        je      L_36f18
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi]
        push    esi
        push    edi
        call    dword ptr [eax + 0x14]
L_36f18:
        pop     edi
        mov     eax, ebp
        pop     ebp
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0xc
L_36f24:
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
