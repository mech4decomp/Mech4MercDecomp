/*
 * FUN_100418af (53 B) - __thiscall. FPU control-word bit manipulation:
 * reads control word, calls FUN_10041925, masks with param_2, calls
 * FUN_100419b7, restores control word.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10041925(void);   /* rel32 call */
extern void __cdecl FUN_100419b7(void);   /* rel32 call */

__declspec(naked) void FUN_100418af(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        fstcw   word ptr [ebp - 4]
        push    dword ptr [ebp - 4]
        call    FUN_10041925
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0xc]
        not     eax
        and     esi, eax
        mov     eax, dword ptr [ebp + 8]
        and     eax, dword ptr [ebp + 0xc]
        or      esi, eax
        push    esi
        call    FUN_100419b7
        pop     ecx
        mov     dword ptr [ebp + 0xc], eax
        pop     ecx
        fldcw   word ptr [ebp + 0xc]
        mov     eax, esi
        pop     esi
        leave
        ret
    }
}
