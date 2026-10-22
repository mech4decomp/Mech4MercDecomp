/*
 * FUN_00680490 (89 B) — Constructor with two sub-object initializers.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 * Calls FUN_00415180(DAT_007b8c10), then FUN_00416990(0,1) on this+0x10,
 * then fills in fields and installs vtables 0x76cd9c / 0x798924 / 0x798920.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __stdcall FUN_00415180(int param);
extern void __stdcall FUN_00416990(int a, int b);

__declspec(naked) void __stdcall FUN_00680490(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        push    0x1
        lea     edi, [esi + 0x10]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00416990
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [edi], 0x798924
        mov     dword ptr [esi + 0x2c], eax
        pop     edi
        mov     dword ptr [esi], 0x798920
        mov     dword ptr [esi + 0x28], edx
        mov     dword ptr [esi + 0x30], ecx
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
