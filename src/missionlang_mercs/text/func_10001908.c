/*
 * FUN_10001908 (306 B) — return a heap copy of the environment block,
 * converting from wide (W) or ANSI (A) depending on a cached flag.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_100054bc;                                /* 0x100054bc env-format flag */

extern void *(__stdcall *g_GetEnvironmentStringsW)(void);  /* IAT 0x10004050 */
extern void *(__stdcall *g_GetEnvironmentStrings)(void);   /* IAT 0x1000404c */
extern int (__stdcall *g_WideCharToMultiByte)(unsigned int, unsigned int, void *, int, char *, int, void *, void *); /* IAT 0x10004048 */
extern int (__stdcall *g_FreeEnvironmentStringsW)(void *); /* IAT 0x10004044 */
extern int (__stdcall *g_FreeEnvironmentStringsA)(void *); /* IAT 0x10004040 */

extern void *__cdecl FUN_10001e57(unsigned int);      /* _malloc */
extern void __cdecl FUN_10001e0f(void *);             /* free */
extern void __cdecl FUN_10002450(void *, void *, unsigned int); /* memcpy */

__declspec(naked) void __stdcall FUN_10001908(void)
{
    __asm {
        push    ecx
        push    ecx
        mov     eax, dword ptr [g_100054bc]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_GetEnvironmentStringsW]
        push    esi
        push    edi
        xor     ebx, ebx
        xor     esi, esi
        xor     edi, edi
        cmp     eax, ebx
        jnz     L_956
        call    ebp
        mov     esi, eax
        cmp     esi, ebx
        jz      L_937
        mov     dword ptr [g_100054bc], 1
        jmp     L_95f
L_937:
        call    dword ptr [g_GetEnvironmentStrings]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_a31
        mov     dword ptr [g_100054bc], 2
        jmp     L_9e5
L_956:
        cmp     eax, 1
        jnz     L_9e0
L_95f:
        cmp     esi, ebx
        jnz     L_96f
        call    ebp
        mov     esi, eax
        cmp     esi, ebx
        jz      L_a31
L_96f:
        cmp     word ptr [esi], bx
        mov     eax, esi
        jz      L_984
L_976:
        inc     eax
        inc     eax
        cmp     word ptr [eax], bx
        jnz     L_976
        inc     eax
        inc     eax
        cmp     word ptr [eax], bx
        jnz     L_976
L_984:
        sub     eax, esi
        mov     edi, dword ptr [g_WideCharToMultiByte]
        sar     eax, 1
        push    ebx
        push    ebx
        inc     eax
        push    ebx
        push    ebx
        push    eax
        push    esi
        push    ebx
        push    ebx
        mov     dword ptr [esp + 0x34], eax
        call    edi
        mov     ebp, eax
        cmp     ebp, ebx
        jz      L_9d5
        push    ebp
        call    FUN_10001e57
        cmp     eax, ebx
        pop     ecx
        mov     dword ptr [esp + 0x10], eax
        jz      L_9d5
        push    ebx
        push    ebx
        push    ebp
        push    eax
        push    dword ptr [esp + 0x24]
        push    esi
        push    ebx
        push    ebx
        call    edi
        test    eax, eax
        jnz     L_9d1
        push    dword ptr [esp + 0x10]
        call    FUN_10001e0f
        pop     ecx
        mov     dword ptr [esp + 0x10], ebx
L_9d1:
        mov     ebx, dword ptr [esp + 0x10]
L_9d5:
        push    esi
        call    dword ptr [g_FreeEnvironmentStringsW]
        mov     eax, ebx
        jmp     L_a33
L_9e0:
        cmp     eax, 2
        jnz     L_a31
L_9e5:
        cmp     edi, ebx
        jnz     L_9f5
        call    dword ptr [g_GetEnvironmentStrings]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_a31
L_9f5:
        cmp     byte ptr [edi], bl
        mov     eax, edi
        jz      L_a05
L_9fb:
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_9fb
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_9fb
L_a05:
        sub     eax, edi
        inc     eax
        mov     ebp, eax
        push    ebp
        call    FUN_10001e57
        mov     esi, eax
        pop     ecx
        cmp     esi, ebx
        jnz     L_a1b
        xor     esi, esi
        jmp     L_a26
L_a1b:
        push    ebp
        push    edi
        push    esi
        call    FUN_10002450
        add     esp, 0xc
L_a26:
        push    edi
        call    dword ptr [g_FreeEnvironmentStringsA]
        mov     eax, esi
        jmp     L_a33
L_a31:
        xor     eax, eax
L_a33:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        pop     ecx
        ret
    }
}
