/*
 * FUN_0065E220 (extent 0x65E220-0x65E296, 118 B) - .text data block.
 * __thiscall-style (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084D0(void);

__declspec(naked) void __stdcall FUN_0065E220(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push   ebx
        mov    ebx, dword ptr [eax + 4]
        push   ebp
        push   esi
        push   edi
        mov    edi, dword ptr [eax]
        mov    ebp, ecx
        mov    cl, byte ptr [eax + 8]
        xor    edx, edx
        sub    ebx, edi
        mov    dword ptr [ebp], edx
        lea    esi, [ebx + 1]
        cmp    esi, -2
        mov    byte ptr [ebp + 8], cl
        mov    dword ptr [ebp + 4], edx
        mov    dword ptr [ebp + 8], edx
        ja     L_66
        cmp    esi, edx
        je     L_59
        push   esi
        call   FUN_004084D0
        add    esp, 4
        jmp    L_5b
    L_59:
        xor    eax, eax
    L_5b:
        mov    dword ptr [ebp], eax
        mov    dword ptr [ebp + 4], eax
        add    eax, esi
        mov    dword ptr [ebp + 8], eax
    L_66:
        test   ebx, ebx
        mov    eax, dword ptr [ebp]
        jle    L_87
        mov    esi, eax
        sub    esi, eax
        add    esi, edi
        mov    ecx, ebx
        mov    edx, ecx
        shr    ecx, 2
        mov    edi, eax
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        add    eax, ebx
    L_87:
        pop    edi
        mov    dword ptr [ebp + 4], eax
        pop    esi
        mov    byte ptr [eax], 0
        mov    eax, ebp
        pop    ebp
        pop    ebx
        ret    4
    }
}
