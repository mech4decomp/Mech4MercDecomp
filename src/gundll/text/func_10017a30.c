/*
 * FUN_10017a30 (30 B) - __thiscall ctor. Calls FUN_1001c870(this,0x520d,
 * param_1), then sets vtable ptr to 0x100499ec.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_10017a30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x520d
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x100499ec
        mov     eax, esi
        pop     esi
        ret     4
    }
}
