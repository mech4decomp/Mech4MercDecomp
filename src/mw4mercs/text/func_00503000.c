/*
 * FUN_00503000 (401 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations for callees */
extern int __stdcall FUN_0050e020(void *param);
extern int __stdcall FUN_0050df00(void *param);
extern int __fastcall FUN_00411bf0(void *this, int edx_unused, int a, int b, int c);
extern int __fastcall FUN_00412570(void *this, int edx_unused, int param);
extern int __fastcall FUN_00416f60(void *this, int edx_unused, void *param);
extern int __fastcall FUN_0040d9b0(void *this);
extern int __stdcall FUN_006fab90(int a, int b, int c, const char *msg);
extern int __stdcall FUN_006fabf0(int a, int b, int c, const char *msg);
extern int __fastcall FUN_00411d60(void *this, int edx_unused, int a, int b, const char *msg);

/* Import: _stricmp - declared in <string.h> */
extern int *DAT_0076b2ac;

/* Global data references */
extern int g_unknown_7dc138;

__declspec(naked) void FUN_00503000(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x0c
        push    ebx
        mov     ebx, [ebp + 8]          ; param1
        push    esi
        mov     esi, [ebp + 0xc]        ; param2
        push    edi
        mov     edi, [esi]              ; edi = *param2

        ; if (_stricmp(param1, "some_string") != 0) goto big_else
        push    0x7766b8
        push    ebx
        call    dword ptr [DAT_0076b2ac]   ; call _stricmp
        add     esp, 8
        test    eax, eax
        jne     big_else

        ; First path
        mov     eax, [edi]
        push    4
        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [ebp + 0xc], 0x1fc
        call    dword ptr [eax + 0x24]  ; virtual call

        push    esi
        call    FUN_0050e020
        mov     edx, [esi]
        mov     esi, [esi + 8]
        add     esp, 4
        push    1
        lea     ecx, [ebp + 0xc]
        test    eax, eax
        mov     eax, [esi + 0x10]
        push    ecx
        push    0x7766ac
        mov     ecx, esi
        setne   bl
        mov     [ebp - 0xc], edx
        mov     [ebp - 8], eax
        call    FUN_00411bf0

        mov     edx, [ebp + 0xc]
        push    edx
        lea     ecx, [ebp + 8]
        call    FUN_00412570

        mov     ecx, [ebp + 0x10]
        lea     eax, [ebp + 8]
        push    eax
        add     ecx, 0x5c
        call    FUN_00416f60

        lea     ecx, [ebp + 8]
        mov     edi, eax
        call    FUN_0040d9b0

        test    edi, edi
        jne     check_type

        ; edi == 0 path
        mov     edx, [ebp + 0xc]
        mov     eax, [esi + 0x14]
        mov     ecx, [ebp - 8]
        push    edx
        mov     edx, [ecx]
        push    eax
        push    edx
        push    0x776680
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      early_exit_null
        int     3
early_exit_null:
        pop     edi
        xor     ebx, ebx
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

check_type:
        cmp     dword ptr [edi + 0x18], 1
        je      type_is_one

        ; type != 1 path
        mov     eax, [ebp + 0xc]
        mov     ecx, [esi + 0x14]
        mov     edx, [ebp - 8]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x776648
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      early_exit_zero_bl
        int     3
early_exit_zero_bl:
        xor     bl, bl
        jmp     after_type_check

type_is_one:
        mov     ecx, [ebp - 0xc]
        mov     edx, [ecx]
        push    4
        add     edi, 0x10
        push    edi
        call    dword ptr [edx + 0x24]  ; virtual call

after_type_check:
        push    0
        lea     eax, [ebp - 4]
        push    eax
        push    0x77663c
        mov     ecx, esi
        mov     dword ptr [ebp - 4], 0
        call    FUN_00411d60

        mov     ecx, [ebp - 0xc]
        mov     edx, [ecx]
        push    4
        lea     eax, [ebp - 4]
        push    eax
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     eax, dword ptr [g_unknown_7dc138]   ; mov eax, [0x7dc138]
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

big_else:
        push    0x77662c
        push    ebx
        call    dword ptr [DAT_0076b2ac]   ; call _stricmp
        add     esp, 8
        test    eax, eax
        jne     big_else_2

        mov     edx, [edi]
        push    4
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, edi
        mov     dword ptr [ebp + 0xc], 0x20e
        call    dword ptr [edx + 0x24]  ; virtual call

        push    esi
        call    FUN_0050df00
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

big_else_2:
        mov     esi, [esi + 8]
        mov     ecx, [esi + 0x14]
        mov     edx, [esi + 0x10]
        mov     eax, [edx]
        push    ebx
        push    ecx
        push    eax
        push    0x776604
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      big_else_exit
        int     3
big_else_exit:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
