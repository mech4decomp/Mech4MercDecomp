/*
 * func_00620BE0.c  (block 0x620BE0, 1696 bytes)
 *
 * Large __thiscall switch dispatcher (ret 0x10). Dispatches on
 * [esp+0x43a0] (0..10) via jump table at 0x621250. Each case formats a
 * message through IAT 0x76b420 (sprintf) and calls FUN_0061fc80 to log it.
 * Cases set byte flags on the object (offsets 0x11..0x17) and on the
 * pointed-to sub-object (offsets 0x3c..0x3f). Case 5 does string
 * concatenation via repne scasb/rep movsd into buffer 0x7f29a4.
 *
 * Jump table (0x621250..0x62127B, 11 dwords) is embedded in the block and
 * emitted as __emit address bytes (reference has no relocs there).
 */

extern void __cdecl FUN_0075dc00(void);
extern void __cdecl FUN_0061fc80(void);
extern void __cdecl FUN_00620af0(void);
extern void __cdecl FUN_0061f990(void);
extern void __cdecl FUN_0061fa00(void);
extern void __cdecl FUN_0064bf90(void);
extern void __cdecl FUN_00650080(void);
extern void __cdecl FUN_0061f560(void);
extern void __cdecl FUN_0061f5d0(void);
extern void __cdecl FUN_0061f640(void);
extern void __cdecl FUN_0061f660(void);
extern void __cdecl FUN_006204b0(void);
extern void __cdecl FUN_0061f520(void);
extern void __cdecl FUN_0064c500(void);

extern void *g_76b420;   /* IAT sprintf */
extern void *g_76b304;   /* IAT */
extern void *g_76b0f0;   /* IAT */
extern unsigned int g_7f2ba4;

__declspec(naked) void func_00620BE0(void)
{
    __asm {
        mov     eax, 0x439c
        call    FUN_0075dc00
        mov     eax, dword ptr [esp + 0x43a0]
        cmp     eax, 0xa
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        ja      L_621241
        jmp     dword ptr [eax*4 + 0x621250]

        /* ---- case 0 (0x620C07) ---- */
L_620c07:
        mov     eax, dword ptr [ebp + 0xc]
        xor     ebx, ebx
        cmp     eax, ebx
        je      L_620c22
        mov     byte ptr [eax + 0x3c], bl
        mov     byte ptr [eax + 0x3e], bl
        mov     byte ptr [eax + 0x3f], bl
        mov     byte ptr [ebp + 0x13], bl
        mov     byte ptr [ebp + 0x15], bl
        mov     byte ptr [ebp + 0x16], bl
L_620c22:
        mov     eax, dword ptr [esp + 0x43bc]
        cmp     eax, ebx
        je      L_620c4d
        push    0x76cb8c
        mov     ecx, ebp
        mov     dword ptr [ebp + 0xc], eax
        call    FUN_0061fc80
        mov     eax, dword ptr [ebp + 0xc]
        add     eax, 4
        push    eax
        push    0x78cf60
        jmp     L_621053
L_620c4d:
        push    0x76cb8c
        mov     ecx, ebp
        call    FUN_0061fc80
        mov     ecx, ebp
        call    FUN_00620af0
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, ebx
        je      L_620c97
        add     eax, 4
        push    eax
        push    0x78cf4c
        push    0x7f29a4
        call    dword ptr [g_76b420]
        add     esp, 0xc
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_620c97:
        push    0x78cf30
        push    0x7f29a4
        call    dword ptr [g_76b420]
        add     esp, 8
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 1 (0x620CC3) ---- */
L_620cc3:
        mov     eax, dword ptr [esp + 0x43b8]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     eax, dword ptr [ebp + 0xc]
        je      L_620d07
        cmp     dword ptr [ebp], eax
        mov     byte ptr [eax + 0x3c], 1
        mov     byte ptr [eax + 0x3e], 1
        mov     byte ptr [eax + 0x3f], 1
        mov     byte ptr [eax + 0x3d], bl
        jne     L_621241
        mov     byte ptr [ebp + 0x13], 1
        mov     byte ptr [ebp + 0x15], 1
        mov     byte ptr [ebp + 0x16], 1
        mov     byte ptr [ebp + 0x14], bl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_620d07:
        cmp     dword ptr [ebp], eax
        mov     byte ptr [eax + 0x3c], bl
        mov     byte ptr [eax + 0x3e], bl
        mov     byte ptr [eax + 0x3f], bl
        jne     L_621241
        mov     byte ptr [ebp + 0x13], bl
        mov     byte ptr [ebp + 0x15], bl
        mov     byte ptr [ebp + 0x16], bl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 2 (0x620D2F) ---- */
L_620d2f:
        mov     eax, dword ptr [esp + 0x43b8]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     eax, dword ptr [ebp + 0xc]
        je      L_620d6f
        cmp     dword ptr [ebp], eax
        mov     byte ptr [eax + 0x3d], 1
        mov     byte ptr [eax + 0x3c], bl
        mov     byte ptr [eax + 0x3e], bl
        mov     byte ptr [eax + 0x3f], bl
        jne     L_621241
        mov     byte ptr [ebp + 0x14], 1
        mov     byte ptr [ebp + 0x13], bl
        mov     byte ptr [ebp + 0x15], bl
        mov     byte ptr [ebp + 0x16], bl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_620d6f:
        cmp     dword ptr [ebp], eax
        mov     byte ptr [eax + 0x3d], bl
        jne     L_621241
        mov     byte ptr [ebp + 0x14], bl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 3 (0x620D8B) ---- */
L_620d8b:
        push    0x76cb8c
        mov     ecx, ebp
        call    FUN_0061fc80
        mov     esi, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [esp + 0x43b8]
        mov     ecx, dword ptr [esi + 0x34]
        push    edi
        call    FUN_0061f990
        push    edi
        add     esi, 4
        push    esi
        push    0x78cf20
        jmp     L_620ddf

        /* ---- case 4 (0x620DB6) ---- */
L_620db6:
        push    0x76cb8c
        mov     ecx, ebp
        call    FUN_0061fc80
        mov     esi, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [esp + 0x43b8]
        mov     ecx, dword ptr [esi + 0x34]
        push    edi
        call    FUN_0061fa00
        push    edi
        add     esi, 4
        push    esi
        push    0x78cf0c
L_620ddf:
        push    0x7f29a4
        call    dword ptr [g_76b420]
        add     esp, 0x10
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 5 (0x620E06) ---- */
L_620e06:
        push    0x76cb8c
        mov     ecx, ebp
        call    FUN_0061fc80
        mov     ecx, dword ptr [esp + 0x43b4]
        mov     edi, dword ptr [ebp + 0xc]
        xor     ebx, ebx
        push    ebx
        push    ebx
        push    ecx
        mov     ecx, edi
        call    FUN_0064bf90
        mov     esi, eax
        cmp     esi, ebx
        jne     L_620e64
        mov     edx, dword ptr [esp + 0x43b4]
        push    edx
        call    dword ptr [g_76b304]
        push    eax
        call    FUN_00650080
        mov     esi, eax
        add     esp, 8
        cmp     esi, ebx
        jne     L_620e64
        push    0x78cee4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_620e64:
        mov     eax, dword ptr [esp + 0x43b8]
        mov     ecx, eax
        shr     ecx, 4
        and     cl, 1
        test    al, 2
        mov     byte ptr [esp + 0x14], cl
        je      L_620eb0
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x30]
        push    edx
        push    1
        push    esi
        call    FUN_0061f560
        cmp     eax, 2
        jne     L_620ea9
        push    0x78ceb4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_620ea9:
        mov     eax, dword ptr [esp + 0x43b8]
L_620eb0:
        test    al, 8
        je      L_620ee9
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x30]
        push    eax
        push    1
        push    esi
        call    FUN_0061f5d0
        cmp     eax, 2
        jne     L_620ee2
        push    0x78ceb4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_620ee2:
        mov     eax, dword ptr [esp + 0x43b8]
L_620ee9:
        test    al, 1
        je      L_620f03
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [edi + 0x30]
        push    ebx
        push    esi
        call    FUN_0061f560
        mov     eax, dword ptr [esp + 0x43b8]
L_620f03:
        test    al, 4
        je      L_620f16
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x30]
        push    edx
        push    ebx
        push    esi
        call    FUN_0061f5d0
L_620f16:
        mov     ecx, dword ptr [edi + 0x30]
        push    esi
        call    FUN_0061f640
        mov     ecx, dword ptr [edi + 0x30]
        push    esi
        mov     byte ptr [esp + 0x16], al
        call    FUN_0061f660
        cmp     byte ptr [esp + 0x12], bl
        mov     byte ptr [esp + 0x13], al
        jne     L_620f72
        cmp     al, bl
        jne     L_620f72
        mov     eax, dword ptr [esp + 0x43b4]
        push    eax
        add     edi, 4
        push    edi
        push    0x78cea0
        push    0x7f29a4
        call    dword ptr [g_76b420]
        add     esp, 0x10
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_620f72:
        mov     ecx, dword ptr [esp + 0x43b4]
        push    ecx
        add     edi, 4
        push    edi
        push    0x78ce8c
        push    0x7f29a4
        call    dword ptr [g_76b420]
        mov     al, byte ptr [esp + 0x22]
        add     esp, 0x10
        cmp     al, bl
        je      L_620fc6
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x78ce88
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7f29a4
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_620fc6:
        cmp     byte ptr [esp + 0x13], bl
        je      L_620ff9
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x78ce84
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7f29a4
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_620ff9:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77e7d8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7f29a4
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 6 (0x62103F) ---- */
L_62103f:
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [esi + 0x30]
        call    FUN_0061f520
        add     esi, 4
        push    esi
        push    0x78ce6c
L_621053:
        push    0x7f29a4
        call    dword ptr [g_76b420]
        add     esp, 0xc
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 7 (0x62107A) ---- */
L_62107a:
        mov     al, byte ptr [ebp + 0x17]
        xor     ebx, ebx
        cmp     al, bl
        je      L_6210cb
        push    0x76cb8c
        mov     ecx, ebp
        call    FUN_0061fc80
        mov     eax, dword ptr [esp + 0x43b4]
        push    eax
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_006204b0
        sub     eax, ebx
        je      L_62121c
        dec     eax
        jne     L_621241
        push    0x78ce44
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_6210cb:
        mov     ecx, dword ptr [g_7f2ba4]
        push    ebx
        push    1
        push    ecx
        call    dword ptr [g_76b0f0]
        push    0x78ce14
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 8 (0x6210F4) ---- */
L_6210f4:
        mov     edx, dword ptr [g_7f2ba4]
        xor     ebx, ebx
        push    ebx
        push    1
        push    edx
        mov     byte ptr [ebp + 0x11], bl
        call    dword ptr [g_76b0f0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 9 (0x621116) ---- */
L_621116:
        push    0x76cb8c
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78cde0
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78cd9c
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78cd50
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78cd14
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78ccd0
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78cc9c
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78cc64
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78cc30
        mov     ecx, ebp
        call    FUN_0061fc80
        push    0x78cc0c
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* ---- case 10 (0x62119B) ---- */
L_62119b:
        push    0x76cb8c
        mov     ecx, ebp
        call    FUN_0061fc80
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        je      L_621235
        mov     ebx, dword ptr [g_76b420]
        add     eax, 4
        push    eax
        push    0x78cf4c
        push    0x7f29a4
        call    ebx
        add     esp, 0xc
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_0061fc80
        mov     ecx, dword ptr [ebp + 0xc]
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_0064c500
        mov     edx, dword ptr [esp + 0x118]
        sub     esp, 0x84
        mov     edi, esp
        mov     ecx, 0x21
        lea     esi, [esp + 0x1a4]
        rep     movsd
        mov     ecx, dword ptr [esp + 0x1a0]
        push    ecx
        push    edx
        push    0x78cbe4
        push    0x7f29a4
        call    ebx
        add     esp, 0x94
L_62121c:
        push    0x7f29a4
        mov     ecx, ebp
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10
L_621235:
        push    0x78cbc0
        mov     ecx, ebp
        call    FUN_0061fc80
L_621241:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x439c
        ret     0x10

        /* 0x62124E: 2-byte nop */
        mov     edi, edi

        /* ---- jump table 0x621250..0x62127B (11 dwords) ----
           __emit: inline asm has no `dd`; emit the absolute case-target
           addresses as bytes (reference has no relocs here). */
        __emit 0x07
        __emit 0x0C
        __emit 0x62
        __emit 0x00
        __emit 0xC3
        __emit 0x0C
        __emit 0x62
        __emit 0x00
        __emit 0x2F
        __emit 0x0D
        __emit 0x62
        __emit 0x00
        __emit 0x8B
        __emit 0x0D
        __emit 0x62
        __emit 0x00
        __emit 0xB6
        __emit 0x0D
        __emit 0x62
        __emit 0x00
        __emit 0x06
        __emit 0x0E
        __emit 0x62
        __emit 0x00
        __emit 0x3F
        __emit 0x10
        __emit 0x62
        __emit 0x00
        __emit 0x7A
        __emit 0x10
        __emit 0x62
        __emit 0x00
        __emit 0xF4
        __emit 0x10
        __emit 0x62
        __emit 0x00
        __emit 0x16
        __emit 0x11
        __emit 0x62
        __emit 0x00
        __emit 0x9B
        __emit 0x11
        __emit 0x62
        __emit 0x00

        /* 0x62127C..0x62127F: 4 nops */
        nop
        nop
        nop
        nop
    }
}
