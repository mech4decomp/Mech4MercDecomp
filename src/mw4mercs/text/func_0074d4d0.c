/*
 * FUN_0074d4d0 (1241 B) — Builds a DirectPlay session-description string.
 *
 * Takes a session struct (param_1), validates size==0x50, then appends
 * flag-driven tokens ("CLIENTSERVER ", "DIRECTPLAYPROTOCOL ", ...) plus
 * MaxPlayers/NumPlayers/Name/Password/Guid fields into the global buffer
 * DAT_008ba4d4 using strlen-style repne scasb + rep movsd/movsb copies.
 * __stdcall, RET 4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8ba4d4;             /* DAT_008ba4d4 — output buffer */
extern void *g_76b420;            /* sprintf */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void __stdcall FUN_0074d4d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        cmp     dword ptr [esi], 0x50
        push    edi
        jz      L_4f5
        push    0x7abcf4
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4f5
        int     3

L_4f5:
        mov     edx, dword ptr [esi + 0x4]
        __emit 0xF6  /* __emit: test dh,imm8 — MSVC6 rejects high-byte reg test with imm */
        __emit 0xC6
        __emit 0x10
        push    ebx
        mov     byte ptr [g_8ba4d4], 0x0
        jz      L_532
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abce4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_532:
        __emit 0xF6  /* __emit: test dh,imm8 — MSVC6 rejects high-byte reg test with imm */
        __emit 0xC6
        __emit 0x20
        jz      L_564
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abcd0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_564:
        test    dl, 0x20
        jz      L_596
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abcc0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_596:
        test    dl, 0x40
        jz      L_5c8
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abcb4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_5c8:
        test    dl, 0x4
        jz      L_5fa
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abca4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_5fa:
        __emit 0xF6  /* __emit: test dh,imm8 — MSVC6 rejects high-byte reg test with imm */
        __emit 0xC6
        __emit 0x08
        jz      L_62c
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abc90
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_62c:
        test    dl, 0x1
        jz      L_65e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abc7c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_65e:
        test    dl, 0x80
        jz      L_690
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abc6c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_690:
        test    dl, 0x8
        jz      L_6c2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abc5c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_6c2:
        __emit 0xF6  /* __emit: test dh,imm8 — MSVC6 rejects high-byte reg test with imm */
        __emit 0xC6
        __emit 0x40
        jz      L_6f4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abc48
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_6f4:
        __emit 0xF6  /* __emit: test dh,imm8 — MSVC6 rejects high-byte reg test with imm */
        __emit 0xC6
        __emit 0x80
        jz      L_726
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abc34
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_726:
        __emit 0xF6  /* __emit: test dh,imm8 — MSVC6 rejects high-byte reg test with imm */
        __emit 0xC6
        __emit 0x04
        jz      L_758
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abb9c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_758:
        __emit 0xF6  /* __emit: test dh,imm8 — MSVC6 rejects high-byte reg test with imm */
        __emit 0xC6
        __emit 0x02
        jz      L_78a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abc28
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep movsb

L_78a:
        __emit 0xF6  /* __emit: test dh,imm8 — MSVC6 rejects high-byte reg test with imm */
        __emit 0xC6
        __emit 0x01
        jz      L_7bc
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abc18
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb

L_7bc:
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x28]
        test    eax, eax
        mov     ebx, dword ptr [g_76b420]
        jz      L_806
        push    eax
        lea     ecx, [ebp - 0x80]
        push    0x7abc08
        push    ecx
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [ebp - 0x80]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb

L_806:
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x2c]
        test    eax, eax
        jz      L_84a
        push    eax
        lea     ecx, [ebp - 0x80]
        push    0x7abbf8
        push    ecx
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [ebp - 0x80]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb

L_84a:
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x30]
        test    eax, eax
        jz      L_88e
        push    eax
        lea     ecx, [ebp - 0x80]
        push    0x7abbec
        push    ecx
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [ebp - 0x80]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb

L_88e:
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x34]
        test    eax, eax
        jz      L_8d7
        cmp     byte ptr [eax], 0x0
        jz      L_8d7
        push    eax
        lea     ecx, [ebp - 0x80]
        push    0x7abbdc
        push    ecx
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [ebp - 0x80]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb

L_8d7:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abbd4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        mov     eax, dword ptr [ebp + 0x8]
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        add     eax, 0x18
        mov     ecx, 0x4
        mov     edi, 0x7afaf0
        mov     esi, eax
        xor     edx, edx
        repe cmpsd
        pop     ebx
        jnz     L_924
        mov     edi, 0x76b9a0
        jmp     L_949

L_924:
        mov     esi, eax
        mov     ecx, 0x10
        mov     edi, 0x8589a4
        xor     eax, eax
        repe cmpsb
        jz      L_93b
        sbb     eax, eax
        sbb     eax, -1

L_93b:
        test    eax, eax
        mov     edi, 0x859694
        jz      L_949
        mov     edi, 0x7abbc8

L_949:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        mov     edi, 0x7abbc4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba4d4
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        pop     edi
        mov     eax, 0x8ba4d4
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
