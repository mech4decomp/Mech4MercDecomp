/*
 * FUN_00695140 (extent 0x695140-0x6951B5, 117 B) - .text data block.
 * __thiscall-style (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084D0(void);

__declspec(naked) void __stdcall FUN_00695140(void)
{
    __asm {
        mov    al, byte ptr [ecx + 0x30]
        push   ebx
        mov    ebx, dword ptr [ecx + 0x2c]
        push   ebp
        mov    ebp, dword ptr [esp + 0xc]
        push   esi
        push   edi
        mov    edi, dword ptr [ecx + 0x28]
        xor    edx, edx
        sub    ebx, edi
        mov    dword ptr [ebp], edx
        lea    esi, [ebx + 1]
        cmp    esi, -2
        mov    byte ptr [ebp + 8], al
        mov    dword ptr [ebp + 4], edx
        mov    dword ptr [ebp + 8], edx
        ja     L_85
        cmp    esi, edx
        je     L_78
        push   esi
        call   FUN_004084D0
        add    esp, 4
        jmp    L_7a
    L_78:
        xor    eax, eax
    L_7a:
        mov    dword ptr [ebp], eax
        mov    dword ptr [ebp + 4], eax
        add    eax, esi
        mov    dword ptr [ebp + 8], eax
    L_85:
        test   ebx, ebx
        mov    eax, dword ptr [ebp]
        jle    L_a6
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
    L_a6:
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
