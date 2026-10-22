/*
 * FUN_1003af8f (49 B) — __cdecl.
 * Loop param_2 times calling FUN_1003af6f(param_4, param_3, param_1); break if *param_4 == -1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003af6f(void);

__declspec(naked) void FUN_1003af8f(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, edi
        dec     edi
        test    eax, eax
        jle     done
        mov     esi, dword ptr [esp + 0x18]
    loop1:
        push    esi
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x14]
        call    FUN_1003af6f
        add     esp, 0xc
        cmp     dword ptr [esi], -1
        jz      done
        mov     eax, edi
        dec     edi
        test    eax, eax
        jg      loop1
    done:
        pop     edi
        pop     esi
        ret
    }
}
