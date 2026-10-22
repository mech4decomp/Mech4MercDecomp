/*
 * FUN_10041888 (19 B) - __stdcall.
 * Pushes FPU status word and calls FUN_10041a40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10041a40(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10041888(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        fstsw   word ptr [ebp - 4]
        push    dword ptr [ebp - 4]
        call    FUN_10041a40
        pop     ecx
        leave
        ret
    }
}
