/*
 * FUN_005e14b0 (482 B) — Bounding-box / collision test with FPU math.
 * Returns 1 (AL) if the test passes, else 0.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e27f0(void *a, void *b, void *c, void *d);
extern int __cdecl FUN_004f8480(void *param);
extern long __cdecl _ftol(void);
extern void __cdecl FUN_0040cb00(void);
extern int __cdecl FUN_004e2f40(void *param);

__declspec(naked) int __cdecl FUN_005e14b0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_00786dd8;
extern int DAT_007880fc;
extern int DAT_007f2440;
extern int DAT_0076d064;
extern int DAT_007b8d08;
extern int DAT_007b8d0c;
extern int DAT_007b8d10;
extern int DAT_0077de8c;
extern int DAT_007dc728;
extern int DAT_00770168;
__asm {
sub     esp, 0x50
        push    esi
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        mov ecx, dword ptr [DAT_007dab44]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0x18]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        mov     esi, dword ptr [esp + 0x58]
        fld     dword ptr [esi]
        fcomp   dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_168b
        fld     dword ptr [esi]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      label_168b
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_168b
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      label_168b
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x20]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004f8480
        test    eax, eax
        jnz     label_168b
        fld     dword ptr [esi + 0x8]
        push    edi
        fadd dword ptr [DAT_00786dd8]
        fmul dword ptr [DAT_007880fc]
        call    _ftol
        fld     dword ptr [esi]
        fadd dword ptr [DAT_00786dd8]
        mov     edi, eax
        shl     edi, 0x9
        fmul dword ptr [DAT_007880fc]
        call    _ftol
        mov ecx, dword ptr [DAT_007f2440]
        mov     edx, dword ptr [ecx + 0x3c]
        add     edi, eax
        mov     eax, dword ptr [edx + 0x8]
        shl     edi, 0x1
        sub     eax, edi
        mov     cl, byte ptr [eax]
        and     cl, 0x1
        cmp     cl, 0x1
        pop     edi
        jz      label_168b
        mov     ecx, 0x7b8d08
        mov     dword ptr [esp + 0x50], 0x43480000
        call    FUN_0040cb00
        fsqrt
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x38], edx
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x20], ecx
        mov ecx, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x30], eax
        mov eax, dword ptr [DAT_007dab40]
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x34], 0x1000
        fdivr dword ptr [DAT_0076d064]
        fld     st(0)
        fmul dword ptr [DAT_007b8d08]
        fstp    dword ptr [esp + 0x44]
        fld     st(0)
        fmul dword ptr [DAT_007b8d0c]
        fstp    dword ptr [esp + 0x48]
        fmul dword ptr [DAT_007b8d10]
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esi + 0x4]
        fadd dword ptr [DAT_0077de8c]
        fstp    dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dc728]
        xor     edx, eax
        mov     esi, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0x20]
        push    eax
        xor     esi, 0x85739531
        call    FUN_004e2f40
        cmp     eax, esi
        jnz     label_168b
        fld     dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x5c]
        fsub dword ptr [DAT_00770168]
        fld     st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     label_1689
        fld     dword ptr [esp + 0x5c]
        fadd dword ptr [DAT_00770168]
        fxch
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      label_168b
        mov     al, 0x1
        pop     esi
        add     esp, 0x50
        ret
    label_1689:
        fstp    st(0)
    label_168b:
        xor     al, al
        pop     esi
        add     esp, 0x50
        ret
    }


}
