/*
 * FUN_00695030 (extent 0x695030-0x6950A4, 116 B) - .text data block.
 * __thiscall-style (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084D0(void);

__declspec(naked) void __stdcall FUN_00695030(void)
{
    __asm {
        mov    al, byte ptr [ecx + 8]
        push   ebx
        mov    ebx, dword ptr [ecx + 4]
        push   ebp
        mov    ebp, dword ptr [esp + 0xc]
        push   esi
        push   edi
        mov    edi, dword ptr [ecx]
        xor    edx, edx
        sub    ebx, edi
        mov    dword ptr [ebp], edx
        lea    esi, [ebx + 1]
        cmp    esi, -2
        mov    byte ptr [ebp + 8], al
        mov    dword ptr [ebp + 4], edx
        mov    dword ptr [ebp + 8], edx
        ja     L_74
        cmp    esi, edx
        je     L_67
        push   esi
        call   FUN_004084D0
        add    esp, 4
        jmp    L_69
    L_67:
        xor    eax, eax
    L_69:
        mov    dword ptr [ebp], eax
        mov    dword ptr [ebp + 4], eax
        add    eax, esi
        mov    dword ptr [ebp + 8], eax
    L_74:
        test   ebx, ebx
        mov    eax, dword ptr [ebp]
        jle    L_95
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
    L_95:
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
