/*
 * FUN_00526040 (206 B) — Variant lookup helper.
 *
 * __thiscall (ECX = this). Looks up variant data and copies strings.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00412780(int param1);
extern int __fastcall FUN_004125e0(int a, int b);
extern int __fastcall FUN_00412740(int a);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void __stdcall FUN_00526040(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [edx + 4]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [edx + 8]
        push    esi
        mov     esi, dword ptr [ecx + 0x409a8]
        lea     eax, [esi + eax * 4]
        mov     si, word ptr [eax]
        mov     ax, word ptr [eax + 2]
        mov     word ptr [ecx + 0x4097e], ax
        mov     ax, si
        cmp ax, word ptr [DAT_007db0ac]
        push    edi
        mov     edi, dword ptr [edx]
        mov     word ptr [ecx + 0x4097c], si
        jnz     l_done
        mov     dx, word ptr [ecx + 0x4097e]
        cmp dx, word ptr [DAT_007db0ae]
        jnz     l_done
        lea     esi, [ecx + 0x40978]
        push    0x76c724
        mov     ecx, esi
        call    FUN_00412780
        mov     eax, dword ptr [esi]
        push    edi
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      l_skip_free1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free1:
        mov     ecx, dword ptr [esi]
        push    0x779f4c
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      l_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_done:
        pop     edi
        mov     eax, 1
        pop     esi
        ret     8
    }


}
