/*
 * FUN_10001f46 (97 B) — get-or-create the critical section for slot
 * param_1 in the table at 0x100060f0, then EnterCriticalSection on it.
 * If the slot is empty, allocate a 0x18-byte section, initialize it (or
 * free it if a concurrent call already filled the slot), then enter it.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001f46(void);               /* recursive re-entry */
extern void *__cdecl FUN_100021e2(void);              /* _malloc */
extern void __cdecl FUN_10001186(void);               /* __amsg_exit */
extern void __cdecl FUN_100020f9(void);               /* _free */
extern void __cdecl FUN_10001fa7(void);               /* section release */

extern char g_100060f0;                               /* 0x100060f0 section table */

extern void (__stdcall *g_InitializeCriticalSection)(void *); /* IAT 0x1000507c */
extern void (__stdcall *g_EnterCriticalSection)(void *);      /* IAT 0x10005080 */

__declspec(naked) void __cdecl FUN_10001f46(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        push    esi
        cmp     dword ptr [eax*4 + g_100060f0], 0
        lea     esi, [eax*4 + g_100060f0]
        jnz     L_1f9c
        push    edi
        push    0x18
        call    FUN_100021e2
        mov     edi, eax
        pop     ecx
        test    edi, edi
        jnz     L_1f75
        push    0x11
        call    FUN_10001186
        pop     ecx
L_1f75:
        push    0x11
        call    FUN_10001f46
        cmp     dword ptr [esi], 0
        pop     ecx
        push    edi
        jnz     L_1f8d
        call    dword ptr [g_InitializeCriticalSection]
        mov     dword ptr [esi], edi
        jmp     L_1f93
L_1f8d:
        call    FUN_100020f9
        pop     ecx
L_1f93:
        push    0x11
        call    FUN_10001fa7
        pop     ecx
        pop     edi
L_1f9c:
        push    dword ptr [esi]
        call    dword ptr [g_EnterCriticalSection]
        pop     esi
        pop     ebp
        ret
    }
}
