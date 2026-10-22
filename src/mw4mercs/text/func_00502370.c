/*
 * FUN_00502370 (1257 B) — large dispatcher with two jump tables, IAT
 * calls, and FPU ops.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0041afa0(void);
extern void __cdecl FUN_0041b680(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0100(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_004d0690(void);
extern void __cdecl FUN_0040de20(void);

/* IAT entries */
extern int g_76b2d8;
extern int g_76b2dc;
extern int g_76b424;
extern int g_76b318;
extern int g_76b2ac;
extern int g_76b2a8;

/* data */
extern float g_77641c;
extern int g_7db0a0;
extern char g_7dc694;
extern short g_7dc696;
extern short g_7db0ac;
extern short g_7db0ae;

/* jump tables */
extern int g_50285c;
extern int g_50289c;

__declspec(naked) void func_00502370(void)
{
    __asm {
        sub     esp, 0xbc
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xcc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xd8]
        mov     dl, byte ptr [edi]
        xor     bl, bl
        test    dl, dl
        setnz   al
        test    al, al
        mov     byte ptr [esp + 0x13], al
        jz      l_tail_bc
        mov     eax, dword ptr [ebp + 0x18]
        cmp     eax, 0x231
        jg      l_tail_bc
        jz      l_case9
        dec     eax
        cmp     eax, 0xf
        ja      l_tail_bc
        jmp     dword ptr [eax*4 + g_50285c]

    l_case0:
        push    edi
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0xd4]
        mov     eax, dword ptr [ebp]
        add     esp, 4
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax + 4]
        jmp     l_tail_ba

    l_case1:
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        push    0x76d860
        push    edi
        call    dword ptr [g_76b2dc]
        add     esp, 0x14
        cmp     eax, 3
        jz      l_case1_3
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [esp + 0xe0]
        mov     edx, dword ptr [esp + 0xdc]
        push    edi
        push    eax
        mov     eax, dword ptr [edx]
        push    0x776508
        push    ecx
        push    eax
        call    dword ptr [g_76b424]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xbc
        ret
    l_case1_3:
        mov     edx, dword ptr [ebp]
        lea     eax, [esp + 0x18]
        jmp     l_tail_ac

    l_case2:
        push    edi
        call    dword ptr [g_76b318]
        mov     edx, dword ptr [ebp]
        mov     dword ptr [esp + 0x18], eax
        add     esp, 4
        lea     eax, [esp + 0x14]
        jmp     l_tail_ac

    l_case3:
        mov     esi, dword ptr [g_76b2ac]
        push    0x76d170
        push    edi
        call    esi
        add     esp, 8
        test    eax, eax
        jz      l_case3_set1
        push    0x76ccac
        push    edi
        call    esi
        add     esp, 8
        test    eax, eax
        jz      l_case3_set1
        push    edi
        call    dword ptr [g_76b318]
        add     esp, 4
        test    eax, eax
        mov     byte ptr [esp + 0x12], 0
        jz      l_case3_common
    l_case3_set1:
        mov     byte ptr [esp + 0x12], 1
    l_case3_common:
        mov     edx, dword ptr [ebp]
        lea     eax, [esp + 0x12]
        jmp     l_tail_ac

    l_case4:
        push    edi
        call    dword ptr [g_76b2d8]
        fmul    dword ptr [g_77641c]
        mov     edx, dword ptr [ebp]
        add     esp, 4
        fstp    dword ptr [esp + 0x14]
        lea     eax, [esp + 0x14]
        jmp     l_tail_ac

    l_case5:
        lea     edx, [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x76d860
        push    edi
        call    dword ptr [g_76b2dc]
        add     esp, 0x14
        cmp     eax, 3
        jz      l_case5_3
        mov     edx, dword ptr [ebp + 0x14]
        push    edi
        push    edx
        push    0x7764e4
        jmp     l_case7_shared
    l_case5_3:
        mov     edx, dword ptr [esp + 0xd0]
        mov     eax, dword ptr [ebp]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax + 4]
        jmp     l_tail_ba

    l_case6:
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        push    0x76d944
        push    edi
        mov     dword ptr [esp + 0x38], 0xbf800000
        mov     dword ptr [esp + 0x34], 0xbf800000
        mov     dword ptr [esp + 0x30], 0xbf800000
        mov     dword ptr [esp + 0x3c], 0xbf800000
        call    dword ptr [g_76b2dc]
        add     esp, 0x18
        cmp     eax, 3
        jnz     l_case6_not3
        mov     dword ptr [esp + 0x24], 0x3f800000
    l_case6_ge:
        mov     edx, dword ptr [ebp]
        lea     eax, [esp + 0x18]
        jmp     l_tail_ac
    l_case6_not3:
        jge     l_case6_ge
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [esp + 0xe0]
        mov     eax, dword ptr [esp + 0xdc]
        push    edi
        push    ecx
        mov     ecx, dword ptr [eax]
        push    0x7764bc
        push    edx
        push    ecx
        call    dword ptr [g_76b424]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xbc
        ret

    l_case7:
        lea     edx, [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x76d860
        push    edi
        call    dword ptr [g_76b2dc]
        add     esp, 0x14
        cmp     eax, 3
        jz      l_case7_3
        mov     edx, dword ptr [ebp + 0x14]
        push    edi
        push    edx
        push    0x776498
    l_case7_shared:
        mov     eax, dword ptr [esp + 0xec]
        mov     ecx, dword ptr [esp + 0xe8]
        mov     edx, dword ptr [ecx]
        push    eax
        push    edx
        call    dword ptr [g_76b424]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xbc
        ret
    l_case7_3:
        fld     dword ptr [esp + 0x18]
        lea     eax, [esp + 0x18]
        fmul    dword ptr [g_77641c]
        push    eax
        lea     ecx, [esp + 0x2c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [g_77641c]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [g_77641c]
        fstp    dword ptr [esp + 0x24]
        call    FUN_0041afa0
        lea     ecx, [esp + 0x28]
        call    FUN_0041b680
        mov     edx, dword ptr [ebp]
        lea     eax, [esp + 0x28]
        jmp     l_tail_ac

    l_case8:
        push    0x100
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0xd0]
        push    edx
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], edx
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     bl, 1
        call    FUN_004084e0
        add     esp, 4
        jmp     l_tail_bc

    l_case9:
        push    0x2e
        push    edi
        call    dword ptr [g_76b2a8]
        mov     esi, eax
        add     esp, 8
        test    esi, esi
        jz      l_case9_78e
        mov     ebx, dword ptr [g_76b2ac]
        push    0x776490
        push    esi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     l_case9_70a
        lea     ecx, [esp + 0x38]
        call    FUN_004d1f10
        mov     ecx, dword ptr [g_7db0a0]
        push    edi
        lea     eax, [esp + 0x3c]
        push    eax
        call    FUN_004d0100
        mov     ecx, dword ptr [esp + 0xd0]
        mov     edx, dword ptr [ebp]
        lea     eax, [esp + 0x78]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 4]
        lea     ecx, [esp + 0x38]
        mov     bl, 1
        call    FUN_004d21c0
        jmp     l_tail_bc
    l_case9_70a:
        push    0x776484
        push    esi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     l_case9_78e
        push    eax
        push    eax
        push    edi
        lea     ecx, [esp + 0x88]
        call    FUN_0040dca0
        lea     ecx, [esp + 0x38]
        call    FUN_004d1f10
        mov     dl, byte ptr [g_7dc694]
        mov     ax, word ptr [g_7dc696]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        mov     byte ptr [esp + 0x18], dl
        lea     edx, [esp + 0x80]
        mov     word ptr [esp + 0x1a], ax
        push    edx
        lea     eax, [esp + 0x40]
        push    eax
        call    FUN_004d0690
        mov     ecx, dword ptr [esp + 0xd0]
        mov     edx, dword ptr [ebp]
        lea     eax, [esp + 0x78]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 4]
        lea     ecx, [esp + 0x38]
        mov     bl, 1
        call    FUN_004d21c0
        lea     ecx, [esp + 0x7c]
        call    FUN_0040de20
        jmp     l_tail_bc
    l_case9_78e:
        mov     dx, word ptr [g_7db0ac]
        mov     ax, word ptr [g_7db0ae]
        mov     word ptr [esp + 0x14], dx
        mov     edx, dword ptr [ebp]
        mov     word ptr [esp + 0x16], ax
        lea     eax, [esp + 0x14]
    l_tail_ac:
        mov     ecx, dword ptr [esp + 0xd0]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 4]
    l_tail_ba:
        mov     bl, 1
    l_tail_bc:
        mov     eax, dword ptr [ebp + 0x10]
        dec     eax
        cmp     eax, 4
        ja      l_second_default
        jmp     dword ptr [eax*4 + g_50289c]

    l_second0:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_second_default
        mov     edx, dword ptr [ebp]
        mov     byte ptr [esp + 0x12], 0
        lea     eax, [esp + 0x12]
        jmp     l_second_tail
    l_second1:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_second_default
        mov     edx, dword ptr [ebp]
        mov     byte ptr [esp + 0x12], 0
        lea     eax, [esp + 0x12]
        jmp     l_second_tail
    l_second2:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_second_default
        mov     edx, dword ptr [ebp]
        mov     byte ptr [esp + 0x12], 0
        lea     eax, [esp + 0x12]
        jmp     l_second_tail
    l_second3:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_second_default
        mov     edx, dword ptr [ebp]
        mov     byte ptr [esp + 0x12], 0
        lea     eax, [esp + 0x12]
        jmp     l_second_tail
    l_second4:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_second_default
        mov     edx, dword ptr [ebp]
        mov     byte ptr [esp + 0x12], 1
        lea     eax, [esp + 0x12]
    l_second_tail:
        mov     ecx, dword ptr [esp + 0xd0]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 4]
        mov     bl, 1
    l_second_default:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, bl
        pop     ebx
        add     esp, 0xbc
        ret
    }
}
