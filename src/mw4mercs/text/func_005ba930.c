/*
 * FUN_005ba930 (42 B) — __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * Calls FUN_005e6cf0(param1..param4) on this, then installs vtable
 * 0x786dfc at [this] and returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e6cf0(void);

__declspec(naked) void __stdcall FUN_005ba930(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005e6cf0
        mov     dword ptr [esi], 0x786dfc
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
