/*
 * FUN_004FF600 (34 B) — While loop: processes items until list is empty.
 *
 * While *param_1 != 0, calls FUN_004FFA40(param_1) and FUN_005008A0(10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ffa40(int *param);
extern void __cdecl FUN_005008a0(int val);

__declspec(naked) void __stdcall FUN_004ff600(int *param)
{
    __asm {
        push    esi
        mov     esi, [esp + 8]
        cmp     dword ptr [esi], 0
        jz      l_done
    l_loop:
        push    esi
        call    FUN_004ffa40
        push    0xa
        call    FUN_005008a0
        mov     eax, [esi]
        add     esp, 8
        test    eax, eax
        jnz     l_loop
    l_done:
        pop     esi
        ret
    }
}
