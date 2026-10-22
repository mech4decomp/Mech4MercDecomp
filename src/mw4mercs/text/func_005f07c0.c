/*
 * FUN_005f07c0 (7 B) — __fastcall getter: returns *(int*)(this + 0xC4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005f07c0(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xC4]
        ret
    }
}
