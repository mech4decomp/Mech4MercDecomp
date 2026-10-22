/*
 * FUN_005852f0 (894 B) — __thiscall, ret 0x8 (one double param on stack).
 * Updates object state based on a time delta (double).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_005852f0(void)
{
    

extern void __cdecl FUN_10041944b(void);
extern int DAT_0076d070;
extern void __cdecl FUN_10041c5f9(void);
extern int DAT_0078229c;
extern int DAT_00782298;
extern void __cdecl FUN_10041ab7d(void);
extern void __cdecl FUN_10040c962(void);
extern int DAT_0076d064;
extern int DAT_007b8d08;
extern int DAT_007b8d0c;
extern int DAT_007b8d10;
extern int DAT_00770168;
extern void __cdecl FUN_100419e47(void);
extern int DAT_007dc728;
extern void __cdecl FUN_1004e2d04(void);
extern void __cdecl FUN_10041c42c(void);
extern int DAT_0076c5b0;
extern void __cdecl FUN_10040c709(void);
extern void __cdecl FUN_10041c360(void);
extern void __cdecl FUN_1004da6e2(void);
extern void __cdecl FUN_1004da6b9(void);
__asm {
sub     esp, 0xC8
        fld     qword ptr [esp + 0xCC]          ; param_1 (double)
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx                        ; esi = this
        fsub    qword ptr [esi + 0xE4]          ; - this->field_E4
        mov     ebx, [esi + 0xD8]               ; ebx = this->field_D8
        mov     eax, [esi + 0x170]              ; eax = this->field_170
        push    edi
        add     ebx, 0x80                       ; ebx = &this->field_D8 + 0x80
        fstp    dword ptr [esp + 0x10]          ; local_c8 = result
        push    ebx
        lea     ecx, [esp + 0x18]
        mov     [esi + 0x440], eax              ; this->field_440 = old field_170
        ; call FUN_00419480
        call FUN_10041944b

        fld     dword ptr [esp + 0x10]          ; local_c8
        fmul dword ptr [DAT_0076d070]
        lea     edi, [esi + 0x168]              ; edi = &this->field_168
        push    ebx
        lea     ecx, [esp + 0x7C]
        fld st(0)
        push    ecx
        fmul    dword ptr [esi + 0x180]         ; * this->field_180
        lea     ecx, [esp + 0x28]
        fadd    dword ptr [edi]                 ; + this->field_168
        fstp    dword ptr [esp + 0x80]          ; local_60
        fld st(0)
        fmul    dword ptr [esi + 0x184]         ; * this->field_184
        fadd    dword ptr [edi + 4]             ; + this->field_16C
        fstp    dword ptr [esp + 0x84]          ; local_5c
        fmul    dword ptr [esi + 0x188]         ; * this->field_188
        fadd    dword ptr [edi + 8]             ; + this->field_170
        fstp    dword ptr [esp + 0x88]          ; local_58
        ; call FUN_0041c680
        call FUN_10041c5f9

        fld     dword ptr [esp + 0x10]          ; local_c8
        fmul dword ptr [DAT_0078229c]
        fld     dword ptr [esp + 0x24]          ; local_b4
        fcomp
        fnstsw  ax
        test    ah, 0x41
        jnz     label_1
        fstp    dword ptr [esp + 0x24]          ; local_b4 = local_c8 * DAT
        jmp     label_2
label_1:
        fstp st(0)
label_2:
        fld     dword ptr [esp + 0x24]          ; local_b4
        fcomp dword ptr [DAT_00782298]
        fnstsw  ax
        test    ah, 1
        jz      label_3
        mov     dword ptr [esp + 0x24], 0xC2200000  ; local_b4 = -40.0
label_3:
        fld     dword ptr [esi + 0x16C]         ; this->field_16C
        fcomp dword ptr [DAT_00782298]
        fnstsw  ax
        test    ah, 1
        jz      label_4
        mov     byte ptr [esi + 0x525], 1       ; this->field_525 = 1
label_4:
        fld     dword ptr [esp + 0x20]          ; local_b8
        xor     ebp, ebp
        fmul    dword ptr [esp + 0x10]          ; * local_c8
        push    ebx
        lea     ecx, [esp + 0x30]
        mov     [edi], ebp                      ; this->field_168 = 0
        fadd    dword ptr [esp + 0x18]          ; + local_c0
        mov     [esi + 0x170], ebp              ; this->field_170 = 0
        fstp    dword ptr [esp + 0x18]          ; local_c0
        fld     dword ptr [esp + 0x28]          ; local_b0
        fmul    dword ptr [esp + 0x14]          ; * local_c4
        fadd    dword ptr [esp + 0x1C]          ; + local_b8
        fstp    dword ptr [esp + 0x1C]          ; local_b8
        fld     dword ptr [esp + 0x2C]          ; local_a8
        fmul    dword ptr [esp + 0x14]          ; * local_c4
        fadd    dword ptr [esp + 0x20]          ; + local_b4
        fstp    dword ptr [esp + 0x20]          ; local_b4
        fld     dword ptr [esp + 0x14]          ; local_c4
        fmul    dword ptr [esi + 0x184]         ; * this->field_184
        fadd    dword ptr [esi + 0x16C]         ; + this->field_16C
        fstp    dword ptr [esi + 0x16C]         ; this->field_16C
        ; call FUN_0041acb0
        call FUN_10041ab7d

        mov     edx, [esi]                      ; vtable
        lea     eax, [esp + 0x54]               ; &local_78
        push    eax
        mov     eax, [esp + 0x14]               ; local_c4
        lea     ecx, [esp + 0x64]               ; &local_84
        push    ecx
        push    eax                             ; local_c4
        mov     ecx, esi
        mov     [esp + 0x38], ebp               ; local_ac = 0
        mov     [esp + 0x3C], ebp               ; local_a8 = 0
        mov     [esp + 0x40], ebp               ; local_a4 = 0
        call    dword ptr [edx + 0x164]         ; vtable->method_164
        test    al, al
        jz      label_5
        mov     ecx, [esp + 0x58]               ; fStack_8c
        mov     edx, [esp + 0x54]               ; uStack_90
        mov     eax, [esp + 0x5C]               ; uStack_88
        mov     [esp + 0x30], ecx               ; local_b4 = fStack_8c
        mov     ecx, [esp + 0x60]               ; fStack_7c
        mov     [esp + 0x2C], edx               ; local_b8 = uStack_90
        mov     edx, [esp + 0x64]               ; fStack_80
        mov     [esp + 0x34], eax               ; local_b0 = uStack_88
        mov     eax, [esp + 0x68]               ; unaff_EBX
        mov     [esp + 0x14], ecx               ; local_c4 = fStack_7c
        mov     [esp + 0x18], edx               ; local_c0 = fStack_80
        mov     [esp + 0x1C], eax               ; local_b8 = unaff_EBX
label_5:
        mov     ecx, 0x7B8D08
        mov     dword ptr [esp + 0x50], 0x41200419  ; fStack_94 = 10.001f
        ; call FUN_0040cb00
        call FUN_10040c962

        fsqrt
        mov     ecx, [esp + 0x14]               ; local_c4
        mov     edx, [esp + 0x1C]               ; local_b8
        mov     [esp + 0x38], ecx               ; local_ac = local_c4
        mov     [esp + 0x40], edx               ; local_a4 = local_b8
        lea     ecx, [esp + 0xCC]               ; &param_1 (original stack slot)
        lea     edx, [esp + 0x2C]               ; &local_ac
        lea     eax, [esp + 0x38]               ; &local_b8
        mov     [esp + 0x88], ecx               ; local_60 = &param_1
        push    edx
        lea     ecx, [esp + 0xA0]
        mov     [esp + 0x88], eax               ; local_60 = &local_b8
        mov     [esp + 0x90], ebp               ; local_58 = 0
        mov     [esp + 0x98], esi               ; piStack_50 = this
        mov     dword ptr [esp + 0x9C], 0x1000  ; uStack_4c = 0x1000
        fdivr dword ptr [DAT_0076d064]
        fld st(0)
        fmul dword ptr [DAT_007b8d08]
        fstp    dword ptr [esp + 0x48]          ; fStack_a0
        fld st(0)
        fmul dword ptr [DAT_007b8d0c]
        fstp    dword ptr [esp + 0x4C]          ; fStack_9c
        fmul dword ptr [DAT_007b8d10]
        fstp    dword ptr [esp + 0x50]          ; fStack_98
        fld     dword ptr [esp + 0x1C]          ; local_b8
        fadd dword ptr [DAT_00770168]
        fstp    dword ptr [esp + 0x40]          ; local_a8
        ; call FUN_0041a070
        call FUN_100419e47

        mov ecx, dword ptr [DAT_007dc728]
        lea     eax, [esp + 0x84]
        push    eax
        ; call FUN_004e2f40
        call FUN_1004e2d04

        test    eax, eax
        jnz     label_6

        ; if (FUN_004e2f40 returned 0)
        push    ebx
        push    edi
        lea     ecx, [esi + 0x198]
        mov     byte ptr [esi + 0x4BC], 0x18
        ; call FUN_0041c680
        call FUN_10041c42c

        fld     dword ptr [esi + 0x19C]         ; this->field_19C
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_7
        mov     [esi + 0x19C], ebp              ; this->field_19C = 0
label_7:
        mov     ecx, [esp + 0x14]               ; local_c4
        mov     edx, [esp + 0x18]               ; local_c0
        mov     eax, [esp + 0x1C]               ; local_b8
        mov     [esp + 0xA8], ecx               ; fStack_1c = local_c4
        mov     [esp + 0xB8], edx               ; fStack_2c = local_c0
        mov     [esp + 0xC8], eax               ; (stack slot)
        jmp     label_8

label_6:
        ; if (FUN_004e2f40 returned non-zero)
        fld     dword ptr [esp + 0x44]          ; fStack_94
        mov     cl, byte ptr [esp + 0x90]       ; uStack_54
        fmul    dword ptr [esp + 0x50]          ; * fStack_98
        lea     edx, [esp + 0x6C]
        push    edx
        lea     eax, [esp + 0x3C]
        fstp    dword ptr [esp + 0x70]          ; local_78
        mov     byte ptr [esi + 0x4BC], cl      ; this->field_4BC = uStack_54
        fld     dword ptr [esp + 0x4C]          ; fStack_9c
        push    eax
        fmul    dword ptr [esp + 0x58]          ; * fStack_94
        lea     ecx, [esp + 0x1C]
        fstp    dword ptr [esp + 0x78]          ; fStack_74
        fld     dword ptr [esp + 0x54]          ; fStack_a0
        fmul    dword ptr [esp + 0x58]          ; * fStack_94
        fstp    dword ptr [esp + 0x7C]          ; fStack_70
        ; call FUN_0040c9e0
        call FUN_10040c709

        mov     edx, [esp + 0x18]               ; local_c0
        mov     ecx, [esp + 0x14]               ; local_c4
        mov     eax, [esp + 0x1C]               ; local_b8
        mov     [esp + 0xA8], ecx               ; fStack_1c = local_c4
        mov     ecx, [esi + 0x440]              ; this->field_440
        mov     [esp + 0xB8], edx               ; fStack_2c = local_c0
        lea     edx, [esp + 0x9C]
        push    edx
        mov     [esi + 0x170], ecx              ; this->field_170 = old field_440
        push    edi
        lea     ecx, [esi + 0x198]
        mov     [esp + 0xD0], eax               ; (stack slot)
        mov     [edi], ebp                      ; this->field_168 = 0
        mov     [esi + 0x16C], ebp              ; this->field_16C = 0
        ; call FUN_0041c680
        call FUN_10041c360

        fld     dword ptr [esp + 0x3C]          ; local_a8
        fsub    dword ptr [esp + 0x50]          ; - fStack_94
        lea     eax, [esp + 0x9C]
        push    eax
        mov     ecx, esi
        fstp    dword ptr [esp + 0xBC]          ; fStack_2c
        ; call FUN_004daa20
        call FUN_1004da6e2

        mov     ecx, [esi + 0xE0]
        mov     edx, [ecx]
        push    ebp
        push    0xB
        mov     [esi + 0x16C], ebp
        mov     [esi + 0x19C], ebp
        call    dword ptr [edx + 4]             ; vtable->method_04(0xB, 0)

label_8:
        lea     eax, [esp + 0x9C]
        push    eax
        mov     ecx, esi
        ; call FUN_004daa20
        call FUN_1004da6b9

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC8
        ret     8
    }


}
