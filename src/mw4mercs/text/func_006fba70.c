/*
 * FUN_006FBA70 (151 B) — String comparison + global state management.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006FBA70(void)
{
    __asm {
        /* 0x6FBA70: data prefix (2 bytes from previous function) */
        _emit 0x85
        _emit 0x00
        /* 0x6FBA72: real function entry */
        and     eax, 0x10
        test    al, al
        _emit 0x0F
        _emit 0x84
        _emit 0x66
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x85647C
        pop     ebx
        ret     4
    l_ret_85647c:
        _emit 0x8B
        _emit 0x0D
        _emit 0x1C
        _emit 0x67
        _emit 0x85
        _emit 0x00
        push    ecx
        _emit 0xFF
        _emit 0x15
        _emit 0x9C
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        pop     edi
        pop     esi
        pop     ebp
        _emit 0x89
        _emit 0x1D
        _emit 0x1C
        _emit 0x67
        _emit 0x85
        _emit 0x00
        xor     eax, eax
        pop     ebx
        ret     4
        /* nop padding */
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        /* 0x6FBAB0: second sub-function */
        _emit 0xA1
        _emit 0x1C
        _emit 0x67
        _emit 0x85
        _emit 0x00
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        push    edi
        _emit 0x0F
        _emit 0x84
        _emit 0x69
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x3D
        _emit 0xAC
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        push    0x856450
        push    eax
        call    edi
        test    eax, eax
        _emit 0x0F
        _emit 0x84
        _emit 0x40
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov     esi, 0x79278C
        mov     eax, 0x85647C
    l_loop:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     l_next
        cmp     cl, bl
        je      l_match
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     l_next
        add     eax, 2
        add     esi, 2
        cmp     cl, bl
        jne     l_loop
    l_match:
        xor     eax, eax
        _emit 0xEB
        _emit 0x05
    l_next:
        _emit 0x1B
        _emit 0xC0
        sbb     eax, eax
        cmp     eax, ebx
    l_done:
    }
}
