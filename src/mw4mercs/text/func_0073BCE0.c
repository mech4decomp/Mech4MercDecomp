/*
 * FUN_0073BCE0 (137 B) — data block containing nine tiny predicate
 * functions (each RET, no args) that test globals (0x8aae40, 0x8aaf44,
 * 0x8aaec4, 0x8aae5c) and return a bool via sete/setne.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aae40;
extern int g_008aaf44;
extern int g_008aaec4;
extern int g_008aae5c;

__declspec(naked) void FUN_0073BCE0(void)
{
    __asm {
        mov     ecx, dword ptr [g_008aae40]
        xor     eax, eax
        cmp     ecx, 1
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_008aaf44]
        xor     eax, eax
        cmp     ecx, 9
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_008aae40]
        xor     eax, eax
        cmp     ecx, 2
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_008aaf44]
        xor     eax, eax
        cmp     ecx, 3
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_008aaf44]
        xor     eax, eax
        cmp     ecx, 0xc
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_008aaf44]
        xor     eax, eax
        cmp     ecx, 0xd
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_008aaf44]
        xor     eax, eax
        cmp     ecx, 8
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_008aaec4]
        xor     eax, eax
        test    ecx, ecx
        setne   al
        ret
        nop
        nop
        mov     eax, dword ptr [g_008aae5c]
        and     eax, 1
        ret
    }
}
