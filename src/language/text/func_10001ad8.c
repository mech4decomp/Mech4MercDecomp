/*
 * FUN_10001ad8 (328 B) — CRT heap-selection bootstrap. Reads the
 * "__MSVCRT_HEAP_SELECT" environment variable, uppercases it, compares
 * against "__GLOBAL_HEAP_SELECTED", and if the module filename is found
 * in the value, parses the heap-selection token (1/2/3) after the comma.
 * Returns 1/2/3 on match, else 3 - (subsystem < 6).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10002f70(void);               /* _chkstk-style stack probe */
extern int __cdecl FUN_10002f30(void);                /* _strncmp */
extern void *__cdecl FUN_10002eb0(void);              /* _strstr */
extern void *__cdecl FUN_10002df0(void);              /* _strchr */
extern int __cdecl FUN_10002bb5(void);                /* heap-select parse */
extern void __cdecl FUN_10001aab(void);               /* read PE subsystem */

extern char g_str_100050e8[];                         /* "__MSVCRT_HEAP_SELECT" */
extern char g_str_100050d0[];                         /* "__GLOBAL_HEAP_SELECTED" */

extern void *(__stdcall *g_GetVersionExA)(void *);            /* IAT 0x10005064 */
extern void *(__stdcall *g_GetEnvironmentVariableA)(void *);  /* IAT 0x10005060 */
extern void *(__stdcall *g_GetModuleFileNameA)(void *);       /* IAT 0x10005044 */

__declspec(naked) void __stdcall FUN_10001ad8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, 0x122c
        call    FUN_10002f70
        lea     eax, [ebp - 0x98]
        push    ebx
        push    eax
        mov     dword ptr [ebp - 0x98], 0x94
        call    dword ptr [g_GetVersionExA]
        test    eax, eax
        jz      L_1b1b
        cmp     dword ptr [ebp - 0x88], 2
        jnz     L_1b1b
        cmp     dword ptr [ebp - 0x94], 5
        jc      L_1b1b
        push    1
        pop     eax
        jmp     L_1c1d
L_1b1b:
        lea     eax, [ebp - 0x122c]
        push    0x1090
        push    eax
        push    offset g_str_100050e8
        call    dword ptr [g_GetEnvironmentVariableA]
        test    eax, eax
        jz      L_1c0a
        xor     ebx, ebx
        lea     ecx, [ebp - 0x122c]
        cmp     byte ptr [ebp - 0x122c], bl
        jz      L_1b5d
L_1b4a:
        mov     al, byte ptr [ecx]
        cmp     al, 0x61
        jl      L_1b58
        cmp     al, 0x7a
        jg      L_1b58
        sub     al, 0x20
        mov     byte ptr [ecx], al
L_1b58:
        inc     ecx
        cmp     byte ptr [ecx], bl
        jnz     L_1b4a
L_1b5d:
        lea     eax, [ebp - 0x122c]
        push    0x16
        push    eax
        push    offset g_str_100050d0
        call    FUN_10002f30
        add     esp, 0xc
        test    eax, eax
        jnz     L_1b7f
        lea     eax, [ebp - 0x122c]
        jmp     L_1bc8
L_1b7f:
        lea     eax, [ebp - 0x19c]
        push    0x104
        push    eax
        push    ebx
        call    dword ptr [g_GetModuleFileNameA]
        cmp     byte ptr [ebp - 0x19c], bl
        lea     ecx, [ebp - 0x19c]
        jz      L_1bb3
L_1ba0:
        mov     al, byte ptr [ecx]
        cmp     al, 0x61
        jl      L_1bae
        cmp     al, 0x7a
        jg      L_1bae
        sub     al, 0x20
        mov     byte ptr [ecx], al
L_1bae:
        inc     ecx
        cmp     byte ptr [ecx], bl
        jnz     L_1ba0
L_1bb3:
        lea     eax, [ebp - 0x19c]
        push    eax
        lea     eax, [ebp - 0x122c]
        push    eax
        call    FUN_10002eb0
        pop     ecx
        pop     ecx
L_1bc8:
        cmp     eax, ebx
        jz      L_1c0a
        push    0x2c
        push    eax
        call    FUN_10002df0
        pop     ecx
        cmp     eax, ebx
        pop     ecx
        jz      L_1c0a
        inc     eax
        mov     ecx, eax
        cmp     byte ptr [eax], bl
        jz      L_1bef
L_1be1:
        cmp     byte ptr [ecx], 0x3b
        jnz     L_1bea
        mov     byte ptr [ecx], bl
        jmp     L_1beb
L_1bea:
        inc     ecx
L_1beb:
        cmp     byte ptr [ecx], bl
        jnz     L_1be1
L_1bef:
        push    0xa
        push    ebx
        push    eax
        call    FUN_10002bb5
        add     esp, 0xc
        cmp     eax, 2
        jz      L_1c1d
        cmp     eax, 3
        jz      L_1c1d
        cmp     eax, 1
        jz      L_1c1d
L_1c0a:
        lea     eax, [ebp - 4]
        push    eax
        call    FUN_10001aab
        cmp     byte ptr [ebp - 4], 6
        pop     ecx
        sbb     eax, eax
        add     eax, 3
L_1c1d:
        pop     ebx
        leave
        ret
    }
}
