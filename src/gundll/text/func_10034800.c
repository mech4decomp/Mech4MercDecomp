/*
 * FUN_10034800 (343 B) — __stdcall, RET 0xC.
 * Enumerates/filters items via virtual calls, returns a filtered array.
 */

__declspec(naked) void __stdcall FUN_10034800(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    edi
        xor     edi, edi
        cmp     ebx, edi
        mov     dword ptr [esp + 0x8], edi
        mov     dword ptr [esp + 0xc], edi
        jz      L_1003494a
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, edi
        jz      L_1003494a
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx], edi
        mov     dword ptr [eax], edi
    L_10034831:
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x14]
        mov     eax, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ebp, [esp + 0x14]
        push    ebp
        push    edi
        push    ecx
        push    eax
        call    dword ptr [edx + 0x58]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_1003492d
        test    ebp, ebp
        jge     L_10034892
        test    edi, edi
        jz      L_10034870
        mov     eax, dword ptr [esi + 0x14]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     eax, dword ptr [esp + 0x10]
    L_10034870:
        mov     edx, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [edx + 0x10]
        mov     edx, dword ptr [ecx]
        shl     eax, 0x2
        push    eax
        push    ecx
        call    dword ptr [edx + 0xc]
        mov     edi, eax
        test    edi, edi
        jz      L_100348b0
        cmp     ebp, 0x80158100
        jz      L_10034831
        mov     eax, dword ptr [esp + 0x10]
    L_10034892:
        test    eax, eax
        jz      L_1003492d
        mov     ecx, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ecx]
        shl     eax, 0x2
        push    eax
        push    ecx
        call    dword ptr [edx + 0xc]
        test    eax, eax
        mov     dword ptr [ebx], eax
        jnz     L_100348c1
    L_100348b0:
        mov     ebp, 0x8007000e
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     edi
        pop     ebx
        add     esp, 0x8
        ret     0xc
    L_100348c1:
        mov     eax, dword ptr [esp + 0x10]
        xor     ebx, ebx
        test    eax, eax
        jbe     L_10034921
        nop
        __emit 0x8D   /* __emit: lea esp,[esp] alignment NOP; MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_100348d0:
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x1c], 0x0
        mov     eax, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [eax]
        push    0x0
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [edi + ebx*0x4]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x68]
        mov     ebp, eax
        cmp     ebp, 0x80158420
        jz      L_10034914
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_10034914
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, ebx
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ecx + edx*0x4], eax
        jmp     L_10034918
    L_10034914:
        inc     dword ptr [esp + 0x14]
    L_10034918:
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, eax
        jc      L_100348d0
    L_10034921:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x24]
        sub     eax, ecx
        mov     dword ptr [edx], eax
    L_1003492d:
        test    edi, edi
        jz      L_1003493e
        mov     eax, dword ptr [esi + 0x14]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [ecx + 0x14]
    L_1003493e:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     edi
        pop     ebx
        add     esp, 0x8
        ret     0xc
    L_1003494a:
        pop     edi
        mov     eax, 0x80070057
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
