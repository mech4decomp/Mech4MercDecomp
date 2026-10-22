/*
 * FUN_004f1bd0 (44 B) - Adept::EntityComponentWeb constructor (__thiscall,
 * RET 0x10, 4 params). Calls base ctor FUN_004f1870, stores param_2 at
 * [this+0x4c], sets vtable 0x774fa0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f1870(void);

__declspec(naked) void FUN_004f1bd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004f1870
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x4c], eax
        mov     dword ptr [esi], 0x774fa0
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
