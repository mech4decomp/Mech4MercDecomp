/*
 * FUN_006f8590 (807 B) — __thiscall recursive quicksort (RET 0xC).
 *
 * Sorts an array of 8-byte records by comparing either a string field
 * (via _mbscmp) or an integer field, depending on the sort-type field
 * at this+0x28. Recurses on the two partitions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b300;   /* IAT: _mbscmp */

__declspec(naked) void __stdcall FUN_006f8590(void)
{
    __asm {
        sub     esp, 8
        mov     edx, dword ptr [esp + 0x14]
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, edx
        mov     dword ptr [esp + 8], ecx
        jge     L_88b0
        push    ebp
        push    esi
        push    edi
        jmp     L_85b1
    L_85ad:
        mov     edx, dword ptr [esp + 0x24]
    L_85b1:
        mov     eax, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax + 0x28]
        test    eax, eax
        mov     edi, ebx
        mov     esi, edx
        mov     dword ptr [esp + 0x10], eax
        jz      L_8730
        cmp     eax, 1
        jz      L_8730
        jmp     L_85d7
    L_85d3:
        mov     edx, dword ptr [esp + 0x24]
    L_85d7:
        cmp     dword ptr [esp + 0x10], 2
        jnz     L_8664
        cmp     edi, edx
        jge     L_8620
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ecx]
        mov     edx, dword ptr [ebp + ebx*8 + 4]
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x20], eax
        lea     ebp, [ebp + edi*8 + 4]
    L_85fb:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [edx + 4]
        push    ecx
        push    eax
        call    dword ptr [g_76b300]
        add     esp, 8
        test    eax, eax
        jg      L_8620
        mov     eax, dword ptr [esp + 0x24]
        inc     edi
        add     ebp, 8
        cmp     edi, eax
        jl      L_85fb
    L_8620:
        cmp     esi, ebx
        jle     L_86dc
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ecx]
        mov     edx, dword ptr [ebp + ebx*8 + 4]
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x20], eax
        lea     ebp, [ebp + esi*8 + 4]
    L_863d:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [edx + 4]
        push    ecx
        push    eax
        call    dword ptr [g_76b300]
        add     esp, 8
        test    eax, eax
        jle     L_86dc
        dec     esi
        sub     ebp, 8
        cmp     esi, ebx
        jg      L_863d
        jmp     L_86dc
    L_8664:
        cmp     edi, edx
        jge     L_86a2
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ecx]
        mov     edx, dword ptr [ebp + ebx*8 + 4]
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x20], eax
        lea     ebp, [ebp + edi*8 + 4]
    L_867d:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [edx + 4]
        push    ecx
        push    eax
        call    dword ptr [g_76b300]
        add     esp, 8
        test    eax, eax
        jle     L_86a2
        mov     eax, dword ptr [esp + 0x24]
        inc     edi
        add     ebp, 8
        cmp     edi, eax
        jl      L_867d
    L_86a2:
        cmp     esi, ebx
        jle     L_86dc
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ecx]
        mov     edx, dword ptr [ebp + ebx*8 + 4]
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x20], eax
        lea     ebp, [ebp + esi*8 + 4]
    L_86bb:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [edx + 4]
        push    ecx
        push    eax
        call    dword ptr [g_76b300]
        add     esp, 8
        test    eax, eax
        jg      L_86dc
        dec     esi
        sub     ebp, 8
        cmp     esi, ebx
        jg      L_86bb
    L_86dc:
        cmp     edi, esi
        jge     L_880b
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ecx]
        mov     edx, dword ptr [ebp + edi*8 + 4]
        mov     eax, dword ptr [edx + 4]
        mov     ecx, dword ptr [ebp + esi*8 + 4]
        mov     edx, dword ptr [ecx + 4]
        push    eax
        push    edx
        call    dword ptr [g_76b300]
        add     esp, 8
        test    eax, eax
        jz      L_85d3
        mov     edx, dword ptr [ebp + esi*8]
        mov     eax, dword ptr [ebp + edi*8]
        mov     ecx, dword ptr [ebp + edi*8 + 4]
        mov     dword ptr [ebp + edi*8], edx
        mov     edx, dword ptr [ebp + esi*8 + 4]
        mov     dword ptr [ebp + edi*8 + 4], edx
        mov     dword ptr [ebp + esi*8], eax
        mov     dword ptr [ebp + esi*8 + 4], ecx
        jmp     L_85d3
    L_8730:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jnz     L_8782
        cmp     edi, edx
        jge     L_875c
        mov     eax, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + ebx*8 + 4]
        mov     ecx, dword ptr [ecx + 8]
        lea     eax, [eax + edi*8 + 4]
    L_874d:
        mov     ebp, dword ptr [eax]
        cmp     dword ptr [ebp + 8], ecx
        jg      L_875c
        inc     edi
        add     eax, 8
        cmp     edi, edx
        jl      L_874d
    L_875c:
        cmp     esi, ebx
        jle     L_87ca
        mov     eax, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + ebx*8 + 4]
        mov     ecx, dword ptr [ecx + 8]
        lea     eax, [eax + esi*8 + 4]
    L_8771:
        mov     ebp, dword ptr [eax]
        cmp     dword ptr [ebp + 8], ecx
        jle     L_87ca
        dec     esi
        sub     eax, 8
        cmp     esi, ebx
        jg      L_8771
        jmp     L_87ca
    L_8782:
        cmp     edi, edx
        jge     L_87a6
        mov     eax, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + ebx*8 + 4]
        mov     ecx, dword ptr [ecx + 8]
        lea     eax, [eax + edi*8 + 4]
    L_8797:
        mov     ebp, dword ptr [eax]
        cmp     dword ptr [ebp + 8], ecx
        jle     L_87a6
        inc     edi
        add     eax, 8
        cmp     edi, edx
        jl      L_8797
    L_87a6:
        cmp     esi, ebx
        jle     L_87ca
        mov     eax, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + ebx*8 + 4]
        mov     ecx, dword ptr [ecx + 8]
        lea     eax, [eax + esi*8 + 4]
    L_87bb:
        mov     ebp, dword ptr [eax]
        cmp     dword ptr [ebp + 8], ecx
        jg      L_87ca
        dec     esi
        sub     eax, 8
        cmp     esi, ebx
        jg      L_87bb
    L_87ca:
        cmp     edi, esi
        jge     L_880b
        mov     eax, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + esi*8 + 4]
        mov     ebp, dword ptr [eax + edi*8 + 4]
        mov     ecx, dword ptr [ecx + 8]
        cmp     ecx, dword ptr [ebp + 8]
        jz      L_8730
        mov     ecx, dword ptr [eax + edi*8]
        mov     edx, ebp
        mov     ebp, dword ptr [eax + esi*8]
        mov     dword ptr [eax + edi*8], ebp
        mov     ebp, dword ptr [eax + esi*8 + 4]
        mov     dword ptr [eax + edi*8 + 4], ebp
        mov     dword ptr [eax + esi*8], ecx
        mov     dword ptr [eax + esi*8 + 4], edx
        mov     edx, dword ptr [esp + 0x24]
        jmp     L_8730
    L_880b:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_8859
        cmp     eax, 1
        jz      L_8859
        mov     edx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [edx]
        mov     eax, dword ptr [edi + esi*8 + 4]
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [edi + ebx*8 + 4]
        mov     eax, dword ptr [edx + 4]
        push    ecx
        push    eax
        call    dword ptr [g_76b300]
        add     esp, 8
        test    eax, eax
        jz      L_888b
        mov     edx, dword ptr [edi + esi*8]
        mov     eax, dword ptr [edi + ebx*8]
        mov     ecx, dword ptr [edi + ebx*8 + 4]
        mov     dword ptr [edi + ebx*8], edx
        mov     edx, dword ptr [edi + esi*8 + 4]
        mov     dword ptr [edi + ebx*8 + 4], edx
        mov     dword ptr [edi + esi*8], eax
        mov     dword ptr [edi + esi*8 + 4], ecx
        jmp     L_888b
    L_8859:
        mov     eax, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + ebx*8 + 4]
        mov     edx, dword ptr [eax + esi*8 + 4]
        mov     ecx, dword ptr [ecx + 8]
        cmp     ecx, dword ptr [edx + 8]
        jz      L_888b
        mov     edi, dword ptr [eax + esi*8]
        mov     ecx, dword ptr [eax + ebx*8]
        mov     edx, dword ptr [eax + ebx*8 + 4]
        mov     dword ptr [eax + ebx*8], edi
        mov     edi, dword ptr [eax + esi*8 + 4]
        mov     dword ptr [eax + ebx*8 + 4], edi
        mov     dword ptr [eax + esi*8], ecx
        mov     dword ptr [eax + esi*8 + 4], edx
    L_888b:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [esi - 1]
        push    edx
        push    ebx
        push    eax
        call    FUN_006f8590
        mov     eax, dword ptr [esp + 0x24]
        lea     ebx, [esi + 1]
        cmp     ebx, eax
        jl      L_85ad
        pop     edi
        pop     esi
        pop     ebp
    L_88b0:
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
