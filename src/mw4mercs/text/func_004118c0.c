/*
 * FUN_004118c0 (50 B) — __thiscall, RET 0x4: constructor. Calls
 * FUN_00415180(global), zeroes fields at +0x08/+0x0c/+0x14/+0x18/+0x1c,
 * sets vtable 0x76d1b4, stores the argument at +0x10, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_004118c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi], 0x76d1b4
        mov     dword ptr [esi + 0x10], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
