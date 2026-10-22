/*
 * FUN_0071E430 (1216 B) — Module lookup helper. Given a module name string
 * (param_1) and a flag (param_2), resolves the module path, builds a full
 * path string into the global buffer g_87d54c, and returns that buffer.
 * Uses wsprintfA (IAT_0076b4f8), malloc/free (IAT_0076b294/b2d0), and the
 * helper FUN_0075e352/34c/346. Called by FUN_0071e8f0 (DLL version report).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0071e160(void);
extern void __cdecl FUN_0075e352(void);
extern void __cdecl FUN_0075e34c(void);
extern void __cdecl FUN_0075e346(void);

extern int *IAT_0076b4f8;   /* wsprintfA */
extern int *IAT_0076b294;   /* malloc */
extern int *IAT_0076b2d0;   /* free */
extern int *g_76b370;

extern char g_87d54c[];     /* global path buffer */
extern char g_7a46a0[];
extern char g_7a35a4[];
extern char g_7a3520[];
extern char g_7a4694[];
extern char g_7a4684[];
extern char g_77a078[];
extern char g_7a4678[];
extern char g_77a7b0[];

__declspec(naked) void __cdecl FUN_0071e430(void)
{
    __asm {
        sub     esp, 0x558
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x564]
        push    esi
        push    edi
        push    ebp
        call    FUN_0071e160
        mov     ebx, eax
        test    ebx, ebx
        mov     dword ptr [esp + 0x1c], ebx
        jne     L_e477
        push    ebp
        push    offset g_7a46a0
        push    offset g_87d54c
        call    dword ptr [IAT_0076b4f8]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_87d54c
        pop     ebx
        add     esp, 0x558
        ret     8
L_e477:
        lea     eax, [esp + 0x468]
        push    eax
        lea     ecx, [esp + 0x36c]
        push    ecx
        lea     edx, [esp + 0x16c]
        push    edx
        lea     eax, [esp + 0x270]
        push    eax
        push    ebx
        call    dword ptr [g_76b370]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x14
        lea     edi, [esp + 0x264]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x60]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x164]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x60]
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
        lea     edi, [esp + 0x60]
        repne   scasb
        not     ecx
        mov     al, byte ptr [esp + ecx + 0x5e]
        dec     ecx
        cmp     al, 0x5c
        jne     L_e51f
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x60]
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp + ecx + 0x5f], al
L_e51f:
        lea     eax, [esp + 0x18]
        push    eax
        push    ebx
        call    FUN_0075e352
        or      ecx, 0xffffffff
        mov     ebx, eax
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset g_87d54c
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        mov     edx, 0xd
        sub     edx, esi
        jns     L_e565
        xor     edx, edx
L_e565:
        xor     eax, eax
        test    edx, edx
        jle     L_e588
        mov     ecx, edx
        mov     ebp, ecx
        shr     ecx, 2
        lea     edi, [esi + g_87d54c]
        mov     eax, 0x20202020
        rep     stosd
        mov     ecx, ebp
        and     ecx, 3
        rep     stosb
        mov     eax, edx
L_e588:
        test    ebx, ebx
        mov     byte ptr [eax + esi + g_87d54c], 0
        jbe     L_e84f
        push    ebx
        call    dword ptr [IAT_0076b294]
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 4
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x18]
        push    ebp
        push    ebx
        push    eax
        push    ecx
        call    FUN_0075e34c
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        push    offset g_77a7b0
        push    ebp
        call    FUN_0075e346
        test    eax, eax
        je      L_e845
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [IAT_0076b4f8]
        xor     ecx, ecx
        mov     cx, word ptr [eax + 2]
        xor     edx, edx
        mov     dx, word ptr [eax]
        lea     eax, [esp + 0x20]
        push    ecx
        push    edx
        push    offset g_7a35a4
        push    eax
        call    esi
        add     esp, 0x10
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        push    ebp
        call    FUN_0075e346
        test    eax, eax
        je      L_e717
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a4694
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        mov     eax, dword ptr [esp + 0x570]
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        test    eax, eax
        rep     movsb
        je      L_e6ce
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a4684
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x60]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_e6ce:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_77a078
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    ebp
        rep     movsb
        call    dword ptr [IAT_0076b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_87d54c
        pop     ebx
        add     esp, 0x558
        ret     8
L_e717:
        lea     eax, [esp + 0x20]
        push    offset g_7a3520
        push    eax
        call    esi
        add     esp, 8
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        push    ebp
        call    FUN_0075e346
        test    eax, eax
        je      L_e845
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a4694
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        mov     eax, dword ptr [esp + 0x570]
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        test    eax, eax
        rep     movsb
        je      L_e7fc
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a4684
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x60]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_e7fc:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_77a078
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    ebp
        rep     movsb
        call    dword ptr [IAT_0076b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_87d54c
        pop     ebx
        add     esp, 0x558
        ret     8
L_e845:
        push    ebp
        call    dword ptr [IAT_0076b2d0]
        add     esp, 4
L_e84f:
        mov     eax, dword ptr [esp + 0x570]
        test    eax, eax
        je      L_e8b1
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a4684
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x60]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_e8b1:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a4678
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_87d54c
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_87d54c
        pop     ebx
        add     esp, 0x558
        ret     8
    }
}
