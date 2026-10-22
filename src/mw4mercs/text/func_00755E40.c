/*
 * FUN_00755E40 (656 B) — __thiscall (RET 0x4). Object setup/init routine:
 * builds a config word from flags, fills a local struct from globals, and
 * dispatches a series of per-flag sub-initializers (0x756xxx family).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00756C40(void);
extern void __cdecl FUN_00757410(void);
extern void __cdecl FUN_007588C0(void);
extern void __cdecl FUN_00758880(void);
extern void __cdecl FUN_00757D70(void);
extern void __cdecl FUN_00756A20(void);
extern void __cdecl FUN_006F4940(void);
extern void __cdecl FUN_00740D60(void);
extern void __cdecl FUN_006FAB90(void);
extern void __cdecl FUN_00756590(void);
extern void __cdecl FUN_00756790(void);
extern void __cdecl FUN_00756670(void);
extern void __cdecl FUN_007568D0(void);
extern void __cdecl FUN_00756810(void);
extern void __cdecl FUN_00756870(void);
extern void __cdecl FUN_00756AA0(void);
extern void __cdecl FUN_00756A60(void);
extern void* g_0076B110;
extern void* g_0076B320;
extern unsigned int g_00856B8C;
extern unsigned char g_008589A0;
extern unsigned int g_007A3214;
extern unsigned int g_007A3210;
extern unsigned int g_007A3218;
extern unsigned int g_007A321C;
extern unsigned int g_008AADC8;
extern unsigned int g_0076B100;

__declspec(naked) void FUN_00755E40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    ebx
        push    esi
        push    edi
        push    0x858ac8
        mov     esi, ecx
        call    dword ptr [g_0076B110]
        mov     ecx, esi
        call    FUN_00756C40
        mov     ebx, dword ptr [ebp + 8]
        mov     ecx, dword ptr [ebx + 4]
        mov     eax, dword ptr [ebx]
        push    0x7f
        push    ecx
        lea     edx, [esi + 0xa0]
        push    edx
        mov     byte ptr [esi + 0x9a], 0
        mov     dword ptr [esi + 0x9c], eax
        call    dword ptr [g_0076B320]
        xor     eax, eax
        mov     ecx, 9
        lea     edi, [ebp - 0x24]
        rep     stosd
        mov     eax, dword ptr [esi + 0x68]
        add     esp, 0xc
        test    al, 8
        mov     byte ptr [esi + 0x74], 0
        mov     dword ptr [esi + 0x70], ebx
        mov     dword ptr [ebp - 0x24], 0x24
        je      L755EAA
        or      dword ptr [ebp - 0x20], 0x20
L755EAA:
        test    al, 4
        je      L755EB2
        or      dword ptr [ebp - 0x20], 0x40
L755EB2:
        or      dword ptr [ebp - 0x20], 0x80
        mov     ecx, dword ptr [g_00856B8C]
        mov     edi, dword ptr [ecx + 0x14]
        mov     edx, 0x10000
        test    edi, edx
        je      L755ECE
        or      dword ptr [ebp - 0x20], edx
L755ECE:
        test    al, 0x60
        jne     L755ED7
        test    ah, 2
        je      L755F27
L755ED7:
        call    FUN_00757410
        mov     ecx, dword ptr [g_00856B8C]
        mov     eax, dword ptr [ecx + 0x48]
        test    eax, eax
        je      L755EFC
        mov     al, byte ptr [g_008589A0]
        test    al, al
        je      L755EFC
        or      dword ptr [ebp - 0x20], 0x10
        mov     byte ptr [esi + 0x74], 1
        jmp     L755F27
L755EFC:
        mov     eax, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [g_007A3214]
        or      eax, 0x18
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [g_007A3210]
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [g_007A3218]
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [g_007A321C]
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 4], edx
L755F27:
        mov     edi, dword ptr [ebx + 0x20]
        cmp     word ptr [edi], 1
        je      L755F71
        push    0
        push    0
        push    0
        push    0
        lea     edi, [ebx + 0x39]
        push    edi
        push    edi
        push    0
        lea     eax, [ebp + 8]
        push    eax
        mov     dword ptr [ebp + 8], 0
        call    FUN_007588C0
        mov     ecx, dword ptr [ebp + 8]
        push    0
        push    ecx
        call    FUN_00758880
        mov     eax, dword ptr [ebx + 0x41]
        mov     ecx, dword ptr [g_00856B8C]
        lea     edx, [eax + eax*2]
        mov     dword ptr [esi + 0x8c], edx
        mov     dword ptr [ebp - 0x14], edi
        jmp     L755F8D
L755F71:
        mov     eax, dword ptr [edi + 8]
        mov     edx, dword ptr [ebx + 0x14]
        lea     eax, [eax + eax*2]
        cmp     eax, edx
        mov     dword ptr [esi + 0x8c], eax
        jbe     L755F8A
        mov     dword ptr [esi + 0x8c], edx
L755F8A:
        mov     dword ptr [ebp - 0x14], edi
L755F8D:
        mov     eax, dword ptr [ebx + 0x24]
        mov     edx, dword ptr [esi + 0x8c]
        mov     dword ptr [esi + 0x90], eax
        mov     al, byte ptr [g_008589A0]
        test    al, al
        mov     dword ptr [ebp - 0x1c], edx
        jne     L755FAC
        or      dword ptr [ebp - 0x20], 8
L755FAC:
        mov     ecx, dword ptr [ecx + 0xc]
        push    0
        push    esi
        lea     eax, [ebp - 0x24]
        push    eax
        push    ecx
        call    FUN_00757D70
        mov     ecx, esi
        call    FUN_00756A20
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [g_008AADC8]
        push    1
        push    edx
        push    eax
        call    FUN_006F4940
        mov     eax, dword ptr [esi + 0x68]
        test    al, 0x60
        mov     edi, dword ptr [g_0076B100]
        jne     L755FE6
        test    ah, 2
        je      L756014
L755FE6:
        mov     edx, dword ptr [esi]
        lea     ecx, [esi + 4]
        push    ecx
        push    0x7a30d0
        push    edx
        call    FUN_00740D60
        test    eax, eax
        je      L756014
        push    0x7ae4d8
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L75600D
        int     3
L75600D:
        push    0x858ac8
        call    edi
L756014:
        mov     eax, dword ptr [esi + 0x5c]
        push    eax
        mov     ecx, esi
        call    FUN_00756590
        test    byte ptr [esi + 0x68], 8
        je      L756030
        mov     ecx, dword ptr [esi + 0x64]
        push    ecx
        mov     ecx, esi
        call    FUN_00756790
L756030:
        test    byte ptr [esi + 0x68], 4
        je      L756041
        mov     edx, dword ptr [esi + 0x60]
        push    edx
        mov     ecx, esi
        call    FUN_00756670
L756041:
        mov     eax, dword ptr [esi + 0x68]
        test    ah, 2
        je      L756058
        mov     eax, dword ptr [esi + 0x54]
        mov     ecx, dword ptr [esi + 0x50]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_007568D0
L756058:
        test    byte ptr [esi + 0x68], 0x20
        je      L756071
        mov     edx, dword ptr [esi + 0x28]
        mov     eax, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x20]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00756810
L756071:
        test    byte ptr [esi + 0x68], 0x40
        je      L75608A
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [esi + 0x2c]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00756870
L75608A:
        test    dword ptr [esi + 0x68], 0x10000
        je      L7560A6
        mov     edx, dword ptr [esi + 0x48]
        mov     eax, dword ptr [esi + 0x44]
        mov     ecx, dword ptr [esi + 0x40]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00756AA0
L7560A6:
        mov     eax, dword ptr [esi + 0x68]
        test    ah, 0x80
        je      L7560BD
        mov     edx, dword ptr [esi + 0x3c]
        mov     eax, dword ptr [esi + 0x38]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00756A60
L7560BD:
        push    0x858ac8
        call    edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
        nop
        nop
        nop
    }
}
