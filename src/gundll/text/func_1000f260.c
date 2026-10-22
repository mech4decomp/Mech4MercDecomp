/*
 * FUN_1000f260 (37 B) - __thiscall, RET 0x4.
 * Constructor: calls FUN_1001c720, sets vtable ptr + field 0x20.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void *this, int a, void *b);

__declspec(naked) void FUN_1000f260(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    eax
        push    0x2106
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x100496e0
        mov     dword ptr [esi+0x20], 0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
