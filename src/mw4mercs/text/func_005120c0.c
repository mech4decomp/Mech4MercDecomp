/*
 * FUN_005120C0 (999 B) — Mission instance enumeration/loading function
 * Scans "Content\\Missions\\*.*", looks for .instance files, builds
 * lookup tables of mission names and instance paths.
 *
 * __fastcall (ECX = this pointer)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void * __cdecl FUN_004084d0(int size);
void __cdecl FUN_004084e0(void *ptr);
void * __cdecl FUN_00412570(void *this, const char *str);
void * __cdecl FUN_0041d890(void *this, int arg);
void * __cdecl FUN_0041db80(void);
void * __cdecl FUN_00412780(void *this);
void * __cdecl FUN_00412980(void *this);
void * __cdecl FUN_004125e0(void *this, const char *a, const char *b);
void * __cdecl FUN_00412740(void *this, void *src);
void __cdecl FUN_0040d9b0(void *this);
void * __cdecl FUN_0041db30(void);
void * __cdecl FUN_00412950(void *this);
void __cdecl FUN_0041dbe0(void);
void __cdecl FUN_0041dac0(void);
void * __cdecl FUN_0041db70(void);

__declspec(naked) void func_005120c0(void)
{
    

extern int DAT_007dd250;
extern int DAT_007dd254;
extern int DAT_007dd244;
__asm {
sub     esp, 0x38
        push    ebx
        push    esi
        push    0x00779AC4
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        xor     ebx, ebx
        add     esp, 0x04
        cmp     eax, ebx
        jz      alloc_fail_1
        mov     ecx, dword ptr [esp + 0x1C]
        push    0x01
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     esi, eax
        mov     dword ptr [esp + 0x18], esi
        jmp     after_alloc_1
alloc_fail_1:
        mov     dword ptr [esp + 0x18], ebx
        mov     esi, ebx
after_alloc_1:
        push    0x1000
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_004084d0
        push    0x1000
        mov dword ptr [DAT_007dd250], eax
        call    FUN_004084d0
        add     esp, 0x08
        mov     ecx, esi
        mov dword ptr [DAT_007dd254], eax
        mov dword ptr [DAT_007dd244], ebx
        call    FUN_0041db80
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412780
        cmp     dword ptr [eax], ebx
        jz      outer_loop_done

        push    ebp
        push    edi

outer_loop_start:
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1C], ebx
        call    FUN_00412740
        lea     ecx, [esp + 0x14]
        call    FUN_00412980
        mov     eax, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x28]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x14]
        push    0x0076C5A8
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x2C]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x30]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x14]
        push    0x00776484
        push    edx
        lea     ecx, [esp + 0x3C]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x34]
        call    FUN_0040d9b0
        push    0x38
        call    FUN_004084d0
        add     esp, 0x04
        cmp     eax, ebx
        jz      alloc_fail_2
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     ebp, eax
        jmp     after_alloc_2
alloc_fail_2:
        xor     ebp, ebp
after_alloc_2:
        mov     ecx, ebp
        call    FUN_0041db30
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_00412780
        cmp     dword ptr [eax], ebx
        jz      after_inner_loop
        jmp     inner_loop_check

inner_loop_next:
        xor     ebx, ebx

inner_loop_check:
        lea     ecx, [esp + 0x18]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, ebx
        jnz     strlen_name
        xor     ecx, ecx
        jmp     after_strlen_name
strlen_name:
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
after_strlen_name:
        inc     ecx
        push    ecx
        call    FUN_004084d0
        mov ecx, dword ptr [DAT_007dd244]
        mov     edx, eax
        mov eax, dword ptr [DAT_007dd250]
        mov     dword ptr [eax + ecx*4], edx
        mov     edi, dword ptr [esp + 0x1C]
        or      ecx, -1
        xor     eax, eax
        add     esp, 0x04
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        push    0x00779AB0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x1C]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x38]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x10]
        push    0x0076C5A8
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x3C]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x48]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x40]
        cmp     eax, ebx
        jz      skip_dec_ref_1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_1
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_1:
        mov     eax, dword ptr [esp + 0x10]
        push    0x00776484
        push    eax
        lea     ecx, [esp + 0x4C]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x44]
        call    FUN_0040d9b0
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, ebx
        jnz     strlen_path
        xor     ecx, ecx
        jmp     after_strlen_path
strlen_path:
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
after_strlen_path:
        inc     ecx
        push    ecx
        call    FUN_004084d0
        mov ebx, dword ptr [DAT_007dd244]
        mov ecx, dword ptr [DAT_007dd254]
        mov     edx, eax
        mov     dword ptr [ecx + ebx*4], edx
        mov     edi, dword ptr [esp + 0x14]
        or      ecx, -1
        xor     eax, eax
        add     esp, 0x04
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        inc     ebx
        mov     ecx, ebp
        mov dword ptr [DAT_007dd244], ebx
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      skip_dec_ref_2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_2
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_2:
        mov     ecx, ebp
        call    FUN_0041db30
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_00412780
        cmp     dword ptr [eax], 0
        jnz     inner_loop_next

inner_loop_done:
        mov     esi, dword ptr [esp + 0x20]
        xor     ebx, ebx
after_inner_loop:
        cmp     ebp, ebx
        jz      skip_free_ebp
        mov     ecx, ebp
        call    FUN_0041dac0
        push    ebp
        call    FUN_004084e0
        add     esp, 0x04
skip_free_ebp:
        mov     ecx, esi
        call    FUN_0041dbe0
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      skip_dec_ref_3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_3
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_3:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      skip_dec_ref_4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_4
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_4:
        mov     ecx, esi
        call    FUN_0041db80
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412780
        cmp     dword ptr [eax], ebx
        jnz     outer_loop_start

        pop     edi
        pop     ebp

outer_loop_done:
        cmp     esi, ebx
        jz      skip_free_esi
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
skip_free_esi:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      skip_dec_ref_5
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_5
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_5:
        mov     eax, dword ptr [esp + 0x1C]
        pop     esi
        cmp     eax, ebx
        pop     ebx
        jz      skip_dec_ref_6
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref_6
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref_6:
        add     esp, 0x38
        ret
    }


}
