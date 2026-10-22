/*
 * FUN_0041e110 (18 B) — __cdecl, RET 0x8 (2 stack args). Reads arg1/arg2,
 * pushes them reversed, calls FUN_0041e720.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e720(void);

__declspec(naked) void FUN_0041e110(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    eax
        push    edx
        call    FUN_0041e720
        ret     0x8
    }
}
