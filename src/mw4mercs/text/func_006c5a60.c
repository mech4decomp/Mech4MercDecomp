/*
 * FUN_006c5a60 (1552 B) — Position/cube member parser.
 *
 * Parses a token stream (global DAT_0082f328) against a "position" object
 * (param_1) and resolves member references, updating globals DAT_0082f320 /
 * DAT_0082f310 / DAT_0082f30c / DAT_0082f308. Recurses through a linked list
 * of sub-objects (FUN_006c5a60) and calls FUN_006c3420 / FUN_006c5a30 /
 * FUN_006bfa50 (error log).
 *
 * __stdcall (1 pointer param), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f328;   /* 0x0082f328 token stream pointer */
extern int g_82f310;   /* 0x0082f310 */
extern int g_82f320;   /* 0x0082f320 */
extern int g_82f30c;   /* 0x0082f30c */
extern int g_82f308;   /* 0x0082f308 */
extern char g_82ebf8[];/* 0x0082ebf8 char-class table */
extern char g_8304f0[];/* 0x008304f0 scratch buffer */
extern char g_830570[];/* 0x00830570 scratch buffer */
extern int g_83a0f0;   /* 0x0083a0f0 */

extern int __cdecl FUN_006c3420(void);
extern void __cdecl FUN_006bfa50(void);
extern int __cdecl FUN_006c5a30(void);
extern int __stdcall FUN_006c5a60(void *param);

__declspec(naked) int __stdcall FUN_006c5a60(void *param)
{
    __asm {
        mov     eax, dword ptr [g_82f328]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
LAB_5a6d:
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0xe]
        lea     edi, [ebp + 0x4]
        mov     dword ptr [g_82f310], ebp
        mov     dword ptr [g_82f320], edi
        add     eax, ecx
        mov     dword ptr [g_82f328], eax
LAB_5a88:
        cmp     byte ptr [eax], 0x20
        jne     LAB_5a93
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_5a93:
        cmp     byte ptr [eax], 0x5b
        jne     LAB_5bf8
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x5d
        mov     dword ptr [g_82f328], eax
        je      LAB_5dba
        mov     dword ptr [g_82f320], ebp
        call    FUN_006c3420
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x20
        mov     dword ptr [g_82f328], eax
        jne     LAB_5ad4
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_5ad4:
        mov     edx, dword ptr [edi]
        mov     bl, byte ptr [ebp + 0xa]
        cmp     bl, 0x64
        lea     ecx, [edx + esi*4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [g_82f30c], esi
        mov     dword ptr [g_82f310], edx
        mov     dword ptr [g_82f320], ecx
        je      LAB_5dec
        cmp     bl, 0x70
        je      LAB_5dd4
        cmp     byte ptr [eax], 0x2e
        jne     LAB_6064
        inc     eax
        cmp     bl, 0x66
        mov     dword ptr [g_82f328], eax
        jne     LAB_5b59
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x1]
        lea     ecx, [eax + 0x1]
        cmp     byte ptr [edx + g_82ebf8], 0
        jne     LAB_5b59
        mov     al, byte ptr [eax]
        cmp     al, 0x78
        mov     dword ptr [g_82f328], ecx
        je      LAB_5de0
        cmp     al, 0x79
        je      LAB_5df8
        cmp     al, 0x7a
        je      LAB_5e13
        push    0x79df24
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
LAB_5b59:
        cmp     bl, 0x6b
        jne     LAB_5bea
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x4]
        lea     ecx, [eax + 0x4]
        cmp     byte ptr [edx + g_82ebf8], 0
        jne     LAB_5bbf
        mov     eax, dword ptr [eax]
        cmp     eax, 0x782e3170
        mov     dword ptr [g_82f328], ecx
        je      LAB_5de0
        cmp     eax, 0x792e3170
        je      LAB_5e2d
        cmp     eax, 0x7a2e3170
        je      LAB_5e48
        cmp     eax, 0x782e3270
        je      LAB_5e62
        cmp     eax, 0x792e3270
        je      LAB_5e7d
        cmp     eax, 0x7a2e3270
        je      LAB_5e98
        jmp     LAB_5bd8
LAB_5bbf:
        mov     cx, word ptr [eax]
        cmp     cx, 0x3170
        je      LAB_5eb2
        cmp     cx, 0x3270
        je      LAB_5ed9
LAB_5bd8:
        push    0x79df04
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
LAB_5bea:
        cmp     bl, 0x68
        je      LAB_5f03
        jmp     LAB_5a88
LAB_5bf8:
        cmp     byte ptr [eax], 0x2e
        jne     LAB_6052
        mov     bl, byte ptr [ebp + 0xa]
        inc     eax
        cmp     bl, 0x66
        mov     dword ptr [g_82f328], eax
        jne     LAB_5c52
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x1]
        lea     ecx, [eax + 0x1]
        cmp     byte ptr [edx + g_82ebf8], 0
        jne     LAB_5c52
        mov     al, byte ptr [eax]
        cmp     al, 0x78
        mov     dword ptr [g_82f328], ecx
        je      LAB_5f9d
        cmp     al, 0x79
        je      LAB_5fb2
        cmp     al, 0x7a
        je      LAB_5fca
        push    0x79df24
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
LAB_5c52:
        cmp     bl, 0x6b
        jne     LAB_5cde
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x4]
        lea     ecx, [eax + 0x4]
        cmp     byte ptr [edx + g_82ebf8], 0
        jne     LAB_5cb8
        mov     eax, dword ptr [eax]
        cmp     eax, 0x782e3170
        mov     dword ptr [g_82f328], ecx
        je      LAB_5f9d
        cmp     eax, 0x792e3170
        je      LAB_5fb2
        cmp     eax, 0x7a2e3170
        je      LAB_5fca
        cmp     eax, 0x782e3270
        je      LAB_5fe1
        cmp     eax, 0x792e3270
        je      LAB_5ff9
        cmp     eax, 0x7a2e3270
        je      LAB_6011
        jmp     LAB_5cd1
LAB_5cb8:
        mov     cx, word ptr [eax]
        cmp     cx, 0x3170
        je      LAB_5eb2
        cmp     cx, 0x3270
        je      LAB_6028
LAB_5cd1:
        push    0x79df04
        call    FUN_006bfa50
        add     esp, 0x4
LAB_5cde:
        call    FUN_006c5a30
        cmp     bl, 0x68
        mov     edx, eax
        mov     dword ptr [esp + 0x14], edx
        jne     LAB_5d80
        mov     eax, dword ptr [edi]
        mov     ebp, dword ptr [eax + 0x4]
        test    ebp, ebp
        mov     dword ptr [g_82f308], 0x1
        jz      LAB_5d48
LAB_5d05:
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0xe]
        cmp     ecx, edx
        jne     LAB_5d41
        mov     cl, byte ptr [ebp + 0xf]
        test    cl, cl
        lea     eax, [ebp + 0xf]
        jz      LAB_5d2e
        mov     esi, dword ptr [g_82f328]
        sub     esi, eax
LAB_5d20:
        mov     bl, byte ptr [esi + eax*1]
        inc     eax
        cmp     bl, cl
        jne     LAB_5d41
        mov     cl, byte ptr [eax]
        test    cl, cl
        jne     LAB_5d20
LAB_5d2e:
        push    ebp
        call    FUN_006c5a60
        cmp     eax, -1
        jne     LAB_6069
        mov     edx, dword ptr [esp + 0x14]
LAB_5d41:
        mov     ebp, dword ptr [ebp]
        test    ebp, ebp
        jne     LAB_5d05
LAB_5d48:
        mov     esi, dword ptr [g_82f328]
        mov     ecx, edx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, 0x8304f0
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        push    0x8304f0
        rep     movsb
        push    0x79d018
        mov     byte ptr [edx + g_8304f0], 0
        call    FUN_006bfa50
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0x8
LAB_5d80:
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0xe]
        cmp     ecx, edx
        jne     LAB_5f93
        mov     cl, byte ptr [ebp + 0xf]
        test    cl, cl
        mov     eax, dword ptr [g_82f328]
        lea     esi, [ebp + 0xf]
        jz      LAB_5db2
        mov     edi, eax
        sub     edi, esi
LAB_5da0:
        mov     dl, byte ptr [edi + esi*1]
        inc     esi
        cmp     dl, cl
        jne     LAB_5f93
        mov     cl, byte ptr [esi]
        test    cl, cl
        jne     LAB_5da0
LAB_5db2:
        add     ebp, 0x4
        jmp     LAB_5a6d
LAB_5dba:
        inc     eax
        pop     edi
        mov     dword ptr [g_82f328], eax
        mov     eax, dword ptr [ebp + 0x4]
        pop     esi
        pop     ebp
        mov     dword ptr [g_82f320], eax
        mov     eax, 0x72
        pop     ebx
        ret     4
LAB_5dd4:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x70
        pop     ebx
        ret     4
LAB_5de0:
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ecx + esi*4]
        mov     dword ptr [g_82f320], edx
LAB_5dec:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5df8:
        mov     eax, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [eax + esi*4]
        pop     edi
        pop     esi
        add     ecx, 0x4
        pop     ebp
        mov     dword ptr [g_82f320], ecx
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5e13:
        mov     edx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [edx + esi*4]
        pop     edi
        pop     esi
        add     eax, 0x8
        pop     ebp
        mov     dword ptr [g_82f320], eax
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5e2d:
        mov     eax, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [eax + esi*4]
        pop     edi
        pop     esi
        add     ecx, 0x4
        pop     ebp
        mov     dword ptr [g_82f320], ecx
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5e48:
        mov     edx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [edx + esi*4]
        pop     edi
        pop     esi
        add     eax, 0x8
        pop     ebp
        mov     dword ptr [g_82f320], eax
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5e62:
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ecx + esi*4]
        pop     edi
        pop     esi
        add     edx, 0xc
        pop     ebp
        mov     dword ptr [g_82f320], edx
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5e7d:
        mov     eax, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [eax + esi*4]
        pop     edi
        pop     esi
        add     ecx, 0x10
        pop     ebp
        mov     dword ptr [g_82f320], ecx
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5e98:
        mov     edx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [edx + esi*4]
        pop     edi
        pop     esi
        add     eax, 0x14
        pop     ebp
        mov     dword ptr [g_82f320], eax
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5eb2:
        mov     ecx, dword ptr [ebp + 0x4]
        pop     edi
        pop     esi
        add     eax, 0x2
        pop     ebp
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [g_82f320], 0x83a0f0
        mov     dword ptr [g_83a0f0], ecx
        mov     eax, 0x66
        pop     ebx
        ret     4
LAB_5ed9:
        mov     edx, dword ptr [ebp + 0x4]
        pop     edi
        add     eax, 0x2
        pop     esi
        add     edx, 0xc
        pop     ebp
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [g_82f320], 0x83a0f0
        mov     dword ptr [g_83a0f0], edx
        mov     eax, 0x66
        pop     ebx
        ret     4
LAB_5f03:
        mov     eax, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [eax + esi*4]
        mov     esi, dword ptr [ecx + 0x4]
        mov     dword ptr [g_82f308], 0x1
        call    FUN_006c5a30
        test    esi, esi
        mov     ebp, eax
        jz      LAB_5f5f
LAB_5f21:
        xor     edx, edx
        mov     dl, byte ptr [esi + 0xe]
        cmp     edx, ebp
        jne     LAB_5f59
        mov     cl, byte ptr [esi + 0xf]
        test    cl, cl
        lea     eax, [esi + 0xf]
        jz      LAB_5f4a
        mov     edi, dword ptr [g_82f328]
        sub     edi, eax
LAB_5f3c:
        mov     dl, byte ptr [edi + eax*1]
        inc     eax
        cmp     dl, cl
        jne     LAB_5f59
        mov     cl, byte ptr [eax]
        test    cl, cl
        jne     LAB_5f3c
LAB_5f4a:
        push    esi
        call    FUN_006c5a60
        cmp     eax, -1
        jne     LAB_6069
LAB_5f59:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jne     LAB_5f21
LAB_5f5f:
        mov     esi, dword ptr [g_82f328]
        mov     ecx, ebp
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, 0x830570
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        push    0x830570
        rep     movsb
        push    0x79d018
        mov     byte ptr [ebp + g_830570], 0
        call    FUN_006bfa50
        add     esp, 0x8
LAB_5f93:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     4
LAB_5f9d:
        mov     ecx, dword ptr [ebp + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_82f320], ecx
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5fb2:
        mov     edx, dword ptr [ebp + 0x4]
        pop     edi
        pop     esi
        add     edx, 0x4
        pop     ebp
        mov     dword ptr [g_82f320], edx
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5fca:
        mov     eax, dword ptr [ebp + 0x4]
        pop     edi
        pop     esi
        add     eax, 0x8
        pop     ebp
        mov     dword ptr [g_82f320], eax
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5fe1:
        mov     ecx, dword ptr [ebp + 0x4]
        pop     edi
        pop     esi
        add     ecx, 0xc
        pop     ebp
        mov     dword ptr [g_82f320], ecx
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_5ff9:
        mov     edx, dword ptr [ebp + 0x4]
        pop     edi
        pop     esi
        add     edx, 0x10
        pop     ebp
        mov     dword ptr [g_82f320], edx
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_6011:
        mov     eax, dword ptr [ebp + 0x4]
        pop     edi
        pop     esi
        add     eax, 0x14
        pop     ebp
        mov     dword ptr [g_82f320], eax
        mov     eax, 0x64
        pop     ebx
        ret     4
LAB_6028:
        mov     edx, dword ptr [ebp + 0x4]
        pop     edi
        add     eax, 0x2
        pop     esi
        add     edx, 0xc
        pop     ebp
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [g_82f320], 0x83a0f0
        mov     dword ptr [g_83a0f0], edx
        mov     eax, 0x66
        pop     ebx
        ret     4
LAB_6052:
        lea     eax, [ebp + 0x4]
        mov     dword ptr [g_82f30c], 0xffffffff
        mov     dword ptr [g_82f320], eax
LAB_6064:
        xor     eax, eax
        mov     al, byte ptr [ebp + 0xa]
LAB_6069:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
