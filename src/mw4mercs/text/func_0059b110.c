/*
 * FUN_0059B110 (12 B) — __fastcall vtable-setter thunk. Stores the vtable
 * pointer 0x00783788 into [ecx] then tail-jumps to 0x005F07E0, followed by a
 * trailing alignment nop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_783788;   /* vtable/data pointer 0x00783788 */

__declspec(naked) void __fastcall FUN_0059B110(void *this)
{
    __asm {
        mov     dword ptr [ecx], offset g_783788
        /* __emit: near jmp E9 where MSVC6 would collapse to short EB */
        __emit 0xE9
        __emit 0xC5
        __emit 0x56
        __emit 0x05
        __emit 0x00
        nop    /* trailing alignment pad (ref 0x59b11c = 90) */
    }
}
