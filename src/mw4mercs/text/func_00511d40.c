/*
 * FUN_00511D40 (799 B) — Mech instance enumeration/loading function
 * Scans "Content\\Mechs\\*.*", looks for .instance files, builds
 * lookup tables of mech names and instance paths.
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
int __cdecl FUN_006fc4d0(const char *path);
void * __cdecl FUN_004d05d0(void *this, int arg);
void * __cdecl FUN_00412670(void *this, const char *str, int ch);
void __cdecl FUN_004179b0(void *this, void *obj);
void __cdecl FUN_0041dbe0(void);
void __cdecl FUN_0041dac0(void);
int __cdecl FUN_00417a40(void *this);

__declspec(naked) void func_00511d40(void)
{
    

extern int DAT_007b8c10;
extern int DAT_007dd240;
extern int DAT_007dd248;
extern int DAT_007dd24c;
__asm {
sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    0x00779A9C
        lea     ecx, [esp + 0x1C]
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x04
        cmp     eax, edi
        jz      alloc_fail
        mov     ecx, dword ptr [esp + 0x18]
        push    0x01
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     ebx, eax
        jmp     after_alloc
alloc_fail:
        xor     ebx, ebx
after_alloc:
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], edi
        call    FUN_0041db80
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412780
        cmp     dword ptr [eax], edi
        jz      loop_done

loop_start:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edi
        mov     dword ptr [esp + 0x10], eax
        jz      skip_ref_1
        inc     byte ptr [eax - 1]
skip_ref_1:
        lea     ecx, [esp + 0x10]
        call    FUN_00412980
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x1C]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp + 0x10]
        push    0x00779A88
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        jz      skip_instance

        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        cmp     esi, edi
        jz      after_obj_alloc
        mov eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_004d05d0
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi], 0x779a84
        mov     edi, esi
after_obj_alloc:
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [edi + 0x10]
        call    FUN_00412740
        lea     edx, [esp + 0x18]
        lea     esi, [edi + 0x14]
        push    edx
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x2C]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        lea     ecx, [esp + 0x24]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esi]
        push    0x5C
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_00412670
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        lea     ecx, [esp + 0x28]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        lea     ecx, [esp + 0x2C]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esi]
        push    0x00776484
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        lea     ecx, [esp + 0x30]
        call    FUN_0040d9b0
        push    edi
        lea     ecx, [ebp + 0x14]
        call    FUN_004179b0

skip_instance:
        mov     ecx, ebx
        call    FUN_0041dbe0
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        mov     ecx, ebx
        call    FUN_0041db80
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412780
        mov     ecx, dword ptr [eax]
        xor     edi, edi
        cmp     ecx, edi
        jnz     loop_start

loop_done:
        cmp     ebx, edi
        jz      skip_free_list
        mov     ecx, ebx
        call    FUN_0041dac0
        push    ebx
        call    FUN_004084e0
        add     esp, 0x04
skip_free_list:
        mov     esi, dword ptr [ebp + 0x14]
        lea     ecx, [ebp + 0x14]
        mov     dword ptr [esp + 0x3C], esi
        call    FUN_00417a40
        push    0x1000
        mov dword ptr [DAT_007dd240], eax
        call    FUN_004084d0
        push    0x1000
        mov dword ptr [DAT_007dd248], eax
        call    FUN_004084d0
        mov dword ptr [DAT_007dd24c], eax
        mov eax, dword ptr [DAT_007dd240]
        add     esp, 0x08
        xor     ebp, ebp
        cmp     eax, edi
        jle     build_done
        jmp     loop_check

loop_next:
        mov     esi, dword ptr [esp + 0x3C]

loop_check:
        test    esi, esi
        jz      null_entry
        mov     eax, dword ptr [esi + 0x04]
        mov     ebx, dword ptr [esi]
        mov     dword ptr [esp + 0x3C], eax
        jmp     have_entry
null_entry:
        xor     ebx, ebx
have_entry:
        mov     edi, dword ptr [ebx + 0x10]
        test    edi, edi
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
        mov ecx, dword ptr [DAT_007dd248]
        mov     edi, dword ptr [ebx + 0x10]
        mov     edx, eax
        mov     dword ptr [ecx + ebp*4], edx
        or      ecx, -1
        xor     eax, eax
        add     esp, 0x04
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [ebx + 0x14]
        test    edi, edi
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
        mov ecx, dword ptr [DAT_007dd24c]
        mov     edi, dword ptr [ebx + 0x14]
        mov     edx, eax
        mov     dword ptr [ecx + ebp*4], edx
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
        mov eax, dword ptr [DAT_007dd240]
        and     ecx, 3
        inc     ebp
        cmp     ebp, eax
        rep movsb
        jl      loop_next

build_done:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
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
        mov     eax, dword ptr [esp + 0x08]
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
        add     esp, 0x30
        ret
    }


}
