/*
 * FUN_100062a0 (127 B) - __stdcall, RET 0xc.
 * Hash-table lookup: increments the +0x28 refcount, walks each bucket
 * calling the callback (param_2) on each node; returns 1 if a match is
 * found, 0 otherwise, decrementing the refcount on exit.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100062a0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ebx + 0x28]
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebx], ax
        push    esi
        push    edi
        mov     dword ptr [ebx + 0x28], edx
        mov     dword ptr [esp + 0x10], eax
        jbe     L_6301
        /* __emit: 7-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_62c0:
        mov     edx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + edx]
        add     edi, edx
        cmp     esi, edi
        jz      L_62f7
    L_62d4:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_62ed
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + 0x8]
        push    eax
        push    esi
        push    ecx
        call    dword ptr [esp + 0x20]
        test    al, al
        jz      L_6310
    L_62ed:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_62d4
        mov     eax, dword ptr [esp + 0x10]
    L_62f7:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        jc      L_62c0
    L_6301:
        mov     eax, dword ptr [ebx + 0x28]
        pop     edi
        dec     eax
        mov     dword ptr [ebx + 0x28], eax
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret     0xc
    L_6310:
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
