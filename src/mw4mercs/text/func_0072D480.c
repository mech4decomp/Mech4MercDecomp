/*
 * FUN_0072D480 (804 B) - __stdcall (RET 4, 1 param). Looks up a cached
 * string node in a linked list (head g_00896b84); on miss allocates a
 * new node (0x10c) via FUN_006f3c80, builds a formatted string via
 * sprintf (IAT 0x76b420), and inserts it at the list head. Contains
 * inline strcmp loops and assert-style int3 checks.
 *
 * CFLAGS: /O1
 */

extern int g_00896b84;
extern int (*g_0076b2ac)(void);
extern int g_00849308;
extern int (*g_0076b0c0)(void);
extern int (*g_0076b420)(void);
extern int (*g_0076b598)(void);
extern int (*g_0076b38c)(void);
extern int g_00858c08;

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0072D480(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x30c
        push    ebx
        push    esi
        mov     esi, dword ptr [g_00896b84]
        test    esi, esi
        push    edi
        je      L_4b7
        mov     edi, dword ptr [g_0076b2ac]
L_49c:
        mov     eax, dword ptr [ebp + 8]
        push    eax
        lea     ecx, [esi + 8]
        push    ecx
        call    edi
        add     esp, 8
        test    eax, eax
        je      L_594
        mov     esi, dword ptr [esi]
        test    esi, esi
        jne     L_49c
L_4b7:
        mov     edx, dword ptr [g_00849308]
        push    edx
        push    0x10c
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     ebx, eax
        xor     eax, eax
        mov     edi, 0x8597cc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp - 0x104]
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
        mov     esi, edi
        lea     edx, [ebp - 0x104]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebp + 8]
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [ebp - 0x104]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        lea     eax, [ebp - 0x104]
        and     ecx, 3
        push    eax
        rep     movsb
        call    dword ptr [g_0076b0c0]
        test    eax, eax
        mov     dword ptr [ebx + 4], eax
        jne     L_735
        mov     ecx, dword ptr [ebp + 8]
        mov     edi, ecx
        mov     esi, 0x7a5a3c
L_570:
        mov     dl, byte ptr [esi]
        mov     al, dl
        cmp     dl, byte ptr [edi]
        jne     L_5a5
        test    al, al
        je      L_590
        mov     dl, byte ptr [esi + 1]
        mov     al, dl
        cmp     dl, byte ptr [edi + 1]
        jne     L_5a5
        add     esi, 2
        add     edi, 2
        test    al, al
        jne     L_570
L_590:
        xor     eax, eax
        jmp     L_5aa
L_594:
        inc     dword ptr [esi + 0x108]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_5a5:
        sbb     eax, eax
        sbb     eax, -1
L_5aa:
        test    eax, eax
        jne     L_717
        or      ecx, 0xffffffff
        mov     edi, 0x8598d0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp - 0x104]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a5ae0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [ebp - 0x104]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        lea     eax, [ebp - 0x104]
        and     ecx, 3
        push    eax
        rep     movsb
        call    dword ptr [g_0076b0c0]
        test    eax, eax
        mov     dword ptr [ebx + 4], eax
        jne     L_6d1
        or      ecx, 0xffffffff
        mov     edi, 0x8597cc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp - 0x104]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a5ac0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [ebp - 0x104]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        lea     eax, [ebp - 0x104]
        and     ecx, 3
        push    eax
        rep     movsb
        call    dword ptr [g_0076b0c0]
        test    eax, eax
        mov     dword ptr [ebx + 4], eax
        jne     L_6d1
        push    0x8598d0
        push    0x8597cc
        lea     ecx, [ebp - 0x30c]
        push    0x7a5a74
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        push    0x30
        push    0x859694
        lea     edx, [ebp - 0x30c]
        push    edx
        push    0
        call    dword ptr [g_0076b598]
        push    1
        mov     dword ptr [g_00858c08], 5
        call    dword ptr [g_0076b38c]
L_6d1:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebp - 0x104]
        mov     dword ptr [ebx + 0x108], 1
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xff
        jbe     L_70c
        lea     eax, [ebp - 0x104]
        push    eax
        push    0x7a5a60
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L_70c
        int     3
L_70c:
        lea     edi, [ebp - 0x104]
        lea     edx, [ebx + 8]
        jmp     L_76e
L_717:
        push    ecx
        push    0x7a5a4c
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L_72a
        int     3
L_72a:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_735:
        mov     esi, dword ptr [ebp + 8]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xff
        mov     dword ptr [ebx + 0x108], 1
        jbe     L_769
        push    esi
        push    0x7a5a60
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L_769
        int     3
L_769:
        lea     edx, [ebx + 8]
        mov     edi, esi
L_76e:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [g_00896b84]
        pop     edi
        pop     esi
        mov     dword ptr [ebx], ecx
        mov     dword ptr [g_00896b84], ebx
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
