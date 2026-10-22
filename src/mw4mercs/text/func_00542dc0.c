// FUN_00542DC0 (898 bytes)
// __thiscall (ECX = this, stack params at ESP+0x1b0 and ESP+0x1bc)
// RET 0x08 - decal texture loading/processing function
__declspec(naked) void func_00542dc0(void)
{
    

extern void __cdecl FUN_10041ee1f(void);
extern void __cdecl FUN_1004126c5(void);
extern void __cdecl FUN_006fc408(void);
extern void __cdecl FUN_006fbba3(void);
extern void __cdecl FUN_10041dd86(void);
extern void __cdecl FUN_0072de11(void);
extern void __cdecl FUN_10041ef09(void);
extern void __cdecl FUN_10041eef3(void);
extern void __cdecl FUN_1005325eb(void);
extern int DAT_007dd268;
extern void __cdecl FUN_1004123c9(void);
extern void __cdecl FUN_100412810(void);
extern void __cdecl FUN_100412797(void);
extern void __cdecl FUN_004129C0(void);
extern void __cdecl FUN_100412785(void);
extern void __cdecl FUN_1004082c1(void);
extern void __cdecl FUN_1004082a6(void);
extern void __cdecl FUN_10041eddf(void);
extern void __cdecl FUN_10041dc20(void);
extern void __cdecl FUN_10041edb8(void);
extern void __cdecl FUN_10041ed0a(void);
extern void __cdecl FUN_10041de77(void);
extern void __cdecl FUN_10041dc04(void);
extern void __cdecl FUN_10041dbf8(void);
extern void __cdecl FUN_100408200(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004cde2e(void);
extern void __cdecl FUN_10041ebf5(void);
__asm {
sub     esp, 0x1a4
        push    ebx
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x16]
        xor     ebx, ebx
        cmp     al, bl
        mov     eax, dword ptr [esi + 0xec]
        mov     dword ptr [esp + 0x1c], esi
        jz      check_ec_only
        cmp     eax, ebx
        jz      skip_all
        mov     eax, dword ptr [esp + 0x1b0]
        mov     ecx, eax
        shl     ecx, 0x07
        add     ecx, eax
        shl     ecx, 0x03
        sub     ecx, eax
        cmp     byte ptr [esi + ecx*0x8 + 0x353f], bl
        jz      skip_all
        jmp     start_processing

check_ec_only:
        cmp     eax, ebx
        jz      skip_all

start_processing:
        push    ebp
        push    edi
        push    ebx
        lea     ecx, [esp + 0x30]
        call FUN_10041ee1f
        mov     ebp, dword ptr [esp + 0x1bc]
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        call dword ptr [edx + 0x08]
        test    eax, eax
        jz      calc_diff

loop_top:
        mov     eax, dword ptr [ebp]
        push    0x01
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x18], ebx
        mov     byte ptr [esp + 0xbc], bl
        call dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      skip_read
        mov     edx, dword ptr [ebp]
        push    eax
        lea     eax, [esp + 0xb8]
        push    eax
        mov     ecx, ebp
        call dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x10]

skip_read:
        lea     ecx, [esp + 0xb4]
        push    ecx
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esp + eax*0x1 + 0xb8], bl
        mov     dword ptr [esp + 0x18], ebx
        call FUN_1004126c5
        lea     edx, [esp + 0xb4]
        push    edx
        call FUN_006fc408
        test    al, al
        jz      cleanup_string
        lea     eax, [esp + 0xb4]
        push    eax
        call FUN_006fbba3
        cmp     eax, 0x1400
        jnc     cleanup_string
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    ecx
        lea     ecx, [esp + 0x8c]
        call FUN_10041dd86
        mov     edx, dword ptr [esp + 0xa0]
        mov     eax, dword ptr [esp + 0x98]
        push    edx
        push    eax
        call FUN_0072de11
        test    al, al
        jz      cleanup_sub
        push    0x01
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x34]
        call FUN_10041ef09
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        lea     eax, [esp + 0xb8]
        push    eax
        lea     ecx, [esp + 0x34]
        call FUN_10041eef3
        cmp     byte ptr [esi + 0x16], bl
        mov     dword ptr [esp + 0x20], ebx
        jz      no_weapon
        lea     ecx, [esp + 0xb4]
        push    ecx
        mov     ecx, esi
        call FUN_1005325eb
        cmp     eax, ebx
        jz      store_result
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x20], edx
        jmp     store_result

no_weapon:
        mov ecx, dword ptr [DAT_007dd268]
        cmp     ecx, ebx
        mov     eax, 0x76ba64
        jz      got_name_ptr
        mov     ecx, dword ptr [ecx + 0x40ee8]
        cmp     ecx, ebx
        jz      got_name_ptr
        mov     eax, dword ptr [ecx + 0x54]
        mov     ecx, dword ptr [esi + 0x9c]
        mov     eax, dword ptr [ecx + eax*0x4]

got_name_ptr:
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x18], ecx
        jz      skip_inc_ref
        inc     byte ptr [ecx - 0x01]

skip_inc_ref:
        push    eax
        lea     ecx, [esp + 0x20]
        call FUN_1004123c9
        lea     ecx, [esp + 0x18]
        call FUN_100412810
        lea     ecx, [esp + 0x18]
        call FUN_100412797
        lea     ecx, [esp + 0x1c]
        call FUN_004129C0
        lea     ecx, [esp + 0x1c]
        call FUN_100412785
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, edi

strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     strcmp_diff
        cmp     cl, bl
        jz      strcmp_eq
        mov     dl, byte ptr [eax + 0x01]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x01]
        jnz     strcmp_diff
        add     eax, 0x02
        add     esi, 0x02
        cmp     cl, bl
        jnz     strcmp_loop

strcmp_eq:
        xor     eax, eax
        jmp     strcmp_done

strcmp_diff:
        sbb     eax, eax
        sbb     eax, -0x01

strcmp_done:
        xor     ecx, ecx
        cmp     eax, ebx
        setz    cl
        cmp     edi, ebx
        mov     dword ptr [esp + 0x20], ecx
        jz      skip_refcount_a
        mov     cl, byte ptr [edi - 0x01]
        lea     eax, [edi - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount_a
        push    eax
        call FUN_1004082c1
        add     esp, 0x04

skip_refcount_a:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      skip_refcount_b
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount_b
        push    eax
        call FUN_1004082a6
        add     esp, 0x04

skip_refcount_b:
        mov     esi, dword ptr [esp + 0x24]

store_result:
        push    0x01
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x34]
        call FUN_10041eddf
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    eax
        lea     ecx, [esp + 0x5c]
        call FUN_10041dc20
        mov     ecx, dword ptr [esp + 0x70]
        push    0x04
        lea     edx, [esp + 0x2c]
        mov     dword ptr [esp + 0x2c], ecx
        push    edx
        lea     ecx, [esp + 0x34]
        call FUN_10041edb8
        mov     eax, dword ptr [esp + 0x70]
        push    eax
        lea     ecx, [esp + 0x30]
        call FUN_10041ed0a
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x40]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x5c]
        call FUN_10041de77
        mov     eax, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x70]
        mov     ecx, dword ptr [esp + 0x44]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x40], eax
        jbe     skip_max_update
        mov     dword ptr [esp + 0x44], eax

skip_max_update:
        lea     ecx, [esp + 0x54]
        call FUN_10041dc04

cleanup_sub:
        lea     ecx, [esp + 0x84]
        call FUN_10041dbf8

cleanup_string:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      skip_refcount_c
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount_c
        push    eax
        call FUN_100408200
        add     esp, 0x04

skip_refcount_c:
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call dword ptr [eax + 0x08]
        test    eax, eax
        jnz     loop_top

calc_diff:
        mov     eax, dword ptr [esp + 0x44]
        sub     eax, dword ptr [esp + 0x3c]
        jz      skip_update
        mov edx, dword ptr [DAT_007dab44]
        mov edi, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [esp + 0x1b8]
        lea     ecx, [eax*0x8 + 0x0]
        mov     eax, dword ptr [edx]
        xor     eax, edi
        lea     edx, [eax + 0x14]
        mov     eax, dword ptr [edx]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     ebx, dword ptr [eax + esi*0x4 + 0x3c44]
        add     eax, 0x3c3c
        add     ebx, ecx
        mov     dword ptr [eax + esi*0x4 + 0x08], ebx
        mov     edi, dword ptr [eax + 0xc00]
        add     edi, ecx
        push    0x01
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, dword ptr [edx]
        push    0x26
        push    esi
        xor     ecx, 0x85739531
        mov     dword ptr [eax + 0xc00], edi
        call FUN_1004cde2e

skip_update:
        lea     ecx, [esp + 0x2c]
        call FUN_10041ebf5
        pop     edi
        pop     ebp

skip_all:
        pop     esi
        pop     ebx
        add     esp, 0x1a4
        ret     0x08
    }


}
