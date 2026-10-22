/*
 * FUN_0041ae80 (28 B) — __thiscall constructor: calls FUN_0041d7c0 on
 * `this`, `this+0x4`, and `this+0x8` (three sub-objects), returns `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041d7c0(void);

__declspec(naked) void FUN_0041ae80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041d7c0
        lea     ecx, [esi+0x4]
        call    FUN_0041d7c0
        lea     ecx, [esi+0x8]
        call    FUN_0041d7c0
        mov     eax, esi
        pop     esi
        ret
    }
}
