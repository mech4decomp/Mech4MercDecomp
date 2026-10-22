/*
 * FUN_005499b0 (177 B) — Settings value lookup helper (__thiscall).
 *
 * ECX = this. Stack params: param1 (object), param2 (key).
 * Reads a value from an object, processes it, returns result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_004d9400(void *a, void *b);
extern void __stdcall FUN_004d2000(int a, int b);
extern void __fastcall FUN_0041ee70(int a);
extern void __fastcall FUN_006f33b0(void *a);
extern int __stdcall FUN_004d2680(void *a, int b);
extern int __stdcall FUN_006fab90(const char *msg);
extern void __fastcall FUN_0041ef60(void *a);
extern void __fastcall FUN_004d21c0(void *a);

__declspec(naked) void * __fastcall FUN_005499b0(void *this)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x6c
        push    esi
        mov     esi, dword ptr [ebp + 8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x64
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_004d9400
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 4]
        push    0x0
        mov     esi, eax
        push    0x0
        lea     ecx, [ebp - 0x6c]
        mov     dword ptr [esi], 0x64
        call    FUN_004d2000
        push    0x0
        lea     ecx, [ebp - 0x28]
        call    FUN_0041ee70

        /* 0x005499F7: mov ecx, dword ptr [0x007dab44] */
        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x28]
        push    eax

        /* 0x00549A03: xor edx, dword ptr [0x007dab40] */
        xor edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [edx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_006f33b0
        push    0x0
        lea     eax, [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0x6c]
        call    FUN_004d2680
        push    0x7723bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_no_assert
        int     3
l_no_assert:
        mov     cx, word ptr [ebp - 0x2c]
        mov     word ptr [esi + 0x60], cx
        mov     dx, word ptr [ebp - 0x2a]
        lea     ecx, [ebp - 0x28]
        mov     word ptr [esi + 0x62], dx
        call    FUN_0041ef60
        lea     ecx, [ebp - 0x6c]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
