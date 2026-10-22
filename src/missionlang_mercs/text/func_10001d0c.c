/*
 * FUN_10001d0c (97 B) — lazily allocate + initialize a critical section for
 * table index param_1, then enter it. Recursive on the "pending" path.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_100050f0;                                /* 0x100050f0 critical section table */

extern void (__stdcall *g_InitializeCriticalSection)(void *); /* IAT 0x10004068 */
extern void (__stdcall *g_EnterCriticalSection)(void *); /* IAT 0x1000406c */

extern void *__cdecl FUN_10001e57(unsigned int);      /* _malloc */
extern void __cdecl FUN_1000117c(int);                /* __amsg_exit */
extern void __cdecl FUN_10001e0f(void *);
extern void __cdecl FUN_10001d6d(int);

__declspec(naked) void __cdecl FUN_10001d0c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        push    esi
        cmp     dword ptr [eax*4 + g_100050f0], 0
        lea     esi, [eax*4 + g_100050f0]
        jnz     L_d62
        push    edi
        push    0x18
        call    FUN_10001e57
        mov     edi, eax
        pop     ecx
        test    edi, edi
        jnz     L_d3b
        push    0x11
        call    FUN_1000117c
        pop     ecx
L_d3b:
        push    0x11
        call    FUN_10001d0c
        cmp     dword ptr [esi], 0
        pop     ecx
        push    edi
        jnz     L_d53
        call    dword ptr [g_InitializeCriticalSection]
        mov     dword ptr [esi], edi
        jmp     L_d59
L_d53:
        call    FUN_10001e0f
        pop     ecx
L_d59:
        push    0x11
        call    FUN_10001d6d
        pop     ecx
        pop     edi
L_d62:
        push    dword ptr [esi]
        call    dword ptr [g_EnterCriticalSection]
        pop     esi
        pop     ebp
        ret
    }
}
