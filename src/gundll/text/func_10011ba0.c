/*
 * FUN_10011ba0 (30 B) - __thiscall, RET 0x4. Constructor: calls
 * FUN_1001c870(this,0x4201,param_1), sets vtable 0x100497dc, returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_10011ba0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x4201
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x100497dc
        mov     eax, esi
        pop     esi
        ret     4
    }
}
