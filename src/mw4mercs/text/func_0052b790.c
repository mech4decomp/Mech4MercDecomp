/*
 * FUN_0052b790 (562 B) — Team data configuration function (__fastcall).
 * Reads team settings from a config structure and writes them via
 * various serialization functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_0040eda0(char *str);
extern void __fastcall FUN_00411d10(char *str, int val);
extern void __fastcall FUN_00411c40(char *str, int val);
extern void __fastcall FUN_00411e70(char *str, int val);
extern void __fastcall FUN_00412780(void *ptr);
extern int __fastcall FUN_004125e0(int a, int *b);
extern void __fastcall FUN_00412740(int val);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void __fastcall FUN_0052b790(void *param1)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    0x77aa1c
        call    FUN_0040eda0
        mov     edi, eax
        mov     eax, dword ptr [esi]
        push    eax
        push    0x77aa08
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 4]
        cmp     eax, 0xf
        jge     l_check_max1
        mov     dword ptr [esi + 4], 0xf
        jmp     l_clamp_done1

    l_check_max1:
        cmp     eax, 100
        jle     l_clamp_done1
        mov     dword ptr [esi + 4], 100

    l_clamp_done1:
        push    ebx
        mov     ebx, dword ptr [esi + 4]
        push    ebx
        push    0x77a4b0
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 8]
        cmp     eax, ebx
        jge     l_check_max2
        mov     dword ptr [esi + 8], ebx
        jmp     l_clamp_done2

    l_check_max2:
        cmp     eax, 100
        jle     l_clamp_done2
        mov     dword ptr [esi + 8], 100

    l_clamp_done2:
        mov     ecx, dword ptr [esi + 8]
        push    ecx
        push    0x77a4c0
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, 0x14
        jge     l_check_max3
        mov     dword ptr [esi + 0xc], 0x14
        jmp     l_clamp_done3

    l_check_max3:
        cmp     eax, 0x960
        jle     l_clamp_done3
        mov     dword ptr [esi + 0xc], 0x960

    l_clamp_done3:
        mov     edx, dword ptr [esi + 0xc]
        push    edx
        push    0x77a9f4
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x14]
        mov     ebx, 0x1e8480
        cmp     eax, ebx
        jge     l_check_max4
        mov     dword ptr [esi + 0x14], ebx
        jmp     l_clamp_done4

    l_check_max4:
        cmp     eax, 0x2160ec0
        jle     l_clamp_done4
        mov     dword ptr [esi + 0x14], 0x2160ec0

    l_clamp_done4:
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        push    0x77a9e4
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, ebx
        jge     l_check_max5
        mov     dword ptr [esi + 0x18], ebx
        jmp     l_clamp_done5

    l_check_max5:
        cmp     eax, 0x1dcd6500
        jle     l_clamp_done5
        mov     dword ptr [esi + 0x18], 0x1dcd6500

    l_clamp_done5:
        mov     ecx, dword ptr [esi + 0x18]
        push    ecx
        push    0x77a9d0
        mov     ecx, edi
        call    FUN_00411d10
        lea     edx, [esi + 0x20]
        push    edx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x14]
        push    0x76ba64
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        pop     ebx
        jz      l_skip_refcnt1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt1
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt1:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    0x77a9c8
        mov     ecx, edi
        call    FUN_00411c40
        mov     edx, dword ptr [esi + 0x24]
        push    edx
        push    0x77a9bc
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        push    0x77a9ac
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0x2c]
        push    ecx
        push    0x77a99c
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0x30]
        push    edx
        push    0x77a98c
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0x34]
        push    eax
        push    0x77a97c
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0x38]
        push    ecx
        push    0x77a96c
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0x3c]
        push    edx
        push    0x77a95c
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0x40]
        push    eax
        push    0x77a948
        mov     ecx, edi
        call    FUN_00411e70
        mov     ecx, dword ptr [esi + 0x44]
        push    ecx
        push    0x77a934
        mov     ecx, edi
        call    FUN_00411e70
        mov     edx, dword ptr [esi + 0x48]
        push    edx
        push    0x77a920
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esi + 0x4c]
        push    eax
        push    0x77a90c
        mov     ecx, edi
        call    FUN_00411e70
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        pop     esi
        jz      l_skip_refcnt2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt2
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt2:
        pop     ecx
        ret     4
    }
}
