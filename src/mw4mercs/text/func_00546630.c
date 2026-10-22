/*
 * FUN_00546630 (283 B) — __thiscall method. Compares version/type words
 * and dispatches accordingly.
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
extern void __stdcall FUN_00544310(int a, void *b);
extern void __stdcall FUN_00540100(int a);
extern void __stdcall FUN_0041ef60(void *ptr);

__declspec(naked) void __fastcall FUN_00546630(void)
{
    

extern int DAT_007dd268;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db090;
__asm {
sub     esp, 0x58
        push    esi
        mov     esi, ecx

        push    0
        lea     ecx, [esp + 8]
        call    FUN_0041ee70

        mov eax, dword ptr [DAT_007dd268]
        mov     cx, word ptr [eax + 0x4097c]
        cmp cx, word ptr [DAT_007db0ac]
        mov     ax, word ptr [eax + 0x4097e]
        jnz     l_else_branch

        cmp ax, word ptr [DAT_007db0ae]
        jnz     l_else_branch

        push    1
        push    0x77a8c8
        lea     ecx, [esp + 0xc]
        call    FUN_0041f030

        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x40978]
        push    0
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_0041de80

        mov     edx, dword ptr [esp + 0x48]
        push    edx
        lea     ecx, [esp + 8]
        call    FUN_0041ef90

        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_0041e110

        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x1c]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jbe     l_skip_max
        mov     dword ptr [esp + 0x1c], eax
l_skip_max:
        lea     ecx, [esp + 0x2c]
        call    FUN_0041dec0
        jmp     l_after_if

l_else_branch:
        push    1
        push    0x77a8c4
        lea     ecx, [esp + 0xc]
        call    FUN_0041f030

        mov edx, dword ptr [DAT_007dd268]
        mov     eax, dword ptr [esp + 4]
        push    4
        add     edx, 0x4097c
        push    edx
        lea     ecx, [esp + 0xc]
        call    dword ptr [eax + 0x24]

l_after_if:
        mov     edx, dword ptr [esp + 4]
        push    0
        lea     ecx, [esp + 8]
        call    dword ptr [edx + 0xc]

        mov edx, dword ptr [DAT_007db090]
        xor     ecx, ecx
        mov     dword ptr [esp + 0xc], 0xffffffec
        mov     cl, byte ptr [edx + 0x28]
        lea     eax, [esp + 4]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00544310

        mov ecx, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     ecx, esi
        push    eax
        call    FUN_00540100

        lea     ecx, [esp + 4]
        call    FUN_0041ef60

        pop     esi
        add     esp, 0x58
        ret
    }


}
