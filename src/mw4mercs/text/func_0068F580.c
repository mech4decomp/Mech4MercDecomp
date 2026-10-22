/*
 * FUN_0068F580 (422 B) — __thiscall, 1 arg (ret 4), ecx=this. Reads a set of
 * fields through a stream object's vtable (+0x20 read method), then grows a
 * dynamic 8-byte-element array (this+8/this+0x10) to hold the count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00691c30(void);
extern void __cdecl FUN_006918d0(void);
extern void __cdecl FUN_00691d00(void);
extern void __cdecl FUN_00691cd0(void);
extern void __cdecl FUN_006919d0(void);

__declspec(naked) void FUN_0068F580(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    1
        lea     ecx, [edi + 0x27]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x26]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    2
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ebp, dword ptr [edi + 8]
        mov     ecx, dword ptr [edi + 0x10]
        lea     ebx, [edi + 8]
        or      eax, 0xffffffff
        sub     ecx, ebp
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x10]
        sar     ecx, 3
        cmp     eax, ecx
        mov     dword ptr [esp + 0x30], eax
        jbe     l_68f682
        mov     dl, byte ptr [ebx + 8]
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     byte ptr [esp + 0x34], dl
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00691c30
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [ebx + 4]
        mov     dword ptr [ebx + 4], eax
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebx + 8]
        mov     dword ptr [esp + 0x24], ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [ebx + 8], eax
        call    FUN_006918d0
        jmp     l_68f6e0
    l_68f682:
        mov     ecx, dword ptr [ebx + 4]
        mov     edx, ecx
        sub     edx, ebp
        sar     edx, 3
        cmp     eax, edx
        jbe     l_68f6c8
        cmp     ebp, ecx
        je      l_68f6a9
    l_68f694:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp], eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp + 4], eax
        add     ebp, 8
        cmp     ebp, ecx
        jne     l_68f694
    l_68f6a9:
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        lea     eax, [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x38]
        sub     eax, edx
        push    eax
        push    ecx
        call    FUN_00691d00
        add     esp, 0x10
        mov     dword ptr [ebx + 4], eax
        jmp     l_68f6e0
    l_68f6c8:
        push    ecx
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    eax
        push    ebp
        call    FUN_00691cd0
        add     esp, 0xc
        push    eax
        mov     ecx, ebx
        call    FUN_006919d0
    l_68f6e0:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x30], 0
        jle     l_68f710
        mov     ebp, dword ptr [ebx]
    l_68f6f2:
        mov     edx, dword ptr [esi]
        push    8
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x10]
        inc     eax
        add     ebp, 8
        cmp     eax, ecx
        mov     dword ptr [esp + 0x30], eax
        jl      l_68f6f2
    l_68f710:
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [eax + ecx*8]
        mov     dword ptr [edi + 4], edx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
    }
}
