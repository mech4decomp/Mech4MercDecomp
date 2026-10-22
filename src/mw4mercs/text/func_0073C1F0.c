/*
 * FUN_0073C1F0 (extent 0x73C1F0-0x73C264, 116 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_008aaeb4;
extern int  g_0085b610;
extern int  g_008aaeb8;
extern int  g_0085b60c;
extern int  g_007a1da0;
extern int  g_00859bac;
extern int  g_0087b688;
extern int  g_0085a270;
extern int  g_0085b608;
extern void __cdecl FUN_0070A170(void);

__declspec(naked) void FUN_0073C1F0(void)
{
    __asm {
        mov    eax, dword ptr [g_008aaeb4]
        push   esi
        push   edi
        push   0
        mov    dword ptr [g_0085b610], eax
        mov    dword ptr [g_008aaeb4], 1
        call   FUN_0070A170
        mov    ecx, dword ptr [g_008aaeb8]
        mov    dword ptr [g_0085b60c], ecx
        or     ecx, 0xffffffff
        xor    eax, eax
        mov    edi, offset g_007a1da0
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    edx, ecx
        mov    esi, edi
        shr    ecx, 2
        mov    edi, offset g_00859bac
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        pop    edi
        mov    dword ptr [g_008aaeb8], 1
        mov    dword ptr [g_0087b688], 5
        mov    dword ptr [g_0085a270], 1
        mov    dword ptr [g_0085b608], eax
        pop    esi
        ret
    }
}
