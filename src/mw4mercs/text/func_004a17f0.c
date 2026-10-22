/*
 * FUN_004A17F0 (3 B) — __fastcall identity: returns ECX (param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_004a17f0(void)
{
    __asm {
        mov     eax, ecx
        ret
    }
}
