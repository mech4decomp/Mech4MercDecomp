/*
 * FUN_004d6040 (152 B) — __thiscall Adept::EntityManager ctor. Calls
 * FUN_00415180(param_1), sets up nested sub-objects (vtables 0x76cd9c /
 * 0x772d38 / 0x772d0c / 0x772ce4 / 0x772c9c) via FUN_0041ee70,
 * FUN_00416280, FUN_00415bb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00416280(void);
extern void __cdecl FUN_00415bb0(void);

__declspec(naked) void FUN_004d6040(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        mov     dword ptr [esi], 0x76cd9c
        mov     dword ptr [esi+0x18], ebx
        mov     dword ptr [esi+0x14], ebx
        push    0x177
        lea     ecx, [esi+0x24]
        mov     dword ptr [esi+8], ebx
        mov     dword ptr [esi+0xc], ebx
        mov     dword ptr [esi+0x20], ebx
        mov     dword ptr [esi+0x1c], ebx
        call    FUN_0041ee70
        push    1
        push    ebx
        lea     edi, [esi+0x4c]
        push    0x35
        mov     ecx, edi
        call    FUN_00416280
        mov     dword ptr [edi], 0x772d38
        lea     edi, [esi+0x68]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x64], ebx
        mov     dword ptr [esi+0x60], ebx
        call    FUN_00415bb0
        push    1
        mov     byte ptr [edi+8], 1
        mov     dword ptr [edi+0xc], ebx
        mov     dword ptr [edi], 0x772d0c
        push    ebx
        lea     edi, [esi+0x78]
        push    0x7d3
        mov     ecx, edi
        call    FUN_00416280
        mov     dword ptr [edi], 0x772ce4
        pop     edi
        mov     byte ptr [esi+0x8c], bl
        mov     byte ptr [esi+0x10], bl
        mov     dword ptr [esi], 0x772c9c
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
