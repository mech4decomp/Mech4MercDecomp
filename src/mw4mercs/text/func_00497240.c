/*
 * FUN_00497240 (403 B) - MLR particle/flare copy/init method.
 * __thiscall (ECX = this), 1 stack arg (source object), RET 0x4.
 *
 * Copies parameter channels from a source object (ESI) into this object
 * (EDI) via sub-object copy methods and virtual calls (vtable+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00493940(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_004adf40(void);

__declspec(naked) void FUN_00497240(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00493940
        push    esi
        lea     ecx, [edi + 0x60]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x68]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x70]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x7c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x88]
        call    FUN_004adf40
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi + 0x9c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea     ecx, [edi + 0xa4]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xb0]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0xbc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0xc4]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xd0]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0xdc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0xe4]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xf0]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0xfc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x104]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x110]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x11c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x124]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x130]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x13c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x140]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x14c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x158]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x164]
        call    FUN_004ae560
        mov     ecx, dword ptr [edi + 0x174]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x170]
        mov     dword ptr [esp + 0x10], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x178]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        add     edi, 0x179
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
