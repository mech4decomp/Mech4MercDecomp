/*
 * func_00502F80 - 126 bytes
 * WalkThru type string lookup
 */
__declspec(naked) void func_00502F80()
{
    

extern int DAT_0076b2ac;
extern void __cdecl FUN_006fab2a(void);
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, [ebp + 8]
        push    edi
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x007765F0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jz      not_found
        push    0x0077658C
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     check_medium
        pop     edi
        mov     eax, 0x20000
        pop     esi
        pop     ebp
        ret
check_medium:
        push    0x00776578
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     check_anything
        pop     edi
        mov     eax, 0x40000
        pop     esi
        pop     ebp
        ret
check_anything:
        push    0x00776564
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     check_none
        pop     edi
        mov     eax, 0x60000
        pop     esi
        pop     ebp
        ret
check_none:
        push    esi
        push    0x007765D0
        call FUN_006fab2a
        add     esp, 8
        test    eax, eax
        jz      not_found
        int     3
not_found:
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret
    }


}
