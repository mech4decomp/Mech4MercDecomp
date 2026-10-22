/*
 * FUN_00594d30 (3199 B) — Large deserialization constructor.
 * Reads a complex data structure from a stream (vtable at [stream] + 0x20).
 * Allocates and initializes many sub-objects.
 *
 * __thiscall (ECX = this), RET 0x04 (1 stack param: stream pointer).
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_004d5b10(int);
extern void __cdecl FUN_00416990(int, int);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_00594790(int);
extern void __cdecl FUN_004d05d0(int);
extern void __cdecl FUN_00412a00(void *, void *);
extern void __cdecl FUN_00594b50(int);
extern void __cdecl FUN_00598100(int);
extern void __cdecl FUN_005984c0(int);
extern void __cdecl FUN_00598450(int);
extern void __cdecl FUN_005982c0(int);
extern void __cdecl FUN_005985e0(int);
extern void __cdecl FUN_005982d0(int);
extern void __cdecl FUN_00598420(int);
extern void __cdecl FUN_0040d9b0(int);
extern void __cdecl FUN_00598590(int);
extern void __cdecl FUN_00598520(int);
extern void __cdecl FUN_005982e0(int);
extern void __cdecl FUN_004926e0(int);
extern void __cdecl FUN_004925b0(int);
extern void __cdecl FUN_00492650(int);
extern void __cdecl FUN_00593e60(int);
extern void __cdecl FUN_004179b0(int);
extern void __cdecl FUN_004c41d0(int);
extern void __cdecl FUN_0040c0e0(int);
extern void __cdecl FUN_00416b60(int);
extern void __cdecl FUN_00416a90(int);
extern void __cdecl FUN_005959b0(int);
extern void __cdecl FUN_00412740(int);
extern void __cdecl FUN_00595ae0(int);
extern void __cdecl FUN_00593fa0(int);
extern void __cdecl FUN_0040f060(int);
extern void __cdecl FUN_00593fc0(int);
extern void __cdecl FUN_00593fe0(int);

extern int DAT_007f1fb4;
extern int DAT_007b8c10;

__declspec(naked) void * __fastcall FUN_00594d30(void *stream)
{
    __asm {
        sub     esp, 0x78
        mov     eax, dword ptr [DAT_007f1fb4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp + 0x20], esi
        call    FUN_004d5b10
        xor     ebx, ebx
        push    1
        lea     edi, [esi + 0x18]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x10], ebx
        call    FUN_00416990
        mov     dword ptr [edi], 0x782e84
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x54], ebx
        push    0x34
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x44], ebx
        mov     byte ptr [esi + 0x5d], bl
        mov     dword ptr [esi], 0x782e78
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      label_0x594d94
        mov     ecx, eax
        call    FUN_00594790
        mov     ebp, eax
        jmp     label_0x594d96

label_0x594d94:
        xor     ebp, ebp

label_0x594d96:
        mov     dword ptr [esi + 0x50], ebp
        mov     esi, dword ptr [esp + 0x8c]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x40], ebp
        call    dword ptr [edx + 0x20]
        cmp     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x18], ebx
        jle     label_0x594e53

label_0x594dc0:
        push    0x28
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebx
        jz      label_0x594e34
        mov     ecx, dword ptr [DAT_007b8c10]
        push    ecx
        mov     ecx, edi
        call    FUN_004d05d0
        lea     eax, [edi + 0x14]
        mov     dword ptr [eax], ebx
        push    eax
        lea     ebp, [edi + 0x24]
        mov     dword ptr [ebp], ebx
        push    esi
        mov     dword ptr [edi], 0x782e74
        call    FUN_00412a00
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    esi
        call    FUN_00412a00
        mov     ebp, dword ptr [esp + 0x40]
        add     esp, 8
        mov     byte ptr [edi + 0x10], 0
        jmp     label_0x594e36

label_0x594e34:
        xor     edi, edi

label_0x594e36:
        push    edi
        mov     ecx, ebp
        call    FUN_00594b50
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x3c]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      label_0x594dc0

label_0x594e53:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     dword ptr [esp + 0x40], ebx
        mov     dword ptr [esp + 0x18], ebx
        jle     label_0x594fd6

label_0x594e6f:
        push    0x3c
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      label_0x594fa6
        mov     ecx, dword ptr [DAT_007b8c10]
        push    ecx
        mov     ecx, edi
        call    FUN_004d05d0
        push    0
        lea     ecx, [edi + 0x10]
        call    FUN_00598100
        mov     edx, dword ptr [esi]
        lea     ebp, [edi + 0x20]
        mov     dword ptr [ebp], 0
        push    4
        lea     eax, [edi + 0x1c]
        lea     ebx, [edi + 0x24]
        mov     dword ptr [ebx], 0
        push    eax
        mov     ecx, esi
        mov     dword ptr [edi], 0x782e70
        mov     dword ptr [edi + 0x18], 0xffffffff
        call    dword ptr [edx + 0x20]
        push    ebp
        push    esi
        call    FUN_00412a00
        push    ebx
        push    esi
        call    FUN_00412a00
        mov     edx, dword ptr [esi]
        add     esp, 0x10
        push    4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [ecx*4 + 0]
        push    edx
        call    FUN_004084d0
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 4
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [edi + 0x34], ebx
        mov     dword ptr [esp + 0x14], eax
        jz      label_0x594f52

label_0x594f36:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + eax*4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [esp + 0x14], eax
        jnz     label_0x594f36

label_0x594f52:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [ecx*4 + 0]
        push    edx
        call    FUN_004084d0
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 4
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [edi + 0x38], ebx
        mov     dword ptr [esp + 0x14], eax
        jz      label_0x594fa8

label_0x594f88:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + eax*4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [esp + 0x14], eax
        jnz     label_0x594f88
        jmp     label_0x594fa8

label_0x594fa6:
        xor     edi, edi

label_0x594fa8:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        add     ecx, 0x18
        mov     dword ptr [edi + 0x18], edx
        call    FUN_00416a90
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x40]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      label_0x594e6f

label_0x594fd6:
        mov     ebp, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi]
        lea     eax, [ebp + 0x58]
        push    4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        push    0xc
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      label_0x59500a
        lea     eax, [esp + 0x13]
        push    eax
        lea     ecx, [esp + 0x16]
        push    ecx
        mov     ecx, edi
        call    FUN_005984c0
        jmp     label_0x59500c

label_0x59500a:
        xor     edi, edi

label_0x59500c:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0x30], edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0
        jle     label_0x595123

label_0x595031:
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00412a00
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    1
        lea     eax, [esp + 0x17]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ebx, dword ptr [ebp + 0x30]
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x7c]
        push    edx
        mov     ecx, ebx
        call    FUN_00598450
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x74]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x28], eax
        call    FUN_005982c0
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, dword ptr [edx]
        jz      label_0x5950b9
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x14]

label_0x59508c:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [edi]
        jnz     label_0x5950b0
        test    cl, cl
        jz      label_0x5950ac
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [edi + 1]
        jnz     label_0x5950b0
        add     eax, 2
        add     edi, 2
        test    cl, cl
        jnz     label_0x59508c

label_0x5950ac:
        xor     eax, eax
        jmp     label_0x5950b5

label_0x5950b0:
        sbb     eax, eax
        sbb     eax, -1

label_0x5950b5:
        test    eax, eax
        jge     label_0x5950fa

label_0x5950b9:
        lea     eax, [esp + 0x12]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x70]
        mov     byte ptr [esp + 0x1a], 0
        call    FUN_005985e0
        push    eax
        push    ecx
        lea     edx, [esp + 0x2c]
        mov     ecx, esp
        push    edx
        call    FUN_005982d0
        lea     eax, [esp + 0x78]
        push    eax
        mov     ecx, ebx
        call    FUN_00598420
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x24], ecx
        lea     ecx, [esp + 0x68]
        call    FUN_0040d9b0

label_0x5950fa:
        mov     dl, byte ptr [esp + 0x13]
        mov     eax, dword ptr [esp + 0x24]
        lea     ecx, [esp + 0x14]
        mov     byte ptr [eax + 0x14], dl
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      label_0x595031

label_0x595123:
        push    0xc
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      label_0x595146
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     edx, [esp + 0x16]
        push    edx
        mov     ecx, edi
        call    FUN_00598590
        jmp     label_0x595148

label_0x595146:
        xor     edi, edi

label_0x595148:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x40], edi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0
        jle     label_0x595262

label_0x59516d:
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00412a00
        mov     eax, dword ptr [esi]
        add     esp, 8
        push    4
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     ebx, dword ptr [ebp + 0x40]
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x7c]
        push    eax
        mov     ecx, ebx
        call    FUN_00598520
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x74]
        mov     dword ptr [esp + 0x24], ecx
        push    edx
        mov     ecx, ebx
        call    FUN_005982e0
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, dword ptr [ecx]
        jz      label_0x5951f5
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x14]

label_0x5951c8:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [edi]
        jnz     label_0x5951ec
        test    cl, cl
        jz      label_0x5951e8
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [edi + 1]
        jnz     label_0x5951ec
        add     eax, 2
        add     edi, 2
        test    cl, cl
        jnz     label_0x5951c8

label_0x5951e8:
        xor     eax, eax
        jmp     label_0x5951f1

label_0x5951ec:
        sbb     eax, eax
        sbb     eax, -1

label_0x5951f1:
        test    eax, eax
        jge     label_0x595239

label_0x5951f5:
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x70]
        mov     dword ptr [esp + 0x54], 0
        call    FUN_004926e0
        push    eax
        push    ecx
        lea     edx, [esp + 0x2c]
        mov     ecx, esp
        push    edx
        call    FUN_004925b0
        lea     eax, [esp + 0x78]
        push    eax
        mov     ecx, ebx
        call    FUN_00492650
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x24], ecx
        lea     ecx, [esp + 0x68]
        call    FUN_0040d9b0

label_0x595239:
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x24]
        lea     ecx, [esp + 0x14]
        mov     dword ptr [eax + 0x14], edx
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      label_0x59516d

label_0x595262:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x48]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x44]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x18], ebx
        jle     label_0x5952de

label_0x59528b:
        lea     edx, [esp + 0x2c]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x34], ebx
        call    FUN_00412a00
        push    0xe0
        call    FUN_004084d0
        add     esp, 0xc
        cmp     eax, ebx
        jz      label_0x5952b9
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, eax
        call    FUN_00593e60
        jmp     label_0x5952bb

label_0x5952b9:
        xor     eax, eax

label_0x5952bb:
        push    eax
        lea     ecx, [ebp + 0x10]
        call    FUN_004179b0
        lea     ecx, [esp + 0x2c]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x44]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      label_0x59528b

label_0x5952de:
        lea     eax, [ebp + 0x10]
        push    eax
        lea     ecx, [esp + 0x80]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x7c]
        mov     dword ptr [esp + 0x7c], 0x77a080
        call    FUN_0040c0e0
        mov     edi, eax
        cmp     edi, ebx
        jz      label_0x5958a9

label_0x595309:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x54]
        push    eax
        mov     ecx, esi
        xor     ebx, ebx
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x58]
        mov     dword ptr [edi + 0x38], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x5c]
        mov     dword ptr [edi + 0x18], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x58]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x60]
        mov     dword ptr [edi + 0x40], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x4c]
        mov     dword ptr [edi + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x64]
        mov     dword ptr [edi + 0x3c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x60]
        lea     edx, [esp + 0x48]
        mov     dword ptr [edi + 0x44], ecx
        push    edx
        lea     ecx, [ebp + 0x18]
        call    FUN_00416b60
        cmp     eax, ebx
        jz      label_0x5953a3
        push    eax
        lea     ecx, [eax + 0x10]
        call    FUN_004179b0

label_0x5953a3:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        mov     word ptr [esp + 0x30], 0xffff
        mov     word ptr [esp + 0x32], bx
        call    dword ptr [eax + 0x20]
        mov     dx, word ptr [esp + 0x28]
        push    ecx
        mov     eax, esp
        mov     word ptr [eax], dx
        mov     cx, word ptr [esp + 0x2e]
        mov     word ptr [eax + 2], cx
        mov     ecx, edi
        call    FUN_005959b0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x68]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x6c]
        mov     dword ptr [edi + 0x48], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x68]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x74]
        mov     dword ptr [edi + 0x50], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x70]
        lea     edx, [esp + 0x38]
        push    edx
        push    esi
        mov     dword ptr [edi + 0x54], ecx
        mov     dword ptr [esp + 0x40], ebx
        call    FUN_00412a00
        add     esp, 8
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [edi + 0x60]
        call    FUN_00412740
        lea     ecx, [esp + 0x34]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x3c], ebx
        call    FUN_00412a00
        add     esp, 8
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [edi + 0xdc]
        call    FUN_00412740
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esp + 0x74]
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [esp + 0x17]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [edi + 0x4c], edx
        call    dword ptr [eax + 0x20]
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      label_0x5954d4
        lea     edx, [esp + 0x2c]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x34], ebx
        call    FUN_00412a00
        mov     eax, dword ptr [esi]
        add     esp, 8
        push    4
        lea     ecx, [esp + 0x7c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, ebx
        jz      label_0x5954b7
        inc     byte ptr [eax - 1]

label_0x5954b7:
        mov     ecx, ebp
        call    FUN_00595ae0
        mov     ecx, dword ptr [esp + 0x78]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_00593fa0
        lea     ecx, [esp + 0x2c]
        call    FUN_0040d9b0

label_0x5954d4:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x4c]
        xor     ebx, ebx
        test    eax, eax
        jle     label_0x595550

label_0x5954ec:
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x34], 0
        call    FUN_00412a00
        push    0x14
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0xc
        test    ebp, ebp
        jz      label_0x595533
        mov     edx, dword ptr [DAT_007b8c10]
        push    edx
        mov     ecx, ebp
        call    FUN_004d05d0
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [ebp + 0x10]
        call    FUN_0040f060
        mov     dword ptr [ebp], 0x76d650
        jmp     label_0x595535

label_0x595533:
        xor     ebp, ebp

label_0x595535:
        push    ebp
        lea     ecx, [edi + 0x58]
        call    FUN_004179b0
        lea     ecx, [esp + 0x2c]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x4c]
        inc     ebx
        cmp     ebx, eax
        jl      label_0x5954ec

label_0x595550:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x68], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x6c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x70], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x74], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x78], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x7c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x80], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x8c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x90], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi + 0x94], ecx
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x98], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x9c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0xa0], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0xa4], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x84], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0x88], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [edi + 0xa8], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x16]
        mov     dword ptr [edi + 0xac], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     cl, byte ptr [esp + 0x12]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x16]
        mov     byte ptr [edi + 0xb0], cl
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     cl, byte ptr [esp + 0x12]
        mov     edx, dword ptr [esi]
        mov     byte ptr [edi + 0xb1], cl
        push    1
        lea     eax, [esp + 0x16]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     cl, byte ptr [esp + 0x12]
        mov     byte ptr [edi + 0xb2], cl
        lea     ebp, [edi + 0xb4]
        mov     ebx, 0xa

label_0x595741:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebp], ecx
        add     ebp, 4
        dec     ebx
        jnz     label_0x595741
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        mov     ebp, dword ptr [esp + 0x1c]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x18], ebx
        jle     label_0x5957e0

label_0x59577c:
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x34], ebx
        call    FUN_00412a00
        mov     edx, dword ptr [esp + 0x34]
        add     esp, 4
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, ebx
        jz      label_0x5957a1
        inc     byte ptr [eax - 1]

label_0x5957a1:
        mov     ecx, ebp
        call    FUN_00595ae0
        cmp     eax, ebx
        jz      label_0x5957b4
        push    eax
        mov     ecx, edi
        call    FUN_00593fc0

label_0x5957b4:
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, ebx
        jz      label_0x5957cf
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_0x5957cf
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_0x5957cf:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x24]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      label_0x59577c

label_0x5957e0:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        cmp     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x18], ebx
        jle     label_0x59585c

label_0x5957f8:
        lea     edx, [esp + 0x2c]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x34], ebx
        call    FUN_00412a00
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 4
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, ebx
        jz      label_0x59581d
        inc     byte ptr [eax - 1]

label_0x59581d:
        mov     ecx, ebp
        call    FUN_00595ae0
        cmp     eax, ebx
        jz      label_0x595830
        push    eax
        mov     ecx, edi
        call    FUN_00593fe0

label_0x595830:
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, ebx
        jz      label_0x59584b
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_0x59584b
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_0x59584b:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x24]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      label_0x5957f8

label_0x59585c:
        mov     eax, dword ptr [esp + 0x34]
        cmp     eax, ebx
        jz      label_0x595877
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_0x595877
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_0x595877:
        mov     eax, dword ptr [esp + 0x38]
        cmp     eax, ebx
        jz      label_0x595892
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_0x595892
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_0x595892:
        lea     ecx, [esp + 0x7c]
        call    FUN_0040c0e0
        mov     ebp, dword ptr [esp + 0x1c]
        mov     edi, eax
        cmp     edi, ebx
        jnz     label_0x595309

label_0x5958a9:
        lea     edx, [esp + 0x30]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x38], 0
        call    FUN_00412a00
        lea     eax, [ebp + 0x34]
        push    eax
        push    esi
        call    FUN_00412a00
        mov     eax, dword ptr [esi]
        add     esp, 0x10
        push    4
        lea     ecx, [ebp + 0x38]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        lea     eax, [ebp + 0x54]
        push    eax
        push    esi
        call    FUN_00412a00
        mov     ecx, dword ptr [esp + 0x38]
        add     esp, 4
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        jz      label_0x595903
        inc     byte ptr [eax - 1]

label_0x595903:
        mov     ecx, ebp
        call    FUN_00595ae0
        push    0xc
        mov     dword ptr [ebp + 0x4c], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      label_0x59592f
        mov     edx, dword ptr [ebp + 0x10]
        lea     ecx, [ebp + 0x10]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x77a080
        jmp     label_0x595931

label_0x59592f:
        xor     eax, eax

label_0x595931:
        mov     ecx, dword ptr [eax + 8]
        test    ecx, ecx
        mov     dword ptr [ebp + 0x2c], eax
        jz      label_0x59593f
        mov     ecx, dword ptr [ecx]
        jmp     label_0x595941

label_0x59593f:
        xor     ecx, ecx

label_0x595941:
        test    ecx, ecx
        jz      label_0x59597d

label_0x595945:
        mov     edx, dword ptr [ecx + 0x18]
        cmp     edx, 2
        jz      label_0x59595a
        mov     esi, dword ptr [ecx + 0x3c]
        cmp     esi, dword ptr [ebp + 0x58]
        jz      label_0x595979
        cmp     edx, 2
        jnz     label_0x59595d

label_0x59595a:
        mov     dword ptr [ebp + 0x4c], ecx

label_0x59595d:
        mov     ecx, dword ptr [eax + 8]
        test    ecx, ecx
        jz      label_0x595968
        mov     ecx, dword ptr [ecx]
        jmp     label_0x59596a

label_0x595968:
        xor     ecx, ecx

label_0x59596a:
        test    ecx, ecx
        jz      label_0x59597d
        mov     edx, dword ptr [eax + 8]
        mov     edx, dword ptr [edx + 4]
        mov     dword ptr [eax + 8], edx
        jmp     label_0x595945

label_0x595979:
        test    ecx, ecx
        jnz     label_0x595985

label_0x59597d:
        mov     eax, dword ptr [ebp + 0x4c]
        mov     dword ptr [ebp + 0x48], eax
        jmp     label_0x595988

label_0x595985:
        mov     dword ptr [ebp + 0x48], ecx

label_0x595988:
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        jz      label_0x5959a3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_0x5959a3
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_0x5959a3:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x78
        ret     4
    }
}
