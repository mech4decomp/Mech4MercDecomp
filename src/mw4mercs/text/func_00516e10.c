/*
 * FUN_00516e10 (356 B) — String search/index function
 * Searches through an array of strings for a match.
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void func_00516e10(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x0C
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 0x04]
        mov eax, dword ptr [DAT_007dab44]
        push    ebx
        mov ebx, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x0C], edx
        mov     edx, dword ptr [eax]
        xor     edx, ebx
        mov     eax, dword ptr [edx + 0x0C]
        mov     dl, byte ptr [ecx + 0x40D14]
        push    ebp
        xor     eax, 0x85739531
        test    dl, dl
        mov     ebp, dword ptr [eax + 0xC4]
        push    esi
        push    edi
        jz      check_dl_zero
        mov     bl, byte ptr [eax + 0x17]
        test    bl, bl
        jz      check_dl_again
        test    ebp, ebp
        jnz     check_dl_again
        mov     ebp, 0x01
check_dl_again:
        test    dl, dl
        jnz     check_flag_set
check_dl_zero:
        mov     dl, byte ptr [eax + 0x17]
        test    dl, dl
        jz      check_flag_set
        cmp     ebp, -1
        jle     inc_flag
        inc     ebp
inc_flag:
        mov     byte ptr [ecx + 0x40D14], 0x01
check_flag_set:
        mov     dl, byte ptr [ecx + 0x40D14]
        test    dl, dl
        jz      check_bounds
        mov     dl, byte ptr [eax + 0x17]
        test    dl, dl
        jnz     check_bounds
        test    ebp, ebp
        jle     dec_flag
        dec     ebp
dec_flag:
        mov     byte ptr [ecx + 0x40D14], 0x00
check_bounds:
        test    ebp, ebp
        jl      reset_index
        cmp     ebp, dword ptr [ecx + 0x409A0]
        jl      store_result
reset_index:
        mov     bl, byte ptr [eax + 0x17]
        xor     edx, edx
        test    bl, bl
        setnz   dl
        mov     ebp, edx
        mov     edx, dword ptr [ecx + 0x409A0]
        cmp     ebp, edx
        mov     ebx, ebp
        mov     dword ptr [esp + 0x14], edx
        jge     store_result
        mov     ecx, dword ptr [ecx + 0x40D2C]
        mov     eax, dword ptr [eax + 0xC8]
        lea     edx, [ecx + ebp * 0x04]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x20], edx
search_loop:
        mov     eax, dword ptr [esp + 0x20]
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      skip_inc_ref
        inc     byte ptr [edi - 0x01]
skip_inc_ref:
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, edi
strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     strcmp_diff
        test    cl, cl
        jz      strcmp_eq
        mov     dl, byte ptr [eax + 0x01]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x01]
        jnz     strcmp_diff
        add     eax, 0x02
        add     esi, 0x02
        test    cl, cl
        jnz     strcmp_loop
strcmp_eq:
        xor     eax, eax
        jmp     strcmp_done
strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_done:
        test    eax, eax
        jz      found_match
        test    edi, edi
        jz      next_iter
        mov     cl, byte ptr [edi - 0x01]
        lea     eax, [edi - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     next_iter
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
next_iter:
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        inc     ebx
        add     ecx, 0x04
        cmp     ebx, eax
        mov     dword ptr [esp + 0x20], ecx
        jl      search_loop
        jmp     store_result
found_match:
        test    edi, edi
        mov     ebp, ebx
        jz      store_result
        mov     cl, byte ptr [edi - 0x01]
        lea     eax, [edi - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     store_result
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
store_result:
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        mov     dword ptr [eax], ebp
        pop     ebp
        mov     eax, 0x01
        pop     ebx
        add     esp, 0x0C
        ret     0x08
    }


}
