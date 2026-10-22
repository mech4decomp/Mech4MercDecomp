/*
 * FUN_0074B260 (23 B) — __stdcall wrapper (ret 8) that calls FUN_0074B180
 * with the argument and a pointer to it, then returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074B180(void);

__declspec(naked) void FUN_0074B260(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        lea     eax, [esp+4]
        push    eax
        push    ecx
        call    FUN_0074B180
        mov     eax, 1
        ret     8
    }
}
