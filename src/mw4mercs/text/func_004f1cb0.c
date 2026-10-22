/*
 * FUN_004f1cb0 (49 B) - Adept::RendererComponentWeb constructor (__thiscall,
 * RET 0x14, 5 params). Calls base ctor FUN_004f1bd0, stores param_3 at
 * [this+0x50], calls FUN_004f3400, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f1bd0(void);
extern void __cdecl FUN_004f3400(void);

__declspec(naked) void FUN_004f1cb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004f1bd0
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        mov     dword ptr [esi + 0x50], ecx
        call    FUN_004f3400
        mov     eax, esi
        pop     esi
        ret     0x14
    }
}
