/*
 * FUN_00751100 (892 B) — texture format description. Builds a human-
 * readable string in a global buffer (0x008b98d0) describing a pixel
 * format, dispatching on flag bits and appending suffix strings via
 * repne scasb + rep movsd/movsb concatenation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_8b98d0[];     /* 0x008b98d0 output buffer */
extern void* g_76b420;       /* IAT sprintf */
extern char  g_7ad364[];     /* 0x007ad364 "Invalid size field! " */
extern char  g_7ad35c[];     /* 0x007ad35c */
extern char  g_7ad354[];     /* 0x007ad354 */
extern char  g_7ad34c[];     /* 0x007ad34c */
extern char  g_7ad344[];     /* 0x007ad344 */
extern char  g_7ad32c[];     /* 0x007ad32c */
extern char  g_7ad320[];     /* 0x007ad320 */
extern char  g_7ad30c[];     /* 0x007ad30c */
extern char  g_7ad304[];     /* 0x007ad304 */
extern char  g_7ad2f0[];     /* 0x007ad2f0 */
extern char  g_7ad2d8[];     /* 0x007ad2d8 */
extern char  g_7ad2d0[];     /* 0x007ad2d0 */
extern char  g_7a7220[];     /* 0x007a7220 */
extern char  g_7ad2c8[];     /* 0x007ad2c8 */
extern char  g_7ad2a4[];     /* 0x007ad2a4 */
extern char  g_7ad298[];     /* 0x007ad298 */
extern char  g_7abbc8[];     /* 0x007abbc8 */
extern char  g_7ad290[];     /* 0x007ad290 "+ALPHA " */
extern char  g_7ad280[];     /* 0x007ad280 "+COMPRESSED " */
extern char  g_7ad270[];     /* 0x007ad270 "+ALPHAPREMULT " */
extern char  g_7ad264[];     /* 0x007ad264 "+RGBTOYUV " */
extern char  g_7ad258[];     /* 0x007ad258 "+ZPIXELS " */
extern char  g_77f804[];     /* 0x0077f804 "%c" */

extern void __cdecl FUN_007510d0(void);

__declspec(naked) void FUN_00751100(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        cmp     dword ptr [esi], 0x20
        mov     byte ptr [g_8b98d0], 0x0
        jz      L_5111a
        mov     eax, 0x7ad364
        pop     esi
        ret     0x4
    L_5111a:
        push    ebx
        mov     ebx, dword ptr [esi + 0x4]
        test    bh, 0x8
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x14], ebx
        jz      L_51133
        push    0x7ad35c
        jmp     L_51368
    L_51133:
        test    bh, 0x10
        jz      L_51142
        push    0x7ad354
        jmp     L_51368
    L_51142:
        test    bl, 0x8
        jz      L_51151
        push    0x7ad34c
        jmp     L_51368
    L_51151:
        test    bl, 0x20
        jz      L_51160
        push    0x7ad344
        jmp     L_51368
    L_51160:
        test    ebx, 0x80000
        jz      L_5119a
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        call    FUN_007510d0
        mov     edx, dword ptr [esi + 0x10]
        movsx   ecx, al
        push    ecx
        push    edx
        call    FUN_007510d0
        movsx   eax, al
        push    eax
        push    0x7ad32c
        push    0x8b98d0
        call    dword ptr [g_76b420]
        add     esp, 0x10
        jmp     L_51376
    L_5119a:
        test    bl, 0x10
        jz      L_511a9
        push    0x7ad320
        jmp     L_51368
    L_511a9:
        test    bl, 0x4
        jz      L_511e6
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, eax
        and     ecx, 0xff
        push    ecx
        xor     edx, edx
        mov     dword ptr [esp + 0x18], eax
        mov     dl, ah
        xor     ecx, ecx
        mov     cl, byte ptr [esp + 0x1a]
        shr     eax, 0x18
        push    edx
        push    ecx
        push    eax
        push    0x7ad30c
        push    0x8b98d0
        call    dword ptr [g_76b420]
        add     esp, 0x18
        jmp     L_51376
    L_511e6:
        test    bh, 0x2
        jz      L_511f5
        push    0x7ad304
        jmp     L_51368
    L_511f5:
        test    ebx, 0x20000
        jz      L_51219
        mov     edx, dword ptr [esi + 0xc]
        push    edx
        push    0x7ad2f0
        push    0x8b98d0
        call    dword ptr [g_76b420]
        add     esp, 0xc
        jmp     L_51376
    L_51219:
        test    ebx, 0x40000
        jz      L_51246
        mov     eax, dword ptr [esi + 0x18]
        push    eax
        call    FUN_007510d0
        movsx   ecx, al
        push    ecx
        push    0x7ad2d8
        push    0x8b98d0
        call    dword ptr [g_76b420]
        add     esp, 0xc
        jmp     L_51376
    L_51246:
        test    bl, 0x40
        jz      L_5131b
        and     ebx, 0x1
        mov     ebp, dword ptr [g_76b420]
        jz      L_51287
        mov     edx, dword ptr [esi + 0x1c]
        push    edx
        call    FUN_007510d0
        movsx   eax, al
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b98d0
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b98d0
        push    0x77f804
        push    ecx
        call    ebp
        add     esp, 0xc
    L_51287:
        cmp     dword ptr [esi + 0xc], 0x20
        jnz     L_512ce
        test    ebx, ebx
        jz      L_512a5
        mov     ecx, dword ptr [esi + 0x1c]
        push    ecx
        call    FUN_007510d0
        cmp     al, 0x38
        jnz     L_512a5
        push    0x7ad2d0
        jmp     L_512aa
    L_512a5:
        push    0x7a7220
    L_512aa:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b98d0
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b98d0
        push    ecx
        call    ebp
        mov     ebx, dword ptr [esp + 0x1c]
        add     esp, 0x8
        jmp     L_51376
    L_512ce:
        mov     edx, dword ptr [esi + 0x18]
        push    edx
        call    FUN_007510d0
        mov     ecx, dword ptr [esi + 0x14]
        movsx   eax, al
        push    eax
        push    ecx
        call    FUN_007510d0
        movsx   edx, al
        mov     eax, dword ptr [esi + 0x10]
        push    edx
        push    eax
        call    FUN_007510d0
        movsx   ecx, al
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b98d0
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b98d0
        push    0x7ad2c8
        push    ecx
        call    ebp
        mov     ebx, dword ptr [esp + 0x28]
        add     esp, 0x14
        jmp     L_51376
    L_5131b:
        test    bh, 0x4
        jz      L_51363
        test    bh, 0x40
        jz      L_5134a
        mov     edx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0x14]
        push    edx
        mov     edx, dword ptr [esi + 0xc]
        push    eax
        push    ecx
        push    edx
        push    0x7ad2a4
        push    0x8b98d0
        call    dword ptr [g_76b420]
        add     esp, 0x18
        jmp     L_51376
    L_5134a:
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        push    0x7ad298
        push    0x8b98d0
        call    dword ptr [g_76b420]
        add     esp, 0xc
        jmp     L_51376
    L_51363:
        push    0x7abbc8
    L_51368:
        push    0x8b98d0
        call    dword ptr [g_76b420]
        add     esp, 0x8
    L_51376:
        test    bl, 0x2
        jz      L_513a8
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad290
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b98d0
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_513a8:
        test    bl, 0x80
        jz      L_513da
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad280
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b98d0
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_513da:
        test    bh, 0x80
        jz      L_5140c
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad270
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b98d0
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_5140c:
        test    bh, 0x1
        jz      L_5143e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad264
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b98d0
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_5143e:
        test    bh, 0x20
        jz      L_51470
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad258
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b98d0
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_51470:
        pop     edi
        pop     ebp
        pop     ebx
        mov     eax, 0x8b98d0
        pop     esi
        ret     0x4
    }
}
