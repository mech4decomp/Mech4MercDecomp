/*
 * FUN_005997e0 (30 B) — Copy reference-counted string/struct.
 *
 * __cdecl (params on stack), no stack cleanup (ret).
 * Copies ptr and flag from src to dest, increments refcount if ptr non-null.
 * Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005997e0(void)
{
    __asm {
        MOV ECX, dword ptr [ESP + 0x4]
        TEST ECX, ECX
        JZ l_ret
        MOV EDX, dword ptr [ESP + 0x8]
        MOV EAX, dword ptr [EDX]
        TEST EAX, EAX
        MOV dword ptr [ECX], EAX
        JZ l_skip_inc
        INC byte ptr [EAX - 0x1]
    l_skip_inc:
        MOV AL, byte ptr [EDX + 0x4]
        MOV byte ptr [ECX + 0x4], AL
    l_ret:
        RET
    }
}
