/*
 * FUN_005619A0 (42 B) — __thiscall method on an object at this+0xC.
 * Calls FUN_0041FCB0 on the sub-object, then if arg is non-null
 * calls FUN_0041FCD0 with arg, otherwise calls FUN_0041FCB0 again.
 * __thiscall (ecx = this, ret 4 cleans one stack arg).
 * CFLAGS: /O1
 */

extern void __fastcall FUN_0041fcb0(void);  /* ecx = this */
extern void __fastcall FUN_0041fcd0(void);  /* ecx = this, stack = arg */

__declspec(naked) void __stdcall FUN_005619A0(void)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0xC]
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      skip
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
        pop     esi
        ret     4
    skip:
        mov     ecx, esi
        call    FUN_0041fcb0
        pop     esi
        ret     4
    }
}
