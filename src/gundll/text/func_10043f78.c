/*
 * FUN_10043f78 (95 B) — __cdecl.
 * Critical-section table accessor keyed by param_1.
 *
 * CFLAGS: /O1
 */

extern int g_10076aa0[];
extern void *g_100491a8;   /* IAT: InitializeCriticalSection */
extern void *g_10049068;   /* IAT: EnterCriticalSection */
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);

__declspec(naked) void __cdecl FUN_10043f78(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ecx, eax
        and     eax, 0x1f
        sar     ecx, 0x5
        push    esi
        push    edi
        mov     esi, dword ptr [ecx*4 + g_10076aa0]
        lea     ebx, [ecx*4 + g_10076aa0]
        lea     edi, [eax + eax*8]
        shl     edi, 0x2
        add     esi, edi
        cmp     dword ptr [esi + 0x8], 0x0
        jnz     have_cs
        push    0x11
        call    FUN_10039b19
        cmp     dword ptr [esi + 0x8], 0x0
        pop     ecx
        jnz     unlock
        lea     eax, [esi + 0xc]
        push    eax
        call    dword ptr [g_100491a8]
        inc     dword ptr [esi + 0x8]
    unlock:
        push    0x11
        call    FUN_10039b7a
        pop     ecx
    have_cs:
        mov     eax, dword ptr [ebx]
        lea     eax, [eax + edi + 0xc]
        push    eax
        call    dword ptr [g_10049068]
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
