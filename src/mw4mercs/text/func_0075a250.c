/*
 * FUN_0075a250 (1322 B) — Bug-report submission to a RAID database.
 *
 * Builds an "INSERT INTO Bugs(...) VALUES(...)" SQL string on a 0x1104-byte
 * stack frame (via FUN_0075dc00), walks a bug-field list, and drives a
 * database session through function pointers DAT_008aaccc..DAT_008aace0.
 * __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8aacdc;            /* fn ptr */
extern void *g_8aaccc;            /* fn ptr */
extern void *g_8aace0;            /* fn ptr */
extern void *g_8aacd4;            /* fn ptr */
extern void *g_8aacd0;            /* fn ptr */
extern void *g_76b420;            /* sprintf */
extern void *g_76b2d4;            /* _itoa */

extern void __cdecl FUN_0075dc00(void);

__declspec(naked) void __stdcall FUN_0075a250(void)
{
    __asm {
        mov     eax, 0x1104
        call    FUN_0075dc00
        push    ebx
        push    ebp
        mov     ebp, ecx
        or      ecx, 0xffffffff
        push    esi
        push    edi
        xor     eax, eax
        mov     edi, 0x7af08c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     ebx, [esp + 0x114]
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        mov     edx, dword ptr [ebp + 0x814]
        xor     eax, eax
        mov     edi, 0x7af080
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     ebx, [esp + 0x914]
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        test    edx, edx
        rep movsb
        jz      L_358

L_2c0:
        or      ecx, 0xffffffff
        mov     edi, dword ptr [edx + 0x4]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     ebx, [esp + 0x114]
        mov     edi, ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        repne scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        mov     edi, 0x774288
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     ebx, [esp + 0x114]
        mov     edi, ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        repne scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        mov     edi, 0x7af07c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, dword ptr [edx + 0x10]
        mov     esi, edi
        lea     ebx, [esp + 0x914]
        mov     edi, ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        test    edx, edx
        rep movsb
        jnz     L_2c0

L_358:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x114]
        repne scasb
        not     ecx
        dec     ecx
        mov     dl, 0x29
        mov     byte ptr [esp + ecx + 0x113], dl
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x914]
        repne scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp + ecx + 0x913], dl
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x914]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x114]
        mov     edi, edx
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        push    -0x3
        lea     eax, [esp + 0x118]
        mov     ecx, ebx
        mov     ebx, dword ptr [ebp + 0x810]
        push    eax
        and     ecx, 0x3
        push    ebx
        rep movsb
        call    dword ptr [g_8aacdc]
        test    ax, ax
        mov     word ptr [ebp + 0xc], ax
        jz      L_3e3
        cmp     ax, 0x1
        jnz     L_74d

L_3e3:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7af040
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edx, [esp + 0x114]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [ebp + 0x814]
        test    edi, edi
        jz      L_452

L_416:
        mov     eax, dword ptr [edi + 0x4]
        mov     esi, 0x783864

L_41e:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_442
        test    cl, cl
        jz      L_43e
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_442
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_41e

L_43e:
        xor     eax, eax
        jmp     L_447

L_442:
        sbb     eax, eax
        sbb     eax, -1

L_447:
        test    eax, eax
        jz      L_452
        mov     edi, dword ptr [edi + 0x10]
        test    edi, edi
        jnz     L_416

L_452:
        push    0x2
        push    ebx
        call    dword ptr [g_8aaccc]
        test    ax, ax
        mov     word ptr [ebp + 0xc], ax
        jz      L_482
        mov     eax, dword ptr [ebp]
        lea     ecx, [ebp + 0xe]
        push    ecx
        push    ebx
        push    0x3
        mov     ecx, ebp
        call    dword ptr [eax + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1104
        ret     0x4

L_482:
        mov     edx, dword ptr [edi + 0xc]
        push    0x0
        push    0x0
        push    edx
        push    0x0
        push    0xff
        push    0xc
        push    0x1
        push    0x1
        push    0x1
        push    ebx
        call    dword ptr [g_8aace0]
        test    ax, ax
        mov     word ptr [ebp + 0xc], ax
        jz      L_4c7
        mov     eax, dword ptr [ebp]
        lea     ecx, [ebp + 0xe]
        push    ecx
        push    ebx
        push    0x3
        mov     ecx, ebp
        call    dword ptr [eax + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1104
        ret     0x4

L_4c7:
        push    -0x3
        lea     edx, [esp + 0x118]
        push    edx
        push    ebx
        call    dword ptr [g_8aacdc]
        test    ax, ax
        mov     word ptr [ebp + 0xc], ax
        jz      L_4ff
        mov     eax, dword ptr [ebp]
        lea     ecx, [ebp + 0xe]
        push    ecx
        push    ebx
        push    0x3
        mov     ecx, ebp
        call    dword ptr [eax + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1104
        ret     0x4

L_4ff:
        push    0x0
        push    0x1
        lea     edx, [esp + 0x18]
        push    edx
        push    -0x12
        push    0x1
        push    ebx
        mov     dword ptr [esp + 0x28], 0x0
        call    dword ptr [g_8aacd4]
        test    ax, ax
        mov     word ptr [ebp + 0xc], ax
        jz      L_542
        mov     eax, dword ptr [ebp]
        lea     ecx, [ebp + 0xe]
        push    ecx
        push    ebx
        push    0x3
        mov     ecx, ebp
        call    dword ptr [eax + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1104
        ret     0x4

L_542:
        push    ebx
        call    dword ptr [g_8aacd0]
        test    ax, ax
        mov     word ptr [ebp + 0xc], ax
        jnz     L_74d
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x1118]
        lea     ecx, [ebp + 0x81a]
        push    ecx
        push    edx
        push    0x7af000
        push    eax
        call    dword ptr [g_76b420]
        mov     ebx, dword ptr [ebp + 0x810]
        add     esp, 0x10
        push    ebx
        call    dword ptr [g_8aacd0]
        cmp     ax, 0x64
        mov     word ptr [ebp + 0xc], ax
        jz      L_70b
        mov     edx, dword ptr [esp + 0x10]
        push    0xa
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        call    dword ptr [g_76b2d4]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp + 0x14]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [esp + 0x914]
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        push    ebx
        mov     byte ptr [esp + 0x18], 0x0
        call    dword ptr [g_8aacd0]
        cmp     ax, 0x64
        mov     word ptr [ebp + 0xc], ax
        jz      L_673

L_5ea:
        mov     edx, dword ptr [esp + 0x10]
        push    0xa
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        call    dword ptr [g_76b2d4]
        or      ecx, 0xffffffff
        add     esp, 0xc
        xor     eax, eax
        mov     edi, 0x774288
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x914]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x14]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x914]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    ebx
        rep movsb
        call    dword ptr [g_8aacd0]
        cmp     ax, 0x64
        mov     word ptr [ebp + 0xc], ax
        jnz     L_5ea

L_673:
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        mov     edi, 0x7aefc8
        jnz     L_685
        mov     edi, 0x7aef94

L_685:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1118]
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x914]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1118]
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        mov     edi, 0x79278c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1118]
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb

L_70b:
        push    0x2
        push    ebx
        call    dword ptr [g_8aaccc]
        test    ax, ax
        mov     word ptr [ebp + 0xc], ax
        jz      L_73b
        mov     eax, dword ptr [ebp]
        lea     ecx, [ebp + 0xe]
        push    ecx
        push    ebx
        push    0x3
        mov     ecx, ebp
        call    dword ptr [eax + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1104
        ret     0x4

L_73b:
        push    0x0
        push    ebx
        call    dword ptr [g_8aaccc]
        test    ax, ax
        mov     word ptr [ebp + 0xc], ax
        jz      L_76b

L_74d:
        mov     edx, dword ptr [ebp]
        lea     eax, [ebp + 0xe]
        push    eax
        push    ebx
        push    0x3
        mov     ecx, ebp
        call    dword ptr [edx + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1104
        ret     0x4

L_76b:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x1104
        ret     0x4
    }
}
