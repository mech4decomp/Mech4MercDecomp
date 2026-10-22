/*
 * FUN_005037a0 (574 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __fastcall FUN_00503250(void *param);
extern int __fastcall FUN_00411a80(const char *str);
extern int __fastcall FUN_004c41d0(void *this, int edx_unused, void *param);
extern int __fastcall FUN_00417a40(void *this);
extern int __fastcall FUN_0040c0e0(void *this);
extern int __fastcall FUN_00504ce0(void *a, void *b, void *c);
extern int __stdcall FUN_006fab90(int a, int b, int c, const char *msg);
extern int __fastcall FUN_00415230(void *this, int edx_unused, int param);
extern int __fastcall FUN_00417980(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

/* Global data references */
extern int g_unknown_7dc83c;
extern int g_unknown_7dc734;

/* IAT entry for call dword ptr [0x76b2dc] */
extern int *DAT_0076b2dc;

__declspec(naked) void FUN_005037a0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x44
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp + 8]          ; param1
        mov     esi, [edi]              ; esi = *param1
        mov     eax, [esi]
        push    0x28
        mov     ecx, esi
        call    dword ptr [eax + 0x14]  ; virtual call

        push    edi
        call    FUN_00503250

        mov     ecx, [edi + 0xc]
        mov     ebx, [edi + 8]
        add     esp, 4
        test    eax, eax
        mov     [ebp - 0x20], ecx
        push    0x77377c
        mov     ecx, ebx
        setne   byte ptr [ebp - 1]
        mov     [ebp - 0x24], ebx
        call    FUN_00411a80

        mov     [ebp - 0x34], eax
        mov     edx, [eax]
        mov     edi, 0x76cc9c
        push    0x7768b4
        mov     ecx, ebx
        mov     [ebp - 0x2c], eax
        mov     [ebp - 0x30], edx
        mov     [ebp - 0x38], edi
        call    FUN_00411a80

        push    eax
        lea     ecx, [ebp - 0x44]
        mov     [ebp - 0x28], eax
        call    FUN_004c41d0

        mov     ecx, [ebp - 0x34]
        mov     [ebp - 0x44], edi
        call    FUN_00417a40

        mov     ecx, [ebp - 0x40]
        mov     edi, eax
        call    FUN_00417a40

        cmp     edi, eax
        mov     ecx, [ebp - 0x34]
        jb      use_first
        mov     ecx, [ebp - 0x40]
use_first:
        call    FUN_00417a40

        push    4
        lea     ecx, [ebp - 0x1c]
        mov     [ebp - 0x1c], eax
        mov     eax, [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]  ; virtual call

        lea     ecx, [ebp - 0x38]
        call    FUN_0040c0e0

        lea     ecx, [ebp - 0x44]
        mov     edi, eax
        call    FUN_0040c0e0

        test    edi, edi
        mov     ebx, eax
        mov     dword ptr [ebp - 0x18], 0xffffffff
        je      cleanup

loop_check_ebx:
        test    ebx, ebx
        je      cleanup

loop_start:
        mov     edx, [ebp + 8]
        mov     edi, [edi + 0x18]
        mov     eax, [edx + 4]
        mov     ecx, [ebp - 0x20]
        push    edi
        push    eax
        push    ecx
        call    FUN_00504ce0
        add     esp, 0xc
        cmp     eax, -1
        mov     [ebp - 0x18], eax
        jne     found_match

        ; not found
        mov     eax, [ebp - 0x24]
        mov     edx, [eax + 0x14]
        mov     eax, [eax + 0x10]
        mov     ecx, [eax]
        push    edi
        push    edx
        push    ecx
        push    0x77677c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      set_false
        int     3
        jmp     set_false

found_match:
        mov     edx, [ebp - 0x20]
        mov     ecx, [edx]
        mov     eax, [ecx + eax*8]
        mov     edx, dword ptr [g_unknown_7dc83c]
        push    edx
        mov     ecx, eax
        call    FUN_00415230

        test    al, al
        jne     continue_loop

        mov     eax, [ebp - 0x24]
        mov     ecx, [eax + 0x14]
        mov     edx, [eax + 0x10]
        mov     eax, [edx]
        push    edi
        push    ecx
        push    eax
        push    0x776874
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      set_false
        int     3

set_false:
        mov     byte ptr [ebp - 1], 0

continue_loop:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp - 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        lea     ecx, [ebp - 0x14]
        push    ecx
        lea     edx, [ebp - 0x10]
        push    edx
        mov     edx, [ebx + 0x18]
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 8]
        push    ecx
        push    0x76d944
        push    edx
        call    dword ptr [DAT_0076b2dc]

        fld     dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        mov     eax, [esi]
        add     esp, 0x18
        push    4
        fstp    dword ptr [ebp - 8]
        lea     ecx, [ebp - 8]
        fld     dword ptr [ebp - 0xc]
        push    ecx
        fmul    dword ptr [ebp - 0xc]
        mov     ecx, esi
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        call    dword ptr [eax + 0x24]  ; virtual call

        mov     edx, [eax]
        push    4
        lea     ecx, [ebp - 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     edx, [eax]
        push    4
        lea     ecx, [ebp - 0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     edx, [eax]
        push    4
        lea     ecx, [ebp - 0x14]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     eax, [ebp - 0x30]
        test    eax, eax
        je      null_edi
        mov     edx, [eax + 4]
        mov     edi, [eax]
        mov     [ebp - 0x30], edx
        jmp     check_ebx
null_edi:
        xor     edi, edi
check_ebx:
        mov     eax, [ebp - 0x3c]
        test    eax, eax
        je      null_ebx
        mov     ebx, [eax]
        mov     eax, [eax + 4]
        mov     [ebp - 0x3c], eax
        jmp     check_loop
null_ebx:
        xor     ebx, ebx
check_loop:
        test    edi, edi
        jne     loop_check_ebx

cleanup:
        mov     esi, [ebp - 0x28]
        test    esi, esi
        je      cleanup2
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 4

cleanup2:
        mov     esi, [ebp - 0x2c]
        test    esi, esi
        je      done
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 4

done:
        mov     al, [ebp - 1]
        mov     ecx, dword ptr [g_unknown_7dc734]
        neg     al
        pop     edi
        pop     esi
        pop     ebx
        sbb     eax, eax
        and     eax, ecx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
