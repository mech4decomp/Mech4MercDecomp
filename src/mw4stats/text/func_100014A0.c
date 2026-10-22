/*
 * FUN_100014a0 (8 B) - thunk: ECX += 4 then jumps to FUN_10003F80
 * (a __fastcall ctor wrapper on a sub-object at +4).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003F80(void);

__declspec(naked) void __cdecl FUN_100014A0(void)
{
    __asm {
        add     ecx, 4
        jmp     FUN_10003F80
    }
}
