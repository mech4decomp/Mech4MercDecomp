/*
 * FUN_005ca800 (1146 B) — __thiscall. Complex loader/processor with
 * FPU math, two growable float arrays, and several virtual calls.
 *
 * __thiscall (ECX = this), no stack args, RET. Returns int in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_005fb8e0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_005b9560(void);
extern void __cdecl FUN_005c0d10(void);
extern void __cdecl FUN_005cb1e0(void);
extern void __cdecl FUN_005cbb00(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_005809d0(void);
extern void __cdecl FUN_005cb200(void);
extern void __cdecl FUN_00580560(void);
extern void __cdecl FUN_00547bc0(void);
extern void __cdecl FUN_005805a0(void);
extern void __cdecl FUN_005cb500(void);

__declspec(naked) int __stdcall FUN_005ca800(void)
{
    

extern int DAT_00779d28;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0078793c;
extern int DAT_007748c8;
extern int DAT_0076d598;
extern int DAT_007704c0;
extern int DAT_00787938;
extern int DAT_0076d070;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x68
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x170]
        mov     ecx, dword ptr [eax + 0xd8]
        push    esi
        add     ecx, 0x80
        push    edi
        push    ecx
        lea     ecx, [ebp - 0x50]
        mov     dword ptr [ebp - 0x24], ebx
        call    FUN_00419480
        lea     esi, [ebx + 0x1c8]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x20], 0x3f800000
        mov     dword ptr [ebp - 0x1c], 0xbf800000
        mov     dword ptr [ebp - 0x18], esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_A8A5
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x68]
        call    FUN_00419480
        lea     edx, [ebp - 0x68]
        push    edx
        lea     eax, [ebp - 0x50]
        push    eax
        lea     ecx, [ebp - 0x5c]
        call    FUN_0040ca10
        lea     ecx, [ebp - 0x5c]
        call    FUN_0040cb00
        fstp    dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x20]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x1c], eax
        fld     dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x20]
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_005fb8e0
        fstp    dword ptr [ebp - 0x1c]
L_A8A5:
        push    0x0
        call    FUN_00707e70
        
        fsub qword ptr [DAT_00779d28]
        fld     dword ptr [ebx + 0x1d8]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_A93E
        
        mov ecx, dword ptr [DAT_007dab44]
        
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x10]
        xor     edx, 0x85739531
        jz      L_A93E
        mov     ecx, dword ptr [ebx + 0x1d4]
        cmp     ecx, -0x1
        jz      L_A93E
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      L_A93E
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L_A93E
        mov     edi, dword ptr [ebx + 0x170]
        cmp     esi, edi
        jz      L_A93E
        test    edi, edi
        jz      L_A940
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x60]
        mov     edx, eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        mov     dword ptr [ebp - 0x14], edx
        call    dword ptr [eax + 0x60]
        mov     ecx, dword ptr [ebp - 0x14]
        cmp     ecx, eax
        jnz     L_A940
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0xc8]
        cmp     al, 0x1
        jnz     L_A940
L_A93E:
        xor     esi, esi
L_A940:
        lea     eax, [ebp - 0x1]
        push    eax
        lea     ecx, [ebp - 0x44]
        mov     dword ptr [ebp - 0x10], esi
        call    FUN_00580540
        mov     edx, dword ptr [ebx + 0x170]
        lea     ecx, [ebp - 0x44]
        push    ecx
        mov     ecx, dword ptr [edx + 0x3d4]
        call    FUN_005b9560
        push    eax
        call    FUN_005c0d10
        add     esp, 0x8
        lea     eax, [ebp - 0x1]
        push    eax
        lea     ecx, [ebp - 0x38]
        call    FUN_005cb1e0
        mov     edi, dword ptr [ebp - 0x44]
        cmp     edi, dword ptr [ebp - 0x40]
        jz      L_AB8C
        lea     ecx, [edi + 0x4]
        mov     dword ptr [ebp - 0x14], ecx
L_A98B:
        mov     ecx, dword ptr [ebp - 0x18]
        call    FUN_0041fd80
        test    eax, eax
        jz      L_AA35
        mov     ecx, dword ptr [ebp - 0x18]
        call    FUN_0041fd80
        cmp     dword ptr [edi], eax
        jnz     L_AA35
        mov     ecx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0xc], 0x3f800000
        call    FUN_0041fd80
        cmp     eax, esi
        jnz     L_A9E3
        test    esi, esi
        
        fld dword ptr [DAT_0078793c]
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        jz      L_A9E3
        cmp     byte ptr [esi + 0xdc], 0x1
        jnz     L_A9E3
        fld     dword ptr [ebp - 0xc]
        
        fmul dword ptr [DAT_007748c8]
        fstp    dword ptr [ebp - 0xc]
L_A9E3:
        mov     eax, dword ptr [ebp - 0x34]
        cmp     eax, dword ptr [ebp - 0x30]
        jz      L_AA12
        lea     edx, [ebp - 0xc]
        push    edx
        push    eax
        call    FUN_005cbb00
        mov     ecx, dword ptr [ebp - 0x34]
        mov     eax, dword ptr [ebp - 0x14]
        add     ecx, 0x4
        add     esp, 0x8
        add     edi, 0x4
        add     eax, 0x4
        mov     dword ptr [ebp - 0x34], ecx
        mov     dword ptr [ebp - 0x14], eax
        jmp     L_AB81
L_AA12:
        push    0x1
        lea     ecx, [ebp - 0xc]
        push    ecx
        push    eax
        lea     ecx, [ebp - 0x38]
        call    FUN_00566570
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x34]
        add     edi, 0x4
        add     eax, 0x4
        mov     dword ptr [ebp - 0x14], eax
        jmp     L_AB81
L_AA35:
        mov     ecx, dword ptr [ebx + 0x170]
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [edi]
        call    dword ptr [edx + 0x60]
        mov     ebx, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x60]
        cmp     eax, ebx
        jz      L_AB5A
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x60]
        test    eax, eax
        jz      L_AB5A
        mov     ecx, esi
        call    FUN_005fb8e0
        fcomp   dword ptr [ebp - 0x1c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_AB5A
        mov     ecx, esi
        call    FUN_005fb8e0
        
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_AB5A
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x5c]
        call    FUN_00419480
        lea     ecx, [ebp - 0x5c]
        push    ecx
        lea     edx, [ebp - 0x50]
        push    edx
        lea     ecx, [ebp - 0x68]
        call    FUN_0040ca10
        lea     ecx, [ebp - 0x68]
        call    FUN_0040cb00
        fstp    dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x28]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x2c], eax
        fld     dword ptr [ebp - 0x2c]
        
        fadd dword ptr [DAT_007704c0]
        mov     eax, dword ptr [edi]
        mov     ebx, dword ptr [ebp - 0x24]
        fdivr   dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebx + 0x1d4]
        
        fmul dword ptr [DAT_00787938]
        fstp    dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [eax + 0x30]
        cmp     ecx, edx
        jnz     L_AB1B
        
        fld dword ptr [DAT_0078793c]
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        mov     cl, byte ptr [eax + 0xdc]
        cmp     cl, 0x1
        jnz     L_AB1B
        fld     dword ptr [ebx + 0x1bc]
        fmul    dword ptr [ebp - 0x8]
        
        fmul dword ptr [DAT_0076d070]
        fstp    dword ptr [ebp - 0x8]
L_AB1B:
        mov     ecx, dword ptr [ebp - 0x34]
        cmp     ecx, dword ptr [ebp - 0x30]
        jz      L_AB37
        test    ecx, ecx
        jz      L_AB2F
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [ebp - 0x34]
L_AB2F:
        add     ecx, 0x4
        mov     dword ptr [ebp - 0x34], ecx
        jmp     L_AB49
L_AB37:
        push    0x1
        lea     eax, [ebp - 0x8]
        push    eax
        push    ecx
        lea     ecx, [ebp - 0x38]
        call    FUN_00566570
        mov     ecx, dword ptr [ebp - 0x34]
L_AB49:
        mov     eax, dword ptr [ebp - 0x14]
        mov     esi, dword ptr [ebp - 0x10]
        add     edi, 0x4
        add     eax, 0x4
        mov     dword ptr [ebp - 0x14], eax
        jmp     L_AB81
L_AB5A:
        mov     ecx, dword ptr [ebp - 0x40]
        mov     eax, dword ptr [ebp - 0x14]
        cmp     eax, ecx
        jz      L_AB6F
        push    edi
        push    ecx
        push    eax
        call    FUN_005809d0
        add     esp, 0xc
L_AB6F:
        mov     eax, dword ptr [ebp - 0x40]
        mov     ecx, dword ptr [ebp - 0x34]
        mov     esi, dword ptr [ebp - 0x10]
        mov     ebx, dword ptr [ebp - 0x24]
        sub     eax, 0x4
        mov     dword ptr [ebp - 0x40], eax
L_AB81:
        cmp     edi, dword ptr [ebp - 0x40]
        jnz     L_A98B
        jmp     L_AB8F
L_AB8C:
        mov     ecx, dword ptr [ebp - 0x34]
L_AB8F:
        mov     edi, dword ptr [ebp - 0x38]
        cmp     edi, ecx
        jnz     L_AB9A
        mov     ebx, edi
        jmp     L_ABB9
L_AB9A:
        lea     edx, [edi + 0x4]
        cmp     edx, ecx
        mov     esi, edi
        jz      L_ABB7
L_ABA3:
        fld     dword ptr [esi]
        fcomp   dword ptr [edx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_ABB0
        mov     esi, edx
L_ABB0:
        add     edx, 0x4
        cmp     edx, ecx
        jnz     L_ABA3
L_ABB7:
        mov     ebx, esi
L_ABB9:
        cmp     ebx, ecx
        jnz     L_ABD6
        lea     ecx, [ebp - 0x38]
        call    FUN_005cb200
        lea     ecx, [ebp - 0x44]
        call    FUN_00580560
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_ABD6:
        xor     esi, esi
        cmp     edi, ecx
        mov     edx, edi
        jz      L_ABF1
L_ABDE:
        fld     dword ptr [edx]
        fcomp   dword ptr [ebx]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_ABF1
        add     edx, 0x4
        inc     esi
        cmp     edx, ecx
        jnz     L_ABDE
L_ABF1:
        mov     edi, dword ptr [ebp - 0x18]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_AC41
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebp - 0x44]
        cmp     dword ptr [ecx + esi*0x4], eax
        jnz     L_AC41
        mov     eax, dword ptr [ebp - 0x38]
        mov     edx, dword ptr [ebp - 0x30]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        lea     ecx, [ebp - 0x30]
        call    FUN_00547bc0
        mov     eax, dword ptr [ebp - 0x44]
        mov     ecx, dword ptr [ebp - 0x3c]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        lea     ecx, [ebp - 0x3c]
        call    FUN_005805a0
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_AC41:
        mov     eax, dword ptr [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x30]
        mov     edx, dword ptr [ebp - 0x44]
        mov     esi, dword ptr [edx + esi*0x4]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        call    FUN_005cb500
        mov     eax, dword ptr [ebp - 0x44]
        mov     edx, dword ptr [ebp - 0x3c]
        sub     edx, eax
        add     esp, 0x8
        sar     edx, 0x2
        push    edx
        push    eax
        lea     ecx, [ebp - 0x3c]
        call    FUN_005805a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
