/*
 * FUN_10001440 (8 B) - thunk: ECX += 0x10 then jumps to FUN_10001190
 * (a __fastcall ctor wrapper on a sub-object at +0x10).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001190(void);

__declspec(naked) void __cdecl FUN_10001440(void)
{
    __asm {
        add     ecx, 0x10
        jmp     FUN_10001190
    }
}
