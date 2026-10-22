/*
 * FUN_004FDF30 (extent 0x4FDF30-0x4FDF99, 105 B) - .text data block.
 * __thiscall-style constructor (this in ecx).
 */
#pragma warning(disable : 4035 4793)

extern int  g_007b8c10;
extern int  g_007b9460;
extern int  g_00776108;
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_004FDF30(void)
{
    __asm {
        mov    eax, dword ptr [g_007b8c10]
        push   ebx
        push   esi
        push   edi
        mov    ebx, ecx
        push   eax
        call   FUN_00415180
        xor    eax, eax
        mov    dword ptr [ebx + 0x90], eax
        mov    dword ptr [ebx + 8], eax
        mov    dword ptr [ebx + 0xc], eax
        mov    dword ptr [ebx + 0x94], eax
        mov    dword ptr [ebx], offset g_00776108
        lea    edi, [ebx + 0x50]
        mov    ecx, 0xc
        mov    esi, offset g_007b9460
        rep movsd
        lea    edi, [ebx + 0x10]
        mov    ecx, 0xc
        mov    esi, offset g_007b9460
        rep movsd
        pop    edi
        mov    edx, 0xbf800000
        mov    dword ptr [ebx + 0x98], eax
        pop    esi
        mov    dword ptr [ebx + 0x8c], edx
        mov    dword ptr [ebx + 0x4c], edx
        mov    byte ptr [ebx + 0x9c], 1
        mov    eax, ebx
        pop    ebx
        ret
    }
}
