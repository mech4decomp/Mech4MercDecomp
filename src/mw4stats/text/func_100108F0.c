/*
 * FUN_100108f0 (818 B, __thiscall RET 0x254) - SEH-guarded stats write
 * dispatcher. Builds wide-string buffers (from this->0x84/0x90 and the
 * param_11 string), calls a virtual method at this->0x78 vtable+0x14,
 * and returns an HRESULT-style code. Frees temporary buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10011830(void);
extern void __cdecl FUN_1000c8e0(void);
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_10011810(void);
extern void *g_100210f4;   /* IAT: wcslen */
extern void *g_100210ec;   /* IAT: free */
extern unsigned short g_10026408; /* wide string data */

__declspec(naked) void __cdecl FUN_100108f0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x1001fc81
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c8
        push    esi
        push    edi
        xor     edi, edi
        mov     esi, ecx
        cmp     eax, edi
        jnz     L_10930
        lea     eax, [esp + 0x20c]
        push    eax
        call    FUN_10011830
        mov     eax, 0x80040241
        jmp     L_10c09
    L_10930:
        cmp     eax, dword ptr [esi + 0x11c]
        ja      L_10a91
        cmp     dword ptr [esp + 0x1fc], edi
        ja      L_10a91
        mov     ecx, dword ptr [esp + 0x1f8]
        mov     edx, dword ptr [esp + 0x1f4]
        push    ecx
        push    edx
        push    esi
        call    FUN_1000c8e0
        cmp     eax, dword ptr [esi + 0x120]
        jbe     L_10980
        lea     eax, [esp + 0x20c]
        mov     ecx, esi
        push    eax
        call    FUN_10011830
        mov     eax, 0x80040243
        jmp     L_10c09
    L_10980:
        mov     dword ptr [esp + 0xa0], edi
        mov     dword ptr [esp + 0xa4], edi
        mov     dword ptr [esp + 0xa8], edi
        mov     dword ptr [esp + 0xac], edi
        mov     dword ptr [esp + 0xb0], edi
        mov     dword ptr [esp + 0xb4], 0x400
        mov     eax, dword ptr [esi + 0x90]
        mov     dword ptr [esp + 0x1d8], 2
        cmp     eax, edi
        jbe     L_109d7
        mov     ecx, dword ptr [esi + 0x84]
        push    eax
        push    ecx
        lea     ecx, [esp + 0xa8]
        call    FUN_100016b0
    L_109d7:
        lea     edx, [esp + 0x20c]
        test    edx, edx
        jz      L_10a14
        cmp     word ptr [esp + 0x20c], di
        jz      L_10a14
        lea     eax, [esp + 0x20c]
        push    eax
        call    dword ptr [g_100210f4]      /* wcslen */
        add     esp, 4
        lea     ecx, [esp + 0x20c]
        shl     eax, 1
        push    eax
        push    ecx
        lea     ecx, [esp + 0xa8]
        call    FUN_100016b0
    L_10a14:
        mov     eax, dword ptr [esp + 0xac]
        cmp     eax, edi
        mov     eax, dword ptr [esp + 0xa0]
        ja      L_10a2b
        mov     eax, 0x100274ec
    L_10a2b:
        mov     ecx, dword ptr [esi + 0x78]
        push    0x80000000
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        mov     ecx, dword ptr [esp + 0x430]
        cmp     eax, -1
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0xac]
        jnz     L_10a71
        cmp     eax, edi
        jbe     L_10a67
        mov     eax, dword ptr [esp + 0xa0]
        cmp     eax, edi
        jz      L_10a67
        push    eax
        call    dword ptr [g_100210ec]      /* free */
        add     esp, 4
    L_10a67:
        mov     eax, 0x80040244
        jmp     L_10c09
    L_10a71:
        cmp     eax, edi
        jbe     L_10a8a
        mov     eax, dword ptr [esp + 0xa0]
        cmp     eax, edi
        jz      L_10a8a
        push    eax
        call    dword ptr [g_100210ec]      /* free */
        add     esp, 4
    L_10a8a:
        xor     eax, eax
        jmp     L_10c09
    L_10a91:
        mov     dword ptr [esp + 0x138], edi
        mov     dword ptr [esp + 0x13c], edi
        mov     dword ptr [esp + 0x140], edi
        mov     dword ptr [esp + 0x144], edi
        mov     dword ptr [esp + 0x148], edi
        mov     dword ptr [esp + 0x14c], 0x400
        mov     eax, dword ptr [esi + 0x90]
        mov     dword ptr [esp + 0x1d8], edi
        cmp     eax, edi
        jbe     L_10ae4
        mov     ecx, dword ptr [esi + 0x84]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x140]
        call    FUN_100016b0
    L_10ae4:
        lea     edx, [esp + 0x20c]
        push    ebx
        mov     ebx, dword ptr [g_100210f4]
        test    edx, edx
        jz      L_10b24
        cmp     word ptr [esp + 0x210], di
        jz      L_10b24
        lea     eax, [esp + 0x210]
        push    eax
        call    ebx
        add     esp, 4
        lea     ecx, [esp + 0x210]
        shl     eax, 1
        push    eax
        push    ecx
        lea     ecx, [esp + 0x144]
        call    FUN_100016b0
    L_10b24:
        mov     dword ptr [esp + 0xc], edi
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x20], 0x400
        mov     eax, dword ptr [esp + 0x148]
        mov     byte ptr [esp + 0x1dc], 1
        cmp     eax, edi
        jbe     L_10b65
        mov     edx, dword ptr [esp + 0x13c]
        push    eax
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_100016b0
    L_10b65:
        mov     eax, 0x10026408
        test    eax, eax
        jz      L_10b8e
        cmp     word ptr [g_10026408], di
        jz      L_10b8e
        push    eax
        call    ebx
        add     esp, 4
        lea     ecx, [esp + 0xc]
        shl     eax, 1
        push    eax
        push    0x10026408
        call    FUN_100016b0
    L_10b8e:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0xc]
        cmp     eax, edi
        pop     ebx
        ja      L_10ba0
        mov     ecx, 0x100274ec
    L_10ba0:
        mov     eax, dword ptr [esp + 0x144]
        cmp     eax, edi
        mov     eax, dword ptr [esp + 0x138]
        ja      L_10bb7
        mov     eax, 0x100274ec
    L_10bb7:
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_10011810
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [g_100210ec]
        cmp     eax, edi
        jbe     L_10bdc
        mov     eax, dword ptr [esp + 8]
        cmp     eax, edi
        jz      L_10bdc
        push    eax
        call    esi
        add     esp, 4
    L_10bdc:
        mov     eax, dword ptr [esp + 0x144]
        mov     dword ptr [esp + 8], edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x14], edi
        jbe     L_10c04
        mov     eax, dword ptr [esp + 0x138]
        cmp     eax, edi
        jz      L_10c04
        push    eax
        call    esi
        add     esp, 4
    L_10c04:
        mov     eax, 0x80040242
    L_10c09:
        mov     ecx, dword ptr [esp + 0x1d0]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x1d4
        ret     0x254
    }
}
