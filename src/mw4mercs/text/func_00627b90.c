/*
 * FUN_00627B90 (8 B) — thunk: load this->field_0x54 into ECX, tail-jump.
 *
 * __fastcall (ECX = this). Reads a pointer at this+0x54 and tail-calls
 * FUN_0063BE10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0063be10(void);

__declspec(naked) void __fastcall FUN_00627b90(void *this)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x54]
        jmp     FUN_0063be10
    }
}
