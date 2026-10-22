/*
 * FUN_0064a890 (82 B) — __cdecl, one stack arg (char *). Copies a string
 * into a global slot table (strncpy via IAT), advancing slot counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_80d998;
extern unsigned int g_80d99c;
extern void (__cdecl *g_76b320)(void *dst, const char *src, unsigned int n);
extern void __cdecl FUN_0064a820(void);

__declspec(naked) void __cdecl FUN_0064a890(char *param_1)
{
    __asm {
        mov     eax, dword ptr [g_80d998]
        cmp     eax, 0x100
        jnz     L_skip
        call    FUN_0064a820
        mov     eax, dword ptr [g_80d998]
    L_skip:
        mov     ecx, dword ptr [esp + 4]
        push    0x7f
        shl     eax, 7
        push    ecx
        add     eax, 0x805960
        push    eax
        call    dword ptr [g_76b320]
        mov     eax, dword ptr [g_80d998]
        mov     edx, eax
        shl     edx, 7
        add     esp, 0xc
        inc     eax
        mov     dword ptr [g_80d998], eax
        mov     eax, dword ptr [g_80d99c]
        inc     eax
        mov     byte ptr [edx + 0x8059e0], 0
        mov     dword ptr [g_80d99c], eax
        ret
    }
}
