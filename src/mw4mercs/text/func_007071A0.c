/*
 * In-.text data block 0x707165 (435 B) — two functions.
 *
 *   FUN_007071A0 (RET 0x1c): initializes several sub-buffers of a large
 *     object via the string-copy fn ptr at [0x76b320], conditionally seeds
 *     [esi+0x1808] and calls FUN_00701F20, then fills three 0x40-byte
 *     buffers with the constant at 0x76b768 and calls FUN_00706F20.
 *   FUN_00707250 (RET 0x10): if a flag byte is set and the global
 *     [0x8aaae4] is non-null, packs a 16-bit color/format field
 *     ([esi+0x44]) and updates [esi+0x28], then appends a 0x40-byte
 *     record into the [esi+0x1808]-indexed slot and calls FUN_00706F20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76B320;
extern int g_8AAAE4;
extern void __cdecl FUN_00701F20(void);
extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_00706F20(void);

__declspec(naked) void FUN_007071A0(void)
{
    __asm {
        /* ---- FUN_007071A0 ---- */
        mov     eax, dword ptr [esp + 8]
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     edi, dword ptr [g_76B320]
        push    0x40
        push    eax
        lea     ecx, [esi + 0x180c]
        push    ecx
        call    edi
        mov     eax, dword ptr [esp + 0x30]
        add     esp, 0xc
        test    ah, 1
        mov     byte ptr [esi + 0x17c8], 0
        jne     L70720B
        mov     edx, dword ptr [esp + 0x14]
        push    0x40
        push    edx
        lea     eax, [esi + 0xbc8]
        push    eax
        mov     dword ptr [esi + 0x1808], 1
        call    edi
        add     esp, 0xc
        push    0
        push    0
        push    4
        mov     byte ptr [esi + 0xc07], 0
        mov     byte ptr [esi + 0x11c8], 0
        call    FUN_00701F20
        mov     dword ptr [esi + 0x184c], eax
L70720B:
        push    0x40
        lea     ecx, [esi + 0x18ac]
        push    0x76b768
        push    ecx
        call    edi
        push    0x40
        lea     edx, [esi + 0x18ec]
        push    0x76b768
        push    edx
        call    edi
        push    0x40
        lea     eax, [esi + 0x192c]
        push    0x76b768
        push    eax
        call    edi
        add     esp, 0x24
        mov     ecx, esi
        call    FUN_00706F20
        pop     edi
        mov     al, 1
        pop     esi
        ret     0x1c

        /* alignment pad */
        nop
        nop
        nop
        nop

        /* ---- FUN_00707250 ---- */
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        push    esi
        je      L7072F2
        mov     eax, dword ptr [g_8AAAE4]
        test    eax, eax
        je      L7072F2
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        push    0
        push    eax
        call    dword ptr [ecx + 0x58]
        mov     eax, dword ptr [esp + 0x14]
        push    0
        push    eax
        call    FUN_006F3C80
        lea     edx, [esp + 0x14]
        mov     esi, eax
        mov     eax, dword ptr [g_8AAAE4]
        mov     ecx, dword ptr [eax]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx + 0x58]
        test    eax, eax
        jl      L7072EC
        mov     ecx, dword ptr [esi + 0x44]
        shr     ecx, 0xc
        and     ecx, 0xf
        cmp     ecx, 0xf
        jne     L7072B3
        mov     eax, dword ptr [esi + 0x44]
        shr     eax, 8
        and     eax, ecx
        inc     eax
        jmp     L7072B6
L7072B3:
        inc     ecx
        xor     eax, eax
L7072B6:
        mov     edx, dword ptr [esi + 0x28]
        shl     eax, 8
        shl     ecx, 0xc
        and     eax, 0xf00
        and     ecx, 0xf000
        or      eax, ecx
        mov     ecx, dword ptr [esi + 0x44]
        and     ecx, 0xffff00ff
        or      eax, ecx
        push    0
        dec     edx
        mov     dword ptr [esi + 0x44], eax
        mov     eax, dword ptr [g_8AAAE4]
        push    esi
        mov     dword ptr [esi + 0x28], edx
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x7c]
L7072EC:
        push    esi
        call    FUN_006F4230
L7072F2:
        mov     esi, dword ptr [esp + 8]
        mov     ecx, dword ptr [esi + 0x1808]
        mov     eax, dword ptr [esp + 0x10]
        push    0x40
        shl     ecx, 6
        push    eax
        lea     edx, [ecx + esi + 0xbc8]
        push    edx
        call    dword ptr [g_76B320]
        mov     eax, dword ptr [esi + 0x1808]
        mov     edx, dword ptr [esp + 0x18]
        shl     eax, 6
        mov     byte ptr [eax + esi + 0x11c8], 0
        mov     ecx, dword ptr [esi + 0x1808]
        mov     dword ptr [esi + ecx*4 + 0x184c], edx
        mov     eax, dword ptr [esi + 0x1808]
        add     esp, 0xc
        inc     eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x1808], eax
        call    FUN_00706F20
        mov     al, 1
        pop     esi
        ret     0x10
    }
}
