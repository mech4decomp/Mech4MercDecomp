/*
 * FUN_00751480 (898 B) — surface description. Builds a human-readable
 * string in a global buffer (0x008b9850) by appending one of 17 flag-
 * guarded descriptor strings via repne scasb + rep movsd/movsb
 * concatenation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_8b9850[];     /* 0x008b9850 output buffer */
extern char  g_7ad460[];     /* 0x007ad460 "3D " */
extern char  g_7ad454[];     /* 0x007ad454 "Complex " */
extern char  g_7ad448[];     /* 0x007ad448 "BackBuffer " */
extern char  g_7ad438[];     /* 0x007ad438 "FrontBuffer " */
extern char  g_7ad42c[];     /* 0x007ad42c "HWCodec " */
extern char  g_7ad420[];     /* 0x007ad420 "LiveVideo " */
extern char  g_7ad418[];     /* 0x007ad418 "Mipmap " */
extern char  g_7ad40c[];     /* 0x007ad40c "WriteOnly " */
extern char  g_7ad400[];     /* 0x007ad400 "Flipping " */
extern char  g_7ad3ec[];     /* 0x007ad3ec "LocalVideoMemory " */
extern char  g_7ad3d4[];     /* 0x007ad3d4 "NonLocalVideoMemory " */
extern char  g_7ad3c4[];     /* 0x007ad3c4 "VideoMemory " */
extern char  g_7ad3b4[];     /* 0x007ad3b4 "SystemMemory " */
extern char  g_7ad3a4[];     /* 0x007ad3a4 "AllocOnLoad " */
extern char  g_7ad398[];     /* 0x007ad398 "Primary " */
extern char  g_7ad38c[];     /* 0x007ad38c "Texture " */
extern char  g_7ad37c[];     /* 0x007ad37c "OffScreenPlain " */

__declspec(naked) void FUN_00751480(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax]
        test    dh, 0x20
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9850], 0x0
        jz      L_514c2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad460
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_514c2:
        test    dl, 0x8
        jz      L_514f4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad454
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_514f4:
        test    dl, 0x4
        jz      L_51526
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad448
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_51526:
        test    dl, 0x20
        jz      L_51558
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad438
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_51558:
        test    edx, 0x100000
        jz      L_5158d
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad42c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_5158d:
        test    edx, 0x80000
        jz      L_515c2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad420
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_515c2:
        test    edx, 0x400000
        jz      L_515f7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad418
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_515f7:
        test    edx, 0x10000
        jz      L_5162c
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad40c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_5162c:
        test    dl, 0x10
        jz      L_5165e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad400
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_5165e:
        test    edx, 0x10000000
        jz      L_51693
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad3ec
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_51693:
        test    edx, 0x20000000
        jz      L_516c8
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad3d4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_516c8:
        test    dh, 0x40
        jz      L_516fa
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad3c4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_516fa:
        test    dh, 0x8
        jz      L_5172c
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad3b4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_5172c:
        test    edx, 0x4000000
        jz      L_51761
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad3a4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_51761:
        test    dh, 0x2
        jz      L_51793
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad398
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_51793:
        test    dh, 0x10
        jz      L_517c5
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad38c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
    L_517c5:
        test    dl, 0x40
        jz      L_517f7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad37c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9850
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_517f7:
        pop     edi
        pop     esi
        mov     eax, 0x8b9850
        pop     ebx
        ret     0x4
    }
}
