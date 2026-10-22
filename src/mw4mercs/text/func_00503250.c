/*
 * FUN_00503250 (407 B) — Unknown function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __fastcall FUN_00504ac0(void *param);
extern int __fastcall FUN_00411f70(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_00412020(void *this, int edx_unused, int a, int b, const char *c);
extern int __fastcall FUN_0041a070(void *dst, int edx_unused, void *src);
extern int __fastcall FUN_004c6a50(void *this, int edx_unused, void *a, void *b, void *c, void *d);
extern int __fastcall FUN_004b8420(void *this, int edx_unused, void *a, void *b);
extern int __fastcall FUN_004af260(void *param);
extern int __fastcall FUN_004b99a0(void *this, int edx_unused, void *param);

/* Global data references */
extern int g_unknown_7b8d88;
extern int g_unknown_7b8d8c;
extern int g_unknown_7b8d90;
extern int g_unknown_7b8cec;
extern int g_unknown_7b8cf0;
extern int g_unknown_7b8ce8;
extern int g_unknown_7b87ec;
extern int g_unknown_7dc83c;

__declspec(naked) void FUN_00503250(void)
{
    
__asm {
sub     esp, 0xcc
        push    ebx
        push    esi
        push    edi
        mov     edi, [esp + 0xdc]       ; param1
        mov     esi, [edi]              ; esi = *param1
        mov     eax, [esi]
        push    0x28
        mov     ecx, esi
        call    dword ptr [eax + 0x14]  ; virtual call

        push    edi
        call    FUN_00504ac0

        ; Load three global values
        mov     ecx, dword ptr [g_unknown_7b8d88]
        mov     edi, [edi + 8]
        mov     edx, dword ptr [g_unknown_7b8d8c]
        add     esp, 4
        mov     [esp + 0x18], ecx
        push    0
        lea     ecx, [esp + 0x1c]
        test    eax, eax
        mov     eax, dword ptr [g_unknown_7b8d90]
        push    ecx
        push    0x77544c
        mov     ecx, edi
        setne   bl
        mov     [esp + 0x28], edx
        mov     [esp + 0x2c], eax
        call    FUN_00411f70

        ; Load three more global values
        mov     edx, dword ptr [g_unknown_7b8cec]
        mov     ecx, dword ptr [g_unknown_7b8cf0]
        mov     [esp + 0x28], edx
        push    0
        lea     edx, [esp + 0x28]
        mov     [esp + 0x13], al
        mov     eax, dword ptr [g_unknown_7b8ce8]
        push    edx
        mov     [esp + 0x34], ecx
        push    0x775430
        mov     ecx, edi
        mov     [esp + 0x30], eax
        call    FUN_00412020

        mov     ecx, [esp + 0x1c]
        mov     edx, [esp + 0x20]
        mov     [esp + 0x0e], al
        mov     eax, [esp + 0x18]
        mov     [esp + 0x3c], eax
        lea     eax, [esp + 0x24]
        mov     [esp + 0x4c], ecx
        push    eax
        lea     ecx, [esp + 0x34]
        mov     [esp + 0x60], edx
        call    FUN_0041a070

        mov     edx, [esi]
        push    0x30
        lea     eax, [esp + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        lea     ecx, [esp + 0x98]
        push    ecx
        mov     ecx, dword ptr [g_unknown_7b87ec]
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_004c6a50

        mov     eax, [esp + 0x24]
        mov     edx, [esp + 0x28]
        mov     cl, [esp + 0x23]
        and     eax, 0xfffffffe
        mov     [esp + 0x24], eax
        mov     eax, 1
        or      edx, eax
        add     esp, 0x14
        test    cl, cl
        mov     [esp + 0x14], edx
        jne     skip_or
        mov     cl, [esp + 0x0e]
        test    cl, cl
        jne     skip_or
        or      [esp + 0x10], eax
skip_or:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call

        mov     eax, [esp + 0x14]
        test    eax, eax
        je      skip_extra
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call
        test    byte ptr [esp + 0x14], 0x20
        je      skip_extra
        mov     edx, [esi]
        push    0x40
        lea     eax, [esp + 0x9c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call
skip_extra:
        mov     ecx, dword ptr [g_unknown_7b87ec]
        push    ecx
        push    edi
        lea     ecx, [esp + 0x68]
        call    FUN_004b8420

        push    esi
        call    FUN_004af260
        add     esp, 4

        push    esi
        lea     ecx, [esp + 0x64]
        call    FUN_004b99a0

        mov     eax, dword ptr [g_unknown_7dc83c]
        neg     bl
        pop     edi
        pop     esi
        sbb     ebx, ebx
        and     ebx, eax
        mov     eax, ebx
        pop     ebx
        add     esp, 0xcc
        ret
    }


}
