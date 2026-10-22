/*
 * FUN_005462a0 (617 B) — __thiscall method. Processes a per-index record,
 * updates counters, and iterates over an array of flags.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_0041ee70(int size);
extern void __stdcall FUN_0041f030(void *ptr, int count);
extern int __cdecl FUN_004d6490(int arg);
extern void __stdcall FUN_00419460(int ptr);
extern int __fastcall FUN_004f3b00(void *param1);
extern void __stdcall FUN_0041acb0(void *ptr);
extern void __stdcall FUN_004ce190(int a, int b, void *c, int d);
extern void __stdcall FUN_0053efc0(int a, void *b);
extern void __stdcall FUN_0053df10(void);
extern void __stdcall FUN_0041ef60(void *ptr);

__declspec(naked) void __fastcall FUN_005462a0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;
__asm {
mov     eax, dword ptr [esp + 4]
        imul    eax, eax, 0x22ac
        sub     esp, 0xa4
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [eax + ebx + 0x205d30]
        test    ecx, ecx
        jz      l_exit

        push    ebp
        push    esi
        push    edi

        push    0x100
        lea     ecx, [esp + 0x24]
        call    FUN_0041ee70

        push    1
        lea     ecx, [esp + 0xbc]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_0041f030

        mov     edx, dword ptr [esp + 0xb8]
        mov eax, dword ptr [DAT_007dab44]
        imul    edx, edx, 0x22ac
        mov     ecx, dword ptr [edx + ebx + 0x206068]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6490

        push    0x7b9460
        lea     ecx, [esp + 0x58]
        mov     esi, eax
        call    FUN_00419460

        lea     ecx, [esp + 0x84]
        push    ecx
        mov     ecx, esi
        call    FUN_004f3b00

        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0x54]
        rep movsd

        mov     edx, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [esp + 0x80]
        mov     eax, dword ptr [esp + 0x70]
        mov     dword ptr [esp + 0x14], edx
        lea     edx, [esp + 0x54]
        mov     dword ptr [esp + 0x1c], ecx
        push    edx
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0041acb0

        mov     eax, dword ptr [esp + 0xb8]
        imul    eax, eax, 0x22ac
        mov     eax, dword ptr [eax + ebx + 0x205d30]
        inc     dword ptr [eax + 0x4c8]

        mov     ecx, dword ptr [esp + 0xb8]
        imul    ecx, ecx, 0x22ac
        mov     edx, dword ptr [ecx + ebx + 0x205d30]
        mov     eax, dword ptr [edx + 0x4c8]
        mov     dword ptr [esp + 0x10], eax

        mov     al, byte ptr [esp + 0xbc]
        test    al, al
        jz      l_skip_zero
        mov     dword ptr [esp + 0x10], 0
l_skip_zero:

        push    4
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_0041f030

        push    4
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_0041f030

        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0041f030

        push    4
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_0041f030

        push    4
        lea     edx, [esp + 0x4c]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_0041f030

        push    4
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0041f030

        push    4
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_0041f030

        mov     edx, dword ptr [esp + 0x20]
        push    0
        lea     ecx, [esp + 0x24]
        call    dword ptr [edx + 0xc]

        mov     dword ptr [esp + 0x28], 0xffffffec
        xor     edi, edi
        mov     esi, 8
        lea     ebp, [ebx + 0x353b]

l_loop_start:
        cmp     byte ptr [ebp], 0
        jz      l_loop_next

        mov ecx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        cmp     edi, eax
        jz      l_loop_next

        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x38]
        sub     eax, edx
        mov edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [edx]
        xor ecx, dword ptr [DAT_007dab40]
        lea     edx, [ecx + 0x14]
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        add     ecx, 0x3c3c
        shl     eax, 3
        add     dword ptr [esi + ecx], eax
        add     dword ptr [ecx + 0xc00], eax
        mov     ecx, dword ptr [edx]
        push    1
        lea     eax, [esp + 0x24]
        push    eax
        push    0x32
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004ce190

l_loop_next:
        add     esi, 4
        inc     edi
        add     ebp, 0x2038
        cmp     esi, 0x404
        jl      l_loop_start

        mov eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebx
        push    edx
        call    FUN_0053efc0

        mov     edx, dword ptr [esp + 0x20]
        push    0
        lea     ecx, [esp + 0x24]
        call    dword ptr [edx + 0xc]

        mov     ecx, ebx
        mov     dword ptr [esp + 0x28], 0xffffffec
        call    FUN_0053df10

        lea     ecx, [esp + 0x20]
        call    FUN_0041ef60

        pop     edi
        pop     esi
        pop     ebp

l_exit:
        pop     ebx
        add     esp, 0xa4
        ret     8
    }


}
