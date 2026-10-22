/*
 * FUN_0064C3F0 (extent 0x64C3F0-0x64C463, 115 B) - .text data block.
 * __thiscall-style (this in ecx), ret 8.
 */
#pragma warning(disable : 4035 4793)

extern int g_0080d970;

__declspec(naked) void __stdcall FUN_0064C3F0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x20]
        mov    ecx, dword ptr [g_0080d970]
        lea    eax, [eax + eax*4]
        mov    edx, dword ptr [ecx + eax*8 + 0xc]
        mov    eax, dword ptr [esp + 4]
        push   esi
        mov    esi, dword ptr [edx + eax*4]
        or     ecx, 0xffffffff
        push   edi
        xor    eax, eax
        mov    edi, esi
        repne scasb
        not    ecx
        dec    ecx
        mov    edx, ecx
        cmp    edx, -1
        jle    L_2b
    L_1c:
        cmp    byte ptr [edx + esi], 0x5c
        je     L_28
        dec    edx
        cmp    edx, -1
        jg     L_1c
    L_28:
        cmp    edx, -1
    L_2b:
        jne    L_34
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
    L_34:
        or     ecx, 0xffffffff
        mov    edi, esi
        xor    eax, eax
        repne scasb
        mov    eax, dword ptr [esp + 0x10]
        not    ecx
        sub    edi, ecx
        push   ebx
        mov    ebx, ecx
        mov    esi, edi
        shr    ecx, 2
        mov    edi, eax
        rep movsd
        mov    ecx, ebx
        and    ecx, 3
        rep movsb
        pop    ebx
        pop    edi
        mov    byte ptr [edx + eax + 1], 0
        pop    esi
        ret    8
    }
}
