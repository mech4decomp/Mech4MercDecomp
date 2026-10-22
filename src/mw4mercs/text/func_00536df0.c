/* FUN_00536df0 - 180 bytes */
#include <windows.h>

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ea10(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void FUN_00536df0(void)
{
    __asm {
        sub     esp, 0x28
        push    esi
        mov     esi, [ecx + 0x50]
        push    edi
        push    0
        lea     ecx, [esp + 0x0c]
        call    FUN_0041ee70
        mov     eax, [esi]
        lea     ecx, [esp + 0x08]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x0c]
        lea     ecx, [esp + 0x08]
        call    FUN_0041ea10
        mov     edx, [esp + 0x08]
        push    0
        lea     ecx, [esp + 0x0c]
        call    dword ptr [edx + 0x0c]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     esi, [esp + 0x18]
        mov     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x10], 0xffffffec
        mov     edx, [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, [ecx + 0x1814]
        add     ecx, 0x3c3c
        sub     eax, esi
        mov     esi, [esp + 0x34]
        mov     edi, [ecx + esi * 4 + 0x08]
        shl     eax, 3
        add     edi, eax
        mov     [ecx + esi * 4 + 0x08], edi
        mov     edi, [ecx + 0x0c00]
        add     edi, eax
        push    1
        lea     eax, [esp + 0x0c]
        push    eax
        mov     [ecx + 0x0c00], edi
        mov     ecx, [edx]
        push    0x1f
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004ce190
        lea     ecx, [esp + 0x08]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        add     esp, 0x28
        ret     4
    }
}
