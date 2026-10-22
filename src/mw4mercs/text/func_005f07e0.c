/*
 * FUN_005f07e0 (11 B) — __fastcall (ECX=this): sets vtable ptr to 0x78A150,
 * then tail-jumps to FUN_004d9db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d9db0(void *this);

__declspec(naked) void __fastcall FUN_005f07e0(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x78A150
        jmp     FUN_004d9db0
    }
}
