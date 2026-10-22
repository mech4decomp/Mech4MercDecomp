/*
 * func_00500010 - Free list items
 * Iterates through a list of pointers and frees each one
 */

/* External function: closesocket (0x0075dfb0) */
extern void __cdecl FUN_0075dfb0(void);

__declspec(naked) void func_00500010()
{
    __asm {
        mov     eax, [esp + 4]
        push    edi
        mov     edi, [eax + 0x6c]
        test    edi, edi
        jle     done
        push    esi
        mov     esi, [eax + 8]
    loop_start:
        mov     eax, [esi]
        push    eax
        call    FUN_0075dfb0
        add     esi, 0xc
        dec     edi
        jne     loop_start
        pop     esi
        xor     eax, eax
        pop     edi
        ret
    done:
        xor     eax, eax
        pop     edi
        ret
    }
}
