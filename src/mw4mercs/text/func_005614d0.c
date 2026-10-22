/*
 * FUN_005614d0 (294 B) — __thiscall with 8 params (RET 0x20).
 * Complex list/tree insertion function.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_004084e0(void *ptr);
extern int __cdecl FUN_0055f440(void);
extern int __cdecl FUN_0055f500(void);
extern int __cdecl FUN_00561a30(void);
extern int __cdecl FUN_005619f0(void);
extern int __cdecl FUN_00561d90(void);
extern int __cdecl FUN_00561df0(void);

__declspec(naked) void FUN_005614d0(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        push    edi
        mov     edi, [ecx + 0x38]
        lea     esi, [ecx + 0x38]
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_00561d90
        cmp     [eax], edi
        jz      skip_free
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_00561df0
        mov     eax, [eax]
        cmp     eax, [esi]
        mov     ecx, [esp + 0x24]
        mov     [esp + 8], eax
        jz      l1
        cmp     ecx, [eax + 0x10]
        jge     l2
    l1:
        mov     [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    ecx
        lea     edx, [esp + 0x10]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_00561a30
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, [eax]
        mov     [esp + 8], eax
    l2:
        mov     edi, [eax + 0x14]
        test    edi, edi
        jz      skip_free
        mov     ecx, edi
        call    FUN_0055f500
        push    edi
        call    FUN_004084e0
        add     esp, 4
    skip_free:
        push    0x44
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      null_result
        mov     ecx, [esp + 0x3c]
        mov     edx, [esp + 0x38]
        push    ecx
        mov     ecx, [esp + 0x38]
        push    edx
        mov     edx, [esp + 0x38]
        push    ecx
        mov     ecx, [esp + 0x38]
        push    edx
        mov     edx, [esp + 0x38]
        push    ecx
        mov     ecx, [esp + 0x34]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_0055f440
        mov     edi, eax
        jmp     after_alloc
    null_result:
        xor     edi, edi
    after_alloc:
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        mov     ecx, esi
        call    FUN_00561df0
        mov     eax, [eax]
        cmp     eax, [esi]
        mov     ecx, [esp + 0x24]
        mov     [esp + 0x3c], eax
        jz      l3
        cmp     ecx, [eax + 0x10]
        jge     l4
    l3:
        mov     [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    ecx
        lea     edx, [esp + 0x44]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_00561a30
        lea     eax, [esp + 0x3c]
        push    eax
        mov     ecx, esi
        call    FUN_005619f0
        mov     eax, [eax]
    l4:
        mov     [eax + 0x14], edi
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x14
        ret     0x20
    }
}
