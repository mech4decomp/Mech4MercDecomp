/*
 * FUN_006C2E70 (584 B) — Script/function-name resolver.
 *
 * Parses a function name from the global token stream (DAT_0082f328),
 * looks it up in a linked list of loaded scripts, and (recursively)
 * resolves "@name@" script references.
 *
 * __stdcall, RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f328;                       /* DAT_0082f328 (token stream ptr) */
extern char g_82ecf8[];                    /* DAT_0082ecf8 (name table) */
extern char g_79c464;                      /* DAT_0079c464 ("null" string) */
extern int g_82f348;                       /* DAT_0082f348 (script list) */
extern int g_82f320;                       /* DAT_0082f320 */

extern char g_79d21c[];
extern char g_79d1e4[];
extern char g_79d190[];
extern char g_79d174[];
extern char g_79d140[];
extern char g_79d124[];

extern void *g_76b2ac;   /* IAT: _stricmp */
extern void *g_76b2b0;   /* IAT: _strnicmp */

extern int __stdcall FUN_006c3450(void);
extern void __cdecl FUN_006bfa50(const char *fmt, ...);
extern int __stdcall FUN_006c07c0(void);
extern int __stdcall FUN_006c12e0(void);

__declspec(naked) void __stdcall FUN_006c2e70(void)
{
    __asm {
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     L_6c2e80
        inc     eax
        mov     dword ptr [g_82f328], eax
L_6c2e80:
        xor     ecx, ecx
        mov     cl, byte ptr [eax]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     dl, byte ptr [ecx + g_82ecf8]
        test    dl, dl
        jnz     L_6c2eb4
        call    FUN_006c3450
        test    eax, eax
        jnz     L_6c2ea2
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
L_6c2ea2:
        push    offset g_79d21c
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 4
L_6c2eb4:
        mov     edi, eax
        call    FUN_006c07c0
        mov     ebp, eax
        cmp     ebp, 4
        jnz     L_6c2eec
        mov     al, byte ptr [g_79c464]
        test    al, al
        mov     ecx, offset g_79c464
        jz      L_6c2ee3
        mov     esi, edi
        sub     esi, ecx
L_6c2ed4:
        mov     dl, byte ptr [esi + ecx]
        mov     al, byte ptr [ecx]
        inc     ecx
        cmp     dl, al
        jnz     L_6c2eec
        cmp     byte ptr [ecx], 0
        jnz     L_6c2ed4
L_6c2ee3:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_6c2eec:
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [ecx + 0x14]
        test    ebx, ebx
        jz      L_6c2f2a
L_6c2ef7:
        cmp     dword ptr [ebx + 8], ebp
        jnz     L_6c2f1a
        mov     dl, byte ptr [ebx + 0xc]
        test    dl, dl
        lea     ecx, [ebx + 0xc]
        jz      L_6c2f22
        mov     esi, edi
        sub     esi, ecx
L_6c2f0a:
        mov     al, byte ptr [esi + ecx]
        inc     ecx
        cmp     al, dl
        jnz     L_6c2f1a
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      L_6c2f22
        jmp     L_6c2f0a
L_6c2f1a:
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jz      L_6c2f2a
        jmp     L_6c2ef7
L_6c2f22:
        test    ebx, ebx
        jnz     L_6c30af
L_6c2f2a:
        mov     dword ptr [g_82f328], edi
        call    FUN_006c12e0
        cmp     eax, 0x64
        jnz     L_6c2fa7
        mov     esi, dword ptr [g_82f348]
        test    esi, esi
        mov     ecx, dword ptr [g_82f320]
        mov     ebp, dword ptr [ecx]
        mov     byte ptr [esp + 0x18], 0
        jz      L_6c30af
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + 8]
        lea     edi, [eax + 0x44]
L_6c2f5f:
        mov     eax, dword ptr [esi + 8]
        add     eax, 0x44
        push    edi
        push    eax
        call    dword ptr [g_76b2ac]        ; _stricmp
        add     esp, 8
        test    eax, eax
        jnz     L_6c2f7b
        mov     byte ptr [esp + 0x18], 1
        jmp     L_6c2f83
L_6c2f7b:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      L_6c2f98
L_6c2f83:
        mov     ebx, dword ptr [esi + 0x14]
        test    ebx, ebx
        jz      L_6c2f98
L_6c2f8a:
        cmp     ebx, ebp
        jz      L_6c30af
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jnz     L_6c2f8a
L_6c2f98:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jnz     L_6c2f5f
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     8
L_6c2fa7:
        cmp     byte ptr [edi], 0x40
        mov     dword ptr [g_82f328], edi
        jnz     L_6c3096
        mov     al, byte ptr [edi + 1]
        test    al, al
        mov     ebp, 1
        jz      L_6c2fcf
L_6c2fc2:
        cmp     al, 0x40
        jz      L_6c2fcf
        mov     al, byte ptr [edi + ebp + 1]
        inc     ebp
        test    al, al
        jnz     L_6c2fc2
L_6c2fcf:
        cmp     byte ptr [edi + ebp], 0
        jnz     L_6c2fe2
        push    offset g_79d1e4
        call    FUN_006bfa50
        add     esp, 4
L_6c2fe2:
        mov     esi, dword ptr [g_82f348]
        inc     ebp
        test    esi, esi
        mov     byte ptr [esp + 0x18], 0
        jz      L_6c304e
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx + 8]
        add     eax, 0x44
        mov     dword ptr [esp + 0x14], eax
L_6c3000:
        mov     eax, dword ptr [esi + 8]
        mov     edx, dword ptr [esp + 0x14]
        lea     edi, [eax + 0x44]
        push    edx
        push    edi
        call    dword ptr [g_76b2ac]        ; _stricmp
        add     esp, 8
        test    eax, eax
        jnz     L_6c301e
        mov     byte ptr [esp + 0x18], 1
L_6c301e:
        mov     eax, dword ptr [g_82f328]
        push    ebp
        push    eax
        push    edi
        call    dword ptr [g_76b2b0]        ; _strnicmp
        add     esp, 0xc
        test    eax, eax
        jnz     L_6c3048
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jnz     L_6c3064
        push    offset g_79d190
        call    FUN_006bfa50
        add     esp, 4
L_6c3048:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jnz     L_6c3000
L_6c304e:
        push    offset g_79d174
        call    FUN_006bfa50
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     8
L_6c3064:
        mov     eax, dword ptr [g_82f328]
        push    1
        add     eax, ebp
        push    esi
        mov     dword ptr [g_82f328], eax
        call    FUN_006c2e70
        test    eax, eax
        jnz     L_6c30b1
        test    esi, esi
        jz      L_6c304e
        push    offset g_79d140
        call    FUN_006bfa50
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     8
L_6c3096:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      L_6c2ee3
        push    offset g_79d124
        call    FUN_006bfa50
        add     esp, 4
L_6c30af:
        mov     eax, ebx
L_6c30b1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
