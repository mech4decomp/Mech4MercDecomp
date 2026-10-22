/*
 * FUN_00416990 (37 B) — __thiscall (ECX=this, 2 stack args) constructor:
 * calls FUN_00415bb0(0), stores byte arg2 at this+0x8, zeroes this+0xc/0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415bb0(void);

__declspec(naked) void FUN_00416990(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0
        call    FUN_00415bb0
        mov     al, byte ptr [esp+0xc]
        mov     byte ptr [esi+8], al
        mov     dword ptr [esi+0xc], 0
        mov     dword ptr [esi+0x10], 0
        mov     eax, esi
        pop     esi
        ret     8
    }
}
