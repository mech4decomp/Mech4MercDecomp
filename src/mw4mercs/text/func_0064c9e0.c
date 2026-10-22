/*
 * FUN_0064c9e0 (112 B) — compares two string/object handles via
 *   FUN_0064c950, with special-cases against globals 0x0080d9b4/0xbc/0xb8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080d9b4;
extern int g_0080d9bc;
extern int g_0080d9b8;

extern int __cdecl FUN_0064c950(void *);

__declspec(naked) void FUN_0064c9e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     esi, eax
        call    FUN_0064c950
        add     esp, 0x8
        cmp     esi, eax
        jnz     Lca05
        mov     eax, 0x1
        pop     esi
        ret
    Lca05:
        cmp     esi, dword ptr [g_0080d9b4]
        jnz     Lca1c
        cmp     eax, dword ptr [g_0080d9bc]
        jnz     Lca1c
        mov     eax, 0x1
        pop     esi
        ret
    Lca1c:
        mov     edx, dword ptr [esi + 0x4]
        mov     ecx, 0x3
        cmp     edx, ecx
        jnz     Lca4c
        cmp     dword ptr [eax + 0x4], ecx
        jnz     Lca4c
        mov     ecx, dword ptr [g_0080d9b8]
        cmp     dword ptr [esi + 0x14], ecx
        jnz     Lca4c
        cmp     dword ptr [eax + 0x14], ecx
        jnz     Lca4c
        mov     edx, dword ptr [esi + 0x18]
        cmp     edx, dword ptr [eax + 0x18]
        jl      Lca4c
        mov     eax, 0x1
        pop     esi
        ret
    Lca4c:
        xor     eax, eax
        pop     esi
        ret
    }
}
