/*
 * FUN_00563d90 (1348 B) — writes a "PW"/"PD"/"PS" weapon/power data
 * block to the log. Two loops over 0xdd / 0x117 entries formatting
 * float/int fields via sprintf into a 0x7668-byte _alloca buffer.
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
extern char g_str_77eae8[];
extern int (__cdecl *g_sprintf)(char *, const char *, ...);

extern void __cdecl _alloca_probe(void);
extern int __cdecl FUN_00563550(const char *, ...);
extern void __cdecl FUN_00563c80(int);
extern int __cdecl FUN_006234b0(void *);

__declspec(naked) void FUN_00563d90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        mov     eax, 0x7668
        call    _alloca_probe
        mov     eax, dword ptr [g_007eebbc]
        push    ebx
        xor     ecx, ecx
        cmp     eax, ecx
        push    esi
        push    edi
        jnz     L_dba
        mov     eax, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_dba:
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        jz      L_42c8
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     bl, byte ptr [edx + 0x16]
        test    bl, bl
        jz      L_42c8
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     bl, byte ptr [edx + 0x17]
        test    bl, bl
        jz      L_42c8
        cmp     dword ptr [g_007ee7b8], ecx
        jz      L_42c8
        mov     edx, dword ptr [eax + 0x20]
        xor     edx, 0x85739531
        jz      L_42c8
        mov     ebx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x20]
        mov     esi, dword ptr [ebp + 0x8]
        xor     eax, 0x85739531
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, esi
        shl     eax, 0x7
        add     eax, esi
        shl     eax, 0x3
        xor     ebx, 0x85739531
        sub     eax, esi
        lea     eax, [ebx + eax*8]
        mov     dword ptr [esp + 0x14], eax
        add     eax, 0x3d00
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x34], 0x0
        mov     dword ptr [esp + 0x38], 0x0
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], ecx
        mov     byte ptr [esp + 0x144], 0x0
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0xc], eax
L_e81:
        fld     dword ptr [eax]
        fcomp   dword ptr [g_float_76c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B) */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x40
        jz      L_ed4
        mov     edx, esi
        shl     edx, 0x7
        add     edx, esi
        shl     edx, 0x3
        sub     edx, esi
        shl     edx, 0x1
        lea     eax, [edx + ecx]
        fld     dword ptr [ebx + eax*4 + 0x4074]
        fcomp   dword ptr [g_float_76c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_ed4
        lea     eax, [edx + ecx]
        mov     edi, dword ptr [ebx + eax*4 + 0x3618]
        test    edi, edi
        jnz     L_ed4
        add     edx, ecx
        mov     eax, dword ptr [ebx + edx*4 + 0x398c]
        test    eax, eax
        jz      L_fc8
L_ed4:
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        jz      L_f17
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
L_f17:
        mov     eax, esi
        shl     eax, 0x7
        add     eax, esi
        shl     eax, 0x3
        sub     eax, esi
        shl     eax, 0x1
        lea     edx, [eax + ecx]
        fld     dword ptr [ebx + edx*4 + 0x4074]
        mov     edx, dword ptr [esp + 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [edx]
        lea     edx, [eax + ecx]
        mov     edx, dword ptr [ebx + edx*4 + 0x3618]
        fstp    qword ptr [esp]
        push    edx
        add     eax, ecx
        mov     eax, dword ptr [ebx + eax*4 + 0x398c]
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
        jnc     L_fe4
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
L_fc8:
        mov     eax, dword ptr [esp + 0xc]
        inc     ecx
        add     eax, 0x4
        cmp     ecx, 0xdd
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0xc], eax
        jl      L_e81
L_fe4:
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        mov     byte ptr [esp + 0x7673], 0x0
        jz      L_4015
        lea     eax, [esp + 0x144]
        push    eax
        push    esi
        push    offset g_str_77eb34
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x10
        jmp     L_4029
L_4015:
        push    esi
        push    offset g_str_77eb28
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0xc
L_4029:
        mov     ecx, dword ptr [esp + 0x14]
        xor     edi, edi
        add     ecx, 0x43e8
        mov     byte ptr [esp + 0x144], 0x0
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0xc], ecx
L_4045:
        mov     edx, dword ptr [esp + 0xc]
        fld     dword ptr [edx]
        fcomp   dword ptr [g_float_76c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_409c
        mov     ecx, esi
        shl     ecx, 0x7
        add     ecx, esi
        shl     ecx, 0x3
        sub     ecx, esi
        shl     ecx, 0x1
        lea     eax, [ecx + edi]
        fld     dword ptr [ebx + eax*4 + 0x4844]
        fcomp   dword ptr [g_float_76c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT form */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_409c
        lea     edx, [ecx + edi]
        mov     eax, dword ptr [ebx + edx*4 + 0x4ca0]
        test    eax, eax
        jnz     L_409c
        add     ecx, edi
        mov     eax, dword ptr [ebx + ecx*4 + 0x50fc]
        test    eax, eax
        jz      L_41db
L_409c:
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        jz      L_40df
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
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [esp + 0x10]
L_40df:
        mov     eax, esi
        shl     eax, 0x7
        add     eax, esi
        shl     eax, 0x3
        sub     eax, esi
        shl     eax, 0x1
        lea     ecx, [eax + edi]
        mov     ecx, dword ptr [ebx + ecx*4 + 0x50fc]
        push    ecx
        lea     edx, [eax + edi]
        mov     edx, dword ptr [ebx + edx*4 + 0x4ca0]
        push    edx
        add     eax, edi
        fld     dword ptr [ebx + eax*4 + 0x4844]
        lea     eax, [ebx + eax*4 + 0x4844]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esp + 0x1c]
        fld     dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    edi
        mov     dword ptr [esp + 0x5c], ecx
        lea     ecx, [esp + 0x60]
        push    offset g_str_77eb14
        push    ecx
        mov     dword ptr [esp + 0x44], edx
        call    dword ptr [g_sprintf]
        mov     edx, dword ptr [esp + 0x30]
        fld     dword ptr [edx]
        mov     eax, dword ptr [esp + 0x54]
        fadd    qword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x64]
        mov     edi, dword ptr [esp + 0x40]
        add     edi, edx
        fstp    qword ptr [esp + 0x48]
        fld     dword ptr [eax]
        mov     eax, dword ptr [esp + 0x3c]
        add     eax, ecx
        fadd    qword ptr [esp + 0x58]
        or      ecx, 0xffffffff
        mov     dword ptr [esp + 0x40], edi
        add     esp, 0x24
        fstp    qword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x18], eax
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
        jnc     L_41f9
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
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [esp + 0x10]
L_41db:
        mov     ecx, dword ptr [esp + 0xc]
        inc     edi
        add     ecx, 0x4
        cmp     edi, 0x117
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0xc], ecx
        jl      L_4045
        jmp     L_41fd
L_41f9:
        mov     edi, dword ptr [esp + 0x10]
L_41fd:
        mov     al, byte ptr [esp + 0x144]
        test    al, al
        mov     byte ptr [esp + 0x7673], 0x0
        jz      L_422e
        lea     eax, [esp + 0x144]
        push    eax
        push    esi
        push    offset g_str_77eb08
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x10
        jmp     L_4242
L_422e:
        push    esi
        push    offset g_str_77eafc
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0xc
L_4242:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx + 0x3584]
        test    eax, eax
        jz      L_42bf
        mov     ecx, dword ptr [eax + 0x170]
        test    ecx, ecx
        jz      L_42bf
        mov     eax, ecx
        mov     dl, byte ptr [eax + 0x14]
        mov     ecx, edi
        shl     ecx, 0x7
        add     ecx, edi
        shl     ecx, 0x3
        add     eax, 0x14
        sub     ecx, edi
        fld     dword ptr [ebx + ecx*8 + 0x35a4]
        lea     ebx, [ebx + ecx*8]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [ecx + 0x225c]
        mov     byte ptr [esp + 0x14], dl
        mov     edx, dword ptr [ebx + 0x35bc]
        mov     ax, word ptr [eax + 0x2]
        push    edx
        push    0x0
        push    0x0
        sub     esp, 0x8
        mov     word ptr [esp + 0x2a], ax
        fstp    qword ptr [esp]
        lea     eax, [esp + 0x28]
        push    eax
        call    FUN_006234b0
        push    eax
        push    esi
        push    offset g_str_77eae8
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x24
L_42bf:
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_42c8:
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
