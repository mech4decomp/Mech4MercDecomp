/*
 * FUN_1003a0dc (37 B) — __cdecl.
 * Calls FUN_1003c510(param_1, arg) for each of param_2 args on the stack.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c510(void);

__declspec(naked) void FUN_1003a0dc(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        jle     done
        push    esi
        lea     esi, [esp + 0x10]
    loop_:
        push    dword ptr [esi + 0x4]
        add     esi, 0x4
        push    dword ptr [esp + 0x10]
        call    FUN_1003c510
        pop     ecx
        dec     edi
        pop     ecx
        jnz     loop_
        pop     esi
    done:
        pop     edi
        ret
    }
}
