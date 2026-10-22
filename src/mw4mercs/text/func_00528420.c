/*
 * FUN_00528420 (218 B) — Control mapping data query helper.
 *
 * __stdcall (RET 0x8). Reads a string from param_1, looks up data via
 * FUN_00416b60, copies 4 DWORDs of data into the output struct, then
 * decrements refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412570(int a);
extern int __stdcall FUN_00416b60(int a);
extern void __stdcall FUN_004d1f80(int a, int b);
extern void __stdcall FUN_004d21c0(int a);
extern void __stdcall FUN_004084e0(int ptr);

int DAT_007dab44; /* 0x007dab44 */
int DAT_007dab40; /* 0x007dab40 */

__declspec(naked) int __stdcall FUN_00528420(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x48
        push    esi
        mov     esi, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 4]
        mov     ecx, dword ptr [eax]
        push    ecx
        lea     ecx, [esp + 8]
        call    FUN_00412570
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        lea     ecx, [esp + 4]
        push    ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        add     ecx, 0x54
        call    FUN_00416b60
        test    eax, eax
        jz      l_zero_out
        mov     dx, word ptr [eax + 0x18]
        mov     ax, word ptr [eax + 0x1a]
        push    1
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x10]
        mov     word ptr [esp + 0x58], dx
        mov     word ptr [esp + 0x5a], ax
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax + 0x134]
        mov     ecx, dword ptr [eax + 0x140]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [eax + 0x138]
        mov     eax, dword ptr [eax + 0x13c]
        mov     dword ptr [esi + 4], ecx
        lea     ecx, [esp + 8]
        mov     dword ptr [esi + 8], edx
        mov     dword ptr [esi + 0x0c], eax
        call    FUN_004d21c0
        jmp     l_decref
    l_zero_out:
        mov     dword ptr [esi], 0
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi + 8], 0
        mov     dword ptr [esi + 0x0c], 0
    l_decref:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        pop     esi
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
        mov     eax, 1
        add     esp, 0x48
        ret     8
    }
}
