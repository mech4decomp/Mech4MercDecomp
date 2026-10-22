/*
 * FUN_005028B0 (882 B) — dispatcher with two-level jump table, IAT
 * calls, and FPU ops.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);

/* IAT entries */
extern int g_76b420;
extern int g_76b2a8;
extern int g_76b2ac;

/* data */
extern float g_776418;
extern short g_7db0ac;
extern short g_7db0ae;

/* dispatch tables */
extern char g_502c48;
extern int g_502c24;

__declspec(naked) void func_005028b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x170
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx + 0x18]
        cmp     eax, 0x231
        push    esi
        push    edi
        jg      l_default
        jz      l_caseI
        dec     eax
        cmp     eax, 0xf
        ja      l_default
        xor     edx, edx
        mov     dl, byte ptr [eax + g_502c48]
        jmp     dword ptr [edx*4 + g_502c24]

    l_caseA:
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 8]
        push    edx
        call    dword ptr [eax + 8]
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [eax]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x77655c
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0x10
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_caseB:
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0xc]
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    dword ptr [edx + 8]
        fld     dword ptr [g_776418]
        fmul    dword ptr [esp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx]
        sub     esp, 8
        fst     dword ptr [esp + 0x14]
        fstp    qword ptr [esp]
        push    0x77655c
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0x10
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_caseC:
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 8]
        push    edx
        call    dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        push    0x76b9a8
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_caseD:
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 8]
        push    edx
        call    dword ptr [eax + 8]
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [eax]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [esp + 0x28]
        sub     esp, 8
        fstp    qword ptr [esp + 8]
        fld     dword ptr [esp + 0x2c]
        fstp    qword ptr [esp]
        push    0x77654c
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0x20
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_caseE:
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x13]
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    dword ptr [edx + 8]
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      l_caseE_else
        mov     edi, 0x76ccac
    l_caseE_common:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [ebp + 0x10]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [eax]
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    l_caseE_else:
        mov     edi, 0x76cca8
        jmp     l_caseE_common

    l_caseF:
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x14]
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    dword ptr [edx + 8]
        fld     dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [esp + 0x28]
        sub     esp, 8
        fstp    qword ptr [esp + 8]
        fld     dword ptr [esp + 0x2c]
        fstp    qword ptr [esp]
        push    0x77654c
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0x20
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_caseG:
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 8]
        push    edx
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        call    dword ptr [eax + 8]
        fld     dword ptr [esp + 0x20]
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [eax]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [esp + 0x2c]
        sub     esp, 8
        fstp    qword ptr [esp + 8]
        sub     esp, 8
        fld     dword ptr [esp + 0x38]
        fstp    qword ptr [esp + 8]
        fld     dword ptr [esp + 0x34]
        fstp    qword ptr [esp]
        push    0x776538
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0x28
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_caseH:
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x24]
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    dword ptr [edx + 8]
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0041ac80
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    eax
        mov     eax, dword ptr [edx]
        push    ecx
        push    0x77654c
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0x14
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    l_caseI:
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0xc]
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    eax
        mov     word ptr [esp + 0x14], 0xffff
        mov     word ptr [esp + 0x16], 0
        call    dword ptr [edx + 8]
        mov     cx, word ptr [esp + 0xc]
        cmp     cx, word ptr [g_7db0ac]
        jnz     l_caseI_52
        mov     dx, word ptr [esp + 0xe]
        cmp     dx, word ptr [g_7db0ae]
        jz      l_caseI_bdd
    l_caseI_52:
        push    1
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_004d1f80
        mov     edi, dword ptr [esp + 0x5c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 0x78]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [g_76b2a8]
        lea     ecx, [esp + 0x78]
        push    0x7b
        push    ecx
        call    esi
        lea     edx, [esp + 0x80]
        push    0x2e
        push    edx
        call    esi
        push    0x776490
        push    eax
        call    dword ptr [g_76b2ac]
        add     esp, 0x18
        test    eax, eax
        jnz     l_caseI_ce
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x78]
        push    eax
        push    0x77652c
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xc
    l_caseI_ce:
        lea     ecx, [esp + 0x34]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    l_caseI_bdd:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76b9a0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 0x78]
        mov     esi, edi
        mov     edi, edx
        mov     edx, dword ptr [ebp + 0x10]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [edx]
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 0x78]
        push    ecx
        push    0x76c690
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0xc
    l_default:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
