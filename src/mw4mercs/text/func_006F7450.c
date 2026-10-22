/*
 * FUN_006F7450 (10 B) — setter: stores the low byte of the single argument
 * into [ecx+0x1e] (__stdcall, ret 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006F7450(void)
{
    __asm {
        mov     al, byte ptr [esp+4]
        mov     byte ptr [ecx+0x1e], al
        ret     4
    }
}
