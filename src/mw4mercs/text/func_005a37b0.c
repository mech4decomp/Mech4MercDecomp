/*
 * FUN_005a37b0 (63 B) — Armor type index to string converter.
 *
 * Returns string pointer for armor type index:
 *   0 -> "FerroFiberus" (0x78413C)
 *   1 -> "Reactive" (0x784130)
 *   2 -> "Reflective" (0x784124)
 *   other -> assert + default string (0x783164)
 *
 * __cdecl (one stack param), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fabf0(char *fmt);

__declspec(naked) void __cdecl FUN_005a37b0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        sub     eax, 0
        jz      L_case0
        dec     eax
        jz      L_case1
        dec     eax
        jz      L_case2
        push    0x78414C
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      L_default
        int     3
L_default:
        mov     eax, 0x783164
        pop     ebp
        ret
L_case2:
        mov     eax, 0x784124
        pop     ebp
        ret
L_case1:
        mov     eax, 0x784130
        pop     ebp
        ret
L_case0:
        mov     eax, 0x78413C
        pop     ebp
        ret
    }


}
