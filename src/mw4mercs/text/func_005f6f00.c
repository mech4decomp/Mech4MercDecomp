/*
 * FUN_005f6f00 (22 B) — __fastcall (ECX = this) destructor helper.
 *
 * Decrements global DAT_007f25cc, sets vtable 0x78a85c, then tail-jumps to
 * FUN_004d9db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d9db0(void);

extern int DAT_007f25cc;

__declspec(naked) void __fastcall FUN_005f6f00(void *this)
{
    __asm {
        mov     eax, dword ptr [DAT_007f25cc]
        dec     eax
        mov     dword ptr [ecx], 0x78A85C
        mov     dword ptr [DAT_007f25cc], eax
        jmp     FUN_004d9db0
    }
}
