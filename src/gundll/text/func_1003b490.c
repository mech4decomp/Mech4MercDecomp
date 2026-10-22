/*
 * FUN_1003b490 (37 B) — __cdecl.
 * If param_2 != 0: FUN_1003ec80(param_1 + param_2, param_1, strlen(param_1) + 1).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c5f0(void);
extern void __cdecl FUN_1003ec80(void);

__declspec(naked) void FUN_1003b490(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        jz      done
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        call    FUN_1003c5f0
        inc     eax
        push    eax
        push    esi
        add     esi, edi
        push    esi
        call    FUN_1003ec80
        add     esp, 0x10
        pop     esi
    done:
        pop     edi
        ret
    }
}
