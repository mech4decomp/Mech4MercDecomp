/*
 * FUN_00551c60 (1860 B) — Complex animation/position update function.
 *
 * Updates position state (this+0x64c..0x688) based on time delta,
 * collision state, and various conditions. Calls into iterator helpers
 * (FUN_0041fd80, FUN_0041fcb0, FUN_0041fcd0), math helpers
 * (FUN_0040ca40, FUN_0040cbb0, FUN_0040c9e0, FUN_0041c830),
 * and virtual dispatch at vtable+0x48.
 *
 * __thiscall (ECX = this), RET 8 (one double param on stack)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0041fd80(void);
extern double __stdcall FUN_00707e70(int param);
extern float __stdcall FUN_00552800(void);
extern int __stdcall FUN_00415230(int param1, int param2);
extern int __stdcall FUN_00551c20(int param);
extern int __stdcall FUN_0063b840(int param1, int param2);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(int param);
extern void __stdcall FUN_0040ca40(void *param1, void *param2);
extern void __stdcall FUN_0040cbb0(void *param1, void *param2, void *param3);
extern void __stdcall FUN_0040c9e0(void *param1, void *param2, void *param3);
extern void __stdcall FUN_0041c830(void *param1, void *param2);
extern void __stdcall FUN_00627290(int param1, int param2);
extern void __stdcall FUN_00559be0(int param);

__declspec(naked) void __stdcall FUN_00551c60(void)
{
    

extern int DAT_007dc700;
extern int DAT_007f25c0;
extern int DAT_0076d59c;
extern int DAT_0077d0f0;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076c5b0;
extern int DAT_0076d588;
extern int DAT_0077d0e8;
extern int DAT_0076d970;
extern int DAT_007704c0;
extern int DAT_007b8d8c;
extern int DAT_007b8d88;
extern int DAT_007b8d90;
extern int DAT_0077d038;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x3c
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esi + 0x65c]
        call    FUN_0041fd80
        mov     edi, eax
        push    0x00
        mov     dword ptr [esp + 0x14], edi
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x18]
        fld     qword ptr [ebp + 0x08]
        mov     ecx, esi
        fsub    qword ptr [esi + 0xe4]
        fstp    qword ptr [esp + 0x20]
        call    FUN_00552800
        fstp    dword ptr [esp + 0x0c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x64c], eax
        xor     eax, eax
        test    ebx, ebx
        mov     dword ptr [esi + 0x650], ecx
        jz      label_0x551d12
        mov     edx, dword ptr [ebx + 0x410]
        mov     ecx, dword ptr [ebx + 0x40c]
        sub     edx, ecx
        sar     edx, 0x02
        jz      label_0x551cdd
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x14], edx
        jmp     label_0x551ce5

label_0x551cdd:
        mov     dword ptr [esp + 0x14], 0x00000000

label_0x551ce5:
        mov     ecx, dword ptr [ebx + 0x3d4]
        test    ecx, ecx
        jz      label_0x551cf4
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x64]

label_0x551cf4:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jz      label_0x551d09
        cmp     dword ptr [ecx + 0x1e0], 0x04
        jz      label_0x552301

label_0x551d09:
        cmp     eax, 0x01
        jz      label_0x552301

label_0x551d12:
        mov     al, byte ptr [ebx + 0x2f8]
        test    al, al
        jnz     label_0x552301
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     label_0x552301
        test    edi, edi
        jz      label_0x5521c6
        mov eax, dword ptr [DAT_007dc700]
        mov     ecx, dword ptr [edi + 0x04]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     label_0x5521c6
        push    edi
        mov     ecx, esi
        call    FUN_00551c20
        mov     ebx, eax
        test    ebx, ebx
        jz      label_0x551d6e
        mov     eax, dword ptr [esi + 0x384]
        test    eax, eax
        jz      label_0x551d6e
        push    ebx
        push    eax
        call    FUN_0063b840
        add     esp, 0x08

label_0x551d6e:
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [ebx + 0x04]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      label_0x55201b
        lea     edi, [esi + 0x688]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], eax
        call    FUN_0041fd80
        test    eax, eax
        jz      label_0x551da7
        mov     ecx, edi
        call    FUN_0041fcb0

label_0x551da7:
        push    ebx
        mov     ecx, edi
        call    FUN_0041fcd0
        lea     edi, [esi + 0x66c]
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0x298]
        fld     dword ptr [eax + 0x18]
        push    ecx
        add     eax, 0x0c
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0040ca40
        mov     eax, dword ptr [esi + 0x298]
        lea     edx, [esp + 0x30]
        push    edx
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_0040cbb0
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 0xd8]
        add     edx, 0x80
        push    edx
        lea     eax, [esp + 0x40]
        lea     ecx, [esi + 0x674]
        push    eax
        call    FUN_0041c830
        cmp     ebx, dword ptr [esp + 0x14]
        jnz     label_0x551f72
        fld     qword ptr [esp + 0x20]
        fadd    qword ptr [esi + 0x654]
        fst     qword ptr [esi + 0x654]
        fld     dword ptr [esp + 0x0c]
        fadd dword ptr [DAT_0076d59c]
        fst     dword ptr [esp + 0x14]
        fxch    st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x551e55
        fld     dword ptr [esp + 0x14]
        fstp    qword ptr [esi + 0x654]

label_0x551e55:
        lea     ecx, [esi + 0x664]
        call    FUN_0041fd80
        cmp     eax, ebx
        jnz     label_0x551ea9
        fld     dword ptr [esp + 0x0c]
        mov     eax, dword ptr [esi + 0x564]
        test    eax, eax
        fsubr   qword ptr [esp + 0x18]
        fsub qword ptr [DAT_0077d0f0]
        fstp    qword ptr [esi + 0x64c]
        jz      label_0x551e8b
        cmp     eax, 0x04
        jnz     label_0x552367

label_0x551e8b:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x40]
        lea     ecx, [edx + 0x40]
        xor     eax, 0x85739531
        jmp     label_0x552257

label_0x551ea9:
        fld     dword ptr [esp + 0x0c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x01
        jnz     label_0x552367
        fld     dword ptr [esp + 0x0c]
        fcomp   qword ptr [esi + 0x654]
        fnstsw  ax
        test    ah, 0x41
        jz      label_0x552367
        lea     ecx, [esi + 0x664]
        call    FUN_0041fcb0
        push    ebx
        lea     ecx, [esi + 0x664]
        call    FUN_0041fcd0
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ebx, dword ptr [esp + 0x10]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fcd0
        fld     dword ptr [esp + 0x0c]
        fsubr   qword ptr [esp + 0x18]
        mov     edi, dword ptr [esi + 0x298]
        push    ecx
        lea     ecx, [edi + 0x0c]
        fsub qword ptr [DAT_0077d0f0]
        fstp    qword ptr [esi + 0x64c]
        fld     dword ptr [edi + 0x18]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0040ca40
        lea     edx, [esp + 0x30]
        push    edx
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9e0
        mov     eax, dword ptr [ebx + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esi + 0x674]
        call    FUN_0041c830
        mov     eax, dword ptr [esi + 0x564]
        test    eax, eax
        jz      label_0x55223d
        cmp     eax, 0x04
        jnz     label_0x552367
        jmp     label_0x55223d

label_0x551f72:
        lea     ecx, [esi + 0x680]
        call    FUN_0041fcb0
        push    ebx
        lea     ecx, [esi + 0x680]
        call    FUN_0041fcd0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x64c], eax
        xor     eax, eax
        mov     dword ptr [esi + 0x650], ecx
        mov     dword ptr [esi + 0x654], eax
        lea     ecx, [esi + 0x664]
        mov     dword ptr [esi + 0x658], eax
        call    FUN_0041fcb0
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ebx, dword ptr [esp + 0x10]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0x298]
        fld     dword ptr [eax + 0x18]
        lea     edx, [esp + 0x20]
        fld     st(0)
        push    edx
        fmul    dword ptr [eax + 0x0c]
        push    eax
        lea     ecx, [esp + 0x38]
        fstp    dword ptr [esp + 0x28]
        fld     st(0)
        fmul    dword ptr [eax + 0x10]
        fstp    dword ptr [esp + 0x2c]
        fmul    dword ptr [eax + 0x14]
        fstp    dword ptr [esp + 0x30]
        call    FUN_0040c9e0
        mov     eax, dword ptr [ebx + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esi + 0x674]
        call    FUN_0041c830
        jmp     label_0x552367

label_0x55201b:
        lea     edi, [esi + 0x664]
        mov     ecx, edi
        call    FUN_0041fd80
        fld     qword ptr [esp + 0x20]
        test    eax, eax
        jz      label_0x552156
        fmul qword ptr [DAT_0076d588]
        fsubr   qword ptr [esi + 0x654]
        fst     qword ptr [esi + 0x654]
        fcomp qword ptr [DAT_0077d0e8]
        fnstsw  ax
        test    ah, 0x01
        jz      label_0x552067
        mov     dword ptr [esi + 0x654], 0xe0000000
        mov     dword ptr [esi + 0x658], 0xbf1a36e2

label_0x552067:
        fld     qword ptr [esi + 0x654]
        fcomp qword ptr [DAT_0076d970]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x5520e4
        mov edx, dword ptr [DAT_007dab44]
        fld     dword ptr [esp + 0x0c]
        mov     eax, dword ptr [edx]
        fsubr   qword ptr [esp + 0x18]
        xor eax, dword ptr [DAT_007dab40]
        fsub qword ptr [DAT_0077d0f0]
        mov     edx, dword ptr [eax + 0x40]
        xor     edx, 0x85739531
        lea     ecx, [eax + 0x40]
        fstp    qword ptr [esi + 0x64c]
        jz      label_0x552367
        fld     dword ptr [esp + 0x0c]
        fcomp dword ptr [DAT_007704c0]
        fnstsw  ax
        test    ah, 0x01
        jnz     label_0x55239b
        mov     ecx, dword ptr [ecx]
        push    0x01
        xor     ecx, 0x85739531
        call    FUN_00627290
        push    0x0b
        mov     ecx, esi
        call    FUN_00559be0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x08

label_0x5520e4:
        mov     ecx, edi
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x66c]
        call    FUN_0041fcb0
        mov ecx, dword ptr [DAT_007b8d8c]
        mov eax, dword ptr [DAT_007b8d88]
        mov edx, dword ptr [DAT_007b8d90]
        mov     dword ptr [esi + 0x678], ecx
        lea     ecx, [esi + 0x680]
        mov     dword ptr [esi + 0x674], eax
        mov     dword ptr [esi + 0x67c], edx
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x688]
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x64c], eax
        xor     eax, eax
        mov     dword ptr [esi + 0x654], eax
        mov     dword ptr [esi + 0x650], ecx
        mov     dword ptr [esi + 0x658], eax
        jmp     label_0x552367

label_0x552156:
        fmul qword ptr [DAT_0077d038]
        lea     ecx, [esi + 0x66c]
        fsubr   qword ptr [esi + 0x654]
        fstp    qword ptr [esi + 0x654]
        call    FUN_0041fcb0
        fld     qword ptr [esi + 0x654]
        mov eax, dword ptr [DAT_007b8d8c]
        fcomp qword ptr [DAT_0077d0e8]
        mov edx, dword ptr [DAT_007b8d88]
        mov ecx, dword ptr [DAT_007b8d90]
        mov     dword ptr [esi + 0x678], eax
        mov     dword ptr [esi + 0x674], edx
        fnstsw  ax
        mov     dword ptr [esi + 0x67c], ecx
        test    ah, 0x01
        jz      label_0x552367
        mov     dword ptr [esi + 0x654], 0xe0000000
        mov     dword ptr [esi + 0x658], 0xbf1a36e2
        jmp     label_0x552367

label_0x5521c6:
        lea     edi, [esi + 0x664]
        mov     ecx, edi
        call    FUN_0041fd80
        fld     qword ptr [esp + 0x20]
        test    eax, eax
        jz      label_0x552293
        fmul qword ptr [DAT_0076d588]
        fsubr   qword ptr [esi + 0x654]
        fst     qword ptr [esi + 0x654]
        fcomp qword ptr [DAT_0077d0e8]
        fnstsw  ax
        test    ah, 0x01
        jz      label_0x552212
        mov     dword ptr [esi + 0x654], 0xe0000000
        mov     dword ptr [esi + 0x658], 0xbf1a36e2

label_0x552212:
        fld     qword ptr [esi + 0x654]
        fcomp qword ptr [DAT_0076d970]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_0x5520e4
        fld     dword ptr [esp + 0x0c]
        fsubr   qword ptr [esp + 0x18]
        fsub qword ptr [DAT_0077d0f0]
        fstp    qword ptr [esi + 0x64c]

label_0x55223d:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0x40]
        lea     ecx, [eax + 0x40]
        xor     edx, 0x85739531

label_0x552257:
        jz      label_0x552367
        fld     dword ptr [esp + 0x0c]
        fcomp dword ptr [DAT_007704c0]
        fnstsw  ax
        test    ah, 0x01
        jnz     label_0x55239b
        mov     ecx, dword ptr [ecx]
        push    0x01
        xor     ecx, 0x85739531
        call    FUN_00627290
        push    0x0b
        mov     ecx, esi
        call    FUN_00559be0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x08

label_0x552293:
        fmul qword ptr [DAT_0077d038]
        fsubr   qword ptr [esi + 0x654]
        fst     qword ptr [esi + 0x654]
        fcomp qword ptr [DAT_0077d0e8]
        fnstsw  ax
        test    ah, 0x01
        jz      label_0x5522c6
        mov     dword ptr [esi + 0x654], 0xe0000000
        mov     dword ptr [esi + 0x658], 0xbf1a36e2

label_0x5522c6:
        lea     ecx, [esi + 0x680]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x66c]
        call    FUN_0041fcb0
        mov edx, dword ptr [DAT_007b8d88]
        mov eax, dword ptr [DAT_007b8d8c]
        mov ecx, dword ptr [DAT_007b8d90]
        mov     dword ptr [esi + 0x674], edx
        mov     dword ptr [esi + 0x678], eax
        mov     dword ptr [esi + 0x67c], ecx
        jmp     label_0x552367

label_0x552301:
        lea     ecx, [esi + 0x680]
        call    FUN_0041fcb0
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x64c], edx
        mov     dword ptr [esi + 0x650], eax
        xor     eax, eax
        mov     dword ptr [esi + 0x654], eax
        lea     ecx, [esi + 0x664]
        mov     dword ptr [esi + 0x658], eax
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x66c]
        call    FUN_0041fcb0
        mov ecx, dword ptr [DAT_007b8d88]
        mov edx, dword ptr [DAT_007b8d8c]
        mov eax, dword ptr [DAT_007b8d90]
        mov     dword ptr [esi + 0x674], ecx
        mov     dword ptr [esi + 0x678], edx
        mov     dword ptr [esi + 0x67c], eax

label_0x552367:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x40]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x40]
        jz      label_0x55239b
        mov     ecx, dword ptr [eax]
        push    0x00
        xor     ecx, 0x85739531
        call    FUN_00627290
        push    0x0c
        mov     ecx, esi
        call    FUN_00559be0

label_0x55239b:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x08
    }


}
