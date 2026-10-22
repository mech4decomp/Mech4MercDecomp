/*
 * FUN_00415bb0 (12 B) — __fastcall (ECX=this, one stack arg): clears
 * [this+0x4] to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00415bb0(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax+0x4], 0
        ret     0x4
    }
}
