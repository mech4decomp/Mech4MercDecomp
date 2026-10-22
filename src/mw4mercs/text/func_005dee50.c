/*
 * FUN_005dee50 (4 B) — __thiscall (ECX = this), plain RET. Returns the
 * dword at this+0x28.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_005dee50(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x28]
        ret
    }
}
