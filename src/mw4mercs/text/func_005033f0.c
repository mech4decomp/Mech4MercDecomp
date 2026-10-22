/*
 * FUN_005033f0 (306 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __fastcall FUN_00503250(void *param);
extern int __fastcall FUN_00411a80(const char *str);
extern int __fastcall FUN_00504ce0(void *a, void *b, void *c);
extern int __stdcall FUN_006fab90(int a, int b, int c, const char *msg);
extern int __fastcall FUN_00415230(void *this, int edx_unused, int param);
extern int __fastcall FUN_00417980(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

/* Global data references */
extern int g_unknown_7dc83c;
extern int g_unknown_7dc840;

__declspec(naked) void FUN_005033f0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp + 8]          ; param1
        mov     ebx, [edi]              ; ebx = *param1
        mov     eax, [ebx]
        push    0x28
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]  ; virtual call

        push    edi
        call    FUN_00503250

        mov     ecx, [edi + 8]
        mov     edx, [edi + 0xc]
        add     esp, 4
        test    eax, eax
        push    0x77377c
        setne   byte ptr [ebp + 0xb]
        mov     [ebp - 0xc], ecx
        mov     [ebp - 8], edx
        call    FUN_00411a80

        mov     esi, eax
        mov     ecx, [esi]
        mov     [ebp - 0x10], esi
        mov     dword ptr [ebp - 4], 0xffffffff

loop_test:
        test    ecx, ecx
        je      loop_end

loop_body:
        mov     eax, [ecx]
        test    eax, eax
        mov     ecx, [ecx + 4]
        mov     [ebp - 0x14], ecx
        je      loop_end

        mov     esi, [eax + 0x18]
        mov     edx, [edi + 4]
        mov     eax, [ebp - 8]
        push    esi
        push    edx
        push    eax
        call    FUN_00504ce0
        add     esp, 0xc
        cmp     eax, -1
        mov     [ebp - 4], eax
        jne     found_match

        ; not found
        mov     eax, [ebp - 0xc]
        mov     ecx, [eax + 0x14]
        mov     edx, [eax + 0x10]
        mov     eax, [edx]
        push    esi
        push    ecx
        push    eax
        push    0x77677c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      set_false
        int     3
        jmp     set_false

found_match:
        mov     ecx, [ebp - 8]
        mov     edx, [ecx]
        mov     ecx, dword ptr [g_unknown_7dc83c]
        mov     eax, [edx + eax*8]
        push    ecx
        mov     ecx, eax
        call    FUN_00415230

        test    al, al
        jne     continue_loop

        mov     eax, [ebp - 0xc]
        mov     edx, [eax + 0x14]
        mov     eax, [eax + 0x10]
        mov     ecx, [eax]
        push    esi
        push    edx
        push    ecx
        push    0x77673c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      set_false
        int     3

set_false:
        mov     byte ptr [ebp + 0xb], 0

continue_loop:
        mov     edx, [ebx]
        push    4
        lea     eax, [ebp - 4]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     esi, [ebp - 0x10]
        mov     ecx, [ebp - 0x14]
        mov     dword ptr [ebp - 4], 0xffffffff
        jmp     loop_test

loop_end:
        mov     edx, [ebx]
        push    4
        lea     eax, [ebp - 4]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]  ; virtual call

        test    esi, esi
        je      skip_free
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 4

skip_free:
        mov     al, [ebp + 0xb]
        mov     ecx, dword ptr [g_unknown_7dc840]
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
