/*
 * FUN_0049775E (642 B) — __thiscall (RET 0x4). Copy/assignment of a large
 * MLR object: copies a run of scalar/byte fields, then deep-copies two
 * dynamic arrays (0x17c and 0x184) with element-wise copy, freeing the
 * destination's old buffers first.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004939D0(void);
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_004AE4C0(void);
extern void __cdecl FUN_004ADF10(void);
extern void __cdecl FUN_0040C2E0(void);
extern void __cdecl FUN_0040C410(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_00423BD0(void);
extern void __cdecl FUN_006F49A0(void);
extern int g_007DA920;

__declspec(naked) void FUN_0049775E(void)
{
    __asm {
        nop
        nop
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     ebx, ecx
        push    ebp
        call    FUN_004939D0
        mov     eax, dword ptr [g_007DA920]
        push    eax
        call    FUN_006F4950
        mov     ecx, dword ptr [ebp + 0x64]
        mov     edx, dword ptr [ebp + 0x6c]
        mov     eax, dword ptr [ebp + 0x74]
        mov     dword ptr [ebx + 0x64], ecx
        lea     ecx, [ebp + 0x7c]
        push    ecx
        mov     dword ptr [ebx + 0x6c], edx
        lea     ecx, [ebx + 0x7c]
        mov     dword ptr [ebx + 0x74], eax
        call    FUN_004AE4C0
        lea     edx, [ebp + 0x88]
        push    edx
        lea     ecx, [ebx + 0x88]
        call    FUN_004ADF10
        mov     al, byte ptr [ebp + 0x9c]
        lea     ecx, [ebp + 0xa4]
        push    ecx
        lea     ecx, [ebx + 0xa4]
        mov     byte ptr [ebx + 0x9c], al
        call    FUN_004AE4C0
        lea     edx, [ebp + 0xb0]
        push    edx
        lea     ecx, [ebx + 0xb0]
        call    FUN_004AE4C0
        mov     al, byte ptr [ebp + 0xbc]
        lea     ecx, [ebp + 0xc4]
        push    ecx
        lea     ecx, [ebx + 0xc4]
        mov     byte ptr [ebx + 0xbc], al
        call    FUN_004AE4C0
        lea     edx, [ebp + 0xd0]
        push    edx
        lea     ecx, [ebx + 0xd0]
        call    FUN_004AE4C0
        mov     al, byte ptr [ebp + 0xdc]
        lea     ecx, [ebp + 0xe4]
        push    ecx
        lea     ecx, [ebx + 0xe4]
        mov     byte ptr [ebx + 0xdc], al
        call    FUN_004AE4C0
        lea     edx, [ebp + 0xf0]
        push    edx
        lea     ecx, [ebx + 0xf0]
        call    FUN_004AE4C0
        mov     al, byte ptr [ebp + 0xfc]
        lea     ecx, [ebp + 0x104]
        push    ecx
        lea     ecx, [ebx + 0x104]
        mov     byte ptr [ebx + 0xfc], al
        call    FUN_004AE4C0
        lea     edx, [ebp + 0x110]
        push    edx
        lea     ecx, [ebx + 0x110]
        call    FUN_004AE4C0
        mov     al, byte ptr [ebp + 0x11c]
        lea     ecx, [ebp + 0x124]
        push    ecx
        lea     ecx, [ebx + 0x124]
        mov     byte ptr [ebx + 0x11c], al
        call    FUN_004AE4C0
        lea     edx, [ebp + 0x130]
        push    edx
        lea     ecx, [ebx + 0x130]
        call    FUN_004AE4C0
        mov     al, byte ptr [ebp + 0x13c]
        lea     ecx, [ebp + 0x140]
        push    ecx
        lea     ecx, [ebx + 0x140]
        mov     byte ptr [ebx + 0x13c], al
        call    FUN_004AE4C0
        lea     edx, [ebp + 0x14c]
        push    edx
        lea     ecx, [ebx + 0x14c]
        call    FUN_004AE4C0
        lea     eax, [ebp + 0x158]
        push    eax
        lea     ecx, [ebx + 0x158]
        call    FUN_004AE4C0
        lea     ecx, [ebp + 0x164]
        push    ecx
        lea     ecx, [ebx + 0x164]
        call    FUN_004AE4C0
        mov     eax, dword ptr [ebp + 0x174]
        mov     edx, dword ptr [ebp + 0x170]
        mov     dword ptr [ebx + 0x174], eax
        lea     eax, [ebp + 0x17c]
        lea     esi, [ebx + 0x17c]
        cmp     esi, eax
        mov     dword ptr [ebx + 0x170], edx
        je      L497968
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jbe     L497952
        mov     edi, dword ptr [eax]
        push    ecx
        mov     ecx, esi
        call    FUN_0040C2E0
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        jbe     L497968
        mov     esi, dword ptr [esi]
        sub     edi, esi
        mov     dword ptr [esp + 0x14], eax
L497937:
        lea     ecx, [edi + esi]
        push    ecx
        mov     ecx, esi
        call    FUN_0040C410
        mov     eax, dword ptr [esp + 0x14]
        add     esi, 0xc
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jne     L497937
        jmp     L497968
L497952:
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L497968
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 4], 0
L497968:
        lea     eax, [ebp + 0x184]
        lea     esi, [ebx + 0x184]
        cmp     esi, eax
        je      L4979B8
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jbe     L4979A2
        mov     edi, dword ptr [eax]
        push    ecx
        mov     ecx, esi
        call    FUN_00423BD0
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        jbe     L4979B8
        mov     eax, dword ptr [esi]
        and     ecx, 0x1fffffff
        mov     esi, edi
        shl     ecx, 1
        mov     edi, eax
        rep     movsd
        jmp     L4979B8
L4979A2:
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L4979B8
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 4], 0
L4979B8:
        mov     dl, byte ptr [ebp + 0x178]
        mov     al, byte ptr [ebp + 0x179]
        mov     byte ptr [ebx + 0x178], dl
        mov     byte ptr [ebx + 0x179], al
        call    FUN_006F49A0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
        nop
        nop
        nop
        nop
    }
}
