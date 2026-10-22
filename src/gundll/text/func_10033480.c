/*
 * FUN_10033480 (255 B) — __stdcall, RET 0x14.
 * Gathers a list of buffers into a contiguous allocation via a vtable allocator.
 */

extern void FUN_10037940(void);

__declspec(naked) void __stdcall FUN_10033480(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ebp + 0x14]
        push    esi
        mov     esi, dword ptr [ebp + 0xC]
        lea     eax, [ebx*0x4]
        add     eax, 0x3
        push    edi
        and     eax, 0xfffffffc
        call    FUN_10037940
        test    ebx, ebx
        mov     edi, dword ptr [ebp + 0x10]
        mov     edx, esp
        mov     dword ptr [ebp - 0x4], edx
        jle     loc_100334b8
        lea     eax, [edi + 0x4]
        mov     ecx, ebx
    loc_100334b0:
        add     esi, dword ptr [eax]
        add     eax, 0x8
        dec     ecx
        jnz     loc_100334b0
    loc_100334b8:
        xor     eax, eax
        test    ebx, ebx
        jle     loc_100334cd
        mov     edi, edi
    loc_100334c0:
        mov     ecx, dword ptr [edi + eax*0x8]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [edx + eax*0x4], ecx
        inc     eax
        cmp     eax, ebx
        jl      loc_100334c0
    loc_100334cd:
        mov     eax, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [edx + 0xC]
        mov     edx, eax
        test    edx, edx
        mov     dword ptr [ebp + 0x18], edx
        jz      loc_10033571
        mov     ecx, dword ptr [ebp + 0xC]
        xor     eax, eax
        test    ebx, ebx
        jle     loc_1003350d
        __emit 0x8D /* __emit: 3-byte alignment NOP lea ecx,[ecx]; MSVC6 collapses to 2-byte 8D 09 */
        __emit 0x49
        __emit 0x00
    loc_100334f0:
        mov     esi, dword ptr [ebp - 0x4]
        cmp     dword ptr [esi + eax*0x4], 0x0
        jz      loc_10033508
        mov     edi, dword ptr [edi + eax*0x8]
        lea     esi, [edx + ecx]
        mov     dword ptr [edi], esi
        mov     edi, dword ptr [ebp + 0x10]
        add     ecx, dword ptr [edi + eax*0x8 + 0x4]
    loc_10033508:
        inc     eax
        cmp     eax, ebx
        jl      loc_100334f0
    loc_1003350d:
        mov     ecx, dword ptr [ebp + 0xC]
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        mov     edx, eax
        xor     eax, eax
        test    ebx, ebx
        rep movsb
        jle     loc_10033562
        mov     ecx, dword ptr [ebp + 0x10]
        add     ecx, 0x4
        mov     dword ptr [ebp + 0xC], ecx
    loc_10033534:
        mov     ecx, dword ptr [ecx]
        mov     esi, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [esi + eax*0x4]
        mov     edi, dword ptr [ebp + 0x18]
        mov     ebx, ecx
        shr     ecx, 0x2
        add     edi, edx
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xC]
        add     edx, dword ptr [ecx]
        mov     esi, dword ptr [ebp + 0x14]
        inc     eax
        add     ecx, 0x8
        cmp     eax, esi
        mov     dword ptr [ebp + 0xC], ecx
        jl      loc_10033534
    loc_10033562:
        mov     eax, dword ptr [ebp + 0x18]
        lea     esp, [ebp - 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    loc_10033571:
        mov     eax, edx
        lea     esp, [ebp - 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
