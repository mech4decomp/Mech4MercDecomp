/*
 * FUN_005a3850 (53 B) — Internal Structure string lookup by index.
 *
 * Returns string pointer for internal structure type:
 *   0 → "Standard"
 *   1 → "EndoSteel"
 *   else → logs error, returns default
 *
 * __cdecl, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fabf0(char *);

__declspec(naked) char * __cdecl FUN_005a3850(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        sub     eax, 0
        jz      L_case_0
        dec     eax
        jz      L_case_1
        push    0x78414c
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      L_skip_int3
        int     3
L_skip_int3:
        mov     eax, 0x783164
        pop     ebp
        ret
L_case_1:
        mov     eax, 0x78418c
        pop     ebp
        ret
L_case_0:
        mov     eax, 0x784198
        pop     ebp
        ret
    }
}
