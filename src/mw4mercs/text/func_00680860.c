/*
 * FUN_00680860 (89 B) — HUD element constructor (__thiscall, RET 4).
 * Initializes vtable pointers and fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern char g_0076cd9c;
extern char g_007989c8;
extern char g_007989c4;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416990(void);

__declspec(naked) void FUN_00680860(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        push    1
        lea     edi, [esi+0x1c]
        push    0
        mov     ecx, edi
        mov     dword ptr [esi+8], 0
        mov     dword ptr [esi+0xc], 0
        mov     dword ptr [esi], offset g_0076cd9c
        call    FUN_00416990
        mov     ecx, dword ptr [esp+0xc]
        mov     dword ptr [edi], offset g_007989c8
        pop     edi
        mov     dword ptr [esi], offset g_007989c4
        mov     dword ptr [esi+0x14], 0xffffffff
        mov     dword ptr [esi+0x18], 0
        mov     dword ptr [esi+0x10], ecx
        mov     eax, esi
        pop     esi
        ret     4
    }
}
