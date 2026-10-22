/*
 * FUN_00597140 (107 B) — __cdecl function, RET 0, 1 stack param.
 *
 * Calls a global function pointer with various constant addresses
 * to determine a return value (0, 1, 2, or -1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fabf0(int, int);

__declspec(naked) void __cdecl FUN_00597140(void)
{
    

extern int DAT_0076b2ac;
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, [ebp + 8]              ; esi = arg0
        push    edi
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x78315C
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_check2
        pop     edi
        pop     esi
        pop     ebp
        ret

    L_check2:
        push    0x783150
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_check3
        pop     edi
        mov     eax, 1
        pop     esi
        pop     ebp
        ret

    L_check3:
        push    0x783144
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_error
        pop     edi
        mov     eax, 2
        pop     esi
        pop     ebp
        ret

    L_error:
        push    esi
        push    0x78311C
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        je      L_skip_int3
        int     3

    L_skip_int3:
        pop     edi
        or      eax, -1
        pop     esi
        pop     ebp
        ret
    }


}
