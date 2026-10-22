/*
 * FUN_005d2860 (37 B) — __thiscall (ECX=this), RET 0.
 * Frees this+0x3D4 via FUN_004084E0, zeroes it, calls FUN_005DC2F0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_004084E0(void);
void FUN_005DC2F0(void);

__declspec(naked) void __stdcall FUN_005d2860(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x3D4]
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
        mov     ecx, esi
        mov     dword ptr [esi + 0x3D4], 0x0
        call    FUN_005DC2F0
        pop     esi
        ret
    }
}
