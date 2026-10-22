/*
 * FUN_006264f0 (6 B) — __fastcall: return *this + 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006264f0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        add     eax, 0x8
        ret
    }
}
