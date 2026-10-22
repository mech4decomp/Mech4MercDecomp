/*
 * FUN_0069CD30 (90 B) — Constructor.
 *
 * __fastcall (ECX = this). Calls FUN_00561430(0x007ddde0), saves the
 * high byte of the this pointer into this+0x58, zeroes fields, sets
 * vtable to 0x799A08 and initializes float/color fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern void __cdecl FUN_00561430(int param);

__declspec(naked) void *__fastcall FUN_0069cd30(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007ddde0]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        mov     cl, byte ptr [esp + 7]
        xor     eax, eax
        mov     dword ptr [esi + 0x50], eax
        mov     byte ptr [esi + 0x58], cl
        mov     dword ptr [esi + 0x58], eax
        mov     dword ptr [esi + 0x54], eax
        mov     eax, 0x3f666666
        mov     dword ptr [esi], 0x799a08
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x14], 0x43720000
        mov     dword ptr [esi + 0x18], 0x429c0000
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x20], 0x439e0000
        mov     dword ptr [esi + 0x24], 0x43160000
        mov     dword ptr [esi + 0x34], 0xfa007d00
        mov     eax, esi
        pop     esi
        pop     ecx
        ret
    }
}
