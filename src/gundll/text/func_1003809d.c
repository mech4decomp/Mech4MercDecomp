/*
 * FUN_1003809D (53 B) - __cdecl, 2 args. Wide-char string comparison
 * (wcscmp-like): compares 16-bit code units of arg1 vs arg2, returns
 * -1/0/+1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003809D(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        push    esi
        mov     esi, dword ptr [esp+0xc]
        push    edi
        mov     cx, word ptr [esi]
L_loop:
        movzx   eax, word ptr [edx]
        movzx   edi, cx
        sub     eax, edi
        jne     L_done
        test    cx, cx
        je      L_done
        inc     edx
        inc     edx
        inc     esi
        inc     esi
        mov     cx, word ptr [esi]
        jmp     L_loop
L_done:
        pop     edi
        pop     esi
        test    eax, eax
        jge     L_ge
        or      eax, 0xffffffff
        ret
L_ge:
        jle     L_ret
        push    1
        pop     eax
L_ret:
        ret
    }
}
