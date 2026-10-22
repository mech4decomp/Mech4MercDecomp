/*
 * FUN_1003782C (32 B) - __cdecl, 1 arg. Installs an SEH frame via
 * FUN_100468b4 (__except_handler3) with handler 0x10037844, then tears
 * the frame down. Body is effectively empty (SEH setup/teardown only).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100468b4(void);   /* rel32 call (__except_handler3) */

__declspec(naked) void __cdecl FUN_1003782C(void)
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
        push    0x10037844
        push    dword ptr [ebp+8]
        call    FUN_100468b4
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
