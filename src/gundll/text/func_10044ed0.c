/*
 * FUN_10044ED0 (22 B) - __cdecl.  Lock-guarded call:
 * FUN_10039b19(0xb); FUN_10044ee6(); FUN_10039b7a(0xb).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void __stdcall FUN_10044ee6(void);
extern void __cdecl FUN_10039b7a(void);

__declspec(naked) void FUN_10044ED0(void)
{
    __asm {
        push    0xb
        call    FUN_10039b19
        call    FUN_10044ee6
        push    0xb
        call    FUN_10039b7a
        pop     ecx
        pop     ecx
        ret
    }
}
