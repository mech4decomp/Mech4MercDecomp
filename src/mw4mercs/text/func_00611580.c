/*
 * FUN_00611580 (63 B) — __thiscall constructor.
 *
 * Loads DAT_007ddde0, calls FUN_00561430(), sets vtable 0x78c18c and
 * initializes float fields. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007ddde0;
extern void __cdecl FUN_00561430(unsigned int arg);

__declspec(naked) void FUN_00611580(void)
{
    __asm {
        mov     eax, dword ptr [g_007ddde0]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        mov     eax, 0x3f666666
        mov     dword ptr [esi], 0x78c18c
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x14], 0x425c0000
        mov     dword ptr [esi + 0x18], 0x43d30000
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x20], 0x442c8000
        mov     dword ptr [esi + 0x24], 0x41a00000
        mov     eax, esi
        pop     esi
        ret
    }
}
