/*
 * FUN_1000bb60 (886 B) - __cdecl. Recursively walks a tree of objects
 * (param_1, an object with a vtable) and appends HTML-escaped text to the
 * growable buffer struct param_2 (offsets: +0x0=data, +0xc=len, +0x10=cap,
 * +0x14=alloc_granularity). Uses entity strings from .rdata.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;            /* wcslen IAT @ 0x100210f4 */
extern void *g_100210f8;            /* malloc IAT @ 0x100210f8 */
extern void *g_100210ec;            /* free IAT @ 0x100210ec */
extern unsigned short g_100245a8[]; /* @ 0x100245a8 */
extern unsigned short g_100262d8[]; /* @ 0x100262d8 */
extern unsigned short g_100262d0[]; /* @ 0x100262d0 */
extern unsigned short g_100262cc[]; /* @ 0x100262cc */
extern unsigned short g_100262c4[]; /* @ 0x100262c4 */
extern unsigned short g_10024ed8[]; /* @ 0x10024ed8 */
extern unsigned short g_10024ed0[]; /* @ 0x10024ed0 */
extern void FUN_100016b0(void);
extern void FUN_100011a0(void);
extern void FUN_1000bb60(void);

__declspec(naked) void FUN_1000bb60(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, offset g_100245a8
        push    ebp
        push    esi
        push    edi
        test    eax, eax
        jz      LBB95
        cmp     word ptr [g_100245a8], 0
        jz      LBB95
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    offset g_100245a8
        call    FUN_100016b0
LBB95:
        mov     esi, dword ptr [esp + 0x18]
        mov     ecx, esi
        mov     edx, dword ptr [esi]
        call    dword ptr [edx + 0x4]
        mov     edi, eax
        test    edi, edi
        jz      LBBC1
        cmp     word ptr [edi], 0
        jz      LBBC1
        push    edi
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    edi
        call    FUN_100016b0
LBBC1:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], 0
        jbe     LBCE1
LBBE2:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
        mov     edx, offset g_100262d8
        mov     edi, eax
        test    edx, edx
        jz      LBC23
        cmp     word ptr [g_100262d8], 0
        jz      LBC23
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    offset g_100262d8
        call    FUN_100016b0
LBC23:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     esi, eax
        test    esi, esi
        jz      LBC4F
        cmp     word ptr [esi], 0
        jz      LBC4F
        mov     ebp, dword ptr [g_100210f4]
        push    esi
        call    ebp
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    esi
        call    FUN_100016b0
        jmp     LBC55
LBC4F:
        mov     ebp, dword ptr [g_100210f4]
LBC55:
        mov     ecx, offset g_100262d0
        test    ecx, ecx
        jz      LBC7D
        cmp     word ptr [g_100262d0], 0
        jz      LBC7D
        push    ecx
        call    ebp
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    offset g_100262d0
        call    FUN_100016b0
LBC7D:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx]
        mov     esi, eax
        test    esi, esi
        jz      LBCA0
        cmp     word ptr [esi], 0
        jz      LBCA0
        push    esi
        call    ebp
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    esi
        call    FUN_100016b0
LBCA0:
        mov     eax, offset g_100262cc
        test    eax, eax
        jz      LBCC8
        cmp     word ptr [g_100262cc], 0
        jz      LBCC8
        push    eax
        call    ebp
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    offset g_100262cc
        call    FUN_100016b0
LBCC8:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x18]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jc      LBBE2
LBCE1:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     edi, eax
        mov     ecx, edi
        mov     eax, dword ptr [edi]
        call    dword ptr [eax]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jnz     LBD31
        mov     ecx, offset g_100262c4
        test    ecx, ecx
        jz      LBED0
        cmp     word ptr [g_100262c4], ax
        jz      LBED0
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    offset g_100262c4
        call    FUN_100016b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
LBD31:
        mov     edx, offset g_10024ed8
        test    edx, edx
        jz      LBD61
        cmp     word ptr [g_10024ed8], 0
        jz      LBD61
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    offset g_10024ed8
        call    FUN_100016b0
        mov     eax, dword ptr [esp + 0x1c]
LBD61:
        xor     ebp, ebp
        test    eax, eax
        jbe     LBD94
LBD67:
        mov     eax, dword ptr [edi]
        push    ebp
        mov     ecx, edi
        call    dword ptr [eax + 0x18]
        mov     esi, eax
        push    0x0
        mov     ecx, esi
        mov     edx, dword ptr [esi]
        call    dword ptr [edx]
        test    al, al
        jz      LBD87
        push    ebx
        push    esi
        call    FUN_1000bb60
        add     esp, 0x8
LBD87:
        mov     eax, dword ptr [esp + 0x1c]
        inc     ebp
        cmp     ebp, eax
        jc      LBD67
        mov     esi, dword ptr [esp + 0x18]
LBD94:
        mov     eax, offset g_10024ed0
        test    eax, eax
        jz      LBDC4
        cmp     word ptr [g_10024ed0], 0
        jz      LBDC4
        mov     edi, dword ptr [g_100210f4]
        push    eax
        call    edi
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    offset g_10024ed0
        call    FUN_100016b0
        jmp     LBDCA
LBDC4:
        mov     edi, dword ptr [g_100210f4]
LBDCA:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     esi, eax
        test    esi, esi
        jz      LBDEE
        cmp     word ptr [esi], 0
        jz      LBDEE
        push    esi
        call    edi
        add     esp, 0x4
        mov     ecx, ebx
        shl     eax, 0x1
        push    eax
        push    esi
        call    FUN_100016b0
LBDEE:
        mov     eax, offset g_10024ed8
        test    eax, eax
        jz      LBED0
        cmp     word ptr [g_10024ed8], 0
        jz      LBED0
        push    eax
        call    edi
        mov     esi, eax
        add     esp, 0x4
        shl     esi, 0x1
        mov     dword ptr [esp + 0x18], esi
        jz      LBED0
        mov     ecx, dword ptr [ebx + 0xc]
        lea     eax, [ecx + esi*1 + 0x2]
        mov     ecx, dword ptr [ebx + 0x10]
        cmp     eax, ecx
        jbe     LBE96
        mov     edx, dword ptr [ebx + 0x14]
        add     eax, edx
        push    eax
        mov     dword ptr [ebx + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jnz     LBE50
        mov     ecx, ebx
        call    FUN_100011a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
LBE50:
        mov     ecx, dword ptr [ebx + 0xc]
        test    ecx, ecx
        jbe     LBE94
        mov     esi, dword ptr [ebx]
        mov     eax, ecx
        mov     edi, ebp
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        xor     eax, eax
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [ebx + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebp*1]
        mov     edx, ecx
        shr     ecx, 0x2
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        mov     eax, dword ptr [ebx]
        push    eax
        call    dword ptr [g_100210ec]
        mov     esi, dword ptr [esp + 0x1c]
        add     esp, 0x4
LBE94:
        mov     dword ptr [ebx], ebp
LBE96:
        mov     edi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [ebx]
        mov     ecx, esi
        mov     esi, offset g_10024ed8
        mov     edx, ecx
        add     edi, eax
        shr     ecx, 0x2
        rep movsd
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebx + 0xc]
        add     ecx, eax
        mov     dword ptr [ebx + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        mov     byte ptr [eax + ecx*1], 0x0
        mov     edx, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [ebx]
        mov     byte ptr [edx + eax*1 + 0x1], 0x0
LBED0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
