/*
 * FUN_00644de0 (64 B) — __thiscall constructor.
 *
 * Loads DAT_007ddde0, calls FUN_00561430(), sets vtable 0x792634 and
 * initializes float/int fields. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007ddde0;
extern void __cdecl FUN_00561430(unsigned int arg);

__declspec(naked) void FUN_00644de0(void)
{
    __asm {
        mov     eax, dword ptr [g_007ddde0]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        mov     eax, 0x3eb33333
        mov     dword ptr [esi], 0x792634
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax
        mov     eax, 0x3e99999a
        mov     ecx, 0x3f666666
        mov     dword ptr [esi + 0x1c], ecx
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x50], 0x5
        mov     dword ptr [esi + 0x28], ecx
        mov     eax, esi
        pop     esi
        ret
    }
}
