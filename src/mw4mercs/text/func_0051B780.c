/*
 * FUN_0051B780 (129 B) — data block containing two __stdcall RET 0xC
 * functions. Both walk an obfuscated pointer chain (xor with 0x85739531)
 * from g_007dab44/g_007dab40 and return a field (0x20 / 0x90) or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_0051B780(void)
{
    __asm {
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L51b7bb
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L51b7bb
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x20]
    L51b7bb:
        ret     0xc
        nop
        nop
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L51b7fe
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L51b7fe
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x90]
    L51b7fe:
        ret     0xc
    }
}
