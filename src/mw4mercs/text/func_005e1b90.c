/*
 * FUN_005e1b90 (7 B) — __fastcall getter returning [this+0x490].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005e1b90(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x490]
        ret
    }
}
