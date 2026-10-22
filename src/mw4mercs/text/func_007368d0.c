/*
 * FUN_007368d0 (619 B) — ImageHlp.dll symbol-API loader.
 *
 * Loads imagehlp.dll (trying "\assets\binaries\imagehlp.dll" then
 * "\imagehlp.dll"), resolves SymInitialize/StackWalk/... via GetProcAddress
 * into a set of global function pointers. Returns true if all resolved.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_849ebc;
extern void *g_76b260;   /* IAT: VirtualQuery */
extern int g_8aa710;
extern char g_8597cc[];
extern char g_7a68cc[];
extern void *g_76b0c0;   /* IAT: LoadLibraryA */
extern int g_8aa9f8;
extern char g_8598d0[];
extern char g_7a68bc[];
extern char g_8599d4[];
extern char g_7a68ac[];
extern void *g_76b0c8;   /* IAT: GetProcAddress */
extern int g_8aa5f4;
extern int g_8aa608;
extern int g_8aa60c;
extern int g_8aa604;
extern int g_8aa5fc;
extern int g_8aa600;
extern int g_8aa5f0;
extern int g_8aa5f8;
extern int g_8aa5ec;

__declspec(naked) void FUN_007368d0(void)
{
    __asm {
        sub     esp, 0x120
        push    ebx
        push    esi
        push    edi
        push    0x1c
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7368d0
        mov     dword ptr [g_849ebc], 0x0
        call    dword ptr [g_76b260]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [g_8aa710], ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8597cc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x28]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a68cc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x28]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_76b0c0]
        lea     eax, [esp + 0x28]
        and     ecx, 0x3
        push    eax
        rep     movsb
        call    ebx
        mov     edx, eax
        test    edx, edx
        mov     dword ptr [g_8aa9f8], edx
        jnz     L_369df
        or      ecx, 0xffffffff
        mov     edi, 0x8598d0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x28]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a68bc
        repne   scasb
        not     ecx
        sub     edi, ecx
        push    ebp
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x2c]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        lea     eax, [esp + 0x2c]
        and     ecx, 0x3
        push    eax
        rep     movsb
        call    ebx
        mov     edx, eax
        test    edx, edx
        mov     dword ptr [g_8aa9f8], edx
        pop     ebp
        jnz     L_369df
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_369df:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x28]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x8599d4
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        push    0x7a68ac
        rep     movsb
        mov     esi, dword ptr [g_76b0c8]
        push    edx
        call    esi
        test    eax, eax
        mov     [g_8aa5f4], eax
        jnz     L_36a26
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_36a26:
        mov     ecx, dword ptr [g_8aa9f8]
        push    0x7a68a0
        push    ecx
        call    esi
        test    eax, eax
        mov     [g_8aa608], eax
        jnz     L_36a49
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_36a49:
        mov     edx, dword ptr [g_8aa9f8]
        push    0x7a6888
        push    edx
        call    esi
        test    eax, eax
        mov     [g_8aa60c], eax
        jnz     L_36a6c
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_36a6c:
        mov     eax, [g_8aa9f8]
        push    0x7a6874
        push    eax
        call    esi
        test    eax, eax
        mov     [g_8aa604], eax
        jnz     L_36a8e
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_36a8e:
        mov     ecx, dword ptr [g_8aa9f8]
        push    0x7a6860
        push    ecx
        call    esi
        test    eax, eax
        mov     [g_8aa5fc], eax
        jnz     L_36ab1
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_36ab1:
        mov     edx, dword ptr [g_8aa9f8]
        push    0x7a684c
        push    edx
        call    esi
        test    eax, eax
        mov     [g_8aa600], eax
        jnz     L_36ad4
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_36ad4:
        mov     eax, [g_8aa9f8]
        push    0x7a683c
        push    eax
        call    esi
        test    eax, eax
        mov     [g_8aa5f0], eax
        jnz     L_36af6
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_36af6:
        mov     ecx, dword ptr [g_8aa9f8]
        push    0x7a682c
        push    ecx
        call    esi
        test    eax, eax
        mov     [g_8aa5f8], eax
        jnz     L_36b19
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x120
        ret
L_36b19:
        mov     edx, dword ptr [g_8aa9f8]
        push    0x7a681c
        push    edx
        call    esi
        pop     edi
        test    eax, eax
        pop     esi
        mov     [g_8aa5ec], eax
        setnz   al
        pop     ebx
        add     esp, 0x120
        ret
    }
}
