/*
 * FUN_00767f40 (18 B) — __thiscall (ECX = this), returns this.
 * Calls FUN_00767cc0, then sets vtable pointer 0x7afd38 at [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767cc0(void);

__declspec(naked) void *__fastcall FUN_00767f40(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00767cc0
        mov     dword ptr [esi], 0x7afd38
        mov     eax, esi
        pop     esi
        ret
    }
}
