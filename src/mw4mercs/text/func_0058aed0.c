/*
 * FUN_0058aed0 (594 B) — Game object rotation/position update function.
 *
 * __thiscall (ECX = this), RET 0x8 (2 params: double/float pair).
 * Uses FSINCOS for rotation calculations, updates object position.
 *
 * CFLAGS: /O1
 */

extern int DAT_007F2D1C;
extern float DAT_0076C5B0;
extern float DAT_0078235C;
extern int DAT_007DC728;
extern float DAT_0076D064;
extern float DAT_007B8D08;
extern float DAT_007B8D0C;
extern float DAT_007B8D10;

extern void __cdecl FUN_004FAFC0(void);
extern void __cdecl FUN_0041ACB0(void);
extern void __cdecl FUN_00637A20(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041A070(void);
extern void __cdecl FUN_0040D030(void);
extern void __cdecl FUN_004DAA20(void);
extern void __cdecl FUN_0040CB00(void);
extern void __cdecl FUN_004E2F40(void);

__declspec(naked) void FUN_0058aed0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xec
        mov     eax, [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        mov     [ebp - 0x34], esi
        call FUN_004FAFC0
        fld     qword ptr [ebp + 0x8]
        fsub    qword ptr [esi + 0xe4]
        mov     eax, [esi + 0xd8]
        mov     edx, [esi + 0x170]
        add     eax, 0x20
        fstp    dword ptr [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 0x18]
        mov     [esi + 0x440], edx
        call FUN_0041ACB0
        mov     ecx, dword ptr [DAT_007F2D1C]
        push    0x127
        call FUN_00637A20
        fcom dword ptr [DAT_0076C5B0]
        fnstsw  ax
        test    ah, 0x40
        jnz     label_0x0058afa4
        fmul    dword ptr [esi + 0x430]
        lea     ecx, [ebp + 0xc]
        lea     edx, [ebp - 0x8]
        mov     [ebp - 0x44], ecx
        fmul    dword ptr [ebp - 0xc]
        mov     [ebp - 0x4c], edx
        fst     dword ptr [ebp - 0x48]
        fstp    dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        mov     ebx, [ebp - 0x4c]
        mov     edx, [ebp - 0x44]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx + 0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [esi + 0x1a0]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x198]
        fsubp st(1), st
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [esi + 0x1a0]
        fld     dword ptr [ebp - 0x4]
        fmul    dword ptr [esi + 0x198]
        faddp st(1), st
        fstp    dword ptr [esi + 0x198]
        fstp    dword ptr [esi + 0x1a0]
        fld     dword ptr [ebp - 0x18]
        fadd    dword ptr [ebp - 0x48]
        fstp    dword ptr [ebp - 0x18]
        jmp     label_0x0058afa6

label_0x0058afa4:
        fstp st(0)

label_0x0058afa6:
        mov     eax, [esi + 0xd8]
        add     eax, 0x20
        push    eax
        lea     ecx, [ebp - 0x24]
        call FUN_00419480
        mov     edx, [esi]
        lea     eax, [ebp - 0x40]
        push    eax
        mov     eax, [ebp - 0xc]
        lea     ecx, [ebp - 0x30]
        push    ecx
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x164]
        test    al, al
        jz      label_0x0058aff6
        mov     ecx, [ebp - 0x3c]
        mov     edx, [ebp - 0x40]
        mov     eax, [ebp - 0x38]
        mov     [ebp - 0x14], ecx
        mov     ecx, [ebp - 0x30]
        mov     [ebp - 0x18], edx
        mov     edx, [ebp - 0x2c]
        mov     [ebp - 0x10], eax
        mov     eax, [ebp - 0x28]
        mov     [ebp - 0x24], ecx
        mov     [ebp - 0x20], edx
        mov     [ebp - 0x1c], eax

label_0x0058aff6:
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     ecx, [ebp - 0xec]
        call FUN_0041A070
        lea     edx, [ebp - 0x24]
        push    edx
        lea     ecx, [ebp - 0xec]
        call FUN_0040D030
        lea     eax, [ebp - 0xec]
        push    eax
        mov     ecx, esi
        call FUN_004DAA20
        mov     esi, [esi + 0xd8]
        add     esi, 0x20
        mov     ecx, 0xc
        lea     edi, [ebp - 0xbc]
        rep movsd
        mov     esi, [ebp - 0x34]
        mov     ecx, 0x7b8d08
        fld     dword ptr [esi + 0x458]
        fadd dword ptr [DAT_0078235C]
        fstp    dword ptr [ebp - 0x50]
        call FUN_0040CB00
        fsqrt
        mov     ecx, [ebp - 0xb0]
        mov     edx, [ebp - 0x90]
        mov     [ebp - 0x68], ecx
        mov     [ebp - 0x60], edx
        lea     ecx, [ebp - 0x8c]
        lea     edx, [ebp - 0x80]
        lea     eax, [ebp - 0x68]
        mov     [ebp - 0x7c], ecx
        mov     ecx, dword ptr [DAT_007DC728]
        xor     edi, edi
        push    edx
        mov     [ebp - 0x80], eax
        mov     [ebp - 0x78], edi
        mov     [ebp - 0x70], esi
        mov     dword ptr [ebp - 0x6c], 0x1000
        fdivr dword ptr [DAT_0076D064]
        fld st(0)
        fmul dword ptr [DAT_007B8D08]
        fstp    dword ptr [ebp - 0x5c]
        fld st(0)
        fmul dword ptr [DAT_007B8D0C]
        fstp    dword ptr [ebp - 0x58]
        fmul dword ptr [DAT_007B8D10]
        fstp    dword ptr [ebp - 0x54]
        fld     dword ptr [ebp - 0xa0]
        fadd    dword ptr [esi + 0x458]
        fstp    dword ptr [ebp - 0x64]
        call FUN_004E2F40
        test    eax, eax
        jz      label_0x0058b119
        fld     dword ptr [ebp - 0x64]
        lea     eax, [ebp - 0xbc]
        fsub    dword ptr [ebp - 0x50]
        push    eax
        mov     ecx, esi
        fstp    dword ptr [ebp - 0xa0]
        call FUN_004DAA20
        mov     eax, [esi + 0x99c]
        cmp     eax, edi
        mov     [esi + 0x16c], edi
        mov     [esi + 0x19c], edi
        jz      label_0x0058b10b
        mov     ecx, [eax + 0xe0]
        mov     edx, [ecx]
        push    edi
        push    0x7
        call dword ptr [edx + 0x4]

label_0x0058b10b:
        mov     ecx, [esi + 0xe0]
        mov     eax, [ecx]
        push    edi
        push    0xb
        call dword ptr [eax + 0x4]

label_0x0058b119:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
