/* FUN_00538a50 - 141 bytes */
#include <windows.h>

extern int DAT_007dab40;
extern int DAT_007dab44;
extern void __cdecl FUN_004f4370(void);

__declspec(naked) void FUN_00538a50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, [esi + 0x16]
        test    al, al
        jz      label_skip_check
        mov     eax, [esi + 0x50]
        mov     ecx, [eax + 0x10]
        test    ecx, ecx
        jnz     label_call_vtable
label_skip_check:
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        lea     ecx, [esi + 0x1c]
        push    ecx
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x18]
        xor     ecx, 0x85739531
        call    FUN_004f4370
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x18]
        xor     ecx, 0x85739531
        mov     eax, [ecx]
        call    dword ptr [eax + 0xa4]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax]
        mov     eax, [eax + 0x18]
        xor     eax, 0x85739531
        mov     eax, [eax + 0x170]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    eax
        call    dword ptr [edx + 0x18]
label_call_vtable:
        mov     ecx, [esi + 0x4c]
        mov     edx, [ecx]
        push    0
        push    5
        call    dword ptr [edx + 4]
        pop     esi
        ret     8
    }
}
