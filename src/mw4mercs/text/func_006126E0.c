/*
 * FUN_006126E0 (extent 0x6126E0-0x612751, 113 B) - .text data block.
 * __stdcall, ret 4.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0060D550(void);
extern void __cdecl FUN_0060D510(void);

__declspec(naked) void __stdcall FUN_006126E0(void)
{
    __asm {
        push   ecx
        mov    eax, dword ptr [esp + 8]
        push   ebx
        mov    ebx, dword ptr [eax + 0x34c]
        push   ebp
        push   esi
        push   edi
        mov    dword ptr [esp + 0x10], ecx
        mov    ebp, 1
    L_f8:
        test   ebx, ebx
        je     L_47
        mov    esi, dword ptr [ebx]
        test   esi, esi
        mov    ebx, dword ptr [ebx + 4]
        je     L_47
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call   dword ptr [edx + 4]
        mov    edi, dword ptr [eax + 0x30]
        cmp    edi, -1
        jle    L_f8
        mov    ecx, dword ptr [esp + 0x10]
        push   edi
        call   FUN_0060D550
        test   al, al
        je     L_30
        mov    ecx, dword ptr [esp + 0x10]
        push   edi
        call   FUN_0060D510
        jmp    L_f8
    L_30:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call   dword ptr [eax + 0xa4]
        mov    edx, dword ptr [esi]
        push   1
        mov    ecx, esi
        call   dword ptr [edx]
        or     ebp, 0xffffffff
        jmp    L_f8
    L_47:
        pop    edi
        pop    esi
        mov    eax, ebp
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
