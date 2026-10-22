/*
 * FUN_00603dd0 (63 B) — __thiscall constructor.
 *
 * Calls FUN_00415180(g_7b8c10), zeroes fields 0x08..0x28, sets vtable
 * 0x78b8e4, stores arg at +0x10 and 0xffffffff at +0x14. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8c10;
extern void __cdecl FUN_00415180(int a);

__declspec(naked) void FUN_00603dd0(void)
{
    __asm {
        mov     eax, dword ptr [g_7b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     byte ptr [esi + 0x28], al
        mov     dword ptr [esi], 0x78b8e4
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], 0xffffffff
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
