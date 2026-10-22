/*
 * FUN_0050AB20 (extent 0x50AB20-0x50AB95, 117 B) - .text data block.
 * __thiscall-style (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004D1F80(void);
extern void __cdecl FUN_0050A730(void);
extern void __cdecl FUN_004D21C0(void);

__declspec(naked) void __stdcall FUN_0050AB20(void)
{
    __asm {
        sub    esp, 0x48
        push   ebx
        push   ebp
        push   esi
        mov    esi, ecx
        mov    ebx, dword ptr [esi + 4]
        mov    ebp, dword ptr [esi]
        mov    ecx, ebx
        sub    ecx, ebx
        mov    eax, 0x38e38e39
        imul   ecx
        sar    edx, 3
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        test   edx, edx
        mov    dword ptr [esp + 0xc], esi
        jle    L_64
        push   edi
    L_4b:
        mov    esi, ebx
        mov    edi, ebp
        mov    ecx, 9
        add    ebx, 0x24
        add    ebp, 0x24
        dec    edx
        rep movsd
        jne    L_4b
        mov    esi, dword ptr [esp + 0x10]
        pop    edi
    L_64:
        mov    ecx, dword ptr [esp + 0x58]
        push   1
        push   ecx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esi + 4], ebp
        call   FUN_004D1F80
        lea    edx, [esp + 0x10]
        push   edx
        mov    ecx, esi
        call   FUN_0050A730
        lea    ecx, [esp + 0x10]
        call   FUN_004D21C0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x48
        ret    4
    }
}
