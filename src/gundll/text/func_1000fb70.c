/*
 * FUN_1000fb70 (37 B) - __thiscall, RET 0x4.
 * Constructor: calls FUN_1001c870, sets vtable ptr + field 0x24.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void *this, int a, void *b);

__declspec(naked) void FUN_1000fb70(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    eax
        push    0x2205
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x10049728
        mov     dword ptr [esi+0x24], 0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
