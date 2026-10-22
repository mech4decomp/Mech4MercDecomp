/*
 * FUN_00534650 (403 B) — __cdecl function.
 *
 * Creates a player creation message with vehicle data.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

/* extern function declarations */
extern void __fastcall FUN_004d2000(const char *a, int b);
extern void __fastcall FUN_004d2310(void);
extern void __fastcall FUN_00412570(const char *a);
extern void *__cdecl FUN_004084d0(int size);
extern void __fastcall FUN_005347f0(int a, int b, int c, int d, int e, void *f, void *g, int h, int i, int j, int k);
extern void __fastcall FUN_0041ee70(int a);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __fastcall FUN_004d21c0(void);

__declspec(naked) void FUN_00534650(void)
{
    
__asm {
sub     esp, 0xd0
        push    ebx
        push    esi
        push    edi
        push    0x0
        push    0x77b4c4
        lea     ecx, [esp + 0x5c]
        call    FUN_004d2000
        lea     ecx, [esp + 0x54]
        call    FUN_004d2310
        push    0x77b49c
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     eax, [esp + 0xc]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004d2000
        lea     ecx, [esp + 0x10]
        call    FUN_004d2310
        push    0x0
        push    0x77b3c8
        lea     ecx, [esp + 0xa0]
        call    FUN_004d2000
        lea     ecx, [esp + 0x98]
        call    FUN_004d2310
        push    0x7c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc_fail1
        push    0x1
        push    0x3000000
        push    0x2
        push    0x0
        push    0x7b9460
        lea     ecx, [esp + 0xec]
        push    ecx
        push    0x0
        push    0x426
        push    0x0
        push    0x2
        push    0x7c
        mov     ecx, esi
        call    FUN_005347f0
        mov     dword ptr [esi + 0x60], 0xffffffff
        mov     dx, word ptr [esp + 0x94]
        mov     word ptr [esi + 0x64], dx
        mov     ax, word ptr [esp + 0x96]
        mov     word ptr [esi + 0x66], ax
        mov     cx, word ptr [esp + 0x50]
        mov     word ptr [esi + 0x68], cx
        mov     dx, word ptr [esp + 0x52]
        mov     word ptr [esi + 0x6a], dx
        mov     dword ptr [esi + 0x6c], 0x0
        mov     byte ptr [esi + 0x70], 0x5f
        mov     dword ptr [esi + 0x74], 0x0
        mov     dword ptr [esi + 0x78], 0x0
        jmp     alloc_done1
    alloc_fail1:
        xor     esi, esi
    alloc_done1:
        push    0x28
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      alloc_fail2
        push    0x0
        mov     ecx, eax
        call    FUN_0041ee70
        mov     edi, eax
        jmp     alloc_done2
    alloc_fail2:
        xor     edi, edi
    alloc_done2:
        mov     ebx, [esi]
        mov     eax, [edi]
        lea     ecx, [ebx + 1]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        mov     edx, [edi]
        push    0x1
        push    0x77a8cc
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        mov     eax, [edi]
        push    ebx
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        mov     edx, [edi]
        push    0x0
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        push    esi
        mov     dword ptr [edi + 0x8], 0xffffffec
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [esp + 0x98]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x10]
        call    FUN_004d21c0
        mov     eax, [esp + 0xc]
        test    eax, eax
        jz      skip_free
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    skip_free:
        lea     ecx, [esp + 0x54]
        call    FUN_004d21c0
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xd0
        ret     4
    }


}
