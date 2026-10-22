/*
 * FUN_004EA3D0 (1072 B) - MLR/Adept tile update (RET 4, one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_00420840(void);
extern void __cdecl FUN_004e2ee0(void);
extern void __cdecl FUN_004e8cc0(void);
extern int   g_7dc728;   /* DAT_007dc728 */
extern float g_76d064;   /* DAT_0076d064 */
extern float g_76c5b0;   /* DAT_0076c5b0 */
extern float g_76d070;   /* DAT_0076d070 */
extern float g_76dd60;   /* DAT_0076dd60 */

__declspec(naked) void __fastcall FUN_004ea3d0(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esi + 0x10]
        test    ecx, 0x1f000
        push    edi
        jz      L7F6
        mov     eax, ecx
        shr     eax, 0xb
        test    al, 0x1
        jz      L5F3
        mov     edi, dword ptr [esi + 0x124]
        test    edi, edi
        push    esi
        jnz     L41D
        mov     ecx, dword ptr [g_7dc728]
        add     ecx, 0x164
        call    FUN_004179b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
    L41D:
        mov     edx, dword ptr [g_7dc728]
        lea     ecx, [edx + 0x16c]
        call    FUN_004179b0
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        lea     ebx, [edi + 0x50]
        push    eax
        add     edi, 0x10
        push    edi
        mov     ecx, ebx
        call    FUN_00417d80
        push    ebx
        lea     ecx, [esp + 0x18]
        call    FUN_00420840
        fld     dword ptr [g_76d064]
        mov     ecx, dword ptr [g_7dc728]
        fdiv    dword ptr [ecx + 0x154]
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [ecx + 0x158]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [ecx + 0x15c]
        fmul    st(0), st(1)
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L493
        fstp    st(0)
        xor     bl, bl
        jmp     L4A7
    L493:
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     bl, byte ptr [esp + 0x10]
    L4A7:
        fld     dword ptr [esp + 0x28]
        mov     al, byte ptr [ecx + 0x150]
        fsub    dword ptr [ecx + 0x15c]
        mov     byte ptr [esi + 0x138], bl
        fmul    st(0), st(1)
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     dl, byte ptr [esp + 0x10]
        cmp     dl, al
        fstp    st(0)
        mov     byte ptr [esi + 0x139], dl
        jc      L4E7
        dec     al
        mov     byte ptr [esi + 0x139], al
    L4E7:
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [ecx + 0x160]
        fmul    dword ptr [esp + 0x30]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L508
        fstp    st(0)
        xor     al, al
        jmp     L51C
    L508:
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     al, byte ptr [esp + 0x10]
    L51C:
        fld     dword ptr [esp + 0x18]
        mov     byte ptr [esi + 0x13a], al
        fsub    dword ptr [ecx + 0x160]
        mov     al, byte ptr [ecx + 0x151]
        fmul    dword ptr [esp + 0x30]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x30]
        mov     dl, byte ptr [esp + 0x30]
        cmp     dl, al
        mov     byte ptr [esi + 0x13b], dl
        jc      L55C
        dec     al
        mov     byte ptr [esi + 0x13b], al
    L55C:
        mov     dl, byte ptr [esi + 0x139]
        mov     al, bl
        cmp     al, dl
        mov     byte ptr [esp + 0x30], al
        ja      L7F6
    L570:
        mov     bl, byte ptr [esi + 0x13a]
        cmp     bl, byte ptr [esi + 0x13b]
        mov     byte ptr [esp + 0x10], bl
        ja      L5D9
        mov     ebp, dword ptr [esp + 0x30]
    L586:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    ebp
        call    FUN_004e2ee0
        mov     ecx, dword ptr [eax + 0x15c]
        test    ecx, ecx
        lea     edi, [eax + 0x15c]
        jz      L5A6
        cmp     dword ptr [ecx], 0
        jnz     L5B7
    L5A6:
        push    eax
        mov     eax, dword ptr [g_7dc728]
        lea     ecx, [eax + 0x174]
        call    FUN_004179b0
    L5B7:
        push    esi
        mov     ecx, edi
        call    FUN_004179b0
        mov     al, byte ptr [esi + 0x13b]
        mov     ecx, dword ptr [g_7dc728]
        inc     bl
        cmp     bl, al
        mov     byte ptr [esp + 0x10], bl
        jbe     L586
        mov     al, byte ptr [esp + 0x30]
    L5D9:
        mov     dl, byte ptr [esi + 0x139]
        inc     al
        cmp     al, dl
        mov     byte ptr [esp + 0x30], al
        jbe     L570
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
    L5F3:
        mov     eax, dword ptr [esi + 0x128]
        test    eax, eax
        jnz     L603
        mov     eax, dword ptr [esi + 0x124]
    L603:
        shr     ecx, 0xa
        test    cl, 0x1
        jz      L656
        mov     ecx, dword ptr [esi + 0xd8]
        mov     edi, dword ptr [ecx + 0x10]
        push    esi
        lea     ecx, [edi + 0x154]
        call    FUN_004179b0
        push    esi
        mov     ecx, edi
        call    FUN_004e8cc0
        mov     al, byte ptr [edi + 0x150]
        mov     byte ptr [esi + 0x138], al
        mov     byte ptr [esi + 0x139], al
        mov     al, byte ptr [edi + 0x151]
        pop     edi
        mov     byte ptr [esi + 0x13a], al
        mov     byte ptr [esi + 0x13b], al
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
    L656:
        mov     edx, dword ptr [esi + 0xd8]
        lea     edi, [eax + 0x50]
        add     edx, 0x80
        push    edx
        add     eax, 0x10
        push    eax
        mov     ecx, edi
        call    FUN_00417d80
        push    edi
        lea     ecx, [esp + 0x18]
        call    FUN_00420840
        fld     dword ptr [g_76d064]
        mov     ecx, dword ptr [g_7dc728]
        fdiv    dword ptr [ecx + 0x154]
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [ecx + 0x158]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [ecx + 0x15c]
        fmul    st(0), st(1)
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L6BC
        fstp    st(0)
        xor     bl, bl
        jmp     L6D0
    L6BC:
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     bl, byte ptr [esp + 0x10]
    L6D0:
        fld     dword ptr [esp + 0x28]
        mov     al, byte ptr [ecx + 0x150]
        fsub    dword ptr [ecx + 0x15c]
        mov     byte ptr [esi + 0x138], bl
        fmul    st(0), st(1)
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     dl, byte ptr [esp + 0x10]
        cmp     dl, al
        fstp    st(0)
        mov     byte ptr [esi + 0x139], dl
        jc      L710
        dec     al
        mov     byte ptr [esi + 0x139], al
    L710:
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [ecx + 0x160]
        fmul    dword ptr [esp + 0x30]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L731
        fstp    st(0)
        xor     al, al
        jmp     L745
    L731:
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     al, byte ptr [esp + 0x10]
    L745:
        fld     dword ptr [esp + 0x18]
        mov     byte ptr [esi + 0x13a], al
        fsub    dword ptr [ecx + 0x160]
        mov     al, byte ptr [ecx + 0x151]
        fmul    dword ptr [esp + 0x30]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x30]
        mov     dl, byte ptr [esp + 0x30]
        cmp     dl, al
        mov     byte ptr [esi + 0x13b], dl
        jc      L785
        dec     al
        mov     byte ptr [esi + 0x13b], al
    L785:
        mov     dl, byte ptr [esi + 0x139]
        mov     al, bl
        cmp     al, dl
        mov     byte ptr [esp + 0x30], al
        ja      L7F6
    L795:
        mov     bl, byte ptr [esi + 0x13a]
        cmp     bl, byte ptr [esi + 0x13b]
        mov     byte ptr [esp + 0x10], bl
        ja      L7E6
    L7A7:
        mov     ebp, dword ptr [esp + 0x30]
    L7AB:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    ebp
        call    FUN_004e2ee0
        mov     edi, eax
        push    esi
        lea     ecx, [edi + 0x154]
        call    FUN_004179b0
        push    esi
        mov     ecx, edi
        call    FUN_004e8cc0
        mov     al, byte ptr [esi + 0x13b]
        mov     ecx, dword ptr [g_7dc728]
        inc     bl
        cmp     bl, al
        mov     byte ptr [esp + 0x10], bl
        jbe     L7AB
        mov     al, byte ptr [esp + 0x30]
    L7E6:
        mov     dl, byte ptr [esi + 0x139]
        inc     al
        cmp     al, dl
        mov     byte ptr [esp + 0x30], al
        jbe     L795
    L7F6:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
    }
}
