/*
 * FUN_0048bcd0 (19 B) — __fastcall (ECX = this), returns this.
 * Calls FUN_0048bca0() then sets [this+0x34] = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0048bca0(void);

__declspec(naked) void * __fastcall FUN_0048bcd0(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0048bca0
        mov     dword ptr [esi + 0x34], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
