/*
 * FUN_0060D010 (15 B) — __fastcall (ECX = this), RET 0x8. Sets
 * this->[0x2c] = 0 and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_0060D010(void)
{
    __asm {
        mov     dword ptr [ecx + 0x2c], 0x0
        mov     eax, 0x1
        ret     0x8
    }
}
