/*
 * FUN_00507DE0 (149 B) — __thiscall string formatting helper.
 *
 * Takes a string parameter, calls FUN_00502370, checks field values,
 * and formats strings via FUN_00412390.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00502370(void *this, int dummy, void *param);
extern int __fastcall FUN_00412780(void *this, int dummy, int param);
extern int __fastcall FUN_00411C40(void *this, int dummy, const char *fmt, ...);
extern int __fastcall FUN_004121E0(void *this, int dummy, const char *fmt, ...);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00507de0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, [esp + 0x0c]       ; param (string pointer)
        mov     esi, ecx                ; this pointer

        push    edi
        call    FUN_00502370
        mov     eax, [esi + 0x0e0]      ; load field at +0xE0
        mov     eax, [eax + 0x14]       ; load sub-field
        sub     eax, 4
        mov     dword ptr [esp + 0x0c], 0   ; local = 0

        jz      l_push_48               ; if (eax == 0) push 0x775C48
        dec     eax
        jnz     l_skip_first_fmt        ; if (eax != 0) skip first format

        ; eax was 5 (now 0 after dec)
        push    0x775C30
        jmp     l_common

    l_push_48:
        push    0x775C48

    l_common:
        lea     ecx, [esp + 0x10]
        call    FUN_00412780            ; construct string object

        mov     eax, [esp + 0x0c]       ; load local
        test    eax, eax
        jz      l_skip_first_fmt        ; if (local == 0) skip first format

        push    eax
        push    0x773250                ; format string
        mov     ecx, edi
        call    FUN_00411C40            ; format

    l_skip_first_fmt:
        lea     ecx, [esi + 0x1e0]
        push    ecx
        push    0x775D40                ; format string
        mov     ecx, edi
        call    FUN_004121E0            ; format

        add     esi, 0x1f8
        push    esi
        push    0x775D28                ; format string
        mov     ecx, edi
        call    FUN_004121E0            ; format

        mov     eax, [esp + 0x0c]       ; load local
        test    eax, eax
        pop     edi
        pop     esi
        jz      l_return

        mov     cl, [eax - 1]           ; last char
        dec     eax
        dec     cl
        mov     [eax], cl
        jnz     l_return

        push    eax
        call    FUN_004084e0            ; free
        pop     ecx                     ; adjust stack (pop ecx = 59)

    l_return:
        ret     4
    }
}
