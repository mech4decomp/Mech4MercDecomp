/*
 * FUN_004B5950 (554 B) — __thiscall (this in ecx) / __stdcall (RET 0xc,
 * 3 stack params).
 *
 * In-.text data block at 0x4B579D. FPU-heavy: computes a squared-length
 * value, iterates a table at this+0x150 (0x10-byte entries), and for each
 * entry does FPU comparisons / interpolation updating the float global
 * 0x7dab14, then calls virtual methods at [ebp+0x130]/[ebp+0x13c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7daac8;  /* DAT_007daac8 */
extern float g_76c5b0;  /* DAT_0076c5b0 */
extern int   g_7dab14;  /* DAT_007dab14 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040CA10(void);
extern void __cdecl FUN_00491280(void);

__declspec(naked) void __cdecl FUN_004B5950(void)
{
    __asm {
        sub     esp, 0x64
        mov     eax, dword ptr [esp + 0x68]
        push    esi
        mov     esi, ecx
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x14], esi
        call    FUN_00419480
        lea     ecx, [esi + 0x80]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_00419480
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040CA10
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st(0)
        fadd    dword ptr [g_7daac8]
        fst     dword ptr [esp + 4]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: fnstsw ax (no-WAIT DF E0; MSVC6 inserts 9B WAIT) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah, imm8 (MSVC6 rejects test ah,imm8) */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L4b59cb
        mov     dword ptr [esp + 4], 0
L4b59cb:
        mov     ecx, dword ptr [esi + 0x154]
        dec     ecx
        mov     dword ptr [esp + 8], ecx
        js      L4b5b73
        push    ebx
        mov     ebx, dword ptr [esi + 0x150]
        mov     edx, ecx
        push    ebp
        shl     edx, 4
        push    edi
        add     ebx, edx
L4b59ec:
        fld     dword ptr [ebx]
        mov     dword ptr [esp + 0x20], ebx
        fcomp   dword ptr [esp + 0x10]
        /* __emit: fnstsw ax (no-WAIT DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      L4b5b60
        fld     dword ptr [ebx + 0xc]
        fcomp   dword ptr [esp + 0x10]
        /* __emit: fnstsw ax (no-WAIT DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L4b5b60
        mov     eax, dword ptr [esi + 0x144]
        mov     ebp, dword ptr [eax + ecx*4]
        lea     ecx, [esp + 0x3c]
        call    FUN_00491280
        mov     eax, dword ptr [esp + 0x7c]
        mov     esi, eax
        mov     ecx, 6
        lea     edi, [esp + 0x3c]
        rep     movsd
        mov     esi, dword ptr [esp + 0x7c]
        xor     edi, edi
        lea     edx, [esp + 0x3c]
        xor     ecx, ecx
        add     eax, 0x18
        mov     dword ptr [esp + 0x54], edi
        sub     edx, esi
L4b5a4b:
        mov     esi, dword ptr [eax]
        cmp     esi, edi
        je      L4b5a5f
        mov     dword ptr [edx + eax], esi
        inc     ecx
        add     eax, 4
        cmp     ecx, 8
        jb      L4b5a4b
        jmp     L4b5a68
L4b5a5f:
        cmp     ecx, 8
        jae     L4b5a68
        mov     dword ptr [esp + ecx*4 + 0x54], edi
L4b5a68:
        fld     dword ptr [esp + 0x10]
        mov     ecx, dword ptr [g_7dab14]
        fcomp   dword ptr [ebx + 4]
        mov     dword ptr [esp + 0x18], ecx
        /* __emit: fnstsw ax (no-WAIT DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L4b5ab3
        fld     dword ptr [ebx]
        mov     edx, dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x10]
        and     edx, 0xffff3fff
        /* __emit: fsub st(1),st(0) -> D8 E1 (MSVC6 emits DC E9 FSUBR form) */
        __emit 0xD8
        __emit 0xE1
        or      edx, 0x10000
        fld     dword ptr [ebx + 4]
        mov     dword ptr [esp + 0x3c], edx
        /* __emit: fsub st(2),st(0) -> D8 E2 (MSVC6 emits DC EA FSUBR form) */
        __emit 0xD8
        __emit 0xE2
        fdivp   st(1), st(0)
        fmul    dword ptr [g_7dab14]
        fstp    dword ptr [g_7dab14]
        /* __emit: fstp st(0) -> raw DD D8 */
        __emit 0xDD
        __emit 0xD8
        jmp     L4b5aee
L4b5ab3:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [ebx + 8]
        /* __emit: fnstsw ax (no-WAIT DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L4b5b2d
        fld     dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x10]
        and     eax, 0xffff3fff
        fld     dword ptr [ebx + 0xc]
        or      eax, 0x10000
        fsub    dword ptr [ebx + 8]
        mov     dword ptr [esp + 0x3c], eax
        fdivp   st(1), st(0)
        fmul    dword ptr [g_7dab14]
        fstp    dword ptr [g_7dab14]
L4b5aee:
        mov     eax, dword ptr [esp + 0x44]
        mov     edi, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x4c]
        or      eax, 0x1c000
        mov     dword ptr [esp + 0x44], eax
        mov     eax, dword ptr [esp + 0x40]
        and     eax, 0xfffffff0
        or      eax, 2
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esp + 0x50]
        and     edi, 0xfffe3fff
        or      edx, 0xf
        and     eax, 0xfffffff0
        mov     dword ptr [esp + 0x48], edi
        mov     dword ptr [esp + 0x4c], edx
        mov     dword ptr [esp + 0x50], eax
L4b5b2d:
        mov     esi, dword ptr [esp + 0x78]
        push    esi
        mov     ecx, ebp
        call    dword ptr [ebp + 0x130]
        cmp     eax, -1
        je      L4b5b4e
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        push    esi
        mov     ecx, ebp
        call    dword ptr [ebp + 0x13c]
L4b5b4e:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x1c]
        mov     dword ptr [g_7dab14], edx
L4b5b60:
        dec     ecx
        sub     ebx, 0x10
        test    ecx, ecx
        mov     dword ptr [esp + 0x14], ecx
        jge     L4b59ec
        pop     edi
        pop     ebp
        pop     ebx
L4b5b73:
        pop     esi
        add     esp, 0x64
        ret     0xc
    }
}
