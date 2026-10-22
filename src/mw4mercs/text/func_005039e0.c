/*
 * FUN_005039e0 (261 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __fastcall FUN_00504960(void *param);
extern int __fastcall FUN_00411bf0(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_00412570(void *this, int edx_unused, int param);
extern int __fastcall FUN_00416f60(void *this, int edx_unused, void *param);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __stdcall FUN_006fab90(int a, int b, int c, const char *msg);
extern int __stdcall FUN_006fabf0(int a, int b, int c, const char *msg);

/* Global data references */
extern int g_unknown_7dc738;

__declspec(naked) void FUN_005039e0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 8
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp + 8]          ; param1
        mov     esi, [edi]              ; esi = *param1
        mov     eax, [esi]
        push    0x3c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]  ; virtual call

        push    edi
        call    FUN_00504960

        mov     edi, [edi + 8]
        mov     ecx, [edi + 0x10]
        add     esp, 4
        push    1
        lea     edx, [ebp + 8]
        push    edx
        test    eax, eax
        mov     [ebp - 8], ecx
        push    0x776920
        mov     ecx, edi
        setne   bl
        call    FUN_00411bf0

        mov     eax, [ebp + 8]
        push    eax
        lea     ecx, [ebp - 4]
        call    FUN_00412570

        mov     edx, [ebp + 0xc]
        lea     ecx, [ebp - 4]
        push    ecx
        lea     ecx, [edx + 0x5c]
        call    FUN_00416f60

        mov     ecx, [ebp - 4]
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
        mov     eax, [ebp + 8]
        mov     ecx, [edi + 0x14]
        mov     edx, [ebp - 8]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x7768f4
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      return_zero
        int     3
return_zero:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

check_type:
        cmp     dword ptr [eax + 0x18], 9
        je      type_is_nine

        ; type != 9
        mov     ecx, [ebp + 8]
        mov     edx, [edi + 0x14]
        mov     eax, [ebp - 8]
        push    ecx
        mov     ecx, [eax]
        push    edx
        push    ecx
        push    0x7768bc
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      return_global
        int     3
return_global:
        mov     eax, dword ptr [g_unknown_7dc738]
        xor     bl, bl
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

type_is_nine:
        mov     edx, [esi]
        push    4
        add     eax, 0x10
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     eax, dword ptr [g_unknown_7dc738]
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
