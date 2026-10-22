/*
 * FUN_005642e0 (1271 B) — writes a "PW"/"PD"/"PS" weapon/power data
 * block to the log (sibling of FUN_00563d90 with different table
 * offsets). Two loops over 0xdd / 0x117 entries formatting float/int
 * fields via sprintf into a 0x7668-byte _alloca buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007eebbc;
extern int *g_007dab44;
extern int g_007dab40;
extern int g_007ee7b8;
extern float g_float_76c5b0;
extern char g_str_77eb54[];
extern char g_str_77eb40[];
extern char g_str_77eb34[];
extern char g_str_77eb28[];
extern char g_str_77eb14[];
extern char g_str_77eb08[];
extern char g_str_77eafc[];
extern char g_str_77eb58[];
extern int (__cdecl *g_sprintf)(char *, const char *, ...);

extern void __cdecl _alloca_probe(void);
extern int __cdecl FUN_00563550(const char *, ...);
extern void __cdecl FUN_00563c80(int);
extern int __cdecl FUN_006234b0(void *);

__declspec(naked) void FUN_005642e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        mov     eax, 0x7668
        call    _alloca_probe
        mov     eax, dword ptr [g_007eebbc]
        push    ebx
        xor     edx, edx
        cmp     eax, edx
        push    esi
        push    edi
        jnz     L_30a
        mov     eax, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_30a:
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        jz      L_47cb
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     bl, byte ptr [ecx + 0x16]
        test    bl, bl
        jz      L_47cb
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     bl, byte ptr [ecx + 0x17]
        test    bl, bl
        jz      L_47cb
        cmp     dword ptr [g_007ee7b8], edx
        jz      L_47cb
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        jz      L_47cb
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax + 0x20]
        mov     ebx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x20], edx
        mov     edx, esi
        imul    edx, edx, 0x22ac
        lea     eax, [esi + 0xff]
        xor     ecx, 0x85739531
        xor     ebx, 0x85739531
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [edx + ebx]
        mov     dword ptr [esp + 0x28], ecx
        xor     ecx, ecx
        mov     dword ptr [esp + 0x1c], eax
        add     eax, 0x20676c
        mov     dword ptr [esp + 0x3c], 0x0
        mov     dword ptr [esp + 0x40], 0x0
        mov     dword ptr [esp + 0x2c], 0x0
        mov     dword ptr [esp + 0x30], 0x0
        mov     byte ptr [esp + 0x144], 0x0
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0xc], eax
L_3da:
        mov     eax, dword ptr [esp + 0xc]
        fld     dword ptr [eax]
        fcomp   dword ptr [g_float_76c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B) */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x40
        jz      L_42b
        mov     edx, esi
        imul    edx, edx, 0x8ab
        lea     eax, [edx + ecx]
        fld     dword ptr [ebx + eax*4 + 0x206ae0]
        fcomp   dword ptr [g_float_76c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_42b
        lea     eax, [edx + ecx]
        mov     edi, dword ptr [ebx + eax*4 + 0x206084]
        test    edi, edi
        jnz     L_42b
        add     edx, ecx
        mov     eax, dword ptr [ebx + edx*4 + 0x2063f8]
        test    eax, eax
        jz      L_51a
L_42b:
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        jz      L_46e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_77eb54
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x144]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [esp + 0x10]
L_46e:
        mov     eax, esi
        imul    eax, eax, 0x8ab
        lea     edx, [eax + ecx]
        sub     esp, 0x8
        sub     esp, 0x8
        fld     dword ptr [ebx + edx*4 + 0x206ae0]
        mov     edx, dword ptr [esp + 0x1c]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [edx]
        lea     edx, [eax + ecx]
        mov     edx, dword ptr [ebx + edx*4 + 0x206084]
        fstp    qword ptr [esp]
        push    edx
        add     eax, ecx
        mov     eax, dword ptr [ebx + eax*4 + 0x2063f8]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x60]
        push    offset g_str_77eb40
        push    ecx
        call    dword ptr [g_sprintf]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x24
        lea     edi, [esp + 0x44]
        repne   scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x144]
        repne   scasb
        not     ecx
        dec     ecx
        add     edx, ecx
        cmp     edx, 0x752e
        jnc     L_536
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x44]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x144]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [esp + 0x10]
L_51a:
        mov     edx, dword ptr [esp + 0xc]
        inc     ecx
        add     edx, 0x4
        cmp     ecx, 0xdd
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0xc], edx
        jl      L_3da
L_536:
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        mov     byte ptr [esp + 0x7673], 0x0
        jz      L_56b
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x144]
        push    eax
        push    ecx
        push    offset g_str_77eb34
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x10
        jmp     L_583
L_56b:
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    offset g_str_77eb28
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0xc
L_583:
        mov     eax, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        add     eax, 0x206e54
        mov     byte ptr [esp + 0x144], 0x0
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0xc], eax
L_59e:
        mov     edx, dword ptr [esp + 0xc]
        fld     dword ptr [edx]
        fcomp   dword ptr [g_float_76c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_5ef
        mov     edx, esi
        imul    edx, edx, 0x8ab
        lea     eax, [edx + ecx]
        fld     dword ptr [ebx + eax*4 + 0x2072b0]
        fcomp   dword ptr [g_float_76c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_5ef
        lea     eax, [edx + ecx]
        mov     edi, dword ptr [ebx + eax*4 + 0x20770c]
        test    edi, edi
        jnz     L_5ef
        add     edx, ecx
        mov     eax, dword ptr [ebx + edx*4 + 0x207b68]
        test    eax, eax
        jz      L_713
L_5ef:
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        jz      L_632
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_77eb54
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x144]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ebp + 0x8]
L_632:
        mov     eax, esi
        imul    eax, eax, 0x8ab
        lea     edx, [eax + ecx]
        mov     esi, dword ptr [ebx + edx*4 + 0x207b68]
        lea     edx, [eax + ecx]
        mov     edi, dword ptr [ebx + edx*4 + 0x20770c]
        push    esi
        add     eax, ecx
        push    edi
        lea     eax, [ebx + eax*4 + 0x2072b0]
        sub     esp, 0x8
        mov     dword ptr [esp + 0x48], eax
        fld     dword ptr [eax]
        mov     eax, dword ptr [esp + 0x1c]
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [eax]
        fstp    qword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x60]
        push    offset g_str_77eb14
        push    ecx
        call    dword ptr [g_sprintf]
        mov     edx, dword ptr [esp + 0x30]
        fld     dword ptr [edx]
        mov     eax, dword ptr [esp + 0x5c]
        fadd    qword ptr [esp + 0x60]
        or      ecx, 0xffffffff
        add     esp, 0x24
        fstp    qword ptr [esp + 0x3c]
        fld     dword ptr [eax]
        mov     eax, dword ptr [esp + 0x24]
        add     eax, edi
        fadd    qword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x20]
        add     edi, esi
        mov     dword ptr [esp + 0x20], edi
        fstp    qword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x24], eax
        xor     eax, eax
        lea     edi, [esp + 0x44]
        repne   scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x144]
        repne   scasb
        not     ecx
        dec     ecx
        add     edx, ecx
        cmp     edx, 0x752e
        jnc     L_72f
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x44]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x144]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ebp + 0x8]
L_713:
        mov     edx, dword ptr [esp + 0xc]
        inc     ecx
        add     edx, 0x4
        cmp     ecx, 0x117
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0xc], edx
        jl      L_59e
L_72f:
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        mov     byte ptr [esp + 0x7673], 0x0
        jz      L_764
        mov     esi, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x144]
        push    eax
        push    esi
        push    offset g_str_77eb08
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x10
        jmp     L_77c
L_764:
        mov     esi, dword ptr [esp + 0x14]
        push    esi
        push    offset g_str_77eafc
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0xc
L_77c:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ecx + 0x205d30]
        mov     dl, byte ptr [eax + 0x14]
        add     eax, 0x14
        mov     byte ptr [esp + 0x18], dl
        mov     ax, word ptr [eax + 0x2]
        mov     edx, dword ptr [esp + 0x28]
        lea     ecx, [esp + 0x18]
        mov     word ptr [esp + 0x1a], ax
        push    ecx
        mov     ecx, dword ptr [edx + 0x225c]
        call    FUN_006234b0
        push    eax
        push    esi
        push    offset g_str_77eb58
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x10
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_47cb:
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
