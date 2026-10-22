/*
 * FUN_00515F60 (1051 B) — Mission enumeration/loading function
 * Scans "Resource\\UserMissions\\*.mw4", processes mission files,
 * builds lookup tables.
 *
 * __stdcall, RET 0x8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_006f4950(void *ptr);
void __cdecl FUN_006f49a0(void);
void __cdecl FUN_006f4230(void *ptr);
void * __cdecl FUN_006f3c80(int size, int flags);
void * __cdecl FUN_004084d0(int size);
void __cdecl FUN_004084e0(void *ptr);
void * __cdecl FUN_00412570(void *this, const char *str);
void * __cdecl FUN_0041d890(void *this, int arg);
void * __cdecl FUN_0041db30(void);
void * __cdecl FUN_00412780(void *this);
void * __cdecl FUN_004129c0(void *this);
void * __cdecl FUN_00412950(void *this);
void * __cdecl FUN_004125e0(void *this, const char *a, const char *b);
void * __cdecl FUN_00412740(void *this, void *src);
void __cdecl FUN_0040d9b0(void *this);
int __cdecl FUN_006fc4d0(const char *path);
void * __cdecl FUN_0040dca0(void *this, const char *path, int a, int b);
void * __cdecl FUN_0040ecc0(void *this, const char *str);
void __cdecl FUN_0040de20(void *this);
void __cdecl FUN_0041db70(void);
void __cdecl FUN_0041dac0(void);
void * __cdecl FUN_0041f210(void *this, void *arg);

__declspec(naked) void func_00515f60(void)
{
    

extern int DAT_007dd234;
extern int DAT_007f1fb8;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b2ac;
__asm {
sub     esp, 0x88
        mov eax, dword ptr [DAT_007dd234]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0xA0]
        mov     ebp, dword ptr [eax + 0x04]
        mov     ecx, dword ptr [eax + 0x08]
        mov edx, dword ptr [DAT_007f1fb8]
        mov     eax, dword ptr [edx + 0x10]
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x14], 0
        jmp     loop_check

loop_next:
        mov     eax, dword ptr [esp + 0x44]

loop_check:
        test    eax, eax
        jz      loop_done
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     eax, dword ptr [eax + 0x04]
        mov     dword ptr [esp + 0x44], eax
        jz      loop_done
        cmp     dword ptr [esp + 0x14], 0x40
        jge     loop_done
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jle     loop_next
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      skip_free_old
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
skip_free_old:
        push    0x00
        push    0x80
        call    FUN_006f3c80
        mov ecx, dword ptr [DAT_007dab44]
        mov     ebx, eax
        mov eax, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x10], 0
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     ecx, dword ptr [edx + 0x0C]
        mov     edx, dword ptr [esi + 0x38]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        mov     dword ptr [ebp], ebx
        call    dword ptr [eax + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        lea     ecx, [esp + 0x10]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        inc     esi
        add     ebp, 4
        test    eax, eax
        mov     dword ptr [esp + 0x14], esi
        jz      loop_next
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loop_next
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
        jmp     loop_next

loop_done:
        push    0x00779D80
        lea     ecx, [esp + 0x34]
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      alloc_fail_1
        mov     ecx, dword ptr [esp + 0x30]
        push    0x01
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     edi, eax
        mov     dword ptr [esp + 0x10], edi
        jmp     after_alloc_1
alloc_fail_1:
        mov     dword ptr [esp + 0x10], 0
        mov     edi, dword ptr [esp + 0x10]
after_alloc_1:
        mov     ecx, edi
        call    FUN_0041db30
        mov     ebp, eax
        test    ebp, ebp
        jz      outer_loop_done

        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x14]
        lea     esi, [edx + eax*4]
        mov     dword ptr [esp + 0x1C], esi
        jmp     inner_loop_check

inner_loop_next:
        mov     esi, dword ptr [esp + 0x1C]

inner_loop_check:
        cmp     dword ptr [esp + 0x14], 0x40
        jge     outer_loop_done

        push    ebp
        lea     ecx, [esp + 0x1C]
        xor     ebx, ebx
        call    FUN_00412570
        lea     ecx, [esp + 0x18]
        call    FUN_00412950
        push    0x00779D68
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_004125e0
        mov     eax, dword ptr [esp + 0x28]
        push    0x00779D60
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_004125e0
        lea     ecx, [esp + 0x2C]
        push    ecx
        lea     ecx, [esp + 0x1C]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x2C]
        test    eax, eax
        jz      skip_dec_ref_a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_a
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_a:
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      skip_dec_ref_b
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_b
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_b:
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      skip_dec_ref_c
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_c
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_c:
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        jz      after_file_check

        mov     eax, dword ptr [esp + 0x18]
        push    0x00
        push    0x00
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_0040dca0
        push    0x00779D58
        lea     ecx, [esp + 0x4C]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      after_xml_parse

        push    0x0C
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      alloc_fail_2
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 0x04], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x08], ecx
        mov     dword ptr [eax], 0x76CC9C
        mov     edi, eax
        jmp     after_alloc_2
alloc_fail_2:
        xor     edi, edi
after_alloc_2:
list_loop:
        mov     eax, dword ptr [edi + 0x08]
        test    eax, eax
        jz      list_done
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     edx, dword ptr [eax + 0x04]
        mov     dword ptr [edi + 0x08], edx
        jz      list_done
        mov     eax, dword ptr [esi + 0x14]
        push    0x00779D50
        push    eax
        call dword ptr [DAT_0076b2ac]
        add     esp, 0x08
        test    eax, eax
        jnz     list_loop
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, esi
        call    FUN_0041f210
        cmp     dword ptr [esp + 0x34], 0x0D
        jnz     list_loop
        mov     ebx, 0x01
list_done:
        push    edi
        call    FUN_004084e0
        mov     edi, dword ptr [esp + 0x14]
        add     esp, 0x04
after_xml_parse:
        lea     ecx, [esp + 0x48]
        call    FUN_0040de20
        test    ebx, ebx
        jz      inner_loop_continue

        mov     esi, dword ptr [esp + 0x1C]

after_file_check:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip_free_ptr
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
skip_free_ptr:
        push    0x00
        push    0x80
        call    FUN_006f3c80
        mov     ebx, eax
        push    ebp
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esi], ebx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_00412780
        lea     ecx, [esp + 0x20]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x20]
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        mov     edx, dword ptr [esp + 0x1C]
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x20]
        inc     esi
        add     edx, 4
        test    eax, eax
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x1C], edx
        jz      skip_dec_ref_d
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_d
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_d:
        mov     edi, dword ptr [esp + 0x10]
inner_loop_continue:
        mov     ecx, edi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      skip_dec_ref_e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_e
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_e:
        mov     ecx, edi
        call    FUN_0041db30
        mov     ebp, eax
        test    ebp, ebp
        jnz     inner_loop_next

outer_loop_done:
        test    edi, edi
        jz      skip_free_edi
        mov     ecx, edi
        call    FUN_0041dac0
        push    edi
        call    FUN_004084e0
        add     esp, 0x04
skip_free_edi:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [ecx], eax
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      skip_dec_ref_f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_f
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_f:
        mov     eax, 0x01
        add     esp, 0x88
        ret     0x08
    }


}
