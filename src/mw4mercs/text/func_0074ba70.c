/*
 * FUN_0074ba70 (204 B) — Looks up the current user's SID account name.
 *
 * Opens the current process token, queries TokenUser, then calls
 * LookupAccountSidA. __stdcall RET 0x10 (4 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b23c;   /* GetCurrentProcess (IAT) */
extern void *g_0076b02c;   /* OpenProcessToken (IAT) */
extern void *g_0076b028;   /* GetTokenInformation (IAT) */
extern void *g_0076b1f8;   /* GetLastError (IAT) */
extern void *g_0076b0ec;   /* CloseHandle (IAT) */
extern void *g_0076b024;   /* LookupAccountSidA (IAT) */

__declspec(naked) void __stdcall FUN_0074ba70(void)
{
    __asm {
        sub     esp, 0x20c
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: lea eax,[esp+0] - MSVC6 drops the 00 disp byte (8D 04 24 vs ref 8D 44 24 00) */
        push    eax
        push    8
        mov     dword ptr [esp + 0xc], 0x200
        call    dword ptr [g_0076b23c]
        push    eax
        call    dword ptr [g_0076b02c]
        test    eax, eax
        jnz     L_BA9F
        add     esp, 0x20c
        ret     0x10
L_BA9F:
        mov     edx, dword ptr [esp + 0x4]
        lea     ecx, [esp + 0x4]
        push    ecx
        mov     ecx, dword ptr [esp + 0x4]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        push    1
        push    ecx
        call    dword ptr [g_0076b028]
        test    eax, eax
        jnz     L_BAF6
        call    dword ptr [g_0076b1f8]
        cmp     eax, 0x7a
        jnz     L_BAE0
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov edx,[esp+0] - MSVC6 drops the 00 disp byte (8B 14 24 vs ref 8B 54 24 00) */
        push    edx
        call    dword ptr [g_0076b0ec]
        xor     eax, eax
        add     esp, 0x20c
        ret     0x10
L_BAE0:
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov eax,[esp+0] - MSVC6 drops the 00 disp byte (8B 04 24 vs ref 8B 44 24 00) */
        push    eax
        call    dword ptr [g_0076b0ec]
        xor     eax, eax
        add     esp, 0x20c
        ret     0x10
L_BAF6:
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov ecx,[esp+0] - MSVC6 drops the 00 disp byte (8B 0C 24 vs ref 8B 4C 24 00) */
        push    ecx
        call    dword ptr [g_0076b0ec]
        mov     eax, dword ptr [esp + 0x21c]
        mov     ecx, dword ptr [esp + 0x218]
        lea     edx, [esp + 0x8]
        push    edx
        mov     edx, dword ptr [esp + 0x218]
        push    eax
        mov     eax, dword ptr [esp + 0x218]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ecx
        push    0
        call    dword ptr [g_0076b024]
        add     esp, 0x20c
        ret     0x10
    }
}
