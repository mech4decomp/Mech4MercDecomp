/*
 * FUN_0051C4A0 (131 B) — data block containing two __stdcall RET 0xC
 * functions. Both walk an obfuscated pointer chain (xor 0x85739531) from
 * g_007dab44/g_007dab40; the first reads a field (0x58), the second
 * writes a field (0x58) from arg3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_0051C4A0(void)
{
    __asm {
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L51c4db
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x34]
        test    esi, esi
        pop     esi
        je      L51c4db
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x34]
        mov     eax, dword ptr [ecx + 0x58]
    L51c4db:
        ret     0xc
        nop
        nop
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x44]
        je      L51c51e
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x34]
        test    edx, edx
        je      L51c51e
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x34]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x58], edx
    L51c51e:
        xor     eax, eax
        ret     0xc
    }
}
