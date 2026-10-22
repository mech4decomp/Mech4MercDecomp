/*
 * FUN_1003796f (42 B) — __cdecl.
 * Wide-char strcpy loop: find end of param_1, then copy param_2 into it.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003796f(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, eax
        cmp     word ptr [eax], 0x0
        je      done
    find_end:
        inc     ecx
        inc     ecx
        cmp     word ptr [ecx], 0x0
        jne     find_end
    done:
        mov     edx, dword ptr [esp + 0x8]
        push    esi
    copy:
        mov     si, word ptr [edx]
        mov     word ptr [ecx], si
        inc     ecx
        inc     ecx
        inc     edx
        inc     edx
        test    si, si
        jne     copy
        pop     esi
        ret
    }
}
