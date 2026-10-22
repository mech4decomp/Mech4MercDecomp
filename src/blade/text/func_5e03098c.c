/*
 * __global_unwind2 (32 B) - SEH unwind helper. Calls RtlUnwind (FUN_5e034b98)
 * with the target frame pointer (label 0x5e0309a4) and the caller's frame.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e034b98(void);

__declspec(naked) void FUN_5e03098c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        push    ebp
        push    0
        push    0
        push    offset unwind_target
        push    dword ptr [ebp+8]
        call    FUN_5e034b98
unwind_target:
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
