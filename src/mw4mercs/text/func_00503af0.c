/*
 * FUN_00503af0 (970 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __fastcall FUN_00411bf0(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_00412570(void *this, int edx_unused, int param);
extern int __fastcall FUN_00416f60(void *this, int edx_unused, void *param);
extern int __fastcall FUN_0040d9b0(void *this);
extern int __stdcall FUN_006fab90(int a, int b, int c, const char *msg);
extern int __stdcall FUN_006fabf0(int a, int b, int c, const char *msg);
extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_004c41d0(void *this, int edx_unused, void *param);
extern int __fastcall FUN_00411ec0(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_00492e40(void *this, int edx_unused, int param);
extern int __fastcall FUN_00412e70(void *this, int edx_unused, int param);
extern int __fastcall FUN_00503250(void *param);
extern void __stdcall FUN_004084e0(void *ptr);

/* Global data references */
extern int g_unknown_7da884;
extern int g_unknown_7db0b0;
extern int g_unknown_7dc80c;

/* IAT entries */
extern int *DAT_0076b2d8;   /* call dword ptr [0x76b2d8] */
extern int *DAT_0076b2ac;   /* _stricmp IAT */

__declspec(naked) void FUN_00503af0(void)
{
    

/* extern data/function symbols for absolute-address operands */
extern int DAT_0076c5b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x2c
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp + 8]          ; param1
        mov     esi, [edi]              ; esi = *param1
        mov     eax, [esi]
        push    0x34
        mov     ecx, esi
        call    dword ptr [eax + 0x14]  ; virtual call

        mov     ebx, [edi + 8]
        push    1
        lea     ecx, [ebp - 0xc]
        push    ecx
        push    0x776a94
        mov     ecx, ebx
        mov     [ebp - 0x28], ebx
        mov     dword ptr [ebp - 0x18], 0xffffffff
        call    FUN_00411bf0

        mov     edx, [ebp - 0xc]
        push    edx
        lea     ecx, [ebp - 0x24]
        mov     byte ptr [ebp - 3], 1
        call    FUN_00412570

        mov     eax, [ebp + 0xc]
        lea     edx, [ebp - 0x24]
        lea     ecx, [eax + 0x5c]
        push    edx
        mov     [ebp - 0x2c], ecx
        call    FUN_00416f60

        lea     ecx, [ebp - 0x24]
        mov     edi, eax
        call    FUN_0040d9b0

        test    edi, edi
        jne     check_type_5

        ; edi == 0
        mov     eax, [ebp - 0xc]
        mov     ecx, [ebx + 0x14]
        mov     edx, [ebx + 0x10]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x776a6c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      set_false_1
        int     3
set_false_1:
        mov     byte ptr [ebp - 3], 0
        jmp     after_first_check

check_type_5:
        cmp     dword ptr [edi + 0x18], 5
        je      type_is_5

        ; type != 5
        mov     ecx, [ebp - 0xc]
        mov     edx, [ebx + 0x14]
        mov     eax, [ebx + 0x10]
        push    ecx
        mov     ecx, [eax]
        push    edx
        push    ecx
        push    0x776a38
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      set_false_2
        int     3
set_false_2:
        mov     byte ptr [ebp - 3], 0
        jmp     after_first_check

type_is_5:
        mov     edx, [edi + 0x10]
        mov     [ebp - 0x18], edx

after_first_check:
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp - 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]  ; virtual call

        push    0xc
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      alloc_failed

        add     ebx, 0x18
        push    ebx
        mov     ecx, edi
        call    FUN_004c41d0
        mov     dword ptr [edi], 0x76cc9c
        mov     ebx, edi
        jmp     after_alloc
alloc_failed:
        xor     ebx, ebx

after_alloc:
loop_entry:
        mov     eax, [ebx + 8]
        test    eax, eax
        je      loop_done

        mov     edi, [eax]
        test    edi, edi
        mov     edx, [eax + 4]
        mov     [ebx + 8], edx
        je      loop_done

        mov     eax, [edi + 0x14]
        push    eax
        call    dword ptr [DAT_0076b2d8]
        fst     dword ptr [ebp + 0xc]
        fcomp dword ptr [DAT_0076c5b0]
        add     esp, 4
        fnstsw  ax
        test    ah, 0x40
        jne     loop_entry

        fld     dword ptr [ebp + 0xc]
        mov     edx, [esi]
        fmul    dword ptr [ebp + 0xc]
        push    4
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, esi
        fstp    dword ptr [ebp + 0xc]
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     edi, [edi + 0x18]
        mov     ecx, dword ptr [g_unknown_7da884]
        push    edi
        call    FUN_00492e40

        test    eax, eax
        mov     [ebp - 0x24], eax
        jge     skip_error1
        push    edi
        push    0x776a20
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      skip_error1
        int     3
skip_error1:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp - 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call
        jmp     loop_entry

loop_done:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0xc], 0xbf800000
        call    dword ptr [edx + 0x24]  ; virtual call

        push    ebx
        call    FUN_004084e0
        mov     edi, [ebp - 0x28]
        add     esp, 4

        push    1
        lea     ecx, [ebp - 0x1c]
        push    ecx
        push    0x770ef4
        mov     ecx, edi
        call    FUN_00411bf0

        mov     edx, [ebp - 0x1c]
        mov     ecx, dword ptr [g_unknown_7da884]
        push    edx
        call    FUN_00492e40

        test    eax, eax
        mov     [ebp - 0x20], eax
        jge     skip_error2
        mov     eax, [ebp - 0x1c]
        push    eax
        push    0x776a20
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      skip_error2
        int     3
skip_error2:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp - 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     ecx, dword ptr [g_unknown_7da884]
        add     ecx, 4
        push    ecx
        mov     ecx, dword ptr [g_unknown_7db0b0]
        call    FUN_00412e70

        push    0
        lea     edx, [ebp - 1]
        push    edx
        push    0x776a18
        mov     ecx, edi
        mov     dword ptr [ebp - 8], 0
        mov     byte ptr [ebp - 1], 1
        call    FUN_00411ec0

        mov     al, [ebp - 1]
        test    al, al
        je      skip_or1
        or      dword ptr [ebp - 8], 1
skip_or1:
        push    0
        lea     eax, [ebp - 0x10]
        push    eax
        push    0x776a08
        mov     ecx, edi
        mov     dword ptr [ebp - 0x10], 0x7769fc
        call    FUN_00411bf0

        mov     ecx, [ebp - 0x10]
        mov     ebx, dword ptr [DAT_0076b2ac] ; _stricmp IAT
        push    0x7769fc
        push    ecx
        call    ebx                     ; _stricmp
        add     esp, 8
        test    eax, eax
        je      after_string_checks

        mov     edx, [ebp - 0x10]
        push    0x7769e8
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     check_third_string
        or      dword ptr [ebp - 8], 8
        jmp     after_string_checks

check_third_string:
        mov     eax, [ebp - 0x10]
        push    0x7769d4
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jne     string_not_found
        or      dword ptr [ebp - 8], 4
        jmp     after_string_checks

string_not_found:
        mov     ecx, [ebp - 0x10]
        mov     edx, [edi + 0x14]
        mov     eax, [edi + 0x10]
        push    ecx
        mov     ecx, [eax]
        push    edx
        push    ecx
        push    0x77699c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      after_string_checks
        int     3

after_string_checks:
        push    0
        lea     edx, [ebp - 0xc]
        push    edx
        push    0x776994
        mov     ecx, edi
        mov     dword ptr [ebp - 0x14], 0xffffffff
        call    FUN_00411bf0

        test    al, al
        je      after_second_lookup_2

        mov     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp + 0xc]
        call    FUN_00412570

        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     ecx, [ebp - 0x2c]
        call    FUN_00416f60

        mov     ebx, eax
        mov     eax, [ebp + 0xc]
        test    eax, eax
        je      refcount_check2

        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     refcount_check2
        push    eax
        call    FUN_004084e0
        add     esp, 4

refcount_check2:
        test    ebx, ebx
        jne     check_type_e

        ; ebx == 0
        mov     edx, [ebp - 0xc]
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
        jmp     after_second_lookup

check_type_e:
        cmp     dword ptr [ebx + 0x18], 0xe
        je      type_is_e

        ; type != 0xe
        mov     eax, [ebp - 0xc]
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
        je      set_false_3
        int     3
set_false_3:
        mov     byte ptr [ebp - 3], 0
        jmp     after_second_lookup_2

type_is_e:
        mov     ecx, [ebx + 0x10]
        mov     [ebp - 0x14], ecx

after_second_lookup_2:
        mov     bl, [ebp - 3]

after_second_lookup:
        cmp     dword ptr [ebp - 0x14], -1
        jne     skip_or2
        or      dword ptr [ebp - 8], 3
skip_or2:
        push    0
        lea     edx, [ebp - 2]
        push    edx
        push    0x77692c
        mov     ecx, edi
        mov     byte ptr [ebp - 2], 0
        call    FUN_00411ec0

        mov     al, [ebp - 2]
        test    al, al
        je      skip_or3
        or      dword ptr [ebp - 8], 3
skip_or3:
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp - 8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]  ; virtual call

        test    bl, bl
        je      skip_recursive_call
        mov     edx, [ebp + 8]
        push    edx
        call    FUN_00503250
        add     esp, 4
        test    eax, eax
        setne   byte ptr [ebp - 3]
        mov     bl, [ebp - 3]

skip_recursive_call:
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp - 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]  ; virtual call

        mov     edx, [eax]
        push    4
        lea     ecx, [ebp - 0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     eax, dword ptr [g_unknown_7dc80c]
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
