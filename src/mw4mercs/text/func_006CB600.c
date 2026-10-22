/*
 * FUN_006CB600 (984 B) — __fastcall (ECX = this), RET 8 (2 stack dwords).
 *
 * Font/texture glyph layout: iterates over a string (2nd stack arg), for each
 * character computes a grid cell (x/y via sar/and on (c-0x20)) and dispatches
 * through a 5-entry jump table (0x6cb9d8) on the global log mode (g_82f384)
 * to update the log cursor state (g_82f358/g_82f35c etc.), blitting glyph
 * rows into the log surface (g_82f380). Calls FUN_006cb9f0 per glyph.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_82f384;   /* DAT_0082f384 (log mode) */
extern int  g_82f358;   /* DAT_0082f358 (log w) */
extern int  g_82f374;   /* DAT_0082f374 (log state_8) */
extern int  g_82f368;   /* DAT_0082f368 (log zero_a) */
extern int  g_82f35c;   /* DAT_0082f35c (log h) */
extern int  g_82f378;   /* DAT_0082f378 (log state_4) */
extern int  g_82f36c;   /* DAT_0082f36c (log zero_b) */
extern int  g_82f380;   /* DAT_0082f380 (log struct/surface) */
extern void __cdecl FUN_006cb9f0(void);

__declspec(naked) void __fastcall FUN_006CB600(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        mov     esi, dword ptr [esp + 0x38]
        push    edi
        or      ecx, 0xffffffff
        xor     edx, edx
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x18], edx
        je      L_9cc
L_625:
        cmp     edx, dword ptr [esp + 0x38]
        jae     L_9cc
        mov     al, byte ptr [edx + esi]
        sub     al, 0x20
        movsx   ebx, al
        mov     byte ptr [esp + 0x13], al
        mov     eax, ebx
        cdq
        and     edx, 0x1f
        add     eax, edx
        mov     edx, ebx
        sar     eax, 5
        and     edx, 0x8000001f
        mov     dword ptr [esp + 0x14], ebx
        jns     L_659
        dec     edx
        or      edx, 0xffffffe0
        inc     edx
L_659:
        mov     esi, dword ptr [ebp + 0x28]
        mov     edi, dword ptr [ebp + 0x2c]
        mov     ecx, esi
        imul    ecx, edx
        mov     edx, edi
        imul    edx, eax
        mov     dword ptr [esp + 0x20], edx
        mov     dl, byte ptr [ebp + 0x3a]
        test    dl, dl
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x24], 0
        je      L_687
        movsx   ebx, byte ptr [ebx + ebp + 0x3b]
        jmp     L_689
L_687:
        mov     ebx, esi
L_689:
        add     ecx, ebx
        inc     eax
        imul    eax, edi
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [g_82f384]
        cmp     eax, 4
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x30], 0
        ja      L_924
        jmp     dword ptr [eax*4 + 0x6cb9d8]
L_6b4:
        test    dl, dl
        je      L_6c1
        mov     eax, dword ptr [esp + 0x14]
        movsx   esi, byte ptr [eax + ebp + 0x3b]
L_6c1:
        mov     eax, dword ptr [g_82f358]
        mov     ecx, dword ptr [g_82f374]
        add     esi, eax
        cmp     esi, ecx
        jg      L_989
        cmp     eax, dword ptr [g_82f368]
        jl      L_989
        mov     eax, dword ptr [g_82f35c]
        mov     edx, dword ptr [g_82f378]
        lea     ecx, [edi + eax]
        cmp     ecx, edx
        jg      L_989
        cmp     eax, dword ptr [g_82f36c]
        jl      L_989
        jmp     L_924
L_709:
        test    dl, dl
        je      L_716
        mov     edx, dword ptr [esp + 0x14]
        movsx   esi, byte ptr [edx + ebp + 0x3b]
L_716:
        mov     ecx, dword ptr [g_82f358]
        mov     eax, dword ptr [g_82f374]
        add     esi, ecx
        cmp     esi, eax
        jle     L_734
        add     dword ptr [g_82f35c], edi
        mov     eax, dword ptr [g_82f368]
        jmp     L_73d
L_734:
        mov     eax, dword ptr [g_82f368]
        cmp     ecx, eax
        jge     L_742
L_73d:
        mov     dword ptr [g_82f358], eax
L_742:
        mov     ecx, dword ptr [g_82f35c]
        mov     eax, dword ptr [g_82f378]
        lea     edx, [edi + ecx]
        cmp     edx, eax
        mov     eax, dword ptr [g_82f36c]
        jg      L_91f
        cmp     ecx, eax
        jge     L_924
        jmp     L_91f
L_76a:
        test    dl, dl
        je      L_777
        mov     ecx, dword ptr [esp + 0x14]
        movsx   esi, byte ptr [ecx + ebp + 0x3b]
L_777:
        mov     ecx, dword ptr [g_82f358]
        mov     eax, dword ptr [g_82f374]
        add     esi, ecx
        cmp     esi, eax
        jle     L_7a2
        mov     eax, dword ptr [g_82f35c]
        mov     edx, dword ptr [g_82f368]
        add     eax, edi
        mov     dword ptr [g_82f35c], eax
        mov     dword ptr [g_82f358], edx
        jmp     L_7b0
L_7a2:
        mov     eax, dword ptr [g_82f368]
        cmp     ecx, eax
        jge     L_7b0
        mov     dword ptr [g_82f358], eax
L_7b0:
        mov     ecx, dword ptr [g_82f35c]
        mov     edx, dword ptr [g_82f378]
        lea     eax, [edi + ecx]
        cmp     eax, edx
        jle     L_7d4
        mov     ecx, dword ptr [g_82f36c]
        mov     dword ptr [g_82f35c], ecx
        jmp     L_924
L_7d4:
        mov     eax, dword ptr [g_82f36c]
        cmp     ecx, eax
        jge     L_924
        jmp     L_91f
L_7e6:
        test    dl, dl
        je      L_7f3
        mov     edx, dword ptr [esp + 0x14]
        movsx   esi, byte ptr [edx + ebp + 0x3b]
L_7f3:
        mov     ecx, dword ptr [g_82f358]
        mov     eax, dword ptr [g_82f374]
        add     esi, ecx
        cmp     esi, eax
        jle     L_811
        add     dword ptr [g_82f35c], edi
        mov     eax, dword ptr [g_82f368]
        jmp     L_81a
L_811:
        mov     eax, dword ptr [g_82f368]
        cmp     ecx, eax
        jge     L_81f
L_81a:
        mov     dword ptr [g_82f358], eax
L_81f:
        mov     ecx, dword ptr [g_82f35c]
        mov     ebx, dword ptr [g_82f378]
        lea     edx, [edi + ecx]
        cmp     edx, ebx
        jle     L_8af
        mov     eax, dword ptr [g_82f36c]
        add     eax, edi
        cmp     eax, ebx
        jge     L_86d
L_83d:
        mov     edx, dword ptr [g_82f380]
        mov     ecx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [edx + 0x18]
        mov     esi, ecx
        mov     edi, eax
        imul    esi, eax
        sub     edi, dword ptr [ebp + 0x2c]
        add     esi, edx
        imul    edi, ecx
        add     edi, edx
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        inc     eax
        cmp     eax, ebx
        rep movsb
        jl      L_83d
L_86d:
        mov     edx, dword ptr [g_82f35c]
        sub     edx, dword ptr [ebp + 0x2c]
        cmp     edx, ebx
        jge     L_8a0
L_87a:
        mov     esi, dword ptr [g_82f380]
        mov     ecx, dword ptr [esi + 0xc]
        mov     edi, ecx
        imul    edi, edx
        add     edi, dword ptr [esi + 0x18]
        mov     esi, ecx
        shr     ecx, 2
        xor     eax, eax
        rep stosd
        mov     ecx, esi
        and     ecx, 3
        inc     edx
        cmp     edx, ebx
        rep stosb
        jl      L_87a
L_8a0:
        mov     eax, dword ptr [g_82f35c]
        mov     edi, dword ptr [ebp + 0x2c]
        sub     eax, edi
        mov     dword ptr [g_82f35c], eax
L_8af:
        mov     eax, dword ptr [g_82f36c]
        cmp     dword ptr [g_82f35c], eax
        jge     L_924
        jmp     L_91f
L_8be:
        test    dl, dl
        je      L_8cb
        mov     eax, dword ptr [esp + 0x14]
        movsx   esi, byte ptr [eax + ebp + 0x3b]
L_8cb:
        mov     ecx, dword ptr [g_82f358]
        mov     eax, dword ptr [g_82f374]
        add     esi, ecx
        cmp     esi, eax
        jle     L_8f6
        mov     eax, dword ptr [g_82f35c]
        mov     ecx, dword ptr [g_82f368]
        add     eax, edi
        mov     dword ptr [g_82f35c], eax
        mov     dword ptr [g_82f358], ecx
        jmp     L_904
L_8f6:
        mov     eax, dword ptr [g_82f368]
        cmp     ecx, eax
        jge     L_904
        mov     dword ptr [g_82f358], eax
L_904:
        mov     ecx, dword ptr [g_82f35c]
        mov     eax, dword ptr [g_82f378]
        lea     edx, [edi + ecx]
        cmp     edx, eax
        mov     eax, dword ptr [g_82f36c]
        jg      L_91f
        cmp     ecx, eax
        jge     L_924
L_91f:
        mov     dword ptr [g_82f35c], eax
L_924:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jl      L_989
        cmp     al, 0x60
        jge     L_989
        mov     ecx, dword ptr [g_82f380]
        mov     edx, dword ptr [g_82f35c]
        mov     eax, dword ptr [g_82f358]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, ebp
        call    FUN_006cb9f0
        mov     al, byte ptr [ebp + 0x3a]
        test    al, al
        je      L_974
        mov     edx, dword ptr [esp + 0x14]
        movsx   eax, byte ptr [edx + ebp + 0x3b]
        mov     ecx, dword ptr [g_82f358]
        mov     edx, dword ptr [esp + 0x18]
        add     ecx, eax
        mov     dword ptr [g_82f358], ecx
        jmp     L_9af
L_974:
        mov     eax, dword ptr [g_82f358]
        mov     ecx, dword ptr [ebp + 0x28]
        mov     edx, dword ptr [esp + 0x18]
        add     eax, ecx
        mov     dword ptr [g_82f358], eax
        jmp     L_9af
L_989:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x3c]
        cmp     byte ptr [edx + eax], 0xa
        jne     L_9af
        mov     eax, dword ptr [g_82f35c]
        mov     ecx, dword ptr [g_82f368]
        add     eax, edi
        mov     dword ptr [g_82f35c], eax
        mov     dword ptr [g_82f358], ecx
L_9af:
        mov     esi, dword ptr [esp + 0x3c]
        or      ecx, 0xffffffff
        inc     edx
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        cmp     edx, ecx
        mov     dword ptr [esp + 0x18], edx
        jb      L_625
L_9cc:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     8
        mov     edi, edi
    }
}
