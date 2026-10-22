/*
 * FUN_006c2590 (1404 B) — Expression parser/tokenizer for the scripting
 * language. Reads tokens from DAT_0082f328, handles numbers (dec/hex),
 * unary ops (! ~ - +), ++/--, char literals, identifiers (via FUN_006c0110),
 * and keywords "equal$"/"length$". Returns the parsed value in EAX.
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_0082f328;                 /* current token pointer */
extern char *g_0082f320;                 /* variable value pointer */
extern unsigned int g_0082f338;          /* variable type */
extern unsigned int g_0083a0fc;          /* hash node[3] */
extern char g_0082ecf8;                  /* char-class table */
extern char g_0082ebf8;                  /* char-class table */
extern char g_0079d0fc;                  /* "equal$" flag */
extern char g_0079d0f4;                  /* "length$" flag */
extern float g_0076d064;                 /* 1.0 */
extern float g_0079d0c8;                 /* float scale */
extern char g_008319f0;                  /* string buffer */
extern char g_008309f0;                  /* string buffer */
extern char g_008305f0;                  /* string buffer */
extern int (*g_0076b41c)(void);          /* IAT: strcmpi */
extern int (*g_0076b3c0)(void);          /* IAT: _mbstrlen */

extern void __cdecl FUN_006c3450(void);
extern void __cdecl FUN_006c12e0(void);
extern void __cdecl FUN_006c0940(void);
extern void __cdecl FUN_006c0110(void);
extern void __cdecl FUN_006c34e0(void);
extern void __cdecl FUN_007047f0(void);
extern void __cdecl FUN_006c2e70(void);
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_006c2590(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [g_0082f328]
        mov     cl, byte ptr [eax]
        push    ebx
        push    ebp
        xor     ebp, ebp
        cmp     cl, 0x20
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ebp
        jnz     L_25af
L_25a9:
        inc     eax
        mov     dword ptr [g_0082f328], eax
L_25af:
        mov     dl, byte ptr [eax]
        cmp     dl, 0x39
        jg      L_25bf
        cmp     dl, 0x30
        jge     L_2711
L_25bf:
        cmp     dl, 0x28
        jz      L_278e
        cmp     dl, 0x21
        jz      L_27a3
        cmp     dl, 0x7e
        jz      L_27b7
        cmp     dl, 0x2d
        jnz     L_25f7
        cmp     byte ptr [eax + 0x1], dl
        jnz     L_25f7
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x2]
        mov     bl, byte ptr [ecx + g_0082ecf8]
        test    bl, bl
        jnz     L_27c8
L_25f7:
        cmp     dl, 0x2b
        jnz     L_2614
        cmp     byte ptr [eax + 0x1], dl
        jnz     L_2614
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x2]
        mov     bl, byte ptr [ecx + g_0082ecf8]
        test    bl, bl
        jnz     L_27c8
L_2614:
        cmp     dl, 0x2d
        jnz     L_2620
        xor     dword ptr [esp + 0x10], 0x1
        jmp     L_25a9
L_2620:
        cmp     dl, 0x2b
        jnz     L_2632
        mov     dword ptr [esp + 0x10], 0x0
        jmp     L_25a9
L_2632:
        mov     cl, byte ptr [g_0079d0fc]
        test    cl, cl
        mov     esi, 0x79d0fc
        jz      L_27fe
        mov     edi, eax
        sub     edi, esi
L_2649:
        mov     cl, byte ptr [edi + esi]
        mov     bl, byte ptr [esi]
        inc     esi
        cmp     cl, bl
        jnz     L_265e
        cmp     byte ptr [esi], 0x0
        jz      L_27fe
        jmp     L_2649
L_265e:
        mov     cl, byte ptr [g_0079d0f4]
        test    cl, cl
        mov     esi, 0x79d0f4
        jz      L_28a0
        mov     edi, eax
        sub     edi, esi
L_2675:
        mov     cl, byte ptr [edi + esi]
        mov     bl, byte ptr [esi]
        inc     esi
        cmp     cl, bl
        jnz     L_268a
        cmp     byte ptr [esi], 0x0
        jz      L_28a0
        jmp     L_2675
L_268a:
        mov     ecx, edx
        and     ecx, 0xff
        mov     bl, byte ptr [ecx + g_0082ecf8]
        test    bl, bl
        lea     ecx, [ecx + g_0082ecf8]
        jnz     L_291b
        mov     bl, byte ptr [ecx - 0x80]
        test    bl, bl
        jnz     L_291b
        cmp     dl, 0x27
        jnz     L_26fa
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x5c
        jz      L_26c8
        cmp     byte ptr [eax + 0x1], dl
        jz      L_28ec
L_26c8:
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x6e
        mov     dword ptr [g_0082f328], eax
        jz      L_28f7
        cmp     cl, 0x74
        jz      L_2909
        push    0x79d0dc
        call    FUN_006bfa50
        mov     eax, dword ptr [g_0082f328]
        add     esp, 0x4
        jmp     L_25af
L_26fa:
        push    0x79d0cc
        call    FUN_006bfa50
        mov     eax, dword ptr [g_0082f328]
        add     esp, 0x4
        jmp     L_25af
L_2711:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x30
        jnz     L_275d
        cmp     byte ptr [eax + 0x1], 0x78
        jnz     L_275d
        add     eax, 0x2
        mov     dword ptr [g_0082f328], eax
L_2726:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x30
        jl      L_2732
        cmp     cl, 0x39
        jle     L_2741
L_2732:
        cmp     cl, 0x61
        jl      L_2775
        cmp     cl, 0x66
        jg      L_2775
        cmp     cl, 0x39
        jg      L_274f
L_2741:
        movsx   ecx, cl
        sub     ecx, 0x30
        shl     ebp, 0x4
        add     ebp, ecx
        inc     eax
        jmp     L_2726
L_274f:
        movsx   ecx, cl
        sub     ecx, 0x57
        shl     ebp, 0x4
        add     ebp, ecx
        inc     eax
        jmp     L_2726
L_275d:
        movsx   ecx, cl
        lea     edx, [ebp + ebp*4]
        inc     eax
        lea     ebp, [ecx + edx*2 - 0x30]
        mov     cl, byte ptr [eax]
        cmp     cl, 0x39
        jg      L_2775
        cmp     cl, 0x30
        jge     L_275d
L_2775:
        mov     dword ptr [g_0082f328], eax
L_277a:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_2784
        neg     ebp
L_2784:
        mov     eax, ebp
L_2786:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L_278e:
        inc     eax
        mov     dword ptr [g_0082f328], eax
        call    FUN_006c3450
        mov     ebp, eax
        mov     eax, dword ptr [g_0082f328]
        inc     eax
        jmp     L_2775
L_27a3:
        inc     eax
        mov     dword ptr [g_0082f328], eax
        call    FUN_006c2590
        mov     ebp, eax
        neg     ebp
        sbb     ebp, ebp
        inc     ebp
        jmp     L_277a
L_27b7:
        inc     eax
        mov     dword ptr [g_0082f328], eax
        call    FUN_006c3450
        mov     ebp, eax
        not     ebp
        jmp     L_277a
L_27c8:
        add     eax, 0x2
        mov     dword ptr [g_0082f328], eax
        call    FUN_006c12e0
        cmp     eax, 0x64
        mov     eax, dword ptr [g_0082f320]
        jnz     L_27e8
        mov     ecx, dword ptr [eax]
        inc     ecx
        mov     dword ptr [eax], ecx
        mov     ebp, ecx
        jmp     L_277a
L_27e8:
        fld     dword ptr [eax]
        fadd    dword ptr [g_0076d064]
        fst     dword ptr [eax]
        call    FUN_0075db4a
        mov     ebp, eax
        jmp     L_277a
L_27fe:
        mov     cl, byte ptr [eax + 0x6]
        add     eax, 0x6
        cmp     cl, 0x20
        jnz     L_280a
        inc     eax
L_280a:
        inc     eax
        mov     dword ptr [g_0082f328], eax
        call    FUN_006c0940
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [g_0082f328]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x8319f0
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        inc     eax
        rep     movsb
        cmp     byte ptr [eax], 0x20
        mov     dword ptr [g_0082f328], eax
        jnz     L_284d
        inc     eax
        mov     dword ptr [g_0082f328], eax
L_284d:
        call    FUN_006c0940
        or      ecx, 0xffffffff
        mov     ebx, dword ptr [g_0082f328]
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x8309f0
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        push    0x8309f0
        inc     ebx
        push    0x8319f0
        rep     movsb
        mov     dword ptr [g_0082f328], ebx
        call    dword ptr [g_0076b41c]
        add     esp, 0x8
        mov     ebp, eax
        neg     ebp
        sbb     ebp, ebp
        inc     ebp
        jmp     L_277a
L_28a0:
        mov     cl, byte ptr [eax + 0x7]
        add     eax, 0x7
        cmp     cl, 0x20
        jnz     L_28ac
        inc     eax
L_28ac:
        inc     eax
        mov     dword ptr [g_0082f328], eax
        call    FUN_006c12e0
        mov     eax, dword ptr [g_0082f328]
        cmp     byte ptr [eax], 0x20
        jnz     L_28c2
        inc     eax
L_28c2:
        mov     ecx, dword ptr [g_0082f320]
        inc     eax
        mov     dword ptr [g_0082f328], eax
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jnz     L_28db
        xor     ebp, ebp
        jmp     L_277a
L_28db:
        push    eax
        call    dword ptr [g_0076b3c0]
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_277a
L_28ec:
        movsx   ebp, byte ptr [eax]
        add     eax, 0x2
        jmp     L_2775
L_28f7:
        add     eax, 0x2
        mov     dword ptr [g_0082f328], eax
        mov     ebp, 0xd
        jmp     L_277a
L_2909:
        add     eax, 0x2
        mov     dword ptr [g_0082f328], eax
        mov     ebp, 0x9
        jmp     L_277a
L_291b:
        mov     cl, byte ptr [eax]
        test    cl, 0x80
        mov     edi, eax
        jnz     L_2949
        call    FUN_006c0110
        test    eax, eax
        mov     ebp, dword ptr [g_0083a0fc]
        jz      L_277a
        cmp     eax, 0x1
        jnz     L_2950
        push    ebp
        call    FUN_006c34e0
        mov     ebp, eax
        jmp     L_277a
L_2949:
        and     cl, 0x7f
        mov     byte ptr [eax], cl
        jmp     L_2955
L_2950:
        mov     eax, dword ptr [g_0082f328]
L_2955:
        mov     esi, eax
        call    FUN_006c12e0
        mov     dl, byte ptr [esi]
        mov     ebx, eax
        or      dl, 0x80
        cmp     ebx, 0x29
        mov     dword ptr [esp + 0x18], ebx
        mov     byte ptr [esi], dl
        mov     al, dl
        jnz     L_29e2
        mov     eax, dword ptr [g_0082f328]
        cmp     byte ptr [eax], 0x20
        jnz     L_297b
        inc     eax
L_297b:
        inc     eax
        mov     dword ptr [g_0082f328], eax
        call    FUN_006c3450
        mov     edi, eax
        mov     eax, dword ptr [g_0082f328]
        cmp     byte ptr [eax], 0x20
        mov     dword ptr [esp + 0x18], edi
        jnz     L_2997
        inc     eax
L_2997:
        inc     eax
        mov     dword ptr [g_0082f328], eax
        call    FUN_006c3450
        mov     esi, eax
        mov     eax, dword ptr [g_0082f328]
        cmp     byte ptr [eax], 0x20
        jnz     L_29af
        inc     eax
L_29af:
        inc     eax
        mov     dword ptr [g_0082f328], eax
        call    FUN_007047f0
        mov     dword ptr [esp + 0x14], eax
        fild    dword ptr [esp + 0x14]
        sub     esi, edi
        mov     dword ptr [esp + 0x14], esi
        fmul    dword ptr [g_0079d0c8]
        fimul   dword ptr [esp + 0x14]
        fiadd   dword ptr [esp + 0x18]
        call    FUN_0075db4a
        mov     ebp, eax
        jmp     L_277a
L_29e2:
        cmp     ebx, 0x65
        jnz     L_2a0c
        mov     edx, dword ptr [g_0082f320]
        mov     ebp, dword ptr [edx]
        test    ebp, ebp
        jz      L_2a05
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        jnz     L_277a
L_2a05:
        xor     ebp, ebp
        jmp     L_277a
L_2a0c:
        cmp     ebx, 0x64
        jz      L_2a8d
        cmp     ebx, 0x68
        jz      L_2a8d
        cmp     ebx, 0x70
        jz      L_2a92
        mov     bl, al
        mov     eax, dword ptr [g_0082f338]
        push    0x0
        and     bl, 0x7f
        push    eax
        mov     dword ptr [g_0082f328], edi
        mov     byte ptr [esi], bl
        call    FUN_006c2e70
        or      bl, 0x80
        test    eax, eax
        mov     byte ptr [esi], bl
        jnz     L_2786
        mov     al, byte ptr [edi]
        xor     edx, edx
        mov     dl, al
        mov     ecx, 0x8305f0
        and     edx, 0x7f
        mov     bl, byte ptr [edx + g_0082ebf8]
        test    bl, bl
        jz      L_2a74
L_2a5a:
        and     al, 0x7f
        mov     byte ptr [ecx], al
        mov     al, byte ptr [edi + 0x1]
        inc     ecx
        inc     edi
        xor     edx, edx
        mov     dl, al
        and     edx, 0x7f
        mov     bl, byte ptr [edx + g_0082ebf8]
        test    bl, bl
        jnz     L_2a5a
L_2a74:
        push    0x8305f0
        push    0x79d094
        mov     byte ptr [ecx], 0x0
        call    FUN_006bfa50
        mov     ebx, dword ptr [esp + 0x20]
        add     esp, 0x8
L_2a8d:
        cmp     ebx, 0x70
        jnz     L_2aa3
L_2a92:
        mov     esi, dword ptr [g_0082f320]
        fld     dword ptr [esi]
        call    FUN_0075db4a
        mov     ebp, eax
        jmp     L_2aab
L_2aa3:
        mov     esi, dword ptr [g_0082f320]
        mov     ebp, dword ptr [esi]
L_2aab:
        mov     eax, dword ptr [g_0082f328]
        cmp     byte ptr [eax], 0x2d
        jnz     L_2ad6
        cmp     byte ptr [eax + 0x1], 0x2d
        jnz     L_2ad6
        add     eax, 0x2
        cmp     ebx, 0x64
        mov     dword ptr [g_0082f328], eax
        jnz     L_2acc
        dec     dword ptr [esi]
        jmp     L_2ad6
L_2acc:
        fld     dword ptr [esi]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [esi]
L_2ad6:
        cmp     byte ptr [eax], 0x2b
        jnz     L_277a
        cmp     byte ptr [eax + 0x1], 0x2b
        jnz     L_277a
        add     eax, 0x2
        cmp     ebx, 0x64
        mov     dword ptr [g_0082f328], eax
        jnz     L_2afd
        inc     dword ptr [esi]
        jmp     L_277a
L_2afd:
        fld     dword ptr [esi]
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [esi]
        jmp     L_277a
    }
}
