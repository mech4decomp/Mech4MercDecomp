/*
 * FUN_00517dd0 (696 B) — Variant file processing function
 * Iterates through variant .mw4 files, processes items.
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004084d0(int size);
void __cdecl FUN_004084e0(void *ptr);
int __cdecl FUN_00412570(const char *str);
int __cdecl FUN_00412740(int ptr);
int __cdecl FUN_00412780(int ptr);
int __cdecl FUN_00412950(void);
int __cdecl FUN_004129c0(void);
int __cdecl FUN_00416cc0(void);
int __cdecl FUN_0041d890(int param, int flag);
int __cdecl FUN_0041dac0(void);
int __cdecl FUN_0041db30(void);
int __cdecl FUN_0041db70(void);
int __cdecl FUN_0052b230(int size);

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int *DAT_0076b2b0;

__declspec(naked) void func_00517dd0(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax]
        xor     esi, ecx
        mov     ecx, dword ptr [esi + 0x4C]
        xor     ecx, 0x85739531
        push    edi
        mov     byte ptr [esp + 0x12], 0x00
        mov     byte ptr [esp + 0x13], 0x00
        jz      skip_flag1
        mov     byte ptr [esp + 0x12], 0x01
skip_flag1:
        mov     edx, dword ptr [esi + 0x58]
        xor     edx, 0x85739531
        jz      skip_flag2
        mov     byte ptr [esp + 0x13], 0x01
skip_flag2:
        xor     ebx, ebx
        push    0x14
        xor     ebp, ebp
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_004084d0
        add     esp, 0x04
        cmp     eax, ebp
        jz      null_ctor
        mov     ecx, dword ptr [esi + 0x0C]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x84]
        add     edx, 0x10
        push    edx
        mov     ecx, eax
        call    FUN_0052b230
        mov     edi, eax
        mov     dword ptr [esp + 0x18], edi
        jmp     after_ctor
null_ctor:
        mov     dword ptr [esp + 0x18], ebp
        mov     edi, ebp
after_ctor:
        mov     ecx, edi
        call    FUN_00416cc0
        cmp     eax, ebp
        jz      count_done
count_loop:
        mov     cl, byte ptr [esp + 0x12]
        test    cl, cl
        jnz     check_flag2_count
        cmp     dword ptr [eax + 0x20], 0x01
        jz      skip_count
check_flag2_count:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jnz     do_count
        cmp     dword ptr [eax + 0x20], 0x02
        jz      skip_count
do_count:
        inc     ebx
skip_count:
        mov     ecx, edi
        call    FUN_00416cc0
        cmp     eax, ebp
        jnz     count_loop
        mov     dword ptr [esp + 0x20], ebx
count_done:
        push    0x779E68
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 0x04
        cmp     eax, ebp
        jz      null_obj
        mov     ecx, dword ptr [esp + 0x24]
        push    0x01
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     esi, eax
        mov     dword ptr [esp + 0x1C], esi
        jmp     after_obj
null_obj:
        mov     dword ptr [esp + 0x1C], ebp
        mov     esi, ebp
after_obj:
        mov     ecx, esi
        call    FUN_0041db30
        cmp     eax, ebp
        jz      done_outer
process_file:
        push    eax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x00
        call    FUN_00412780
        lea     ecx, [esp + 0x14]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx+0x08]
        mov     ecx, edi
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jz      check_flags
inner_loop:
        mov     esi, dword ptr [ebp + 0x18]
        test    esi, esi
        jz      null_strlen
        inc     byte ptr [esi - 0x01]
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
skip_inc_ref:
        test    esi, esi
        jz      skip_inc_ref2
        inc     byte ptr [esi - 0x01]
skip_inc_ref2:
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    esi
        push    eax
        call    dword ptr [DAT_0076b2b0]
        add     esp, 0x0C
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        jz      skip_dec_refs
        mov     cl, byte ptr [esi - 0x01]
        lea     eax, [esi - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec1
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec1:
        test    esi, esi
        jz      skip_dec_refs
        mov     al, byte ptr [esi - 0x01]
        dec     esi
        dec     al
        mov     byte ptr [esi], al
        jnz     skip_dec_refs
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_refs:
        test    bl, bl
        jnz     restore_regs
        mov     ecx, dword ptr [esp + 0x18]
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jnz     inner_loop
restore_regs:
        mov     edi, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [esp + 0x1C]
check_flags:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jnz     check_flag2
        test    ebp, ebp
        jz      check_flag2
        cmp     dword ptr [ebp + 0x20], 0x01
        jnz     check_flag2
        mov     ecx, esi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      next_file
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     next_file
        jmp     free_str
null_strlen:
        xor     ecx, ecx
        jmp     skip_inc_ref
check_flag2:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     inc_count
        test    ebp, ebp
        jz      inc_count
        cmp     dword ptr [ebp + 0x20], 0x02
        jnz     inc_count
        mov     ecx, esi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      next_file
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     next_file
        jmp     free_str
inc_count:
        inc     ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      next_file
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     next_file
free_str:
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
next_file:
        mov     ecx, esi
        call    FUN_0041db30
        test    eax, eax
        jnz     process_file
done_outer:
        test    edi, edi
        jz      skip_delete1
        mov     edx, dword ptr [edi]
        push    0x01
        mov     ecx, edi
        call    dword ptr [edx]
skip_delete1:
        test    esi, esi
        jz      skip_delete2
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
skip_delete2:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x0C]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17]
        test    al, al
        jz      skip_inc_final
        inc     ebx
skip_inc_final:
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      skip_free_final
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_final
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_free_final:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x18
        ret
    }
}
