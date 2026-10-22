/*
 * FUN_00594120 (910 B) — String formatting function.
 * Builds formatted strings with numeric values, calls virtual methods.
 *
 * __stdcall, RET 4 (one stack param).
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_00411cb0(void *, void *, void *, int);
extern void __stdcall FUN_00411bf0(void *, void *, void *);
extern void __stdcall FUN_00412780(void *, void *);
extern void __stdcall FUN_00412a50(void *, void *);
extern void __stdcall FUN_00412670(void *, void *, int);
extern void __stdcall FUN_00412740(void *, void *);
extern void __stdcall FUN_0040d9b0(void *);
extern void __stdcall FUN_004125e0(void *, void *, void *);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_00594120(void)
{
    
__asm {
sub     esp, 0x34
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x44]
        push    1
        lea     eax, [esp + 0x18]
        push    eax
        push    0x782d3c
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], 0xffffffff
        call    FUN_00411cb0
        mov     esi, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea     ecx, [esp + 0x24]
        push    ecx
        xor     ebx, ebx
        push    0x782978
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00411bf0
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        call    FUN_00412a50
        add     esp, 8
        push    1
        lea     ecx, [esp + 0x28]
        push    ecx
        push    0x782d28
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00411bf0
        mov     edx, dword ptr [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        call    FUN_00412a50
        add     esp, 8
        push    1
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    0x782d08
        mov     ecx, edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea     ecx, [esp + 0x30]
        push    ecx
        push    0x782cf8
        mov     ecx, edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea     ecx, [esp + 0x34]
        push    ecx
        push    0x782ce8
        mov     ecx, edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x4c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x4c], ebx
        mov     dword ptr [esp + 0x50], 0xc
        call    dword ptr [edx + 0x24]
        mov     ebx, 0xb

label_outer_loop:
        push    0x782cd8
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    FUN_00412780
        cmp     ebx, 0xa
        jge     label_ge_10
        mov     edx, dword ptr [esp + 0x44]
        xor     ecx, ecx
        mov     cl, bl
        add     cl, 0x30
        push    ecx
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00412740
        lea     ecx, [esp + 0x48]
        jmp     label_after_concat

label_ge_10:
        mov     eax, dword ptr [esp + 0x44]
        push    0x31
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00412740
        lea     ecx, [esp + 0x34]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x44]
        xor     ecx, ecx
        mov     cl, bl
        add     cl, 0x26
        push    ecx
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00412740
        lea     ecx, [esp + 0x38]

label_after_concat:
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x44]
        push    0x782cd0
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x3c]
        test    eax, eax
        je      label_skip_free_1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_skip_free_1
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_skip_free_1:
        mov     edx, dword ptr [esp + 0x44]
        push    1
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        dec     ebx
        jns     label_outer_loop

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x4c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x50], 0xc
        call    dword ptr [edx + 0x24]
        mov     ebx, 0xb

label_outer_loop_2:
        push    0x782cd8
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x20], 1
        call    FUN_00412780
        cmp     ebx, 0xa
        jge     label_ge_10_2
        mov     edx, dword ptr [esp + 0x44]
        xor     ecx, ecx
        mov     cl, bl
        add     cl, 0x30
        push    ecx
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        je      label_skip_free_2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_skip_free_2
        jmp     label_0x5943ff

label_ge_10_2:
        mov     eax, dword ptr [esp + 0x44]
        push    0x31
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x3c]
        test    eax, eax
        je      label_skip_free_3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_skip_free_3
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_skip_free_3:
        mov     edx, dword ptr [esp + 0x44]
        xor     ecx, ecx
        mov     cl, bl
        add     cl, 0x26
        push    ecx
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x38]
        test    eax, eax
        je      label_skip_free_2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_skip_free_2

label_0x5943ff:
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_skip_free_2:
        mov     eax, dword ptr [esp + 0x44]
        push    0x782cc8
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00412740
        lea     ecx, [esp + 0x34]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x44]
        push    0
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        dec     ebx
        jns     label_outer_loop_2

        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        je      label_final_skip_1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_final_skip_1
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_final_skip_1:
        /* __emit: MSVC6 encodes mov eax,[esp] as 8B 04 24 (SIB, no disp); reference uses 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        je      label_final_skip_2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_final_skip_2
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_final_skip_2:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        je      label_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_done
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_done:
        add     esp, 0x34
        ret
    }


}
