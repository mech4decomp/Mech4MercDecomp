/*
 * FUN_0072d120 (208 B) — Keyboard layout / registry mapping check.
 *
 * Queries the keyboard layout and registry "keyboard mapping" value to
 * decide a flag byte at 0x008825c5.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8825c5;
extern void *g_76b588;   /* IAT: GetKeyboardLayout */
extern void *g_76b4f8;   /* IAT: wsprintfA */
extern void *g_76b030;   /* IAT: RegOpenKeyExA */
extern void *g_76b018;   /* IAT: RegQueryValueExA */

__declspec(naked) void __stdcall FUN_0072d120(void *param)
{
    __asm {
        sub     esp, 0x114
        push    esi
        push    0
        call    dword ptr [g_76b588]
        cmp     eax, 0xe0090404
        jz      L_df
        mov     esi, dword ptr [esp + 0x11c]
        test    esi, esi
        jz      L_df
        cmp     esi, 0x50001
        mov     byte ptr [g_8825c5], 0
        mov     eax, 0x7a5a10
        jnc     L_162
        mov     eax, 0x7a5a04
    L_162:
        push    eax
        lea     eax, [esp + 0x18]
        push    0x7a59d4
        push    eax
        call    dword ptr [g_76b4f8]
        add     esp, 0xc
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x20019
        push    0
        lea     edx, [esp + 0x20]
        push    edx
        push    0x80000001
        call    dword ptr [g_76b030]
        test    eax, eax
        jnz     L_e6
        lea     eax, [esp + 8]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 8]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    0
        push    0x7a59c0
        push    eax
        mov     dword ptr [esp + 0x20], 4
        call    dword ptr [g_76b018]
        test    eax, eax
        jnz     L_e6
        cmp     esi, 0x50000
        mov     al, byte ptr [esp + 4]
        ja      L_d7
        cmp     al, 0x22
        jz      L_df
        cmp     al, 0x23
        jz      L_df
    L_d7:
        cmp     al, 0x22
        jc      L_e6
        cmp     al, 0x24
        ja      L_e6
    L_df:
        mov     byte ptr [g_8825c5], 1
    L_e6:
        pop     esi
        add     esp, 0x114
        ret     4
    }
}
