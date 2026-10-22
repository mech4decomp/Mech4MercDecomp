/*
 * FUN_00521e10 (143 B) — Pilot data creation.
 *
 * Creates a pilot data structure, initializes it, and returns
 * a handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_00595b60(void *this, int arg);
extern int __fastcall FUN_004d1f80(void *this, int arg);
extern int __fastcall FUN_00592a70(void *this, void *arg);
extern int __fastcall FUN_00417a40(void *this);
extern void __fastcall FUN_004d21c0(void *this);

__declspec(naked) void FUN_00521e10(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [esp + 4]
        sub     esp, 0x44
        push    esi
        xor     eax, edx
        mov     eax, dword ptr [eax + 0x44]
        push    edi
        mov     edi, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 4]
        mov     edx, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x34]
        push    edx
        call    FUN_00595b60
        push    1
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      alloc_fail
        lea     ecx, [esp + 8]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     esi, eax
        jmp     alloc_done
alloc_fail:
        xor     esi, esi
alloc_done:
        lea     ecx, [esi + 0x10]
        call    FUN_00417a40
        test    esi, esi
        mov     dword ptr [edi], eax
        jz      skip_vcall
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
skip_vcall:
        lea     ecx, [esp + 8]
        call    FUN_004d21c0
        pop     edi
        mov     eax, 1
        pop     esi
        add     esp, 0x44
        ret     8
    }


}
