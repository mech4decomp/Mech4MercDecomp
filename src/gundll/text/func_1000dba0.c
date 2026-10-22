/*
 * FUN_1000dba0 (37 B) - __thiscall, RET 0x4.
 * Constructor: calls FUN_1001c870(this, 0x3200, arg), stores vtable
 * 0x1004968c at this+0, zeroes this+0x24, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void *this, int a, void *b);

__declspec(naked) void FUN_1000dba0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    eax
        push    0x3200
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004968c
        mov     dword ptr [esi+0x24], 0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
