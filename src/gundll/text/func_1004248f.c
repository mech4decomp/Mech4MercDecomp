/*
 * FUN_1004248f (35 B) — __cdecl.
 * Wrapper: FUN_10040c8e(param_1); r = FUN_100424b2(param_1);
 * FUN_10040ce0(param_1); return (short)r.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040c8e(void);
extern void __cdecl FUN_100424b2(void);
extern void __cdecl FUN_10040ce0(void);

__declspec(naked) void FUN_1004248f(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        push    esi
        call    FUN_10040c8e
        push    esi
        call    FUN_100424b2
        push    esi
        mov     edi, eax
        call    FUN_10040ce0
        add     esp, 0xc
        mov     ax, di
        pop     edi
        pop     esi
        ret
    }
}
