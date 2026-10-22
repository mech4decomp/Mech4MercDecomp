/*
 * FUN_005ef710 (7 B) — returns the double at this+0x1B8.
 *
 * __fastcall (ECX = this), returns double on FPU stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) double __fastcall FUN_005ef710(void *this)
{
    __asm {
        fld     qword ptr [ecx + 0x1B8]
        ret
    }
}
