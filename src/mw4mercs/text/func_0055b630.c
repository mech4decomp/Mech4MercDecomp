/*
 * FUN_0055b630 (315 B) ??? __thiscall method on some class.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00559be0(void *this, int val);
extern void __fastcall FUN_006275a0(void *this);
extern void __fastcall FUN_006276d0(void *this);
extern void __fastcall FUN_00627b70(void *this);
extern void __fastcall FUN_00548f40(void *this);

__declspec(naked) void FUN_0055b630(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, [eax]
        xor edx, dword ptr [DAT_007dab40]
        lea     eax, [edx + 0x40]
        mov     edx, [eax]
        xor     edx, 0x85739531
        push    esi
        mov     esi, ecx                    ; save this
        mov     cl, [esp + 0x8]             ; param_1 (byte)
        mov     [esi + 0x589], cl
        jz      label_0x55b725              ; jump if XOR result was 0
        test    cl, cl
        jz      label_0x55b738
        push    0xc
        mov     ecx, esi
        call    FUN_00559be0
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx + 0x40]
        xor     ecx, 0x85739531
        call    FUN_006275a0
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x2c]
        mov     edx, [eax + 0x2c]
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0x588], 0
        mov     ecx, [eax + 0x2c]
        xor     edx, 0x85739531
        xor     ecx, 0x85739531
        mov     byte ptr [edx + 0x587], 0
        mov     edx, [esi + 0x384]
        mov     byte ptr [ecx + 0x585], 1
        mov     cl, [edx + 0x510]
        test    cl, cl
        jz      label_0x55b725
        mov     ecx, [eax + 0x40]
        xor     ecx, 0x85739531
        mov     edx, [ecx + 0x50]
        test    edx, edx
        jz      label_0x55b725
        mov     edx, [eax + 0x40]
        xor     edx, 0x85739531
        mov     ecx, [edx + 0x50]
        mov     dl, [ecx + 0x28]
        test    dl, dl
        jz      label_0x55b725
        mov     ecx, [eax + 0x40]
        xor     ecx, 0x85739531
        call    FUN_00627b70
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x20]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        call    dword ptr [edx + 0xa0]

    label_0x55b725:
        mov     al, [esp + 0x8]
        test    al, al
        jnz     label_0x55b750
        mov     ecx, esi
        call    FUN_00548f40
        pop     esi
        ret     4

    label_0x55b738:
        mov     ecx, [eax]
        xor     ecx, 0x85739531
        call    FUN_006276d0
        mov     ecx, esi
        call    FUN_00548f40
        pop     esi
        ret     4

    label_0x55b750:
        push    0xc
        mov     ecx, esi
        mov     byte ptr [esi + 0x589], 0
        call    FUN_00559be0
        mov     byte ptr [esi + 0x589], 1
        pop     esi
        ret     4
    }


}
