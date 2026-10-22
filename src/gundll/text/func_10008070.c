/*
 * FUN_10008070 (13 B) - __fastcall. Zeroes 3 bytes at param_1.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_10008070(void)
{
    __asm {
        mov     eax, ecx
        xor     cl, cl
        mov     byte ptr [eax], cl
        mov     byte ptr [eax + 1], cl
        mov     byte ptr [eax + 2], cl
        ret
    }
}
