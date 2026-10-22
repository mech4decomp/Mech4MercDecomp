/*
 * FUN_00503ec0 (587 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __fastcall FUN_00411bf0(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_00492e40(void *this, int edx_unused, int param);
extern int __fastcall FUN_00412e70(void *this, int edx_unused, int param);
extern int __fastcall FUN_00412570(void *this, int edx_unused, int param);
extern int __fastcall FUN_00416f60(void *this, int edx_unused, void *param);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __stdcall FUN_006fab90(int a, int b, int c, const char *msg);
extern int __stdcall FUN_006fabf0(int a, int b, int c, const char *msg);
extern int __fastcall FUN_00411ec0(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_00503250(void *param);

/* Global data references */
extern int g_unknown_7da884;
extern int g_unknown_7db0b0;
extern int g_unknown_7dc810;

/* _stricmp IAT entry */
extern int *DAT_0076b2ac;

__declspec(naked) void FUN_00503ec0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp + 8]          ; param1
        mov     esi, [edi]              ; esi = *param1
        mov     eax, [esi]
        push    0x30
        mov     ecx, esi
        call    dword ptr [eax + 0x14]  ; virtual call

        mov     edi, [edi + 8]
        push    1
        lea     ecx, [ebp - 0x18]
        push    ecx
        push    0x770ef4
        mov     ecx, edi
        call    FUN_00411bf0

        mov     edx, [ebp - 0x18]
        mov     ecx, dword ptr [g_unknown_7da884]
        push    edx
        call    FUN_00492e40

        test    eax, eax
        mov     [ebp - 0x1c], eax
        jge     skip_error
        mov     eax, [ebp - 0x18]
        push    eax
        push    0x776a20
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      skip_error
        int     3
skip_error:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp - 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     ecx, dword ptr [g_unknown_7da884]
        add     ecx, 4
        push    ecx
        mov     ecx, dword ptr [g_unknown_7db0b0]
        call    FUN_00412e70

        push    0
        lea     edx, [ebp - 0xc]
        push    edx
        push    0x776a08
        mov     ecx, edi
        mov     dword ptr [ebp - 8], 0
        mov     byte ptr [ebp - 2], 1
        mov     byte ptr [ebp - 1], 0
        mov     dword ptr [ebp - 0xc], 0x7769fc
        call    FUN_00411bf0

        mov     eax, [ebp - 0xc]
        mov     ebx, dword ptr [DAT_0076b2ac] ; _stricmp IAT
        push    0x7769fc
        push    eax
        call    ebx                     ; _stricmp
        add     esp, 8
        test    eax, eax
        je      after_string_checks

        mov     ecx, [ebp - 0xc]
        push    0x7769e8
        push    ecx
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     check_third_string
        or      dword ptr [ebp - 8], 8
        jmp     after_string_checks

check_third_string:
        mov     edx, [ebp - 0xc]
        push    0x7769d4
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     string_not_found
        or      dword ptr [ebp - 8], 4
        jmp     after_string_checks

string_not_found:
        mov     eax, [ebp - 0xc]
        mov     ecx, [edi + 0x14]
        mov     edx, [edi + 0x10]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x77699c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      after_string_checks
        int     3

after_string_checks:
        push    0
        lea     ecx, [ebp - 0x10]
        push    ecx
        push    0x776994
        mov     ecx, edi
        mov     dword ptr [ebp - 0x14], 0xffffffff
        mov     bl, 1
        call    FUN_00411bf0

        test    al, al
        je      after_lookup

        mov     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [ebp - 0x20]
        call    FUN_00412570

        mov     ecx, [ebp + 0xc]
        lea     eax, [ebp - 0x20]
        push    eax
        add     ecx, 0x5c
        call    FUN_00416f60

        mov     ecx, [ebp - 0x20]
        test    ecx, ecx
        mov     [ebp + 0xc], eax
        je      check_result

        ; refcount decrement
        mov     dl, [ecx - 1]
        dec     ecx
        dec     dl
        mov     [ecx], dl
        jne     check_result
        push    ecx
        call    FUN_004084e0
        mov     eax, [ebp + 0xc]
        add     esp, 4

check_result:
        test    eax, eax
        jne     check_type

        ; result == 0
        mov     edx, [ebp - 0x10]
        mov     eax, [edi + 0x14]
        mov     ecx, [edi + 0x10]
        push    edx
        mov     edx, [ecx]
        push    eax
        push    edx
        push    0x77696c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      zero_bl
        int     3
zero_bl:
        xor     bl, bl
        jmp     after_lookup

check_type:
        cmp     dword ptr [eax + 0x18], 0xe
        je      type_is_e

        ; type != 0xe
        mov     eax, [ebp - 0x10]
        mov     ecx, [edi + 0x14]
        mov     edx, [edi + 0x10]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x776938
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      zero_bl2
        int     3
zero_bl2:
        xor     bl, bl
        jmp     after_lookup

type_is_e:
        mov     ecx, [eax + 0x10]
        mov     [ebp - 0x14], ecx

after_lookup:
        cmp     dword ptr [ebp - 0x14], -1
        jne     skip_or
        mov     byte ptr [ebp - 1], 1
        mov     byte ptr [ebp - 2], 1
skip_or:
        push    0
        lea     edx, [ebp - 2]
        push    edx
        push    0x776a18
        mov     ecx, edi
        call    FUN_00411ec0

        push    0
        lea     eax, [ebp - 1]
        push    eax
        push    0x776a98
        mov     ecx, edi
        call    FUN_00411ec0

        mov     al, [ebp - 1]
        test    al, al
        je      skip_or2
        or      dword ptr [ebp - 8], 2
skip_or2:
        mov     al, [ebp - 2]
        test    al, al
        je      skip_or3
        or      dword ptr [ebp - 8], 1
skip_or3:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp - 8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        test    bl, bl
        je      skip_recursive
        mov     ecx, [ebp + 8]
        push    ecx
        call    FUN_00503250
        add     esp, 4
        test    eax, eax
        setne   bl
skip_recursive:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp - 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     eax, dword ptr [g_unknown_7dc810]
        neg     bl
        pop     edi
        pop     esi
        sbb     ebx, ebx
        and     ebx, eax
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
