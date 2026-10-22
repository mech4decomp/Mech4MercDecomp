/*
 * FUN_005DC4A0 (1347 B) — Large state-machine update. Reads global
 * tables at 0x007DAB44/0x007DAB40, dispatches on object types, does
 * string building into a global buffer at 0x007DDE30, allocates an
 * object, and performs FPU comparisons before calling virtual methods.
 *
 * __fastcall (ECX = this), RET 8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005dc4a0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_005dcd82(void);
extern int DAT_007f2500;
extern void __cdecl FUN_1004dad01(void);
extern int DAT_007f2450;
extern void __cdecl FUN_006f4883(void);
extern int DAT_0080d964;
extern void __cdecl FUN_0064b6f6(void);
extern void __cdecl FUN_006f480e(void);
extern int DAT_0076b2a8;
extern int DAT_0076b2ac;
extern int DAT_0076b0c0;
extern int DAT_0076b0c8;
extern void __cdecl FUN_0061c75d(void);
extern int DAT_007dde2c;
extern int DAT_0076b2d4;
extern void __cdecl FUN_006fa88d(void);
extern void __cdecl FUN_100408149(void);
extern void __cdecl FUN_0064ac1f(void);
extern void __cdecl FUN_006fa7b1(void);
extern int DAT_0076b2a0;
extern void __cdecl FUN_0064b3ab(void);
extern void __cdecl FUN_006f456e(void);
extern int DAT_007f268c;
extern void __cdecl FUN_100414dce(void);
extern int DAT_0076c5b0;
extern int DAT_0076d064;
extern void __cdecl FUN_1005db9b7(void);
extern int DAT_0077a1a0;
extern int DAT_0076d5ec;
extern void __cdecl FUN_1004da85d(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x2AC
        mov eax, dword ptr [DAT_007dab44]
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     ecx, dword ptr [eax]
        push    edi
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0xC]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x4C]
        cmp     dword ptr [eax + 0x14], 4
        jz      L9ae
        mov     ecx, dword ptr [ebx + 0xE0]
        cmp     dword ptr [ecx + 0x14], 1
        jz      L9da
        mov     ecx, ebx
        call FUN_005dcd82
        mov     al, byte ptr [ebx + 0x2F0]
        test    al, al
        jnz     L522
        mov     cl, byte ptr [ebx + 0x2F1]
        test    cl, cl
        jz      L522
        mov     edx, dword ptr [ebx + 0x2FC]
        cmp edx, dword ptr [DAT_007f2500]
        jz      L522
        mov     eax, dword ptr [ebp + 0xC]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, ebx
        call FUN_1004dad01
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L522:
        mov     cl, byte ptr [ebx + 0x2FA]
        test    cl, cl
        jz      L5d6
        mov     ecx, dword ptr [ebx + 0x2E4]
        xor     edi, edi
        cmp     ecx, edi
        jnz     L548
        cmp     dword ptr [ebx + 0x2EC], edi
        jz      L5d8
    L548:
        test    al, al
        jnz     L5e0
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x114]
        cmp     al, 1
        jz      L56c
        mov     al, byte ptr [ebx + 0x2F1]
        test    al, al
        jnz     L8dc
    L56c:
        mov eax, dword ptr [DAT_007f2450]
        push    eax
        call FUN_006f4883
        mov     eax, dword ptr [ebx + 0x2EC]
        cmp     eax, edi
        mov dword ptr [DAT_0080d964], ebx
        jz      L5b8
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x10]
        mov     edx, dword ptr [ebp + 0xC]
        xor     ecx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [ebp + 0x8]
        push    edx
        push    ecx
        push    ebx
        call    eax
        add     esp, 0x10
        mov dword ptr [DAT_0080d964], edi
        jmp     L8d7
    L5b8:
        mov     ecx, dword ptr [ebx + 0x2E4]
        push    edi
        call FUN_0064b6f6
        mov     byte ptr [ebx + 0x2F1], 1
        mov dword ptr [DAT_0080d964], edi
        jmp     L8d7
    L5d6:
        xor     edi, edi
    L5d8:
        test    al, al
        jz      L8dc
    L5e0:
        mov edx, dword ptr [DAT_007f2450]
        push    edx
        call FUN_006f480e
        mov     esi, dword ptr [ebx + 0x2D4]
        cmp     byte ptr [esi], 0
        mov     dword ptr [ebx + 0x2EC], edi
        mov     dword ptr [ebx + 0x2E4], edi
        mov     dword ptr [ebx + 0x2E8], edi
        jz      L8b3
        push    0x2E
        push    esi
        call dword ptr [DAT_0076b2a8]
        push    0x7884D4
        push    eax
        call dword ptr [DAT_0076b2ac]
        add     esp, 0x10
        test    eax, eax
        jnz     L655
        push    esi
        call dword ptr [DAT_0076b0c0]
        cmp     eax, edi
        mov     dword ptr [ebx + 0x2E8], eax
        jz      L8c6
        push    0x7884C8
        push    eax
        call dword ptr [DAT_0076b0c8]
        mov     dword ptr [ebx + 0x2EC], eax
        jmp     L8c6
    L655:
        or      ecx, 0xFFFFFFFF
        mov     dword ptr [ebp - 0xAC], edi
        mov     dword ptr [ebp - 0xA8], edi
        mov     edi, esi
        mov     byte ptr [ebp - 0x2AC], 0
        mov     byte ptr [ebp - 0x1AD], 0
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp - 0xA4]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        xor     edi, edi
        push    edi
        push    edi
        push    edi
        push    edi
        lea     ecx, [ebp - 0x2AC]
        push    ecx
        lea     edx, [ebp - 0xA4]
        push    edx
        call FUN_0061c75d
        mov     esi, eax
        add     esp, 0x18
        cmp     esi, edi
        mov     dword ptr [ebx + 0x2E0], esi
        jge     L82a
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      L817
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, 0x76CB8C
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x7DDE30
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        lea     edi, [ebp - 0x1AD]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x7DDE30
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xFFFFFFFF
        mov     edi, 0x77E7DC
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, 0x7DDE30
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    0xA
        lea     eax, [ebp - 0x24]
        rep     movsb
        mov     ecx, dword ptr [ebp - 0xAC]
        push    eax
        push    ecx
        call dword ptr [DAT_0076b2d4]
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        lea     edi, [ebp - 0x24]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, 0x7DDE30
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xFFFFFFFF
        mov     edi, 0x77E7D8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        mov     edx, ecx
        or      ecx, 0xFFFFFFFF
        mov     edi, 0x7DDE30
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xFFFFFFFF
        mov     edi, 0x7884C4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, 0x7DDE30
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xFFFFFFFF
        lea     edi, [ebp - 0x2AC]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, 0x7DDE30
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    0x7DDE30
        rep     movsb
        call FUN_006fa88d
        add     esp, 0x10
        test    eax, eax
        jz      L815
        int     3
    L815:
        xor     edi, edi
    L817:
        mov     dword ptr [ebx + 0x2E0], edi
        mov     dword ptr [ebx + 0x2E4], edi
        xor     edi, edi
        jmp     L8c6
    L82a:
        push    0x40
        call FUN_100408149
        add     esp, 4
        cmp     eax, edi
        jz      L86b
        mov     dword ptr [eax], 0xFFFFFFFF
        mov     byte ptr [eax + 4], 0
        mov     dword ptr [eax + 0x20], 0xFFFFFFFF
        mov     dword ptr [eax + 0x24], edi
        mov     byte ptr [eax + 0x2C], 0
        mov     dword ptr [eax + 0x30], edi
        mov     dword ptr [eax + 0x34], edi
        mov     dword ptr [eax + 0x38], edi
        mov     byte ptr [eax + 0x3C], 0
        mov     byte ptr [eax + 0x3D], 0
        mov     byte ptr [eax + 0x3E], 0
        mov     byte ptr [eax + 0x3F], 0
        jmp     L86d
    L86b:
        xor     eax, eax
    L86d:
        push    esi
        mov     ecx, eax
        mov     dword ptr [ebx + 0x2E4], eax
        call FUN_0064ac1f
        test    eax, eax
        jz      L891
        push    0x788314
        call FUN_006fa7b1
        add     esp, 4
        test    eax, eax
        jz      L891
        int     3
    L891:
        mov     eax, dword ptr [ebx + 0x2D4]
        push    0x5C
        push    eax
        call dword ptr [DAT_0076b2a0]
        mov     ecx, dword ptr [ebx + 0x2E4]
        add     esp, 8
        push    eax
        call FUN_0064b3ab
        xor     edi, edi
        jmp     L8c6
    L8b3:
        mov     dword ptr [ebx + 0x2E0], edi
        mov     dword ptr [ebx + 0x2E4], edi
        mov     byte ptr [ebx + 0x2F1], 1
    L8c6:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        mov     byte ptr [ebx + 0x30A], 1
        call    dword ptr [edx + 0x110]
    L8d7:
        call FUN_006f456e
    L8dc:
        cmp     byte ptr [ebx + 0x1C4], 1
        mov     byte ptr [ebx + 0x2F0], 0
        jnz     L9ae
        mov     esi, dword ptr [ebx + 0x170]
        cmp     esi, edi
        jz      L9a7
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100414dce
        cmp     al, 1
        jnz     L9a7
        mov     ecx, dword ptr [esi + 0x408]
        cmp     ecx, edi
        jz      L99c
        fld     dword ptr [ecx + 0x50]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L937
        mov     dword ptr [ebp - 4], 0
        jmp     L96c
    L937:
        fld     dword ptr [ecx + 0x4C]
        fdiv    dword ptr [ecx + 0x50]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L954
        fstp    st(0)
        fld dword ptr [DAT_0076c5b0]
        jmp     L969
    L954:
        fcom dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L969
        fstp    st(0)
        fld dword ptr [DAT_0076d064]
    L969:
        fstp    dword ptr [ebp - 4]
    L96c:
        mov     ecx, ebx
        call FUN_1005db9b7
        mov     dword ptr [ebp - 8], eax
        fild    dword ptr [ebp - 8]
        fmul dword ptr [DAT_0077a1a0]
        fsub dword ptr [DAT_0076d5ec]
        fcomp   dword ptr [ebp - 4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L9ae
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x10C]
        jmp     L9a7
    L99c:
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x10C]
    L9a7:
        mov     byte ptr [ebx + 0x1C4], 0
    L9ae:
        mov     eax, dword ptr [ebp + 0xC]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, ebx
        call FUN_1004da85d
        mov     edx, dword ptr [ebx + 0x10]
        shr     edx, 6
        test    dl, 1
        jnz     L9da
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xC]
        mov     dword ptr [ebx + 0xE4], eax
        mov     dword ptr [ebx + 0xE8], ecx
    L9da:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
