/*
 * FUN_00406b80 (138 B) — CreateProcessA wrapper that launches a process
 * and waits for it to exit with a code other than 0x103 (STILL_ACTIVE).
 * __cdecl, 1 param (lpApplicationName).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (*g_CreateProcessA)(const char *, char *, void *, void *, int, int, void *, const char *, void *, void *);   /* 0x0076b0d4 */
extern int (*g_GetExitCodeProcess)(void *, int *);   /* 0x0076b0c4 */

__declspec(naked) int __cdecl FUN_00406b80(char *param_1)
{
    __asm {
        sub     esp, 0x54
        push    esi
        push    edi
        mov     edx, dword ptr [esp + 0x60]
        xor     eax, eax
        mov     ecx, 0x11
        lea     edi, [esp + 0x18]
        rep stosd
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    edx
        mov     dword ptr [esp + 0x40], 0x44
        call    dword ptr [g_CreateProcessA]
        test    eax, eax
        jnz     L6BC9
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x54
        ret
L6BC9:
        mov     ecx, dword ptr [esp + 0x8]
        mov     esi, dword ptr [g_GetExitCodeProcess]
        lea     eax, [esp + 0x60]
        push    eax
        push    ecx
        call    esi
        test    eax, eax
        jz      L6BFA
        mov     edi, 0x103
L6BE4:
        cmp     dword ptr [esp + 0x60], edi
        jnz     L6C02
        mov     eax, dword ptr [esp + 0x8]
        lea     edx, [esp + 0x60]
        push    edx
        push    eax
        call    esi
        test    eax, eax
        jnz     L6BE4
L6BFA:
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x54
        ret
L6C02:
        pop     edi
        mov     al, 0x1
        pop     esi
        add     esp, 0x54
        ret
    }
}
