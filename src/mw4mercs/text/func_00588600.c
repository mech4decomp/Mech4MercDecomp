/*
 * FUN_00588600 (1542 B) — Complex update/method on a game object.
 *
 * __thiscall (ECX = this), no return value.
 * CFLAGS: /O1
 */

#include <windows.h>

/* External data symbols (absolute addresses; relocations are masked by diff) */
extern float DAT_0078096c;
extern int   DAT_007dc728;
extern int * DAT_007dab44;
extern int   DAT_007dab40;
extern float DAT_00781564;
extern float DAT_00781568;
extern float DAT_0078156c;
extern short DAT_007db0ac;
extern short DAT_007db0ae;
extern float DAT_0076d064;
extern float DAT_007b8d08;
extern float DAT_007b8d0c;
extern float DAT_007b8d10;
extern float DAT_0078155c;
extern float DAT_00781560;
extern float DAT_0076c5b0;

/* External function declarations */
extern void __stdcall FUN_0040d560(void *);
extern int __fastcall FUN_004e2f40(int, void *);
extern void __fastcall FUN_004e8dc0(void *, void *);
extern void __fastcall FUN_004206b0(void *, void *);
extern void __fastcall FUN_0041c6e0(void *, void *, void *);
extern void * __fastcall FUN_00507f90(void *, void *);
extern void __fastcall FUN_0040c410(void *, void *);
extern void __fastcall FUN_0040ca40(void *, void *, void *);
extern void __fastcall FUN_0040cbb0(void *, void *, void *);
extern void __fastcall FUN_00502ef0(void *, void *, int);
extern void __fastcall FUN_0040cb00(void *);
extern void __fastcall FUN_0041c680(void *, void *, void *);
extern double __stdcall FUN_0075db50(double);

__declspec(naked) void FUN_00588600(void)
{
    __asm {
        sub     esp, 0xe4
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi + 0xd8]
        push    0x7b8d08
        lea     ecx, [esp + 0x3c]
        add     edi, 0x80
        mov     dword ptr [esp + 0x48], 0x44fa0000
        call    FUN_0040d560
        mov     eax, dword ptr [edi + 0xc]
        mov     dword ptr [esp + 0x2c], eax
        mov     ecx, dword ptr [edi + 0x1c]
        mov     dword ptr [esp + 0x30], ecx
        fld     dword ptr [esp + 0x30]
        mov     edx, dword ptr [edi + 0x2c]
        fadd    dword ptr [DAT_0078096c]
        mov     dword ptr [esp + 0x34], edx
        lea     ecx, [esp + 0x84]
        lea     edx, [esp + 0x54]
        fstp    dword ptr [esp + 0x30]
        lea     eax, [esp + 0x2c]
        mov     dword ptr [esp + 0x58], ecx
        mov     ecx, dword ptr [DAT_007dc728]
        xor     ebp, ebp
        push    edx
        mov     dword ptr [esp + 0x58], eax
        mov     dword ptr [esp + 0x60], ebp
        mov     dword ptr [esp + 0x68], esi
        mov     dword ptr [esp + 0x6c], 0x1000
        call    FUN_004e2f40
        mov     edx, dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     dword ptr [esi + 0x988], eax
        mov     al, byte ptr [esp + 0x64]
        push    edx
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esi + 0x4bc], al
        mov     dword ptr [esi + 0x590], ebp
        call    FUN_004e8dc0
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        fld     dword ptr [eax + 0x34]
        fsub    dword ptr [esp + 0x7c]
        mov     dword ptr [esi + 0x990], 0x3f800000
        fcom    dword ptr [DAT_00781564]
        fst     dword ptr [esi + 0x454]
        fnstsw  ax
        fcom    dword ptr [DAT_00781568]
        test    ah, 1
        fnstsw  ax
        jne     label_0x588712
        test    ah, 1
        je      label_0x588717
        fstp    st(0)
        mov     byte ptr [esi + 0x4bc], 0x19
        mov     dword ptr [esi + 0x990], 0x3fc00000
        jmp     label_0x588755

label_0x588712:
        test    ah, 1
        jne     label_0x588737

label_0x588717:
        fcomp   dword ptr [DAT_0078156c]
        fnstsw  ax
        test    ah, 1
        je      label_0x588744
        mov     byte ptr [esi + 0x4bc], 0x1a
        mov     dword ptr [esi + 0x990], 0x3fd5c28f
        jmp     label_0x588755

label_0x588737:
        fcomp   dword ptr [DAT_0078156c]
        fnstsw  ax
        test    ah, 1
        jne     label_0x58875f

label_0x588744:
        mov     byte ptr [esi + 0x4bc], 0x1b
        mov     dword ptr [esi + 0x990], 0x40000000

label_0x588755:
        mov     dword ptr [esi + 0x590], 1

label_0x58875f:
        cmp     dword ptr [esi + 0x590], ebp
        je      label_0x588798
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        fld     dword ptr [edi + 0x1c]
        fcomp   dword ptr [eax + 0x34]
        fnstsw  ax
        test    ah, 0x41
        jne     label_0x588798
        mov     dword ptr [esi + 0x590], ebp

label_0x588798:
        mov     eax, dword ptr [esp + 0x58]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0xc], ecx
        mov     edx, dword ptr [eax + 4]
        push    ebx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 8]
        push    ecx
        lea     ecx, [esi + 0x924]
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0040d560
        push    edi
        lea     ecx, [esp + 0x98]
        call    FUN_004206b0
        lea     edx, [esp + 0x94]
        push    edx
        lea     eax, [esp + 0x14]
        lea     edi, [esi + 0x488]
        push    eax
        mov     ecx, edi
        call    FUN_0041c6e0
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 4]
        mov     dword ptr [esp + 0x4c], ecx
        fld     dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x50], edx
        fld     dword ptr [esp + 0x50]
        fpatan
        mov     eax, dword ptr [edi + 8]
        mov     dword ptr [esp + 0x54], eax
        push    0x7b8d08
        lea     ecx, [esp + 0x40]
        mov     dword ptr [esp + 0x4c], 0x44fa0000
        fchs
        fstp    dword ptr [esi + 0x480]
        fld     dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x54]
        fpatan
        fchs
        fstp    dword ptr [esi + 0x47c]
        call    FUN_0040d560
        lea     ecx, [esp + 0xc4]
        push    ecx
        mov     ecx, dword ptr [esi + 0x838]
        call    FUN_00507f90
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x30], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x34], ecx
        fld     dword ptr [esp + 0x34]
        mov     edx, dword ptr [eax + 0x2c]
        fadd    dword ptr [DAT_0078096c]
        mov     ecx, dword ptr [DAT_007dc728]
        lea     eax, [esp + 0x58]
        push    eax
        fstp    dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x3c], edx
        call    FUN_004e2f40
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x5c]
        fadd    dword ptr [eax]
        lea     ebx, [esi + 0x90c]
        push    eax
        mov     ecx, ebx
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x48]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0040ca40
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x78]
        call    FUN_0040cbb0
        mov     ecx, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esi + 0x78]
        mov     dword ptr [esi + 0x88c], ecx
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        lea     edi, [eax + 0x624]
        mov     ax, word ptr [edi]
        cmp     ax, word ptr [DAT_007db0ac]
        jne     label_0x588909
        mov     cx, word ptr [edi + 2]
        cmp     cx, word ptr [DAT_007db0ae]
        je      label_0x588922

label_0x588909:
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x4bc]
        lea     eax, [esi + 0x932]
        push    edx
        push    edi
        push    eax
        call    FUN_00502ef0
        add     esp, 0xc

label_0x588922:
        mov     ecx, 0x7b8d08
        mov     dword ptr [esp + 0x48], 0x44fa0000
        call    FUN_0040cb00
        fsqrt
        lea     ecx, [esp + 0xc4]
        push    ecx
        mov     ecx, dword ptr [esi + 0x83c]
        fdivr   dword ptr [DAT_0076d064]
        fld     st(0)
        fmul    dword ptr [DAT_007b8d08]
        fstp    dword ptr [esp + 0x40]
        fld     st(0)
        fmul    dword ptr [DAT_007b8d0c]
        fstp    dword ptr [esp + 0x44]
        fmul    dword ptr [DAT_007b8d10]
        fstp    dword ptr [esp + 0x48]
        call    FUN_00507f90
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x30], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x34], ecx
        fld     dword ptr [esp + 0x34]
        mov     edx, dword ptr [eax + 0x2c]
        fadd    dword ptr [DAT_0078096c]
        mov     ecx, dword ptr [DAT_007dc728]
        lea     eax, [esp + 0x58]
        push    eax
        fstp    dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x3c], edx
        call    FUN_004e2f40
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x5c]
        fadd    dword ptr [eax]
        push    eax
        mov     ecx, ebx
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x48]
        push    ecx
        lea     ecx, [esp + 0x40]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0040ca40
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x78]
        call    FUN_0040cbb0
        mov     dx, word ptr [edi]
        cmp     dx, word ptr [DAT_007db0ac]
        mov     ecx, dword ptr [esp + 0x74]
        mov     dword ptr [esi + 0x88c], ecx
        pop     ebx
        jne     label_0x588a1d
        mov     ax, word ptr [edi + 2]
        cmp     ax, word ptr [DAT_007db0ae]
        je      label_0x588a36

label_0x588a1d:
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x4bc]
        lea     edx, [esi + 0x936]
        push    ecx
        push    edi
        push    edx
        call    FUN_00502ef0
        add     esp, 0xc

label_0x588a36:
        lea     ecx, [esp + 0xc]
        call    FUN_0040cb00
        fsqrt
        fdivr   dword ptr [DAT_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x20]
        fstp    st(0)
        fld     dword ptr [esp + 0x1c]
        call    FUN_0075db50
        fstp    dword ptr [esi + 0x484]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x494], eax
        mov     dword ptr [esi + 0x498], ecx
        lea     eax, [esp + 0x90]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esi + 0x49c], edx
        call    FUN_0041c680
        fld     dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x4c]
        fpatan
        fchs
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x4c]
        fpatan
        fchs
        fld     dword ptr [DAT_0078155c]
        fsub    dword ptr [DAT_00781560]
        fst     dword ptr [esp + 0x24]
        fchs
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x28]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        je      label_0x588af5
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x28], edx
        jmp     label_0x588b0c

label_0x588af5:
        fld     dword ptr [esp + 0x28]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jne     label_0x588b0c
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x28], eax

label_0x588b0c:
        fcom    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        je      label_0x588b1f
        fstp    st(0)
        fld     dword ptr [esp + 0x18]
        jmp     label_0x588b30

label_0x588b1f:
        fcom    dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jne     label_0x588b30
        fstp    st(0)
        fld     dword ptr [esp + 0x24]

label_0x588b30:
        mov     ecx, dword ptr [esi + 0x870]
        mov     edx, dword ptr [esi + 0x874]
        fstp    dword ptr [edx + ecx*4]
        mov     edx, dword ptr [esi + 0x870]
        mov     ecx, dword ptr [esi + 0x86c]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x870], edx
        jb      label_0x588b5e
        mov     dword ptr [esi + 0x870], ebp

label_0x588b5e:
        mov     eax, dword ptr [esi + 0x87c]
        fld     dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esi + 0x880]
        fstp    dword ptr [ecx + eax*4]
        mov     edx, dword ptr [esi + 0x87c]
        mov     ecx, dword ptr [esi + 0x878]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x87c], edx
        jb      label_0x588b90
        mov     dword ptr [esi + 0x87c], ebp

label_0x588b90:
        mov     ecx, dword ptr [esi + 0x86c]
        fld     dword ptr [DAT_0076c5b0]
        cmp     ecx, ebp
        jbe     label_0x588bb0
        mov     eax, dword ptr [esi + 0x874]
        mov     edx, ecx

label_0x588ba8:
        fadd    dword ptr [eax]
        add     eax, 4
        dec     edx
        jne     label_0x588ba8

label_0x588bb0:
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], ebp
        fild    qword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + 0x878]
        cmp     ecx, ebp
        fdivr   st, st(1)
        fstp    dword ptr [esi + 0x474]
        fstp    st(0)
        fld     dword ptr [DAT_0076c5b0]
        jbe     label_0x588be6
        mov     eax, dword ptr [esi + 0x880]
        mov     edx, ecx

label_0x588bde:
        fadd    dword ptr [eax]
        add     eax, 4
        dec     edx
        jne     label_0x588bde

label_0x588be6:
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x18], ecx
        fild    qword ptr [esp + 0x18]
        pop     edi
        fdivr   st, st(1)
        fstp    dword ptr [esi + 0x478]
        pop     esi
        fstp    st(0)
        pop     ebp
        add     esp, 0xe4
        ret
    }
}
