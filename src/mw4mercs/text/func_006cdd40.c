/*
 * FUN_006cdd40 (1343 B) — Command parser state machine.
 *
 * Reads commands via FUN_006cdb30, dispatches on a set of string prefixes
 * (0x79e6dc etc.), maintains a state stack (0x82edfc / 0x82ee7c /
 * 0x82ee80), and builds a command record at 0x82f328.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_82f328;
extern void *g_82ee84;
extern void *g_82f334;
extern void *g_82f330;
extern void *g_82f32c;
extern void *g_82f324;
extern void *g_82ee80;
extern void *g_82ee7c;
extern void *g_82edf8;
extern void *g_83f5e8;
extern void *g_82e21c;
extern void *g_83ede0;
extern void *g_83ede4;
extern void *g_83ede8;

/* string first-byte symbols (used for the byte reads) */
extern char g_79e6dc;
extern char g_79e6d4;
extern char g_79e6b0;
extern char g_79e6a8;
extern char g_79e678;
extern char g_79e66c;
extern char g_79e63c;

extern void __cdecl FUN_006cdb30(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006c3450(void);
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006cd750(void);
extern void __cdecl FUN_006c0870(void);
extern void __cdecl FUN_006cd810(void);
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void __cdecl FUN_006cdd40(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
L_dd47:
        call    FUN_006cdb30
        test    eax, eax
        mov     dword ptr [g_82f328], eax
        jnz     L_dda4
        mov     eax, dword ptr [g_82ee84]
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_e255
        mov     eax, dword ptr [eax + 0xc]
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_82ee84]
        push    ecx
        call    FUN_006f4230
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [g_82f334], edx
        mov     edx, dword ptr [esi + 0x18]
        mov     dword ptr [g_82ee84], esi
        mov     dword ptr [g_82f330], eax
        mov     dword ptr [g_82f32c], ecx
        mov     dword ptr [g_82f324], edx
        jmp     L_dd47
L_dda4:
        cmp     byte ptr [eax], 0x23
        jz      L_ddb8
        cmp     dword ptr [g_82ee80], 0x2
        jle     L_e277
        jmp     L_dd47
L_ddb8:
        mov     cl, byte ptr [g_79e6dc]
        test    cl, cl
        mov     esi, 0x79e6dc
        jz      L_ddda
        mov     edi, eax
        sub     edi, esi
L_ddcb:
        mov     cl, byte ptr [edi + esi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     L_de45
        cmp     byte ptr [esi], 0x0
        jnz     L_ddcb
L_ddda:
        mov     edx, dword ptr [g_82ee80]
        cmp     edx, 0x2
        jle     L_de06
L_dde5:
        mov     eax, dword ptr [g_82ee7c]
        mov     dword ptr [eax*4 + 0x82edfc], edx
        inc     eax
        mov     dword ptr [g_82ee7c], eax
        mov     dword ptr [g_82ee80], 0x5
        jmp     L_dd47
L_de06:
        mov     ecx, dword ptr [g_82ee7c]
        add     eax, 0x4
        mov     dword ptr [ecx*4 + 0x82edfc], edx
        mov     dword ptr [g_82f328], eax
        mov     eax, dword ptr [g_82f334]
        inc     ecx
        mov     dword ptr [g_82ee7c], ecx
        mov     dword ptr [g_82edf8], eax
        call    FUN_006c3450
        neg     eax
        sbb     eax, eax
        and     eax, 0xfffffffe
        add     eax, 0x3
        mov     dword ptr [g_82ee80], eax
        jmp     L_dd47
L_de45:
        mov     cl, byte ptr [g_79e6d4]
        test    cl, cl
        mov     esi, 0x79e6d4
        jz      L_de67
        mov     edi, eax
        sub     edi, esi
L_de58:
        mov     cl, byte ptr [edi + esi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     L_dee0
        cmp     byte ptr [esi], 0x0
        jnz     L_de58
L_de67:
        mov     edx, dword ptr [g_82ee80]
        cmp     edx, 0x2
        jg      L_dde5
        mov     ecx, dword ptr [g_82ee7c]
        mov     dword ptr [ecx*4 + 0x82edfc], edx
        movsx   edx, byte ptr [eax + 0x7]
        inc     ecx
        add     eax, 0x7
        mov     dword ptr [g_82ee7c], ecx
        mov     ecx, dword ptr [g_82f334]
        mov     dword ptr [g_82edf8], ecx
        mov     cl, byte ptr [edx + 0x82ecf8]
        test    cl, cl
        mov     dword ptr [g_82f328], eax
        jnz     L_debe
        push    0x79e6bc
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
L_debe:
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_006cd750
        neg     eax
        sbb     eax, eax
        and     eax, 0xfffffffe
        add     eax, 0x3
        mov     dword ptr [g_82ee80], eax
        jmp     L_dd47
L_dee0:
        mov     cl, byte ptr [g_79e6b0]
        test    cl, cl
        mov     esi, 0x79e6b0
        jz      L_df02
        mov     edi, eax
        sub     edi, esi
L_def3:
        mov     cl, byte ptr [edi + esi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     L_df79
        cmp     byte ptr [esi], 0x0
        jnz     L_def3
L_df02:
        mov     edx, dword ptr [g_82ee80]
        cmp     edx, 0x2
        jg      L_dde5
        mov     ecx, dword ptr [g_82ee7c]
        mov     dword ptr [ecx*4 + 0x82edfc], edx
        movsx   edx, byte ptr [eax + 0x8]
        inc     ecx
        add     eax, 0x8
        mov     dword ptr [g_82ee7c], ecx
        mov     ecx, dword ptr [g_82f334]
        mov     dword ptr [g_82edf8], ecx
        mov     cl, byte ptr [edx + 0x82ecf8]
        test    cl, cl
        mov     dword ptr [g_82f328], eax
        jnz     L_df59
        push    0x79e6bc
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
L_df59:
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_006cd750
        neg     eax
        sbb     eax, eax
        and     eax, 0x2
        inc     eax
        mov     dword ptr [g_82ee80], eax
        jmp     L_dd47
L_df79:
        mov     cl, byte ptr [g_79e6a8]
        test    cl, cl
        mov     esi, 0x79e6a8
        jz      L_df9b
        mov     edi, eax
        sub     edi, esi
L_df8c:
        mov     cl, byte ptr [edi + esi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     L_e010
        cmp     byte ptr [esi], 0x0
        jnz     L_df8c
L_df9b:
        mov     ecx, dword ptr [g_82ee80]
        cmp     ecx, 0x5
        jz      L_dd47
        test    ecx, ecx
        jnz     L_dfc6
        push    0x79e698
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        mov     ecx, dword ptr [g_82ee80]
        add     esp, 0x4
L_dfc6:
        cmp     ecx, 0x1
        jnz     L_dfda
        mov     dword ptr [g_82ee80], 0x4
        jmp     L_dd47
L_dfda:
        cmp     ecx, 0x2
        jz      L_dfe4
        cmp     ecx, 0x4
        jnz     L_dffc
L_dfe4:
        push    0x79e680
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        mov     ecx, dword ptr [g_82ee80]
        add     esp, 0x4
L_dffc:
        cmp     ecx, 0x3
        jnz     L_e07d
        mov     dword ptr [g_82ee80], 0x2
        jmp     L_dd47
L_e010:
        mov     cl, byte ptr [g_79e678]
        test    cl, cl
        mov     esi, 0x79e678
        jz      L_e032
        mov     edi, eax
        sub     edi, esi
L_e023:
        mov     cl, byte ptr [edi + esi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     L_e077
        cmp     byte ptr [esi], 0x0
        jnz     L_e023
L_e032:
        mov     eax, dword ptr [g_82ee7c]
        test    eax, eax
        jz      L_e052
        dec     eax
        mov     dword ptr [g_82ee7c], eax
        mov     eax, dword ptr [eax*4 + 0x82edfc]
        mov     dword ptr [g_82ee80], eax
        jmp     L_dd47
L_e052:
        mov     eax, dword ptr [g_82ee80]
        test    eax, eax
        jnz     L_e068
        push    0x79e698
        call    FUN_006bfa50
        add     esp, 0x4
L_e068:
        mov     dword ptr [g_82ee80], 0x0
        jmp     L_dd47
L_e077:
        mov     ecx, dword ptr [g_82ee80]
L_e07d:
        cmp     ecx, 0x2
        jg      L_dd47
        mov     cl, byte ptr [g_79e66c]
        test    cl, cl
        mov     esi, 0x79e66c
        jz      L_e0a8
        mov     edi, eax
        sub     edi, esi
L_e099:
        mov     cl, byte ptr [edi + esi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     L_e0d3
        cmp     byte ptr [esi], 0x0
        jnz     L_e099
L_e0a8:
        add     eax, 0x9
        mov     dword ptr [g_82f328], eax
        call    FUN_006c0870
        mov     esi, eax
        test    esi, esi
        jnz     L_e0c8
        push    0x79e648
        call    FUN_006bfa50
        add     esp, 0x4
L_e0c8:
        push    esi
        call    FUN_006cd810
        jmp     L_dd47
L_e0d3:
        mov     cl, byte ptr [g_79e63c]
        test    cl, cl
        mov     esi, 0x79e63c
        jz      L_e0f9
        mov     edi, eax
        sub     edi, esi
L_e0e6:
        mov     cl, byte ptr [edi + esi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     L_e277
        cmp     byte ptr [esi], 0x0
        jnz     L_e0e6
L_e0f9:
        movsx   ecx, byte ptr [eax + 0x8]
        mov     dl, byte ptr [ecx + 0x82ecf8]
        add     eax, 0x8
        test    dl, dl
        mov     dword ptr [g_82f328], eax
        jnz     L_e121
        push    0x79e6bc
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
L_e121:
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x14], eax
        call    FUN_006cd750
        mov     esi, eax
        test    esi, esi
        jz      L_e194
        mov     ecx, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     al, byte ptr [esi + 0x8]
        lea     ebp, [ecx + eax + 0x1]
        xor     eax, eax
        mov     dword ptr [esp + 0x10], ebp
        mov     al, byte ptr [esi + 0x8]
        lea     edi, [eax + esi + 0xb]
        mov     edx, edi
L_e151:
        mov     cl, byte ptr [edx]
        test    cl, cl
        jz      L_dd47
        mov     ebx, ebp
        sub     ebx, eax
        sub     ebx, esi
        lea     eax, [ebx - 0xb]
L_e164:
        xor     ebx, ebx
        mov     bl, byte ptr [eax + edx]
        movsx   ecx, cl
        inc     edx
        cmp     ebx, ecx
        jnz     L_e17c
        mov     cl, byte ptr [edx]
        test    cl, cl
        jnz     L_e164
        jmp     L_dd47
L_e17c:
        push    ebp
        push    edi
        add     esi, 0xa
        push    esi
        push    0x79e610
        call    FUN_006bfa50
        add     esp, 0x10
        jmp     L_dd47
L_e194:
        mov     edi, dword ptr [esp + 0x10]
        cmp     byte ptr [edi], 0x20
        jz      L_e1ae
        push    0x79e604
        call    FUN_006bfa50
        mov     edi, dword ptr [esp + 0x14]
        add     esp, 0x4
L_e1ae:
        mov     edx, dword ptr [g_83f5e8]
        mov     ecx, dword ptr [g_82f328]
        inc     edx
        mov     ebx, edi
        sub     ebx, ecx
        inc     edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     dword ptr [esp + 0x10], edi
        repne   scasb
        not     ecx
        mov     dword ptr [g_83f5e8], edx
        mov     edx, dword ptr [g_82e21c]
        dec     ecx
        push    edx
        lea     eax, [ecx + ebx + 0xc]
        push    eax
        mov     dword ptr [esp + 0x24], ecx
        call    FUN_006f3c80
        mov     esi, dword ptr [g_82f328]
        mov     ecx, ebx
        mov     edx, ecx
        shr     ecx, 0x2
        lea     edi, [eax + 0xa]
        rep     movsd
        mov     ecx, edx
        mov     edx, dword ptr [esp + 0x1c]
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, edx
        mov     ebp, ecx
        shr     ecx, 0x2
        lea     edi, [eax + ebx + 0xb]
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        mov     byte ptr [eax + ebx + 0xa], 0x0
        lea     ecx, [eax + edx]
        mov     byte ptr [ecx + ebx + 0xb], 0x0
        mov     ecx, dword ptr [g_83ede0]
        mov     byte ptr [eax + 0x9], dl
        mov     edx, dword ptr [g_83ede4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx*4 + 0x83ede8]
        mov     byte ptr [eax + 0x8], bl
        mov     dword ptr [eax], edx
        mov     dword ptr [ecx*4 + 0x83ede8], eax
        jmp     L_dd47
L_e255:
        mov     eax, dword ptr [g_82ee80]
        test    eax, eax
        jz      L_e275
        mov     eax, dword ptr [g_82edf8]
        push    0x79e5ec
        mov     dword ptr [g_82f334], eax
        call    FUN_006bfa50
        add     esp, 0x4
L_e275:
        xor     eax, eax
L_e277:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}
