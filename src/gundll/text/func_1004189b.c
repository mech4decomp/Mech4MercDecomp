/*
 * FUN_1004189b (20 B) - __stdcall. Reads FPU status word, clears FPU exceptions,
 * passes status word to FUN_10041a40.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_10041a40(void);

__declspec(naked) void __stdcall FUN_1004189b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        fnstsw  word ptr [ebp - 0x4]
        fnclex
        push    dword ptr [ebp - 0x4]
        call    FUN_10041a40
        pop     ecx
        leave
        ret
    }
}
