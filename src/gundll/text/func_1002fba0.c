/*
 * FUN_1002FBA0 (85 B) - __stdcall, RET 0xC.  Dispatches on arg3->type
 * (+0x0): 0 -> FUN_10030460(arg1-8, arg3); 2 -> FUN_10030610(arg1-8, arg3);
 * else E_FAIL (0x80004005).  Frees arg3 via FUN_10001d60 (shared_free) and
 * returns the result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);    /* rel32 call (shared_free) */
extern void __cdecl FUN_10030460(void);    /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_10030610(void);    /* rel32 call (thiscall, this=ecx) */

__declspec(naked) void __stdcall FUN_1002FBA0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        sub     eax, 0
        mov     esi, 0x80004005
        je      L_1
        sub     eax, 2
        jne     L_2
        mov     eax, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [eax - 8]
        call    FUN_10030610
        push    edi
        mov     esi, eax
        call    FUN_10001d60
        add     esp, 4
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    L_1:
        mov     ecx, dword ptr [esp + 0xc]
        push    edi
        add     ecx, -8
        call    FUN_10030460
        mov     esi, eax
    L_2:
        push    edi
        call    FUN_10001d60
        add     esp, 4
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
