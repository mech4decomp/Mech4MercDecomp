/*
 * FUN_0075A850 (extent 0x75A850-0x75A8BA, 106 B) - .text data block.
 * __thiscall-style string-copying constructor (this in ecx), ret 8.
 */
#pragma warning(disable : 4035 4793)

extern int  g_00849308;
extern int  g_007af0a0;
extern void __cdecl FUN_004084C0(void);

__declspec(naked) void __stdcall FUN_0075A850(void)
{
    __asm {
        mov    eax, dword ptr [g_00849308]
        push   ebx
        push   esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ebx, ecx
        push   edi
        push   eax
        or     ecx, 0xffffffff
        xor    eax, eax
        mov    edi, esi
        repne scasb
        not    ecx
        push   ecx
        mov    dword ptr [ebx + 8], 2
        mov    dword ptr [ebx + 0x10], 0
        mov    dword ptr [ebx], offset g_007af0a0
        call   FUN_004084C0
        or     ecx, 0xffffffff
        mov    edx, eax
        mov    edi, esi
        add    esp, 8
        xor    eax, eax
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    eax, ecx
        mov    esi, edi
        shr    ecx, 2
        mov    dword ptr [ebx + 4], edx
        mov    edi, edx
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [esp + 0x14]
        pop    edi
        pop    esi
        mov    dword ptr [ebx + 0xc], ecx
        mov    eax, ebx
        pop    ebx
        ret    8
    }
}
