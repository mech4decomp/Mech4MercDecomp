/*
 * FUN_1000b850 (784 B) - __cdecl. HTML-escapes a wide string param_1 into a
 * growable buffer struct param_2 (offsets: +0x0=data, +0xc=len, +0x10=cap,
 * +0x14=alloc_granularity). Replaces & < > ' " with entity strings from the
 * .rdata table at 0x10024878..0x100248b0. Returns 1 on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210ec;            /* free IAT @ 0x100210ec */
extern void *g_100210f4;            /* wcslen IAT @ 0x100210f4 */
extern void *g_100210f8;            /* malloc IAT @ 0x100210f8 */
extern unsigned short g_100248b0[]; /* L"&amp;"  @ 0x100248b0 */
extern unsigned short g_100248a4[]; /* L"&lt;"   @ 0x100248a4 */
extern unsigned short g_10024898[]; /* L"&gt;"   @ 0x10024898 */
extern unsigned short g_10024888[]; /* L"&apos;" @ 0x10024888 */
extern unsigned short g_10024878[]; /* L"&quot;" @ 0x10024878 */
extern void FUN_100016b0(void);
extern void FUN_100011a0(void);

__declspec(naked) unsigned int FUN_1000b850(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jnz     L861
        pop     edi
        xor     al, al
        pop     esi
        ret
L861:
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        mov     ebx, esi
        mov     dword ptr [esp + 0x14], ebx
        cmp     dword ptr [ebp + 0xc], edi
        jbe     L883
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L883
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L883:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        cmp     word ptr [esi], di
        jz      LBB59
L895:
        mov     ax, word ptr [ebx]
        cmp     ax, 0x26
        jnz     L8D6
        mov     eax, offset g_100248b0
        test    eax, eax
        jz      LBB45
        cmp     word ptr [g_100248b0], di
        jz      LBB45
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebp
        shl     eax, 0x1
        push    eax
        push    offset g_100248b0
        call    FUN_100016b0
        jmp     LBB45
L8D6:
        cmp     ax, 0x3c
        jnz     L914
        mov     ecx, offset g_100248a4
        test    ecx, ecx
        jz      LBB45
        cmp     word ptr [g_100248a4], di
        jz      LBB45
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebp
        shl     eax, 0x1
        push    eax
        push    offset g_100248a4
        call    FUN_100016b0
        jmp     LBB45
L914:
        cmp     ax, 0x3e
        jnz     L952
        mov     edx, offset g_10024898
        test    edx, edx
        jz      LBB45
        cmp     word ptr [g_10024898], di
        jz      LBB45
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebp
        shl     eax, 0x1
        push    eax
        push    offset g_10024898
        call    FUN_100016b0
        jmp     LBB45
L952:
        cmp     ax, 0x27
        jnz     L990
        mov     eax, offset g_10024888
        test    eax, eax
        jz      LBB45
        cmp     word ptr [g_10024888], di
        jz      LBB45
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebp
        shl     eax, 0x1
        push    eax
        push    offset g_10024888
        call    FUN_100016b0
        jmp     LBB45
L990:
        cmp     ax, 0x22
        jnz     LBA85
        mov     ecx, offset g_10024878
        test    ecx, ecx
        jz      LBB45
        cmp     word ptr [g_10024878], di
        jz      LBB45
        push    ecx
        call    dword ptr [g_100210f4]
        mov     ebx, eax
        add     esp, 0x4
        shl     ebx, 0x1
        jz      LBB45
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [edx + ebx*1 + 0x2]
        cmp     eax, ecx
        jbe     LBA47
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     edx, eax
        add     esp, 0x4
        cmp     edx, edi
        mov     dword ptr [esp + 0x18], edx
        jnz     L9FE
        mov     ecx, ebp
        call    FUN_100011a0
        jmp     LBB45
L9FE:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     LBA44
        mov     esi, dword ptr [ebp]
        mov     eax, ecx
        mov     edi, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        xor     eax, eax
        and     ecx, 0x3
        rep movsb
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, esi
        lea     edi, [esi + edx*1]
        mov     edx, ecx
        shr     ecx, 0x2
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0x4
LBA44:
        mov     dword ptr [ebp], edx
LBA47:
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp]
        mov     ecx, ebx
        add     edi, edx
        mov     edx, ecx
        mov     esi, offset g_10024878
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp]
        add     eax, ebx
        xor     edi, edi
        mov     dword ptr [ebp + 0xc], eax
        mov     byte ptr [eax + ecx*1], 0x0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax*1 + 0x1], 0x0
        jmp     LBB45
LBA85:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [ebp + 0xc]
        add     eax, 0x4
        cmp     eax, ecx
        jbe     LBB1A
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     ebx, eax
        add     esp, 0x4
        cmp     ebx, edi
        jnz     LBAD3
        cmp     dword ptr [ebp + 0xc], edi
        jbe     LBAC8
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      LBAC8
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
LBAC8:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     LBB45
LBAD3:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     LBB17
        mov     esi, dword ptr [ebp]
        mov     edx, ecx
        mov     edi, ebx
        xor     eax, eax
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebx*1]
        mov     edx, ecx
        shr     ecx, 0x2
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
        xor     edi, edi
LBB17:
        mov     dword ptr [ebp], ebx
LBB1A:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp]
        add     ecx, edx
        mov     dx, word ptr [esp + 0x18]
        mov     word ptr [ecx], dx
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp]
        add     eax, 0x2
        mov     dword ptr [ebp + 0xc], eax
        mov     byte ptr [eax + ecx*1], 0x0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax*1 + 0x1], 0x0
LBB45:
        mov     ebx, dword ptr [esp + 0x14]
        add     ebx, 0x2
        mov     dword ptr [esp + 0x14], ebx
        cmp     word ptr [ebx], di
        jnz     L895
LBB59:
        pop     ebp
        pop     ebx
        pop     edi
        mov     al, 0x1
        pop     esi
        ret
    }
}
