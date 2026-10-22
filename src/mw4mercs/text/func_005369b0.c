// FUN_005369B0 (1077 bytes)
// __thiscall, standard cdecl (ret without cleanup)
// Game initialization / setup function
__declspec(naked) void func_005369b0(void)
{
    

extern void __cdecl FUN_10052dfff(void);
extern void __cdecl FUN_10041253e(void);
extern void __cdecl FUN_006fc494(void);
extern void __cdecl FUN_006fb736(void);
extern void __cdecl FUN_100412581(void);
extern void __cdecl FUN_1004126d7(void);
extern void __cdecl FUN_10040d93e(void);
extern void __cdecl FUN_006fc454(void);
extern void __cdecl FUN_006fb6f6(void);
extern void __cdecl FUN_100412543(void);
extern void __cdecl FUN_100412699(void);
extern void __cdecl FUN_10040d900(void);
extern void __cdecl FUN_006fc416(void);
extern void __cdecl FUN_006fb6b8(void);
extern void __cdecl FUN_10041249a(void);
extern void __cdecl FUN_1004124fb(void);
extern void __cdecl FUN_100412651(void);
extern void __cdecl FUN_1004083d7(void);
extern void __cdecl FUN_1004124c1(void);
extern void __cdecl FUN_100412617(void);
extern void __cdecl FUN_10040839f(void);
extern void __cdecl FUN_100408385(void);
extern void __cdecl FUN_10041d730(void);
extern int DAT_007dd268;
extern int DAT_007f1fb8;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004c8cd1(void);
extern void __cdecl FUN_100408304(void);
extern void __cdecl FUN_00614899(void);
extern void __cdecl FUN_1004c8cbd(void);
extern void __cdecl FUN_1004c8c32(void);
extern void __cdecl FUN_10041d8c8(void);
extern void __cdecl FUN_10041d99d(void);
extern void __cdecl FUN_1004122f3(void);
extern void __cdecl FUN_10041273a(void);
extern void __cdecl FUN_1004126c1(void);
extern void __cdecl FUN_100408237(void);
extern void __cdecl FUN_006147d4(void);
extern void __cdecl FUN_1004c8bf8(void);
extern void __cdecl FUN_100408205(void);
extern void __cdecl FUN_1004081cd(void);
extern void __cdecl FUN_00614dda(void);
extern void __cdecl FUN_1004c8b7e(void);
extern void __cdecl FUN_0059d0ad(void);
extern void __cdecl FUN_005978bf(void);
extern void __cdecl FUN_0059b661(void);
extern void __cdecl FUN_0059e7c3(void);
extern void __cdecl FUN_10041d6fc(void);
extern void __cdecl FUN_100408116(void);
extern void __cdecl FUN_1004080db(void);
extern void __cdecl FUN_1004080bc(void);
__asm {
sub     esp, 0x0c
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     esi, [ebp + 0x205d24]
        mov     edi, 0x18

init_loop:
        mov     ecx, esi
        call FUN_10052dfff
        add     esi, 0x22ac
        dec     edi
        jnz     init_loop

        mov     ecx, dword ptr [ebp + 0x50]
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax + 4]
        push    0x77a0c8
        lea     ecx, [esp + 0x14]
        call FUN_10041253e
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call FUN_006fc494
        test    al, al
        jnz     skip_load1
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call FUN_006fb736

skip_load1:
        mov     esi, dword ptr [ebp + 0xb0]
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        push    eax
        lea     ecx, [esp + 0x20]
        call FUN_100412581
        push    eax
        lea     ecx, [esp + 0x14]
        call FUN_1004126d7
        lea     ecx, [esp + 0x18]
        call FUN_10040d93e
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call FUN_006fc454
        test    al, al
        jnz     skip_load2
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call FUN_006fb6f6

skip_load2:
        mov     eax, dword ptr [esp + 0x10]
        push    0x77b634
        push    eax
        lea     ecx, [esp + 0x20]
        call FUN_100412543
        push    eax
        lea     ecx, [esp + 0x14]
        call FUN_100412699
        lea     ecx, [esp + 0x18]
        call FUN_10040d900
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call FUN_006fc416
        test    al, al
        jnz     skip_load3
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call FUN_006fb6b8

skip_load3:
        push    0x77a0c8
        lea     ecx, [esp + 0x18]
        call FUN_10041249a
        mov     eax, dword ptr [esp + 0x14]
        push    esi
        push    eax
        lea     ecx, [esp + 0x20]
        call FUN_1004124fb
        push    eax
        lea     ecx, [esp + 0x18]
        call FUN_100412651
        mov     eax, dword ptr [esp + 0x18]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      skip_free1
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free1
        push    eax
        call FUN_1004083d7
        add     esp, 0x04

skip_free1:
        mov     ecx, dword ptr [esp + 0x14]
        push    0x77a40c
        push    ecx
        lea     ecx, [esp + 0x20]
        call FUN_1004124c1
        push    eax
        lea     ecx, [esp + 0x18]
        call FUN_100412617
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      skip_free2
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free2
        push    eax
        call FUN_10040839f
        add     esp, 0x04

skip_free2:
        push    0x38
        call FUN_100408385
        add     esp, 0x04
        cmp     eax, ebx
        jz      alloc1_null
        mov     edx, dword ptr [esp + 0x14]
        push    0x01
        push    edx
        mov     ecx, eax
        call FUN_10041d730
        mov     edi, eax
        jmp     after_alloc1

alloc1_null:
        xor     edi, edi

after_alloc1:
        mov eax, dword ptr [DAT_007dd268]
        cmp     byte ptr [eax + 0x40da4], bl
        mov ecx, dword ptr [DAT_007f1fb8]
        jz      flag_false

        cmp     ecx, ebx
        jz      skip_release1
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
        mov dword ptr [DAT_007f1fb8], ebx

skip_release1:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x44]
        jz      skip_release2
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call1
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]

skip_call1:
        push    0x11
        call FUN_1004c8cd1
        add     esp, 0x04

skip_release2:
        push    0x84
        call FUN_100408304
        add     esp, 0x04
        cmp     eax, ebx
        jz      alloc2_null
        mov ecx, dword ptr [DAT_007dd268]
        add     ecx, 0x40da5
        push    ecx
        mov     ecx, eax
        call FUN_00614899
        jmp     after_alloc2

alloc2_null:
        xor     eax, eax

after_alloc2:
        push    0x11
        push    eax
        call FUN_1004c8cbd
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        add     esp, 0x08
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x34]
        mov dword ptr [DAT_007f1fb8], edx
        jmp     after_flag

flag_false:
        cmp     ecx, ebx
        jz      skip_release3
        mov     eax, dword ptr [ecx]
        push    0x01
        call    dword ptr [eax]
        mov dword ptr [DAT_007f1fb8], ebx

skip_release3:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x44]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x44]
        jz      skip_release4
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      skip_call2
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]

skip_call2:
        push    0x11
        call FUN_1004c8c32
        add     esp, 0x04

skip_release4:
        mov     ecx, edi
        call FUN_10041d8c8
        test    eax, eax
        jz      skip_iterate
        mov     ecx, edi
        call FUN_10041d99d
        push    eax
        lea     ecx, [esp + 0x1c]
        call FUN_1004122f3
        lea     ecx, [esp + 0x18]
        call FUN_10041273a
        lea     ecx, [esp + 0x18]
        call FUN_1004126c1
        push    0x84
        call FUN_100408237
        add     esp, 0x04
        cmp     eax, ebx
        jz      alloc3_null
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call FUN_006147d4
        jmp     after_alloc3

alloc3_null:
        xor     eax, eax

after_alloc3:
        push    0x11
        push    eax
        call FUN_1004c8bf8
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x08
        cmp     eax, ebx
        jz      after_flag
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     after_flag
        push    eax
        call FUN_100408205
        add     esp, 0x04
        jmp     after_flag

skip_iterate:
        mov ecx, dword ptr [DAT_007f1fb8]
        cmp     ecx, ebx
        jz      skip_release5
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx]
        mov dword ptr [DAT_007f1fb8], ebx

skip_release5:
        push    0x84
        call FUN_1004081cd
        mov     esi, eax
        add     esp, 0x04
        cmp     esi, ebx
        jz      alloc4_null
        mov     eax, dword ptr [ebp]
        push    0x77b628
        push    0x511c
        mov     ecx, ebp
        call    dword ptr [eax + 0x34]
        push    eax
        mov     ecx, esi
        call FUN_00614dda
        jmp     after_alloc4

alloc4_null:
        xor     eax, eax

after_alloc4:
        push    0x11
        push    eax
        call FUN_1004c8b7e
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        add     esp, 0x08
        call FUN_0059d0ad
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x34]
        call FUN_005978bf
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x20]
        call FUN_0059b661
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x2c]
        call FUN_0059e7c3

after_flag:
        cmp     edi, ebx
        mov ecx, dword ptr [DAT_007dd268]
        mov     byte ptr [ecx + 0x40da4], bl
        jz      skip_free_edi
        mov     ecx, edi
        call FUN_10041d6fc
        push    edi
        call FUN_100408116
        add     esp, 0x04

skip_free_edi:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        mov     eax, dword ptr [esp + 0x14]
        xor     ecx, 0x85739531
        cmp     eax, ebx
        mov     edx, dword ptr [ecx + 0x34]
        mov dword ptr [DAT_007f1fb8], edx
        jz      skip_free3
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free3
        push    eax
        call FUN_1004080db
        add     esp, 0x04

skip_free3:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        cmp     eax, ebx
        pop     ebx
        jz      skip_free4
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free4
        push    eax
        call FUN_1004080bc
        add     esp, 0x04

skip_free4:
        add     esp, 0x0c
        ret
    }


}
