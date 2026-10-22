// FUN_00536190 (440 bytes)
// __cdecl, RET 0xc
// Date/time validation function
__declspec(naked) void func_00536190(void)
{
    

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0075dd60(void);
extern void __cdecl FUN_0075dca0(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        cmp     ebx, 0x02
        push    esi
        push    edi
        jz      valid_type
        cmp     ebx, 0x01
        jz      valid_type
        push    0x77b604
        call FUN_006fab90
        add     esp, 0x04
        test    eax, eax
        jz      ret_false
        int     3
        // epilogue after INT3 (fallthrough from debug break)
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0x0c

valid_type:
        mov     esi, dword ptr [ebp + 0x0c]
        mov     edi, dword ptr [ebp + 0x08]
        push    0x02
        push    0x540be400
        push    esi
        push    edi
        call FUN_0075dd60
        cmp     ebx, 0x02
        jnz     check_type1
        cmp     eax, 0xe5d5
        jnz     check_2_2
        test    edx, edx
        jz      found_match
check_2_2:
        cmp     eax, 0xf84e
        jnz     check_2_3
        test    edx, edx
        jz      found_match
check_2_3:
        cmp     eax, 0x10ec4
        jmp     check_final

check_type1:
        cmp     ebx, 0x01
        jnz     found_match
        cmp     eax, 0xe5e3
        jnz     check_1_2
        test    edx, edx
        jz      found_match
check_1_2:
        cmp     eax, 0xf84f
        jnz     check_1_3
        test    edx, edx
        jz      found_match
check_1_3:
        cmp     eax, 0x10ec5
check_final:
        jnz     ret_false
        test    edx, edx
        jz      found_match

ret_false:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0x0c

found_match:
        push    0x00
        push    0x989680
        push    esi
        push    edi
        call FUN_0075dd60
        push    0x00
        push    0x3e8
        push    edx
        push    eax
        call FUN_0075dca0
        cmp     eax, 0x1ba
        jnz     ret_false_2
        test    edx, edx
        jz      continue_check

ret_false_2:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0x0c

continue_check:
        push    0x00
        push    0xf4240
        push    esi
        push    edi
        call FUN_0075dd60
        push    0x00
        push    0x0a
        push    edx
        push    eax
        call FUN_0075dca0
        push    0x00
        push    0x2710
        mov     ebx, eax
        push    esi
        mov     dword ptr [ebp + 0x10], ebx
        push    edi
        mov     ebx, edx
        call FUN_0075dd60
        push    0x00
        push    0x0a
        push    edx
        push    eax
        call FUN_0075dca0
        mov     edi, dword ptr [ebp + 0x10]
        push    0x00
        push    0x186a0
        add     edi, eax
        mov     eax, dword ptr [ebp + 0x08]
        push    esi
        push    eax
        adc     ebx, edx
        call FUN_0075dd60
        push    0x00
        push    0x0a
        push    edx
        push    eax
        call FUN_0075dca0
        mov     ecx, dword ptr [ebp + 0x08]
        push    0x00
        push    0x3e8
        push    esi
        add     edi, eax
        push    ecx
        adc     ebx, edx
        call FUN_0075dd60
        push    0x00
        push    0x0a
        push    edx
        push    eax
        call FUN_0075dca0
        push    0x00
        add     edi, eax
        push    0x64
        adc     ebx, edx
        mov     edx, dword ptr [ebp + 0x08]
        push    esi
        push    edx
        call FUN_0075dd60
        push    0x00
        push    0x0a
        push    edx
        push    eax
        call FUN_0075dca0
        push    0x00
        push    0x0a
        add     edi, eax
        mov     eax, dword ptr [ebp + 0x08]
        push    esi
        push    eax
        adc     ebx, edx
        call FUN_0075dd60
        push    0x00
        push    0x0a
        push    edx
        push    eax
        call FUN_0075dca0
        push    0x00
        add     edi, eax
        adc     ebx, edx
        push    0x07
        push    ebx
        push    edi
        call FUN_0075dca0
        mov     ecx, dword ptr [ebp + 0x08]
        push    0x00
        push    0x0a
        mov     edi, 0x07
        push    esi
        sub     edi, eax
        mov     ebx, 0x00
        push    ecx
        sbb     ebx, edx
        call FUN_0075dca0
        cmp     eax, edi
        jnz     ret_false_3
        cmp     edx, ebx
        jz      ret_true

ret_false_3:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0x0c

ret_true:
        pop     edi
        pop     esi
        mov     eax, 0x01
        pop     ebx
        pop     ebp
        ret     0x0c
    }


}
