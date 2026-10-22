/*
 * FUN_00708930 (121 B) — gosScript registry read helper (__stdcall):
 * opens a key (HKCU/HKLM by flag), queries a value, closes the key, and
 * zeroes the size on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00858e2c;
extern void *g_0076b014;   /* IAT: RegOpenKeyA */
extern void *g_0076b018;   /* IAT: RegQueryValueExA */
extern void *g_0076b00c;   /* IAT: RegCloseKey */

__declspec(naked) void FUN_00708930(void)
{
    __asm {
        mov     al, byte ptr [esp+0x10]
        test    al, al
        jz      L_8949
        lea     eax, [esp+0x10]
        push    eax
        push    offset g_00858e2c
        push    0x80000002
        jmp     L_8958
    L_8949:
        lea     ecx, [esp+0x10]
        push    ecx
        push    offset g_00858e2c
        push    0x80000001
    L_8958:
        call    dword ptr [g_0076b014]
        test    eax, eax
        push    esi
        mov     esi, dword ptr [esp+0x10]
        jnz     L_899f
        mov     edx, dword ptr [esp+0xc]
        mov     eax, dword ptr [esp+0x8]
        mov     ecx, dword ptr [esp+0x14]
        push    esi
        push    edx
        push    0
        push    0
        push    eax
        push    ecx
        call    dword ptr [g_0076b018]
        test    eax, eax
        jnz     L_8994
        mov     edx, dword ptr [esp+0x14]
        push    edx
        call    dword ptr [g_0076b00c]
        pop     esi
        ret     0x10
    L_8994:
        mov     eax, dword ptr [esp+0x14]
        push    eax
        call    dword ptr [g_0076b00c]
    L_899f:
        mov     dword ptr [esi], 0
        pop     esi
        ret     0x10
    }
}
