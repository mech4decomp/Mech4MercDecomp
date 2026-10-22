/*
 * FUN_00708a60 (118 B) — gosScript registry read helper (__stdcall):
 * opens a key (HKCU/HKLM by flag), queries a value into a global buffer,
 * closes the key, returns the buffer pointer or NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00858c28;
extern void *g_0076b014;   /* IAT: RegOpenKeyA */
extern void *g_0076b018;   /* IAT: RegQueryValueExA */
extern void *g_0076b00c;   /* IAT: RegCloseKey */

__declspec(naked) void FUN_00708a60(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp+0x8]
        lea     eax, [esp+0x10]
        push    eax
        push    ecx
        mov     cl, byte ptr [esp+0x18]
        xor     edx, edx
        test    cl, cl
        setnz   dl
        mov     dword ptr [esp+0x8], 0x200
        mov     byte ptr [g_00858c28], 0
        add     edx, 0x80000001
        push    edx
        call    dword ptr [g_0076b014]
        test    eax, eax
        jnz     L_8ad0
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x10]
        push    esi
        lea     eax, [esp+0x4]
        push    eax
        push    offset g_00858c28
        push    0
        push    0
        push    ecx
        push    edx
        call    dword ptr [g_0076b018]
        mov     esi, eax
        mov     eax, dword ptr [esp+0x14]
        push    eax
        call    dword ptr [g_0076b00c]
        test    esi, esi
        pop     esi
        jnz     L_8ad0
        mov     eax, offset g_00858c28
        pop     ecx
        ret     0xc
    L_8ad0:
        xor     eax, eax
        pop     ecx
        ret     0xc
    }
}
