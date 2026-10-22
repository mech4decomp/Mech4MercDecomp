/*
 * FUN_0050A410 (extent 0x50A410-0x50A47D, 109 B) - .text data block.
 * __thiscall-style constructor (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0050C9D0(void);
extern void __cdecl FUN_0050AB20(void);

__declspec(naked) void __stdcall FUN_0050A410(void)
{
    __asm {
        xor    eax, eax
        push   esi
        mov    esi, ecx
        mov    cl, byte ptr [esp + 8]
        mov    dword ptr [esi], eax
        mov    byte ptr [esi + 8], cl
        mov    dword ptr [esi + 8], eax
        mov    ecx, dword ptr [esi]
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 4], ecx
        mov    ecx, 1
        mov    byte ptr [esi + 0x15], cl
        mov    byte ptr [esi + 0x28], cl
        mov    byte ptr [esi + 0x20], cl
        mov    dword ptr [esi + 0x3c], ecx
        mov    dword ptr [esi + 0x44], ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x10], eax
        mov    byte ptr [esi + 0x14], al
        mov    dword ptr [esi + 0x1c], eax
        mov    byte ptr [esi + 0x29], al
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x2c], 0xffffffff
        mov    dword ptr [esi + 0x24], 0x3e800000
        mov    dword ptr [esi + 0x40], 2
        call   FUN_0050C9D0
        mov    edx, dword ptr [esp + 8]
        push   edx
        mov    ecx, esi
        call   FUN_0050AB20
        mov    eax, esi
        pop    esi
        ret    4
    }
}
