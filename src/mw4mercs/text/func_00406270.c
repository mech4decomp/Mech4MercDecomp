/*
 * FUN_00406270 (extent 0x406270-0x40647F, 527 bytes) - GOS in-.text block.
 * ret 0xc. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076c5ac;
extern float  g_0076c5b0;
extern char  *g_007b7dc8;
extern int    g_007dab40;
extern int   *g_007dab44;
extern char  *g_00858924;

extern void __cdecl FUN_006fe140(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void func_00406270(void)
{
    __asm {
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x204
        push    ebx
        mov     ebx, dword ptr [ecx]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [edx]
        xor     edi, dword ptr [g_007dab40]
        mov     esi, dword ptr [edi + 0xc]
        xor     esi, 0x85739531
        push    0
        add     esi, 0x34f4
        call    FUN_00707e70
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [esi + 4]
        mov     edx, dword ptr [esi + 8]
        xor     eax, 0x85739531
        fsub    qword ptr [eax + 0x3500]
        fstp    dword ptr [edx + ecx*4]
        mov     edx, dword ptr [esi + 4]
        mov     ecx, dword ptr [esi]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 4], edx
        jb      L_62d3
        mov     dword ptr [esi + 4], 0
L_62d3:
        mov     eax, dword ptr [g_007dab44]
        mov     esi, dword ptr [eax]
        mov     ebp, dword ptr [g_007dab40]
        push    0
        xor     esi, ebp
        call    FUN_00707e70
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        mov     esi, dword ptr [edx]
        xor     esi, eax
        mov     eax, dword ptr [esi + 0xc]
        xor     ecx, 0x85739531
        xor     eax, 0x85739531
        fstp    qword ptr [ecx + 0x3500]
        mov     ecx, dword ptr [eax + 0x34f4]
        fld     dword ptr [g_0076c5b0]
        add     eax, 0x34f4
        fst     dword ptr [esp + 0x10]
        test    ecx, ecx
        jbe     L_6469
        mov     eax, dword ptr [eax + 8]
L_632f:
        fadd    dword ptr [eax]
        add     eax, 4
        dec     ecx
        jne     L_632f
        fstp    dword ptr [esp + 0x10]
L_633b:
        push    0
        call    FUN_00707e70
        mov     eax, dword ptr [esi + 0xc]
        xor     eax, 0x85739531
        fsub    qword ptr [eax + 0x3500]
        fadd    dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5ac]
        fnstsw  ax
        test    ah, 1
        jne     L_6470
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x100
        jae     L_6470
        or      ecx, 0xffffffff
        mov     edi, dword ptr [g_00858924]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76c5a8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [g_007b7dc8]
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x76c5a8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        lea     eax, [esp + 0x14]
        and     ecx, 3
        push    eax
        rep     movsb
        call    FUN_006fe140
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x204
        ret     0xc
L_6469:
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        jmp     L_633b
L_6470:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x204
        ret     0xc
    }
}
