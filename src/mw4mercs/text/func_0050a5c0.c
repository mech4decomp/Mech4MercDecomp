/*
 * FUN_0050A5C0 (301 B) — __thiscall virtual call helper.
 *
 * Makes multiple virtual calls through a vtable to set up fields,
 * then does FPU comparison and more virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_0040dd50(void *this, int dummy, const char *str);
extern int __fastcall FUN_00412390(void *this, int dummy, const char *fmt, ...);
extern int __fastcall FUN_004084e0(void *ptr);
extern int __fastcall FUN_004d2000(void *this, int dummy, int a, int b);

__declspec(naked) void FUN_0050a5c0(void)
{
    

extern int DAT_007b220c;
__asm {
sub     esp, 0x50
        push    ebx
        push    esi
        mov     esi, [esp + 0x5c]       ; param (object pointer)
        mov     eax, [esi]              ; vtable
        push    edi
        mov     edi, ecx                ; this pointer

        ; vcall 1: vtable[0x24](this, &this->0x1c, 4)
        push    4
        lea     ecx, [edi + 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]

        ; vcall 2: vtable[0x24](this, &this->0x20, 1)
        mov     edx, [esi]
        push    1
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        ; vcall 3: vtable[0x24](this, &this->0x24, 4)
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        ; vcall 4: vtable[0x24](this, &this->0x2c, 4)
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        ; vcall 5: vtable[0x24](this, &this->0x29, 1)
        mov     edx, [esi]
        push    1
        lea     eax, [edi + 0x29]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        ; vcall 6: vtable[0x24](this, &this->0x3c, 4)
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        ; vcall 7: vtable[0x24](this, &this->0x40, 4)
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        ; vcall 8: vtable[0x24](this, &this->0x44, 4)
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        ; Construct string object
        push    1
        push    0
        push    0x76C6B4                ; string constant
        lea     ecx, [esp + 0x18]
        call    FUN_0040dd50            ; construct string

        push    0x77792C                ; format string
        lea     ecx, [esp + 0x10]
        call    FUN_00412390            ; format

        mov     ebx, eax                ; save result
        test    ebx, ebx
        jnz     l_ok

        push    0x77792C                ; format string (retry)
        lea     ecx, [esp + 0x10]
        call    FUN_00412390            ; format

    l_ok:
        ; FPU comparison sequence
        fld     dword ptr [edi + 0x30]
        fsub    dword ptr [edi + 0x34]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     l_push_0

        push    1
        jmp     l_push_done

    l_push_0:
        push    0

    l_push_done:
        push    0x77791C                ; format string
        mov     ecx, ebx
        call    FUN_00412390            ; format

        lea     ecx, [esp + 0x0c]
        call    FUN_004d2000            ; cleanup

        ; Calculate division
        mov     ebx, [edi + 0x04]       ; field at +0x04
        mov     edi, [edi]              ; field at +0x00
        mov     ecx, ebx
        sub     ecx, edi
        mov     eax, 0x38E38E39         ; magic for division by 36 (0x24)
        imul    ecx
        sar     edx, 3
        mov     ecx, edx
        shr     ecx, 31
        add     edx, ecx

        ; vcall with calculated value
        push    4
        lea     eax, [esp + 0x64]
        mov     [esp + 0x64], edx       ; store calculated value
        mov     edx, [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        ; Loop: copy 36-byte blocks
        cmp     edi, ebx
        jz      l_loop_done

    l_loop:
        mov     edx, [esi]
        push    0x24                    ; 36 bytes
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 0x24
        cmp     edi, ebx
        jnz     l_loop

    l_loop_done:
        lea     ecx, [esp + 0x0c]
        call    FUN_004d2000            ; cleanup

        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     4
    }


}
