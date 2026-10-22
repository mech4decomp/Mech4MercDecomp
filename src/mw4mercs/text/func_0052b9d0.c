/*
 * FUN_0052b9d0 (513 B) — Team data read function (__thiscall).
 * Reads team settings from a config structure, clamping values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_0040ecc0(char *str);
extern void __fastcall FUN_00411cb0(char *str, void *ptr, int zero);
extern char __fastcall FUN_00411bf0(char *str, void *ptr, int zero);
extern void __fastcall FUN_00411e10(char *str, void *ptr, int zero);

__declspec(naked) void __fastcall FUN_0052b9d0(void *param1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    0x77aa1c
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      l_done

        push    ebx
        push    0
        push    edi
        push    0x77aa08
        mov     ecx, esi
        call    FUN_00411cb0
        push    0
        lea     ebx, [edi + 4]
        push    ebx
        push    0x77a4b0
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebx]
        cmp     eax, 0xf
        jge     l_check_max1
        mov     dword ptr [ebx], 0xf
        jmp     l_clamp_done1

    l_check_max1:
        cmp     eax, 100
        jle     l_clamp_done1
        mov     dword ptr [ebx], 100

    l_clamp_done1:
        push    ebp
        push    0
        lea     ebp, [edi + 8]
        push    ebp
        push    0x77a4c0
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebp]
        mov     ebx, dword ptr [ebx]
        cmp     eax, ebx
        jge     l_check_max2
        mov     dword ptr [ebp], ebx
        jmp     l_clamp_done2

    l_check_max2:
        cmp     eax, 100
        jle     l_clamp_done2
        mov     dword ptr [ebp], 100

    l_clamp_done2:
        push    0
        lea     ebx, [edi + 0xc]
        push    ebx
        push    0x77a9f4
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebx]
        cmp     eax, 0x14
        pop     ebp
        jge     l_check_max3
        mov     dword ptr [ebx], 0x14
        jmp     l_clamp_done3

    l_check_max3:
        cmp     eax, 0x960
        jle     l_clamp_done3
        mov     dword ptr [ebx], 0x960

    l_clamp_done3:
        push    0
        lea     ebx, [edi + 0x14]
        push    ebx
        push    0x77a9e4
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebx]
        cmp     eax, 0x1e8480
        jge     l_check_max4
        mov     dword ptr [ebx], 0x1e8480
        jmp     l_clamp_done4

    l_check_max4:
        cmp     eax, 0x2160ec0
        jle     l_clamp_done4
        mov     dword ptr [ebx], 0x2160ec0

    l_clamp_done4:
        push    0
        lea     ebx, [edi + 0x18]
        push    ebx
        push    0x77a9d0
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebx]
        cmp     eax, 0x1e8480
        jge     l_check_max5
        mov     dword ptr [ebx], 0x1e8480
        jmp     l_clamp_done5

    l_check_max5:
        cmp     eax, 0x1dcd6500
        jle     l_clamp_done5
        mov     dword ptr [ebx], 0x1dcd6500

    l_clamp_done5:
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        push    0x77a9c8
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        pop     ebx
        jz      l_skip_alignment

        mov     ecx, dword ptr [esp + 0xc]
        movsx   edx, byte ptr [ecx]
        mov     dword ptr [edi + 0x20], edx

    l_skip_alignment:
        push    0
        lea     eax, [edi + 0x24]
        push    eax
        push    0x77a9bc
        mov     ecx, esi
        call    FUN_00411cb0
        push    0
        lea     ecx, [edi + 0x28]
        push    ecx
        push    0x77a9ac
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        lea     edx, [edi + 0x2c]
        push    edx
        push    0x77a99c
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        lea     eax, [edi + 0x30]
        push    eax
        push    0x77a98c
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        lea     ecx, [edi + 0x34]
        push    ecx
        push    0x77a97c
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        lea     edx, [edi + 0x38]
        push    edx
        push    0x77a96c
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        lea     eax, [edi + 0x3c]
        push    eax
        push    0x77a95c
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        lea     ecx, [edi + 0x40]
        push    ecx
        push    0x77a948
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        lea     edx, [edi + 0x44]
        push    edx
        push    0x77a934
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        lea     eax, [edi + 0x48]
        push    eax
        push    0x77a920
        mov     ecx, esi
        call    FUN_00411e10
        push    0
        add     edi, 0x4c
        push    edi
        push    0x77a90c
        mov     ecx, esi
        call    FUN_00411e10

    l_done:
        pop     edi
        pop     esi
        ret     4
    }
}
