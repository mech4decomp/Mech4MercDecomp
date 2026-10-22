// FUN_00535F30 (299 bytes)
// __cdecl (no this, ret without cleanup)
// String parsing / tokenization function
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_0075dc60(void);
extern char DAT_00773040;
extern int DAT_0076b318;

__declspec(naked) void func_00535f30(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x773040
        repne scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     dl, byte ptr [DAT_00773040]
        add     esp, 0x04
        test    dl, dl
        mov     dword ptr [esp + 0x10], eax
        mov     ecx, 0x773040
        mov     dword ptr [esp + 0x14], eax
        mov     esi, 0x01
        jz      parse_done

parse_loop:
        lea     edi, [esp + 0x18]
parse_char:
        mov     dl, byte ptr [ecx]
        cmp     dl, 0x2e
        jz      is_dot
        mov     byte ptr [eax], dl
        inc     eax
        inc     ecx
        jmp     check_end

is_dot:
        mov     byte ptr [eax], 0x00
        inc     eax
        inc     ecx
        cmp     esi, 0x04
        jge     check_end
        mov     dword ptr [edi], eax
        inc     esi
        add     edi, 0x04

check_end:
        cmp     byte ptr [ecx], 0x00
        jnz     parse_char

parse_done:
        mov     ebx, dword ptr [DAT_0076b318]
        mov     byte ptr [eax], 0x00
        lea     esi, [esp + 0x24]
        lea     edi, [esp + 0x14]
        mov     ebp, 0x04

convert_loop:
        mov     ecx, dword ptr [edi]
        mov     al, byte ptr [ecx]
        movsx   edx, al
        cmp     edx, 0x2f30
        je      skip_atoi
inner_loop:
        cmp     al, 0x30
        jne     skip_atoi
        mov     al, byte ptr [ecx + 1]
        inc     ecx
        movsx   edx, al
        cmp     edx, 0x2f30
        jne     inner_loop

skip_atoi:
        movsx   eax, byte ptr [ecx]
        cmp     eax, 0x2f30
        jnz     do_atoi
        mov     dword ptr [esi], 0x00
        mov     dword ptr [esi + 0x04], 0x00
        jmp     next_token

do_atoi:
        push    ecx
        call    ebx
        cdq
        mov     dword ptr [esi], eax
        add     esp, 0x04
        mov     dword ptr [esi + 0x04], edx

next_token:
        add     edi, 0x04
        add     esi, 0x08
        dec     ebp
        jnz     convert_loop

        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x28]
        add     esp, 0x04
        push    0x00
        push    0x64
        push    edx
        push    eax
        call    FUN_0075dc60
        mov     ebx, dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x30]
        push    0x00
        add     eax, ebx
        push    0x64
        adc     edx, edi
        push    edx
        push    eax
        call    FUN_0075dc60
        mov     edi, dword ptr [esp + 0x34]
        mov     esi, dword ptr [esp + 0x38]
        push    0x00
        add     eax, edi
        push    0x2710
        adc     edx, esi
        push    edx
        push    eax
        call    FUN_0075dc60
        mov     esi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x40]
        pop     edi
        add     eax, esi
        pop     esi
        pop     ebp
        adc     edx, ecx
        pop     ebx
        add     esp, 0x34
        ret
    }
}
