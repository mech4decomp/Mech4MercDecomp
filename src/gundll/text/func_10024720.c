/*
 * FUN_10024720 (30 B) - __thiscall ctor. Calls FUN_1001c870(this,0x8201,
 * param_1), then sets vtable ptr to 0x1004ab88.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_10024720(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x8201
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004ab88
        mov     eax, esi
        pop     esi
        ret     4
    }
}
