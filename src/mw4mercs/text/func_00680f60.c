/*
 * FUN_00680f60 (50 B) — __thiscall constructor. Calls FUN_00415180()
 * with a global, zeroes several fields, sets vtable 0x798a38, stores the
 * arg at [this+0x14], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8c10;
extern void __stdcall FUN_00415180(int a);

__declspec(naked) void FUN_00680f60(void)
{
    __asm {
        mov     eax, dword ptr [g_7b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi], 0x798a38
        mov     dword ptr [esi + 0x14], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
