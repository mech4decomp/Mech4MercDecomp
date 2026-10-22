/*
 * FUN_00503670 (290 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __fastcall FUN_00503250(void *param);
extern int __fastcall FUN_00411bf0(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_00412570(void *this, int edx_unused, int param);
extern int __fastcall FUN_00416f60(void *this, int edx_unused, void *param);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __stdcall FUN_006fab90(int a, int b, int c, const char *msg);
extern int __stdcall FUN_006fabf0(int a, int b, int c, const char *msg);
extern int __fastcall FUN_00421ec0(void *param);
extern int __fastcall FUN_004900f0(void *param);

/* Global data references */
extern int g_unknown_7dc820;

__declspec(naked) void FUN_00503670(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 8
        push    ebx
        push    esi
        mov     esi, [ebp + 8]          ; param1
        push    edi
        mov     edi, [esi]              ; edi = *param1
        mov     eax, [edi]
        push    0x30
        mov     ecx, edi
        call    dword ptr [eax + 0x14]  ; virtual call

        push    esi
        call    FUN_00503250

        mov     esi, [esi + 8]
        add     esp, 4
        push    0
        lea     ecx, [ebp + 8]
        push    ecx
        test    eax, eax
        push    0x776860
        mov     ecx, esi
        setne   bl
        mov     dword ptr [ebp - 4], 0xffffffff
        call    FUN_00411bf0

        test    al, al
        je      after_lookup

        mov     edx, [ebp + 8]
        push    edx
        lea     ecx, [ebp - 8]
        call    FUN_00412570

        mov     ecx, [ebp + 0xc]
        lea     eax, [ebp - 8]
        push    eax
        add     ecx, 0x5c
        call    FUN_00416f60

        mov     ecx, [ebp - 8]
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
        mov     edx, [ebp + 8]
        mov     eax, [esi + 0x14]
        mov     ecx, [esi + 0x10]
        push    edx
        mov     edx, [ecx]
        push    eax
        push    edx
        push    0x77682c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      zero_bl
        int     3
zero_bl:
        xor     bl, bl
        jmp     after_lookup

check_type:
        cmp     dword ptr [eax + 0x18], 2
        je      type_is_two

        ; type != 2
        mov     eax, [ebp + 8]
        mov     ecx, [esi + 0x14]
        mov     edx, [esi + 0x10]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x7767ec
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      zero_bl2
        int     3
zero_bl2:
        xor     bl, bl
        jmp     after_lookup

type_is_two:
        mov     ecx, [eax + 0x10]
        mov     [ebp - 4], ecx

after_lookup:
        push    edi
        call    FUN_00421ec0

        push    esi
        call    FUN_004900f0
        mov     esi, eax
        mov     edx, [esi]
        add     esp, 8
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 4]     ; virtual call

        test    esi, esi
        je      skip_release
        mov     eax, [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]         ; virtual call (Release?)

skip_release:
        mov     edx, [edi]
        push    4
        lea     eax, [ebp - 4]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     eax, dword ptr [g_unknown_7dc820]
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
