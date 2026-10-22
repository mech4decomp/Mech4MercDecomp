/*
 * FUN_00546750 (308 B) — __thiscall method with 3 stack params.
 * Compares version words and dispatches.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_0041ee70(int size);
extern void __stdcall FUN_0041f030(void *ptr, int count);
extern void __stdcall FUN_0041de80(int a, int b);
extern void __stdcall FUN_0041ef90(int a);
extern void __stdcall FUN_0041e110(int a, int b);
extern void __stdcall FUN_0041dec0(void);
extern void __stdcall FUN_005444e0(int a, void *b);
extern void __stdcall FUN_00540090(void);
extern void __stdcall FUN_00540330(int a);
extern void __stdcall FUN_0041ef60(void *ptr);

__declspec(naked) void __fastcall FUN_00546750(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
sub     esp, 0x58
        push    esi
        push    edi
        mov     esi, ecx

        push    0
        lea     ecx, [esp + 0xc]
        call    FUN_0041ee70

        mov     ax, word ptr [esp + 0x68]
        cmp ax, word ptr [DAT_007db0ac]
        jnz     l_else_branch

        mov     cx, word ptr [esp + 0x6a]
        cmp cx, word ptr [DAT_007db0ae]
        jnz     l_else_branch

        push    1
        push    0x77a8c8
        lea     ecx, [esp + 0x10]
        mov     word ptr [esp + 0x70], 0xa
        mov     word ptr [esp + 0x72], 1
        call    FUN_0041f030

        mov     edx, dword ptr [esp + 0x6c]
        mov     eax, dword ptr [edx]
        push    0
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0041de80

        mov     ecx, dword ptr [esp + 0x4c]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_0041ef90

        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_0041e110

        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x20]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        jbe     l_skip_max
        mov     dword ptr [esp + 0x20], eax
l_skip_max:
        lea     ecx, [esp + 0x30]
        call    FUN_0041dec0
        jmp     l_after_if

l_else_branch:
        push    1
        push    0x77a8c4
        lea     ecx, [esp + 0x10]
        call    FUN_0041f030

        mov     edx, dword ptr [esp + 8]
        push    4
        lea     ecx, [esp + 0x6c]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    dword ptr [edx + 0x24]

l_after_if:
        mov     eax, dword ptr [esp + 8]
        push    0
        lea     ecx, [esp + 0xc]
        call    dword ptr [eax + 0xc]

        mov     edi, dword ptr [esp + 0x64]
        lea     ecx, [esp + 8]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0xffffffec
        call    FUN_005444e0

        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      l_skip_flag

        mov     edx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [edx + 0xe4]
        test    eax, eax
        jz      l_skip_flag

        mov     eax, edi
        imul    eax, eax, 0x22ac
        mov     ecx, esi
        mov     byte ptr [eax + esi + 0x205f35], 0
        call    FUN_00540090

l_skip_flag:
        push    edi
        mov     ecx, esi
        call    FUN_00540330

        lea     ecx, [esp + 8]
        call    FUN_0041ef60

        pop     edi
        pop     esi
        add     esp, 0x58
        ret     0xc
    }


}
