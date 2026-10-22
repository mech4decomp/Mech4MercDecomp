/*
 * FUN_1003c002 (37 B) — __thiscall.
 * Loop: (*param_1)++, call FUN_1003bfde(param_2), then FUN_100423f9(result)
 * until it returns 0. Returns last result in AX.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003bfde(void);
extern void __cdecl FUN_100423f9(void);

__declspec(naked) void FUN_1003c002(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
    loop_:
        push    dword ptr [esp + 0x10]
        inc     dword ptr [esi]
        call    FUN_1003bfde
        mov     edi, eax
        push    edi
        call    FUN_100423f9
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     loop_
        mov     ax, di
        pop     edi
        pop     esi
        ret
    }
}
