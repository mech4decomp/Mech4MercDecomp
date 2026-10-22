/*
 * FUN_10038512 (103 B) — __stdcall, RET (no args).
 * CRT TLS helper: get TLS value for index, allocate if null, init, return.
 */

extern void *g_100490e4;   /* IAT: GetLastError */
extern void *g_100491c0;   /* IAT: TlsGetValue */
extern void *g_100490d8;   /* IAT: TlsSetValue */
extern void *g_10049094;   /* IAT: GetCurrentThreadId */
extern void *g_100491c4;   /* IAT: SetLastError */
extern unsigned int g_100518b4;  /* TLS index */
extern void *__cdecl FUN_1003c027(void);
extern void __cdecl FUN_100384ff(void);
extern void __cdecl FUN_100374e6(void);

__declspec(naked) void __stdcall FUN_10038512(void)
{
    __asm {
        push    esi
        push    edi
        call    dword ptr [g_100490e4]   /* GetLastError */
        push    dword ptr [g_100518b4]   /* TLS index */
        mov     edi, eax
        call    dword ptr [g_100491c0]   /* TlsGetValue */
        mov     esi, eax
        test    esi, esi
        jnz     L6
        push    0x74
        push    0x1
        call    FUN_1003c027
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jz      L5
        push    esi
        push    dword ptr [g_100518b4]
        call    dword ptr [g_100490d8]   /* TlsSetValue */
        test    eax, eax
        jz      L5
        push    esi
        call    FUN_100384ff
        pop     ecx
        call    dword ptr [g_10049094]   /* GetCurrentThreadId */
        or      dword ptr [esi + 0x4], 0xffffffff
        mov     dword ptr [esi], eax
        jmp     L6
    L5:
        push    0x10
        call    FUN_100374e6
        pop     ecx
    L6:
        push    edi
        call    dword ptr [g_100491c4]   /* SetLastError */
        mov     eax, esi
        pop     edi
        pop     esi
        ret
    }
}
