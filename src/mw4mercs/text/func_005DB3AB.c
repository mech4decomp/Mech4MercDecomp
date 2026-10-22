/*
 * FUN_005DB3AB (424 B) — __thiscall, 1 arg (ret 4), ecx=this. Appends a
 * string to a growable buffer (this+0x2d4/0x2d8/0x2dc), reallocating and
 * shifting as needed. Slice begins with 5 alignment nops before the code at
 * 0x5DB3B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_005db560(void);
extern void __cdecl FUN_005ddec0(void);
extern void __cdecl FUN_00547c60(void);

extern void *g_76b28c;

__declspec(naked) void FUN_005DB3AB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        xor     eax, eax
        push    edi
        or      ecx, 0xffffffff
        mov     edi, esi
        repne   scasb
        mov     eax, dword ptr [ebp + 0x2d8]
        mov     edi, dword ptr [ebp + 0x2d4]
        not     ecx
        dec     ecx
        mov     ebx, ecx
        add     ebx, esi
        mov     edx, ebx
        sub     edx, esi
        sub     eax, edi
        cmp     edx, eax
        ja      l_5db431
        mov     ecx, edx
        mov     eax, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0x2d4]
        and     ecx, 3
        rep     movsb
        lea     esi, [eax + edx]
        mov     eax, dword ptr [ebp + 0x2d8]
        cmp     esi, eax
        je      l_5db547
        mov     edi, eax
        sub     edi, eax
        lea     ecx, [edi + 1]
        push    ecx
        push    eax
        push    esi
        call    dword ptr [g_76b28c]
        add     esp, 0xc
        add     edi, esi
        mov     dword ptr [ebp + 0x2d8], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
    l_5db431:
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x20]
        lea     edi, [eax + ecx]
        cmp     edi, ebx
        je      l_5db547
        mov     edx, dword ptr [ebp + 0x2d4]
        mov     ecx, dword ptr [ebp + 0x2dc]
        sub     ecx, edx
        mov     esi, ebx
        sub     esi, edi
        mov     dword ptr [esp + 0x18], ecx
        lea     edx, [esi + eax]
        dec     ecx
        cmp     edx, ecx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], esi
        jbe     l_5db519
        cmp     eax, esi
        mov     dword ptr [esp + 0x20], esi
        lea     ecx, [esp + 0x20]
        jb      l_5db48a
        lea     ecx, [esp + 0x10]
    l_5db48a:
        mov     ecx, dword ptr [ecx]
        lea     eax, [ecx + eax + 1]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        je      l_5db4a7
        push    eax
        call    FUN_005db560
        add     esp, 4
        mov     dword ptr [esp + 0x20], eax
        jmp     l_5db4af
    l_5db4a7:
        mov     dword ptr [esp + 0x20], 0
    l_5db4af:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ebp + 0x2d8]
        push    edx
        push    eax
        mov     eax, dword ptr [ebp + 0x2d4]
        push    eax
        call    FUN_005ddec0
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        push    edi
        push    esi
        call    dword ptr [g_76b28c]
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [ebp + 0x2d4]
        sub     ebx, edi
        push    ecx
        add     esi, ebx
        push    eax
        mov     byte ptr [esi], 0
        call    FUN_00547c60
        mov     eax, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x30]
        add     esp, 0x20
        mov     dword ptr [ebp + 0x2d4], eax
        pop     edi
        mov     dword ptr [ebp + 0x2d8], esi
        add     eax, edx
        pop     esi
        mov     dword ptr [ebp + 0x2dc], eax
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
    l_5db519:
        lea     eax, [edi + 1]
        sub     ebx, eax
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0x2d8]
        inc     eax
        push    eax
        call    dword ptr [g_76b28c]
        mov     eax, dword ptr [ebp + 0x2d8]
        lea     ecx, [eax + esi]
        mov     byte ptr [ecx], 0
        mov     dl, byte ptr [edi]
        add     esp, 0xc
        mov     byte ptr [eax], dl
        mov     dword ptr [ebp + 0x2d8], ecx
    l_5db547:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
    }
}
