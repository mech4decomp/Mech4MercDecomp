/*
 * FUN_005f07d0 (7 B) — __fastcall getter: returns *(int*)(this + 0x178).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005f07d0(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x178]
        ret
    }
}
