/*
 * FUN_00533940 (744 B) — __thiscall (this in ECX = edi), RET 4 (1 stack arg).
 * Loads an XOR-obfuscated global, calls FUN_004D6490, then builds a
 * database record (imul ebx,0x22ac + [ebx+edi+0x205d28] table), computes an
 * MD5 (FUN_0070E390/70E3C0/70E460) and compares via repe cmpsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004FCA80(void);
extern void __cdecl FUN_004D6490(void);
extern void __cdecl FUN_005445F0(void);
extern void __cdecl FUN_004D1F80(void);
extern void __cdecl FUN_004D21C0(void);
extern void __cdecl FUN_004D2CB0(void);
extern void __cdecl FUN_0041E690(void);
extern void __cdecl FUN_004D2E00(void);
extern void __cdecl FUN_0041E720(void);
extern void __cdecl FUN_0070E390(void);
extern void __cdecl FUN_0070E3C0(void);
extern void __cdecl FUN_0070E460(void);
extern void __cdecl FUN_0041E710(void);

extern unsigned long g_7dab44;
extern unsigned long g_7dab40;
extern unsigned long g_7db0b8;
extern void *g_76b420;
extern char g_77b380[];
extern char g_77b368[];

__declspec(naked) void func_00533940(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        sub     esp, 0x278
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        mov     edi, ecx
        xor     esi, dword ptr [g_7dab40]
        mov     ecx, dword ptr [esi + 0x10]
        push    offset g_77b380
        xor     ecx, 0x85739531
        call    FUN_004FCA80
        mov     ecx, dword ptr [esi]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004D6490
        test    eax, eax
        je      L_3c1a
        mov     ebx, dword ptr [esp + 0x288]
        push    ebx
        mov     ecx, edi
        call    FUN_005445F0
        mov     esi, eax
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x13]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jne     L_39ef
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     word ptr [esp + 0x18], 0xffff
        mov     word ptr [esp + 0x1a], 0
        call    dword ptr [edx + 0x20]
        push    1
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_004D1F80
        mov     esi, dword ptr [esp + 0x34]
        lea     ecx, [esp + 0x20]
        call    FUN_004D21C0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x278
        ret     4
L_39ef:
        cmp     al, 1
        jne     L_3c1a
        imul    ebx, ebx, 0x22ac
        mov     eax, dword ptr [ebx + edi + 0x205d28]
        add     ebx, edi
        test    eax, eax
        push    ebp
        jne     L_3ba5
        mov     ecx, dword ptr [g_7db0b8]
        call    FUN_004D2CB0
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        mov     ebp, eax
        mov     eax, dword ptr [esi + 0x1c]
        dec     eax
        push    eax
        call    dword ptr [edx + 4]
        push    eax
        lea     ecx, [esp + 0xd8]
        call    FUN_0041E690
        movsx   eax, bp
        push    eax
        lea     ecx, [esp + 0x18c]
        push    offset g_77b368
        push    ecx
        call    dword ptr [g_76b420]
        mov     ecx, dword ptr [g_7db0b8]
        add     esp, 0xc
        push    1
        push    0
        push    0x3f
        push    ebp
        push    0
        lea     edx, [esp + 0x19c]
        push    edx
        lea     eax, [esp + 0xe4]
        push    eax
        call    FUN_004D2E00
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x70]
        mov     dword ptr [ebx + 0x205d28], eax
        mov     word ptr [esp + 0x1c], bp
        mov     word ptr [esp + 0x1e], 1
        call    FUN_004D1F80
        push    1
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [ebx + 0x205d2c], 0
        mov     word ptr [esp + 0x20], bp
        mov     word ptr [esp + 0x22], 3
        call    FUN_004D1F80
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        je      L_3b73
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        jbe     L_3b73
        push    0x10
        lea     eax, [esp + 0xc0]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041E720
        mov     edx, dword ptr [esp + 0x68]
        push    0
        lea     ecx, [esp + 0x6c]
        call    dword ptr [edx + 0xc]
        lea     eax, [esp + 0xec]
        push    eax
        mov     dword ptr [esp + 0x74], 0xffffffec
        call    FUN_0070E390
        push    4
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0xf4]
        push    edx
        mov     dword ptr [esp + 0x2c], 0xa1252388
        call    FUN_0070E3C0
        mov     eax, dword ptr [esp + 0x7c]
        mov     ecx, dword ptr [esp + 0x78]
        mov     esi, dword ptr [esp + 0x84]
        sub     ecx, eax
        add     ecx, esi
        push    ecx
        push    eax
        lea     edx, [esp + 0xf4]
        push    edx
        call    FUN_0070E3C0
        lea     eax, [esp + 0xec]
        push    eax
        lea     ecx, [esp + 0xb0]
        push    ecx
        call    FUN_0070E460
        mov     ecx, 4
        lea     edi, [esp + 0xbc]
        lea     esi, [esp + 0xac]
        xor     edx, edx
        repe    cmpsd
        je      L_3b7a
L_3b73:
        mov     byte ptr [ebx + 0x205d2c], 1
L_3b7a:
        mov     eax, dword ptr [esp + 0x7c]
        lea     ecx, [esp + 0x24]
        mov     word ptr [eax + 0x11c], bp
        call    FUN_004D21C0
        lea     ecx, [esp + 0x68]
        call    FUN_004D21C0
        lea     ecx, [esp + 0xcc]
        call    FUN_0041E710
        jmp     L_3bd9
L_3ba5:
        mov     bp, word ptr [eax + 0x1a]
        push    1
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     word ptr [esp + 0x20], bp
        mov     word ptr [esp + 0x22], 1
        call    FUN_004D1F80
        mov     edx, dword ptr [esp + 0x38]
        lea     ecx, [esp + 0x24]
        mov     word ptr [edx + 0x11c], bp
        call    FUN_004D21C0
L_3bd9:
        push    1
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x14c]
        mov     word ptr [esp + 0x24], bp
        mov     word ptr [esp + 0x26], 1
        call    FUN_004D1F80
        mov     esi, dword ptr [esp + 0x158]
        lea     ecx, [esp + 0x144]
        call    FUN_004D21C0
        pop     ebp
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x278
        ret     4
L_3c1a:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x278
        ret     4
    }
}
