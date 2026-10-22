/*
 * FUN_007551d0 (89 B) — __stdcall, RET 4 (one param).
 *
 * Calls FUN_00754700 five times with (param, section-header, prefix)
 * string triples describing PCI/ISA/ACPI/Other/Motherboard device buses.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00754700(void);

__declspec(naked) void __stdcall FUN_007551d0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    0x7ae120
        push    0x7ae10c
        push    esi
        call    FUN_00754700
        push    0x7ae104
        push    0x7ae0f0
        push    esi
        call    FUN_00754700
        push    0x7ae0e8
        push    0x7ae0d4
        push    esi
        call    FUN_00754700
        push    0x7adfb0
        push    0x7ae0b4
        push    esi
        call    FUN_00754700
        push    0x7adf30
        push    0x7ae098
        push    esi
        call    FUN_00754700
        pop     esi
        ret     0x4
    }
}
