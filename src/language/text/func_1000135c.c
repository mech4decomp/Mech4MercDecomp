/*
 * FUN_1000135c (103 B) — TLS value getter: preserve GetLastError, fetch
 * TLS slot value, allocate+init if null, else __amsg_exit(0x10), restore
 * last error, return the block.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int (__stdcall *g_GetLastError)(void);        /* IAT 0x1000502c */
extern void *(__stdcall *g_TlsGetValue)(unsigned int);         /* IAT 0x10005028 */
extern int (__stdcall *g_TlsSetValue)(unsigned int, void *);   /* IAT 0x10005018 */
extern unsigned int (__stdcall *g_GetCurrentThreadId)(void);   /* IAT 0x10005014 */
extern void (__stdcall *g_SetLastError)(unsigned int);         /* IAT 0x10005024 */

extern unsigned int g_10006034;   /* 0x10006034 */

extern void *__stdcall FUN_10001fbc(int, int);
extern void __cdecl FUN_10001349(void *);
extern void __cdecl FUN_10001186(int);

__declspec(naked) void __stdcall FUN_1000135c(void)
{
    __asm {
        push    esi
        push    edi
        call    dword ptr [g_GetLastError]
        push    dword ptr [g_10006034]
        mov     edi, eax
        call    dword ptr [g_TlsGetValue]
        mov     esi, eax
        test    esi, esi
        jnz     L_b7
        push    0x74
        push    1
        call    FUN_10001fbc
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jz      L_af
        push    esi
        push    dword ptr [g_10006034]
        call    dword ptr [g_TlsSetValue]
        test    eax, eax
        jz      L_af
        push    esi
        call    FUN_10001349
        pop     ecx
        call    dword ptr [g_GetCurrentThreadId]
        or      dword ptr [esi + 4], 0xffffffff
        mov     dword ptr [esi], eax
        jmp     L_b7
L_af:
        push    0x10
        call    FUN_10001186
        pop     ecx
L_b7:
        push    edi
        call    dword ptr [g_SetLastError]
        mov     eax, esi
        pop     edi
        pop     esi
        ret
    }
}
