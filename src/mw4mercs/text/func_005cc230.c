/*
 * FUN_005cc230 (320 B) — __thiscall constructor (RET 0x10, 4 params).
 *   Initializes a NonComAI object: calls base ctor FUN_005db6e0, sets up
 *   sub-objects via FUN_005cd710/FUN_005cd820, zeroes many fields, sets
 *   vtable 0x787d7c, conditionally loads a resource, and calls a virtual.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_005db6e0(void);
extern void FUN_005cd710(void);
extern void FUN_005cd820(void);
extern void FUN_004fcb30(void);
extern void FUN_005dcb70(void);

__declspec(naked) void FUN_005cc230(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, [esp + 0x10]
        mov     edx, [esp + 4]
        push    ebx
        push    esi
        push    edi
        mov     edi, [esp + 0x14]
        mov     esi, ecx
        mov     ecx, [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005db6e0
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        xor     ebx, ebx
        push    ecx
        lea     ecx, [esi + 0x380]
        mov     [esi + 0x378], ebx
        mov     [esi + 0x37c], ebx
        mov     [esp + 0x20], ebx
        call    FUN_005cd710
        mov     edx, [esp + 0x1c]
        mov     eax, [esi + 0x37c]
        push    ebx
        push    edx
        mov     dword ptr [esi], 0x787d7c
        mov     ecx, [esi + 0x378]
        push    ecx
        push    eax
        push    eax
        call    FUN_005cd820
        mov     edx, [esi + 0x2d4]
        mov     [esi + 0x37c], eax
        mov     eax, [edi + 0x64]
        or      ecx, 0xffffffff
        add     esp, 0x14
        cmp     eax, ecx
        mov     [edx], bl
        mov     [esi + 0x318], ebx
        mov     [esi + 0x31c], ebx
        mov     [esi + 0x334], ebx
        mov     [esi + 0x338], ebx
        mov     [esi + 0x320], ecx
        mov     [esi + 0x324], ecx
        mov     [esi + 0x384], ebx
        mov     [esi + 0x388], ebx
        mov     [esi + 0x38c], ebx
        mov     [esi + 0x390], ebx
        mov     dword ptr [esi + 0x398], 1
        mov     [esi + 0x354], ebx
        mov     [esi + 0x358], ebx
        mov     [esi + 0x35c], ebx
        mov     [esi + 0x394], ebx
        jz      l_34e
        mov ecx, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx]
        xor     ecx, edx
        mov     edx, [ecx + 0x14]
        xor     edx, 0x85739531
        cmp     byte ptr [edx + 0x17fc], bl
        jnz     l_34e
        mov     ecx, [ecx + 0x10]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        push    eax
        mov     ecx, esi
        mov     [esi + 0x170], eax
        call    FUN_005dcb70

    l_34e:
        mov     ecx, [esi + 0xe0]
        mov     eax, [esi + 0x170]
        mov     edx, [ecx]
        push    ebx
        push    2
        mov     [esi + 0x314], eax
        call    dword ptr [edx + 4]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }


}
