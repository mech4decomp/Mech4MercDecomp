/*
 * FUN_00417220 (6 B) — __fastcall. Decrements this->[+0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00417220(void)
{
    __asm {
        mov     eax, ecx
        dec     dword ptr [eax + 0x10]
        ret
    }
}
