/*
 * FUN_0040aa10 (41 B) — __thiscall constructor: calls FUN_00415180 with the
 * global DAT_007b8c10, zeroes fields +0x8/+0xc, sets vtable 0x76cf64, stores
 * arg at +0x10, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(int a);
extern int g_007b8c10;

__declspec(naked) void FUN_0040aa10(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp+0x8]
        xor     eax, eax
        mov     dword ptr [esi+0x8], eax
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi], 0x76cf64
        mov     dword ptr [esi+0x10], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
