/*
 * FUN_100378F9 (9 B) - __stdcall, RET 0x4. Tail-sharing thunk: pushes
 * ebx/ecx, loads g_10051890 into ebx, then short-jumps into the shared
 * tail of FUN_10037902 (0x1003790c) which stores ecx/eax/ebp into the
 * g_10051890 struct and returns.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100378F9(void)
{
    __asm {
        push    ebx
        push    ecx
        mov     ebx, 0x10051890
        /* __emit: short jmp (+0x0a) into FUN_10037902's shared tail; MSVC6
           encodes jmp $+0x0c as rel32 (E9), not the short EB form */
        __emit 0xEB
        __emit 0x0A
    }
}
