/*
 * FUN_1001bf80 (127 B) — __stdcall, RET 0xC. Iterates a hash-list of
 * 16-byte nodes, invoking a caller-supplied callback (stack fn ptr) on
 * each; returns 1 on full scan, 0 if callback aborted.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001bf80(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        mov     edx, dword ptr [ebx + 0x28]
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebx], ax
        push    esi
        push    edi
        mov     dword ptr [ebx + 0x28], edx
        mov     dword ptr [esp + 0x10], eax
        jbe     L_bfe1
        __emit 0x8D  /* __emit: MSVC6 emits 8D 24 24 for lea esp,[esp]; ref uses 7-byte NOP 8D A4 24 00 00 00 00 */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_bfa0:
        mov     edx, dword ptr [ebx + 4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 4
        mov     esi, dword ptr [edi + edx]
        add     edi, edx
        cmp     esi, edi
        jz      L_bfd7
    L_bfb4:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_bfcd
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + 8]
        push    eax
        push    esi
        push    ecx
        call    dword ptr [esp + 0x20]
        test    al, al
        jz      L_bff0
    L_bfcd:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_bfb4
        mov     eax, dword ptr [esp + 0x10]
    L_bfd7:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        jc      L_bfa0
    L_bfe1:
        mov     eax, dword ptr [ebx + 0x28]
        pop     edi
        dec     eax
        mov     dword ptr [ebx + 0x28], eax
        pop     esi
        mov     al, 1
        pop     ebx
        ret     0xc
    L_bff0:
        mov     eax, dword ptr [ebx + 0x28]
        pop     edi
        dec     eax
        mov     dword ptr [ebx + 0x28], eax
        pop     esi
        xor     al, al
        pop     ebx
        ret     0xc
    }
}
