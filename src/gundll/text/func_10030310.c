/*
 * FUN_10030310 (29 B) - __stdcall, RET 0x4.
 * Calls FUN_1002f920 (thiscall, this=arg) then FUN_10001d60(arg).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002f920(void);   /* rel32 call, __thiscall (ECX=this) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, __cdecl */

__declspec(naked) void __stdcall FUN_10030310(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        test    esi, esi
        jz      L2
        mov     ecx, esi
        call    FUN_1002f920
        push    esi
        call    FUN_10001d60
        add     esp, 4
L2:
        pop     esi
        ret     4
    }
}
