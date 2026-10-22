/*
 * FUN_00592a70 (1159 B) — Deserialization constructor.
 * Reads a complex data structure from a stream (vtable at [stream] + 0x20).
 * Allocates 0x88-byte sub-objects and distributes them into lists by type.
 *
 * __thiscall (ECX = this), RET 0x04 (1 stack param: stream pointer).
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_00415180(int);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00412a00(void *stream, void *ptr);
extern void __cdecl FUN_004179b0(void *obj);

extern int DAT_007b8c10;

__declspec(naked) void * __fastcall FUN_00592a70(void *stream)
{
    __asm {
        mov     eax, dword ptr [DAT_007b8c10]
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        mov     esi, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi]
        xor     ebp, ebp
        mov     dword ptr [ebx + 0x10], ebp
        mov     dword ptr [ebx + 0x18], ebp
        mov     dword ptr [ebx + 0x20], ebp
        mov     dword ptr [ebx + 0x28], ebp
        mov     dword ptr [ebx + 0x30], ebp
        mov     dword ptr [ebx + 0x38], ebp
        mov     dword ptr [ebx + 0x14], ebp
        mov     dword ptr [ebx + 0x88], ebp
        mov     dword ptr [ebx + 0x1c], ebp
        mov     dword ptr [ebx + 0x8c], ebp
        lea     edi, [ebx + 0x88]
        mov     dword ptr [ebx + 0x24], ebp
        mov     dword ptr [ebx + 0x90], ebp
        mov     dword ptr [ebx + 0x2c], ebp
        mov     dword ptr [ebx + 0x94], ebp
        push    4
        lea     eax, [ebx + 0x44]
        mov     dword ptr [ebx + 0x34], ebp
        mov     dword ptr [ebx + 0x98], ebp
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebx + 8], ebp
        mov     dword ptr [ebx + 0xc], ebp
        mov     dword ptr [ebx + 0x3c], ebp
        mov     dword ptr [ebx], 0x782ab0
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x4c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x60]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x68]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x6c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x74]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x78]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x7c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x80]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        lea     eax, [ebx + 0x90]
        push    eax
        push    esi
        call    FUN_00412a00
        lea     eax, [ebx + 0x94]
        push    eax
        push    esi
        call    FUN_00412a00
        lea     eax, [ebx + 0x98]
        push    eax
        push    esi
        call    FUN_00412a00
        mov     edx, dword ptr [esi]
        add     esp, 0x18
        push    4
        lea     eax, [ebx + 0x84]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        lea     eax, [ebx + 0x8c]
        push    eax
        push    esi
        call    FUN_00412a00
        push    edi
        push    esi
        call    FUN_00412a00
        mov     edx, dword ptr [esi]
        add     esp, 0x10
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     dword ptr [esp + 0x10], ebp
        jz      label_0x592eeb

label_0x592c1a:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x1c], ebp
        jle     label_0x592ee1

label_0x592c36:
        push    0x88
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        jz      label_0x592e91
        mov     ecx, dword ptr [DAT_007b8c10]
        push    ecx
        mov     ecx, edi
        call    FUN_00415180
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi + 0x30], ebp
        mov     dword ptr [edi + 0x34], ebp
        lea     eax, [edi + 0x10]
        push    4
        mov     dword ptr [edi + 0x3c], ebp
        push    eax
        mov     ecx, esi
        mov     dword ptr [edi + 8], ebp
        mov     dword ptr [edi + 0xc], ebp
        mov     dword ptr [edi], 0x782aac
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [edi + 0x10]
        cmp     eax, 4
        jnz     label_0x592cac
        lea     eax, [edi + 0x34]
        push    eax
        push    esi
        mov     dword ptr [edi + 0x14], ebp
        mov     dword ptr [edi + 0x18], ebp
        mov     dword ptr [edi + 0x1c], ebp
        mov     dword ptr [edi + 0x20], ebp
        mov     dword ptr [edi + 0x24], ebp
        mov     dword ptr [edi + 0x28], ebp
        mov     dword ptr [edi + 0x2c], ebp
        call    FUN_00412a00
        add     esp, 8
        jmp     label_0x592e93

label_0x592cac:
        cmp     eax, 5
        jnz     label_0x592e21
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [edi + 0x28]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [edi + 0x14], ebp
        mov     dword ptr [edi + 0x18], ebp
        mov     dword ptr [edi + 0x1c], ebp
        mov     dword ptr [edi + 0x20], ebp
        mov     dword ptr [edi + 0x24], ebp
        mov     dword ptr [edi + 0x54], ebp
        mov     dword ptr [edi + 0x58], ebp
        mov     dword ptr [edi + 0x5c], ebp
        mov     dword ptr [edi + 0x60], ebp
        mov     dword ptr [edi + 0x64], ebp
        mov     dword ptr [edi + 0x68], ebp
        mov     dword ptr [edi + 0x6c], ebp
        mov     dword ptr [edi + 0x70], ebp
        mov     dword ptr [edi + 0x74], ebp
        mov     dword ptr [edi + 0x78], ebp
        mov     dword ptr [edi + 0x7c], ebp
        mov     dword ptr [edi + 0x80], ebp
        mov     dword ptr [edi + 0x84], ebp
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        lea     eax, [edi + 0x34]
        push    eax
        push    esi
        call    FUN_00412a00
        lea     eax, [edi + 0x3c]
        push    eax
        push    esi
        call    FUN_00412a00
        mov     edx, dword ptr [esi]
        add     esp, 0x10
        push    4
        lea     eax, [edi + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x4c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x60]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x68]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x6c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x74]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x78]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x7c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x80]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x84]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        jmp     label_0x592e93

label_0x592e21:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [edi + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
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
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
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
        cmp     dword ptr [edi + 0x10], 2
        jl      label_0x592e93
        lea     eax, [edi + 0x30]
        push    eax
        push    esi
        call    FUN_00412a00
        add     esp, 8
        jmp     label_0x592e93

label_0x592e91:
        xor     edi, edi

label_0x592e93:
        mov     eax, dword ptr [edi + 0x10]
        cmp     eax, 5
        ja      label_0x592ecc
        jmp     dword ptr [eax*4 + 0x592ef8]

label_0x592ea2:
        push    edi
        lea     ecx, [ebx + 0x10]
        jmp     label_0x592ec7

label_0x592ea8:
        push    edi
        lea     ecx, [ebx + 0x18]
        jmp     label_0x592ec7

label_0x592eae:
        push    edi
        lea     ecx, [ebx + 0x20]
        call    FUN_004179b0

label_0x592eb7:
        push    edi
        lea     ecx, [ebx + 0x28]
        jmp     label_0x592ec7

label_0x592ebd:
        push    edi
        lea     ecx, [ebx + 0x30]
        jmp     label_0x592ec7

label_0x592ec3:
        push    edi
        lea     ecx, [ebx + 0x38]

label_0x592ec7:
        call    FUN_004179b0

label_0x592ecc:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x14]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        jl      label_0x592c36

label_0x592ee1:
        dec     dword ptr [esp + 0x10]
        jnz     label_0x592c1a

label_0x592eeb:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 8
        ret     4
    }
}
