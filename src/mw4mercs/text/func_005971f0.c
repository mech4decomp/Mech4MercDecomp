/*
 * FUN_005971F0 (131 B) — __cdecl function, RET 0, 1 stack param.
 *
 * Parses a mission type string ("Normal", "Defend", "Rescue", "Raid")
 * and returns 0, 1, 2, 3 respectively. Returns -1 on unknown string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fabf0(int, int);

__declspec(naked) void __cdecl FUN_005971F0(void)
{
    

extern int DAT_0076b2ac;
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, [ebp + 8]              ; esi = arg0 (mission type string)
        push    edi
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x7831D0                    ; "Normal"
        push    esi
        call    edi                         ; strcmp(arg0, "Normal")
        add     esp, 8
        test    eax, eax
        jne     L_check2
        pop     edi
        pop     esi
        pop     ebp
        ret                                 ; return 0

    L_check2:
        push    0x7831C8                    ; "Defend"
        push    esi
        call    edi                         ; strcmp(arg0, "Defend")
        add     esp, 8
        test    eax, eax
        jne     L_check3
        pop     edi
        mov     eax, 1
        pop     esi
        pop     ebp
        ret                                 ; return 1

    L_check3:
        push    0x7831C0                    ; "Rescue"
        push    esi
        call    edi                         ; strcmp(arg0, "Rescue")
        add     esp, 8
        test    eax, eax
        jne     L_check4
        pop     edi
        mov     eax, 2
        pop     esi
        pop     ebp
        ret                                 ; return 2

    L_check4:
        push    0x7831B8                    ; "Raid"
        push    esi
        call    edi                         ; strcmp(arg0, "Raid")
        add     esp, 8
        test    eax, eax
        jne     L_error
        pop     edi
        mov     eax, 3
        pop     esi
        pop     ebp
        ret                                 ; return 3

    L_error:
        push    esi
        push    0x78318C                    ; "That is not a valid mission type string %s"
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        je      L_skip_int3
        int     3                           ; __debugbreak if FUN_006fabf0 returned non-zero

    L_skip_int3:
        pop     edi
        or      eax, -1                     ; return -1
        pop     esi
        pop     ebp
        ret
    }


}
