/*
 * FUN_005ef700 (7 B) — returns the float at this+0x1B4.
 *
 * __fastcall (ECX = this), returns float on FPU stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) float __fastcall FUN_005ef700(void *this)
{
    __asm {
        fld     dword ptr [ecx + 0x1B4]
        ret
    }
}
