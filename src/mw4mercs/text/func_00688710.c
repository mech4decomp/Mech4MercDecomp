/*
 * FUN_00688710 (39 B) — __thiscall constructor, RET 0x8 (2 params).
 *
 * Calls FUN_006b0710(param1, param2) with this in ECX, then sets
 * vtable 0x798cc8 at this+0 and 6 at this+8. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006b0710(void);

__declspec(naked) void __stdcall FUN_00688710(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_006b0710
        mov     dword ptr [esi], 0x798cc8
        mov     dword ptr [esi + 0x8], 0x6
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
