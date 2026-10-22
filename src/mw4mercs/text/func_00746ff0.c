/*
 * FUN_00746FF0 (375 B) — __stdcall (RET 4). Wraps DeviceIoControl
 * (IAT at 0x0076b1c0) with four ioctl calls using fields from a table
 * at 0x007b7448 indexed by param*0x24. Returns error codes on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_008b27e0;
extern unsigned int g_008b27e4;
extern unsigned int g_008b27e8;
extern unsigned int g_008b27ec;
extern unsigned int g_0076b1c0;

__declspec(naked) int __stdcall FUN_00746ff0(void)
{
    __asm {
        mov     eax, dword ptr [g_008b27e0]
        sub     esp, 0xc
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        push    edi
        jnz     L_4700f
        pop     edi
        pop     esi
        mov     eax, 0xfffffffc
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_4700f:
        mov     eax, dword ptr [esp + 0x1c]
        lea     esi, [eax + eax*0x8]
        mov     eax, dword ptr [g_008b27e8]
        shl     esi, 0x2
        cmp     eax, dword ptr [esi + 0x7b7448]
        jz      L_47034
        pop     edi
        pop     esi
        mov     eax, 0xfffffffb
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_47034:
        mov     ecx, dword ptr [esi + 0x7b744c]
        mov     edx, dword ptr [esi + 0x7b7450]
        mov     edi, dword ptr [g_0076b1c0]
        push    ebx
        lea     eax, [esp + 0x20]
        push    eax
        mov     eax, dword ptr [g_008b27e4]
        push    0xc
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0xc
        mov     dword ptr [esp + 0x28], edx
        lea     edx, [esp + 0x20]
        push    edx
        push    0x1
        push    eax
        mov     dword ptr [esp + 0x30], ebx
        call    edi
        test    eax, eax
        jnz     L_47082
        pop     edi
        pop     esi
        mov     eax, 0xfffffff9
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_47082:
        mov     ecx, dword ptr [esi + 0x7b7454]
        mov     edx, dword ptr [esi + 0x7b7458]
        push    ebx
        lea     eax, [esp + 0x20]
        push    eax
        mov     eax, dword ptr [g_008b27e4]
        push    0xc
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0xc
        mov     dword ptr [esp + 0x28], edx
        lea     edx, [esp + 0x20]
        push    edx
        push    0x1
        push    eax
        mov     dword ptr [esp + 0x30], ebx
        call    edi
        test    eax, eax
        jnz     L_470ca
        pop     edi
        pop     esi
        mov     eax, 0xfffffff9
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_470ca:
        mov     ecx, dword ptr [esi + 0x7b745c]
        push    ebx
        lea     edx, [esp + 0x20]
        push    edx
        mov     edx, dword ptr [g_008b27e4]
        push    0xc
        lea     eax, [esp + 0x18]
        push    eax
        push    0xc
        mov     dword ptr [esp + 0x20], ecx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x1
        push    edx
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x34], ebx
        call    edi
        test    eax, eax
        jnz     L_4710d
        pop     edi
        pop     esi
        mov     eax, 0xfffffff9
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_4710d:
        mov     eax, dword ptr [esi + 0x7b7460]
        push    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [g_008b27e4]
        push    0xc
        lea     edx, [esp + 0x18]
        push    edx
        push    0xc
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [esp + 0x20]
        push    eax
        push    0x1
        push    ecx
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x34], ebx
        call    edi
        test    eax, eax
        jnz     L_47150
        pop     edi
        pop     esi
        mov     eax, 0xfffffff9
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_47150:
        mov     edx, dword ptr [esi + 0x7b7444]
        pop     edi
        pop     esi
        mov     dword ptr [g_008b27ec], edx
        xor     eax, eax
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }
}
