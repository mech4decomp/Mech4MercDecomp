/*
 * FUN_00545460 (448 B) — __thiscall, RET 4.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_00547ba0(int a, int b, int c);
extern void __fastcall FUN_005480c0(int a, int b, int c);
extern void __fastcall FUN_00547c70(int a, int b, int c, int d);
extern int __stdcall FUN_00547c60(int a, int b);

extern int DAT_0077b874;
extern int DAT_0076b28c;
extern int DAT_0076b304;
extern int DAT_0076b400;

__declspec(naked) int __fastcall FUN_00545460(void *this, int param_1)
{
    __asm {
        sub     esp, 0xe4
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xf0]
        test    edi, edi
        jz      l_return8
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 0x24]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 0x24]
        push    ecx
        call    dword ptr [DAT_0076b304]
        add     esp, 4
        lea     edx, [esp + 8]
        mov     esi, eax
        push    edx
        lea     eax, [esp + 0x23]
        push    eax
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00547ba0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, esi
        push    ecx
        push    esi
        lea     ecx, [esp + 0x14]
        call    FUN_005480c0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a4d0
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    eax
        push    0x77a4d0
        lea     ecx, [esp + 0x18]
        call    FUN_00547c70
        cmp     eax, dword ptr [DAT_0077b874]
        jz      l_fallback
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        mov     esi, edx
        add     eax, 4
        sub     esi, ecx
        cmp     eax, esi
        jnc     l_fallback2
        mov     esi, edx
        sub     esi, ecx
        mov     dword ptr [esp + 0x18], eax
        cmp     esi, eax
        mov     dword ptr [esp + 8], esi
        lea     eax, [esp + 8]
        jc      l_skip1
        lea     eax, [esp + 0x18]
    l_skip1:
        mov     esi, dword ptr [eax]
        add     esi, ecx
        cmp     ecx, esi
        push    ebx
        mov     ebx, dword ptr [DAT_0076b28c]
        mov     edi, ecx
        jz      l_skip2
        sub     edx, esi
        inc     edx
        push    edx
        push    esi
        push    ecx
        call    ebx
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     edi, esi
        add     esp, 0xc
        add     edx, edi
        mov     dword ptr [esp + 0x14], edx
    l_skip2:
        mov     eax, edx
        sub     eax, ecx
        cmp     eax, 1
        jbe     l_skip4
        lea     esi, [eax - 1]
        mov     eax, edx
        sub     eax, ecx
        dec     eax
        mov     dword ptr [esp + 0x1c], eax
        cmp     eax, esi
        mov     dword ptr [esp + 0xc], esi
        lea     eax, [esp + 0x1c]
        jc      l_skip3
        lea     eax, [esp + 0xc]
    l_skip3:
        mov     eax, dword ptr [eax]
        lea     edi, [eax + ecx + 1]
        lea     esi, [ecx + 1]
        cmp     esi, edi
        jz      l_skip4
        sub     edx, edi
        inc     edx
        push    edx
        push    edi
        push    esi
        call    ebx
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     esi, edi
        add     esp, 0xc
        add     eax, esi
        mov     dword ptr [esp + 0x14], eax
    l_skip4:
        push    0xa
        lea     edx, [esp + 0x28]
        push    edx
        push    ecx
        call    dword ptr [DAT_0076b400]
        add     esp, 0xc
        mov     esi, eax
        test    esi, esi
        pop     ebx
        jz      l_fallback
        dec     esi
        js      l_fallback
        cmp     esi, 7
        jg      l_fallback
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x14]
        sub     ecx, eax
        push    ecx
        push    eax
        call    FUN_00547c60
        add     esp, 8
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xe4
        ret
    l_fallback:
        mov     ecx, dword ptr [esp + 0xc]
    l_fallback2:
        mov     edx, dword ptr [esp + 0x14]
        sub     edx, ecx
        push    edx
        push    ecx
        call    FUN_00547c60
        add     esp, 8
    l_return8:
        pop     edi
        mov     eax, 8
        pop     esi
        add     esp, 0xe4
        ret
    }
}
