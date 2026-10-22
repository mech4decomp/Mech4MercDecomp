/*
 * FUN_00536fe0 (3675 B) — __fastcall(this) console/command handler.
 * Parses a command string (tokenizing on spaces/quotes), dispatches through
 * virtual methods (vtable+0x34 string getter, +0x30 command executor) and
 * several IAT helpers (0x76b418 strcmp-ish, 0x76b2d4 itoa-ish, 0x76b408
 * isalpha-ish, 0x76b318 atoi-ish). RET 0x14 (5 stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_0076b418;
extern int *g_0076b2d4;
extern int *g_0076b408;
extern int *g_0076b318;
extern int g_007db090;
extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_005446c0(void);
extern void __cdecl FUN_00544800(void);
extern void __cdecl FUN_00622910(void);

__declspec(naked) void FUN_00536fe0(void)
{
    __asm {
        sub     esp, 0x734
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     al, byte ptr [ebp+0x16]
        test    al, al
        push    esi
        push    edi
        jz      L_537DC3
        mov     eax, dword ptr [ebp]
        push    0x2e9
        call    dword ptr [eax+0x34]
        mov     edx, dword ptr [ebp]
        push    0x2ea
        mov     ecx, ebp
        mov     esi, eax
        call    dword ptr [edx+0x34]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
        mov     byte ptr [esp+0x13], al
        mov     eax, dword ptr [ebp]
        push    0x2ec
        mov     ecx, ebp
        mov     dword ptr [esp+0x2c], edx
        call    dword ptr [eax+0x34]
        mov     edx, dword ptr [ebp]
        push    0x2ed
        mov     ecx, ebp
        mov     dword ptr [esp+0x20], eax
        call    dword ptr [edx+0x34]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x760]
        push    esi
        mov     dword ptr [esp+0x24], eax
        call    dword ptr [g_0076b418]
        add     esp, 0xc
        test    eax, eax
        jnz     L_5370D7
        mov     al, byte ptr [ebx+esi]
        cmp     al, 0x20
        jz      L_537079
        test    al, al
        jnz     L_5370D7
L_537079:
        mov     byte ptr [esp+0x13], 1
        mov     dword ptr [esp+0x14], ebx
L_537082:
        mov     ebx, dword ptr [esp+0x754]
        mov     edx, dword ptr [ebp]
        push    esi
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        mov     edx, dword ptr [esp+0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        mov     eax, edx
        cmp     eax, ecx
        jnc     L_5376C6
L_5370AF:
        mov     al, byte ptr [edx+esi]
        test    al, al
        jz      L_537667
        cmp     al, 0x20
        jnz     L_5376C2
        or      ecx, 0xffffffff
        xor     eax, eax
        inc     edx
        mov     edi, esi
        repne   scasb
        not     ecx
        cmp     edx, ecx
        jc      L_5370AF
        jmp     L_5376C6
L_5370D7:
        mov     eax, dword ptr [esp+0x28]
        push    edi
        push    eax
        push    esi
        call    dword ptr [g_0076b418]
        add     esp, 0xc
        test    eax, eax
        jnz     L_5370FC
        mov     al, byte ptr [edi+esi]
        cmp     al, 0x20
        jz      L_5370F6
        test    al, al
        jnz     L_5370FC
L_5370F6:
        mov     dword ptr [esp+0x14], edi
        jmp     L_537082
L_5370FC:
        mov     edx, dword ptr [ebp]
        push    0x304
        mov     ecx, ebp
        call    dword ptr [edx+0x34]
        mov     ebx, eax
        mov     eax, dword ptr [ebp]
        push    0x305
        mov     ecx, ebp
        call    dword ptr [eax+0x34]
        mov     edx, dword ptr [ebp]
        push    0x306
        mov     ecx, ebp
        mov     dword ptr [esp+0x20], eax
        call    dword ptr [edx+0x34]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        mov     edi, dword ptr [esp+0x1c]
        not     ecx
        dec     ecx
        mov     dword ptr [esp+0x28], ecx
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp+0x14], ecx
        or      ecx, 0xffffffff
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp+0x30], ecx
        mov     byte ptr [esp+0x13], al
        mov     eax, dword ptr [ebp]
        push    0x307
        mov     ecx, ebp
        mov     dword ptr [esp+0x30], edx
        call    dword ptr [eax+0x34]
        mov     edx, dword ptr [ebp]
        push    0x308
        mov     ecx, ebp
        mov     edi, eax
        call    dword ptr [edx+0x34]
        mov     dword ptr [esp+0x18], eax
        mov     eax, dword ptr [ebp]
        push    0x309
        mov     ecx, ebp
        call    dword ptr [eax+0x34]
        mov     ecx, dword ptr [esp+0x28]
        push    ecx
        push    ebx
        push    esi
        mov     dword ptr [esp+0x30], eax
        call    dword ptr [g_0076b418]
        mov     ebx, dword ptr [esp+0x760]
        add     esp, 0xc
        test    eax, eax
        jnz     L_53736A
        mov     edx, dword ptr [ebp]
        push    esi
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        mov     eax, dword ptr [esp+0x28]
        mov     al, byte ptr [eax+esi]
        cmp     al, 0x20
        jnz     L_5371E3
        mov     edx, dword ptr [ebp]
        push    edi
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5371E3:
        test    al, al
        jnz     L_53736A
        xor     esi, esi
        xor     cl, cl
        lea     eax, [ebp+0x75f8]
        mov     dword ptr [esp+0x18], esi
        mov     byte ptr [esp+0x48], cl
        mov     dword ptr [esp+0x14], 2
        mov     dword ptr [esp+0x24], eax
L_537209:
        mov     edx, dword ptr [esp+0x24]
        mov     al, byte ptr [edx-0x4d]
        test    al, al
        jz      L_5372D1
        mov     ecx, dword ptr [esp+0x14]
        push    0xa
        lea     eax, [esp+0x38]
        push    eax
        push    ecx
        call    dword ptr [g_0076b2d4]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp+0x34]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x3a
        mov     byte ptr [esp+ecx+0x49], 0x20
        mov     byte ptr [esp+ecx+0x4a], al
        mov     eax, dword ptr [esp+0x24]
        mov     edi, dword ptr [eax]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x2e
        mov     byte ptr [esp+ecx+0x49], 0x20
        mov     byte ptr [esp+ecx+0x4a], 0x20
        mov     byte ptr [esp+ecx+0x4b], al
        mov     eax, dword ptr [esp+0x18]
        mov     cl, byte ptr [esp+0x48]
        inc     eax
        mov     dword ptr [esp+0x18], eax
        mov     esi, eax
L_5372D1:
        test    cl, cl
        jz      L_5372FE
        test    esi, esi
        jle     L_5372FE
        mov     eax, esi
        cdq
        mov     edi, 6
        idiv    edi
        test    edx, edx
        jnz     L_5372FE
        mov     edx, dword ptr [ebp]
        lea     eax, [esp+0x48]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        xor     cl, cl
        mov     byte ptr [esp+0x48], cl
L_5372FE:
        mov     eax, dword ptr [esp+0x14]
        mov     edi, dword ptr [esp+0x24]
        inc     eax
        add     edi, 0x2038
        cmp     eax, 0xff
        mov     dword ptr [esp+0x14], eax
        mov     dword ptr [esp+0x24], edi
        jl      L_537209
        test    cl, cl
        jz      L_53733E
        test    esi, esi
        jle     L_537340
        mov     edx, dword ptr [ebp]
        lea     eax, [esp+0x48]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        mov     byte ptr [esp+0x48], 0
L_53733E:
        test    esi, esi
L_537340:
        jnz     L_537E2E
        mov     esi, dword ptr [ebp]
        push    0x30c
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_53736A:
        mov     edi, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x1c]
        push    edi
        push    ecx
        push    esi
        call    dword ptr [g_0076b418]
        add     esp, 0xc
        test    eax, eax
        jnz     L_5373E2
        mov     al, byte ptr [edi+esi]
        cmp     al, 0x20
        jz      L_53738D
        test    al, al
        jnz     L_5373E2
L_53738D:
        mov     byte ptr [esp+0x13], 1
L_537392:
        mov     edx, dword ptr [ebp]
        push    esi
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esp+0x2c], edi
        call    dword ptr [edx+0x30]
        mov     edx, edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        mov     eax, edx
        cmp     eax, ecx
        jnc     L_5374C2
L_5373BA:
        mov     al, byte ptr [edx+esi]
        test    al, al
        jz      L_5374B1
        cmp     al, 0x20
        jnz     L_5374BE
        or      ecx, 0xffffffff
        xor     eax, eax
        inc     edx
        mov     edi, esi
        repne   scasb
        not     ecx
        cmp     edx, ecx
        jc      L_5373BA
        jmp     L_5374C2
L_5373E2:
        mov     edi, dword ptr [esp+0x30]
        mov     edx, dword ptr [esp+0x2c]
        push    edi
        push    edx
        push    esi
        call    dword ptr [g_0076b418]
        add     esp, 0xc
        test    eax, eax
        jnz     L_537405
        mov     al, byte ptr [edi+esi]
        cmp     al, 0x20
        jz      L_537392
        test    al, al
        jz      L_537392
L_537405:
        mov     al, byte ptr [esp+0x750]
        test    al, al
        jz      L_53742B
        mov     eax, dword ptr [ebp]
        push    esi
        push    0
        push    1
        push    ebx
        mov     ecx, ebp
        call    dword ptr [eax+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_53742B:
        mov     al, byte ptr [esp+0x748]
        test    al, al
        mov     al, byte ptr [esp+0x74c]
        jz      L_537477
        test    al, al
        jz      L_53745C
        mov     edx, dword ptr [ebp]
        push    esi
        push    0
        push    5
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_53745C:
        mov     eax, dword ptr [ebp]
        push    esi
        push    0
        push    4
        push    ebx
        mov     ecx, ebp
        call    dword ptr [eax+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_537477:
        test    al, al
        jz      L_537496
        mov     edx, dword ptr [ebp]
        push    esi
        push    0
        push    3
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_537496:
        mov     eax, dword ptr [ebp]
        push    esi
        push    0
        push    2
        push    ebx
        mov     ecx, ebp
        call    dword ptr [eax+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5374B1:
        mov     esi, dword ptr [ebp]
        push    0x30a
        jmp     L_5375D7
L_5374BE:
        mov     dword ptr [esp+0x1c], edx
L_5374C2:
        mov     edx, dword ptr [esp+0x1c]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        mov     eax, edx
        cmp     eax, ecx
        mov     byte ptr [esp+0x23], 0
        mov     dword ptr [esp+0x14], edx
        jnc     L_537641
L_5374E4:
        mov     al, byte ptr [edx+esi]
        test    al, al
        jz      L_537521
        cmp     al, 0x20
        jz      L_537509
        movsx   ecx, al
        push    ecx
        mov     byte ptr [esp+0x27], 1
        call    dword ptr [g_0076b408]
        add     esp, 4
        test    eax, eax
        jz      L_53762A
L_537509:
        mov     edx, dword ptr [esp+0x14]
        or      ecx, 0xffffffff
        inc     edx
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        cmp     edx, ecx
        mov     dword ptr [esp+0x14], edx
        jc      L_5374E4
L_537521:
        mov     al, byte ptr [esp+0x23]
        test    al, al
        jz      L_537641
        mov     ecx, dword ptr [esp+0x1c]
        add     ecx, esi
        push    ecx
        call    dword ptr [g_0076b318]
        add     esp, 4
        cmp     eax, 2
        jl      L_53762A
        cmp     eax, 0xff
        jg      L_53762A
        mov     ecx, dword ptr [g_007db090]
        xor     edx, edx
        mov     dl, byte ptr [ecx+0x28]
        cmp     edx, eax
        jnz     L_537584
        mov     esi, dword ptr [ebp]
        push    0x2ef
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_537584:
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     cl, byte ptr [ebp+edx*8+0x353b]
        test    cl, cl
        jz      L_5375CF
        mov     cl, byte ptr [esp+0x13]
        test    cl, cl
        jz      L_5375BA
        push    1
        push    eax
        mov     ecx, ebp
        call    FUN_005446c0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5375BA:
        push    eax
        mov     ecx, ebp
        call    FUN_00544800
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5375CF:
        mov     esi, dword ptr [ebp]
        push    0x30b
L_5375D7:
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        mov     al, byte ptr [esp+0x13]
        test    al, al
        jz      L_53760C
        mov     ecx, dword ptr [esp+0x18]
        mov     eax, dword ptr [ebp]
        push    ecx
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [eax+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_53760C:
        mov     edx, dword ptr [ebp]
L_53760F:
        mov     eax, dword ptr [esp+0x24]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_53762A:
        mov     esi, dword ptr [ebp]
        push    0x30b
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
L_537641:
        mov     al, byte ptr [esp+0x13]
        test    al, al
        mov     edx, dword ptr [ebp]
        jz      L_53760F
        mov     eax, dword ptr [esp+0x18]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_537667:
        mov     esi, dword ptr [ebp]
        push    0x2ee
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        mov     al, byte ptr [esp+0x13]
        test    al, al
        jz      L_5376A4
        mov     ecx, dword ptr [esp+0x1c]
        mov     eax, dword ptr [ebp]
        push    ecx
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [eax+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5376A4:
        mov     edx, dword ptr [ebp]
L_5376A7:
        mov     eax, dword ptr [esp+0x18]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5376C2:
        mov     dword ptr [esp+0x14], edx
L_5376C6:
        mov     ecx, dword ptr [esp+0x14]
        cmp     byte ptr [ecx+esi], 0x22
        jz      L_5376DD
L_5376D0:
        mov     esi, dword ptr [ebp]
        push    0x2f6
        jmp     L_537811
L_5376DD:
        mov     edx, dword ptr [esp+0x14]
        inc     edx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp+0x14], edx
        mov     dword ptr [esp+0x24], 0
        jnc     L_53774F
        lea     eax, [esp+0x248]
        mov     ecx, edx
        sub     eax, ecx
        mov     dword ptr [esp+0x2c], eax
L_53770E:
        mov     al, byte ptr [edx+esi]
        test    al, al
        jz      L_5376D0
        cmp     al, 0x22
        jz      L_537736
        mov     ecx, dword ptr [esp+0x2c]
        mov     byte ptr [ecx+edx], al
        inc     dword ptr [esp+0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        inc     edx
        mov     edi, esi
        repne   scasb
        not     ecx
        cmp     edx, ecx
        jc      L_53770E
        jmp     L_537747
L_537736:
        mov     ecx, dword ptr [esp+0x24]
        inc     edx
        mov     byte ptr [esp+ecx+0x248], 0
        mov     dword ptr [esp+0x14], edx
L_537747:
        mov     eax, dword ptr [esp+0x24]
        test    eax, eax
        jnz     L_53775C
L_53774F:
        mov     esi, dword ptr [ebp]
        push    0x2ee
        jmp     L_537811
L_53775C:
        mov     ecx, dword ptr [esp+0x14]
        lea     eax, [ecx+esi]
        mov     dword ptr [esp+0x2c], eax
        mov     al, byte ptr [eax]
        test    al, al
        mov     dword ptr [esp+0x28], 0
        jz      L_53784A
        cmp     al, 0x20
        jz      L_53778A
        mov     esi, dword ptr [ebp]
        push    0x2fa
        jmp     L_537811
L_53778A:
        mov     edx, dword ptr [esp+0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        cmp     edx, ecx
        mov     byte ptr [esp+0x23], 0
        mov     dword ptr [esp+0x14], edx
        jnc     L_53784A
L_5377AA:
        mov     al, byte ptr [edx+esi]
        test    al, al
        jz      L_5377E3
        cmp     al, 0x20
        jz      L_5377CB
        movsx   ecx, al
        push    ecx
        mov     byte ptr [esp+0x27], 1
        call    dword ptr [g_0076b408]
        add     esp, 4
        test    eax, eax
        jz      L_537809
L_5377CB:
        mov     edx, dword ptr [esp+0x14]
        or      ecx, 0xffffffff
        inc     edx
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        cmp     edx, ecx
        mov     dword ptr [esp+0x14], edx
        jc      L_5377AA
L_5377E3:
        mov     al, byte ptr [esp+0x23]
        test    al, al
        jz      L_53784A
        mov     ecx, dword ptr [esp+0x2c]
        push    ecx
        call    dword ptr [g_0076b318]
        add     esp, 4
        cmp     eax, 2
        mov     dword ptr [esp+0x28], eax
        jl      L_537809
        cmp     eax, 0xff
        jle     L_53784A
L_537809:
        mov     esi, dword ptr [ebp]
        push    0x2f7
L_537811:
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        mov     al, byte ptr [esp+0x13]
        test    al, al
        mov     edx, dword ptr [ebp]
        jz      L_5376A7
        mov     eax, dword ptr [esp+0x1c]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_53784A:
        or      eax, 0xffffffff
        mov     ecx, 0xff
        lea     edi, [esp+0x348]
        rep     stosd
        xor     edx, edx
        lea     ecx, [esp+0x348]
        mov     dword ptr [esp+0x18], edx
        xor     edi, edi
        mov     dword ptr [esp+0x1c], ecx
        lea     esi, [ebp+0x3588]
L_537874:
        mov     al, byte ptr [esi-0x50]
        test    al, al
        jz      L_5378B3
        mov     edx, dword ptr [esp+0x24]
        mov     eax, dword ptr [esi]
        inc     edx
        push    edx
        push    eax
        lea     ecx, [esp+0x250]
        push    ecx
        call    dword ptr [g_0076b418]
        add     esp, 0xc
        test    eax, eax
        jnz     L_5378AF
        mov     eax, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x18]
        inc     edx
        mov     dword ptr [eax], edi
        add     eax, 4
        mov     dword ptr [esp+0x18], edx
        mov     dword ptr [esp+0x1c], eax
L_5378AF:
        mov     edx, dword ptr [esp+0x18]
L_5378B3:
        inc     edi
        add     esi, 0x2038
        cmp     edi, 0xff
        jl      L_537874
        test    edx, edx
        jnz     L_5378EA
        mov     esi, dword ptr [ebp]
        push    0x2f2
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5378EA:
        cmp     edx, 1
        mov     edi, dword ptr [g_007db090]
        jnz     L_537934
        mov     eax, dword ptr [esp+0x28]
        test    eax, eax
        mov     ecx, dword ptr [esp+0x348]
        jz      L_5379A8
        cmp     eax, ecx
        jz      L_5379A8
        mov     esi, dword ptr [ebp]
        push    0x2f5
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_537934:
        mov     ecx, dword ptr [esp+0x28]
        test    ecx, ecx
        jz      L_53797D
        xor     eax, eax
        test    edx, edx
        jle     L_537955
        lea     esi, [esp+0x348]
L_537949:
        cmp     ecx, dword ptr [esi]
        jz      L_537955
        inc     eax
        add     esi, 4
        cmp     eax, edx
        jl      L_537949
L_537955:
        cmp     eax, edx
        jnz     L_5379A8
        mov     esi, dword ptr [ebp]
        push    0x2f5
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_53797D:
        cmp     edx, 2
        jnz     L_537A0D
        mov     ecx, dword ptr [esp+0x348]
        xor     eax, eax
        mov     al, byte ptr [edi+0x28]
        cmp     ecx, eax
        jnz     L_53799F
        mov     ecx, dword ptr [esp+0x34c]
        jmp     L_5379A8
L_53799F:
        cmp     dword ptr [esp+0x34c], eax
        jnz     L_537A0D
L_5379A8:
        test    ecx, ecx
        jz      L_537A0D
        xor     edx, edx
        mov     dl, byte ptr [edi+0x28]
        cmp     edx, ecx
        jnz     L_5379D9
        mov     esi, dword ptr [ebp]
        push    0x2ef
        mov     ecx, ebp
        call    dword ptr [esi+0x34]
        push    eax
        push    ebx
        push    0
        push    ebx
        mov     ecx, ebp
        call    dword ptr [esi+0x30]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5379D9:
        mov     al, byte ptr [esp+0x13]
        test    al, al
        jz      L_5379F8
        push    1
        push    ecx
        mov     ecx, ebp
        call    FUN_005446c0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_5379F8:
        push    ecx
        mov     ecx, ebp
        call    FUN_00544800
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_537A0D:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [ecx+0x20]
        xor     eax, 0x85739531
        test    edx, edx
        mov     dword ptr [esp+0x2c], eax
        jle     L_537E2E
        mov     ebx, dword ptr [g_0076b2d4]
        lea     eax, [esp+0x348]
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esp+0x28], edx
L_537A43:
        mov     ecx, dword ptr [esp+0x24]
        mov     eax, dword ptr [ecx]
        xor     edx, edx
        mov     dl, byte ptr [edi+0x28]
        cmp     eax, edx
        jz      L_537D9C
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0x248]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp+0x48]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edx, dword ptr [esp+0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x2c
        mov     byte ptr [esp+ecx+0x49], 0x20
        mov     byte ptr [esp+ecx+0x4a], al
        mov     eax, dword ptr [edx]
        push    0xa
        lea     ecx, [esp+0x38]
        push    ecx
        push    eax
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp+0x34]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x3a
        mov     byte ptr [esp+ecx+0x49], 0x20
        mov     byte ptr [esp+ecx+0x4a], al
        mov     eax, dword ptr [esp+0x24]
        mov     eax, dword ptr [eax]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     eax, dword ptr [ebp+ecx*8+0x3584]
        test    eax, eax
        jz      L_537D46
        mov     esi, dword ptr [eax+0x170]
        test    esi, esi
        jz      L_537D46
        mov     edx, dword ptr [esp+0x2c]
        mov     edi, dword ptr [edx+0x225c]
        add     esi, 0x14
        push    esi
        push    2
        mov     ecx, edi
        call    FUN_00622910
        push    esi
        push    8
        mov     ecx, edi
        mov     dword ptr [esp+0x38], eax
        call    FUN_00622910
        push    esi
        push    0x2b
        mov     ecx, edi
        mov     dword ptr [esp+0x20], eax
        call    FUN_00622910
        mov     ecx, dword ptr [esp+0x30]
        mov     dword ptr [esp+0x1c], eax
        push    0xa
        lea     eax, [esp+0x38]
        push    eax
        push    ecx
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp+0x34]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x20
        mov     byte ptr [esp+ecx+0x49], al
        mov     eax, dword ptr [ebp]
        push    0x2f3
        mov     ecx, ebp
        call    dword ptr [eax+0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x2c
        mov     byte ptr [esp+ecx+0x49], 0x20
        mov     byte ptr [esp+ecx+0x4a], al
        mov     ecx, dword ptr [esp+0x18]
        push    0xa
        lea     eax, [esp+0x38]
        push    eax
        push    ecx
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp+0x34]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x20
        mov     byte ptr [esp+ecx+0x49], al
        mov     eax, dword ptr [ebp]
        push    0x2f4
        mov     ecx, ebp
        call    dword ptr [eax+0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x2c
        mov     byte ptr [esp+ecx+0x49], 0x20
        mov     byte ptr [esp+ecx+0x4a], al
        mov     ecx, dword ptr [esp+0x1c]
        push    0xa
        lea     eax, [esp+0x38]
        push    eax
        push    ecx
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp+0x34]
        repne   scasb
        not     ecx
        sub     edi, ecx
        lea     edx, [esp+0x48]
        mov     esi, edi
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x20
        mov     byte ptr [esp+ecx+0x49], al
        mov     eax, dword ptr [ebp]
        push    0x2f9
        mov     ecx, ebp
        call    dword ptr [eax+0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
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
        or      ecx, 0xffffffff
        lea     edi, [esp+0x48]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+ecx+0x48], 0x2e
        mov     byte ptr [esp+ecx+0x49], al
        jmp     L_537D7E
L_537D46:
        mov     eax, dword ptr [ebp]
        push    0x2f8
        mov     ecx, ebp
        call    dword ptr [eax+0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp+0x48]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_537D7E:
        mov     edx, dword ptr [ebp]
        lea     eax, [esp+0x48]
        push    eax
        mov     eax, dword ptr [esp+0x758]
        push    eax
        push    0
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
        mov     edi, dword ptr [g_007db090]
L_537D9C:
        mov     ecx, dword ptr [esp+0x24]
        mov     eax, dword ptr [esp+0x28]
        add     ecx, 4
        dec     eax
        mov     dword ptr [esp+0x24], ecx
        mov     dword ptr [esp+0x28], eax
        jnz     L_537A43
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
L_537DC3:
        mov     al, byte ptr [esp+0x750]
        test    al, al
        jz      L_537DDF
        mov     eax, dword ptr [esp+0x758]
        mov     edx, dword ptr [ebp]
        push    eax
        push    0
        push    1
        jmp     L_537E21
L_537DDF:
        mov     al, byte ptr [esp+0x748]
        test    al, al
        mov     al, byte ptr [esp+0x74c]
        jz      L_537E0A
        mov     edx, dword ptr [ebp]
        test    al, al
        mov     eax, dword ptr [esp+0x758]
        push    eax
        push    0
        jz      L_537E06
        push    5
        jmp     L_537E21
L_537E06:
        push    4
        jmp     L_537E21
L_537E0A:
        mov     edx, dword ptr [ebp]
        test    al, al
        mov     eax, dword ptr [esp+0x758]
        push    eax
        push    0
        jz      L_537E1F
        push    3
        jmp     L_537E21
L_537E1F:
        push    2
L_537E21:
        mov     ecx, dword ptr [esp+0x760]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx+0x30]
L_537E2E:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x734
        ret     0x14
    }
}
