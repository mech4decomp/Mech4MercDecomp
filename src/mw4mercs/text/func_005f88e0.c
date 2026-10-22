/*
 * FUN_005f88e0 (234 B) -- __thiscall (ECX = this), RET 4 (1 stack param).
 * Initializes an object from a source descriptor, conditionally rebuilds
 * a sub-object, and wires up several virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_005fcc40(void *param);
extern void __fastcall FUN_005f8860(void *this);
extern void __fastcall FUN_00603cd0(void *this);
extern void __fastcall FUN_005f9000(void *this);
extern void __fastcall FUN_004d1f80(void *param, int flag);
extern void __fastcall FUN_005f9560(void *this);
extern void __fastcall FUN_004d21c0(void *this);
extern void __fastcall FUN_005fcb80(void *this);
extern void *__fastcall FUN_005dd280(void *param);
extern void __fastcall FUN_006525a0(void *param);

extern unsigned short DAT_007db0ac;
extern unsigned short DAT_007db0ae;

__declspec(naked) void __fastcall FUN_005f88e0(void *param)
{
    __asm {
        sub     esp, 0x44
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x50]
        mov     esi, ecx
        push    edi
        call    FUN_005fcc40
        push    edi
        mov     ecx, esi
        call    FUN_005f8860
        mov     ecx, dword ptr [esi + 0x2f4]
        call    FUN_00603cd0
        mov     ecx, esi
        call    FUN_005f9000
        mov     cx, word ptr [edi + 0x11c]
        cmp     cx, word ptr [DAT_007db0ac]
        lea     eax, [edi + 0x11c]
        jnz     l_skip
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [DAT_007db0ae]
        jz      l_after_if
    l_skip:
        push    1
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f80
        lea     eax, [esp + 8]
        push    eax
        mov     ecx, esi
        call    FUN_005f9560
        lea     ecx, [esp + 8]
        call    FUN_004d21c0
    l_after_if:
        mov     ecx, esi
        call    FUN_005fcb80
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xcc]
        mov     edi, dword ptr [esi + 0xd8]
        mov     eax, dword ptr [edi + 0x18]
        mov     ecx, dword ptr [esi + 0x348]
        mov     edx, dword ptr [edi]
        and     eax, 0xffffff3f
        or      ecx, eax
        mov     dword ptr [edi + 0x18], ecx
        mov     ecx, edi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        mov     eax, dword ptr [esi + 0x344]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edi, dword ptr [esi + 0x2fc]
        test    edi, edi
        jz      l_end
        call    FUN_005dd280
        test    eax, eax
        jz      l_call_virt
        mov     ecx, dword ptr [esi + 0x30]
        push    ecx
        call    FUN_005dd280
        mov     ecx, eax
        call    FUN_006525a0
    l_call_virt:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x100]
    l_end:
        pop     edi
        pop     esi
        add     esp, 0x44
        ret     4
    }
}
