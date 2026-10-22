/*
 * FUN_004f3280 (97 B) — MLR/Adept object constructor (__thiscall, RET 0xc).
 * Calls FUN_004d5b10, initializes fields, constructs a sub-object at
 * [this+0x2c] (vtable 0x7750a4) via FUN_00416280, and a sub-object at
 * [this+0x18] via FUN_00412780.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_00416280(void);
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_004f3280(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d5b10
        xor     ebp, ebp
        push    0x1
        push    ebp
        lea     edi, [esi + 0x18]
        lea     ebx, [esi + 0x2c]
        mov     dword ptr [edi], ebp
        push    0x65
        mov     ecx, ebx
        mov     dword ptr [esi + 0x28], ebp
        mov     dword ptr [esi + 0x24], ebp
        call    FUN_00416280
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x14], ecx
        mov     dword ptr [ebx], 0x7750a4
        push    edx
        mov     ecx, edi
        mov     dword ptr [esi + 0x44], ebp
        mov     dword ptr [esi + 0x40], ebp
        mov     dword ptr [esi + 0x10], 0x1
        call    FUN_00412780
        mov     dword ptr [esi + 0x1c], ebp
        pop     edi
        mov     dword ptr [esi + 0x20], ebp
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
