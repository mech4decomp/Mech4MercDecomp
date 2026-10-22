/*
 * FUN_007575C0 (1053 B true extent; 1056 B block w/ trailing nop pad) —
 * __thiscall. Teardown/rebuild of a large object: frees member buffers,
 * then (on success path) re-initializes a set of sub-objects and registers
 * them into a global table at 0x856a8c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00740DB0(void *p);
extern void __cdecl FUN_006F4940(void);
extern void __cdecl FUN_006FAA30(void);
extern void __cdecl FUN_00757E20(void);
extern void __cdecl FUN_00757410(void);
extern void __cdecl FUN_00757E60(void);
extern void __cdecl FUN_00757D70(void);
extern void __cdecl FUN_00757EB0(void);
extern void __cdecl FUN_00757F60(void);
extern void __cdecl FUN_00740D60(void);
extern void __cdecl FUN_007580C0(void);
extern void __cdecl FUN_00755930(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004084C0(void);
extern void __cdecl FUN_00756B00(void);
extern void __cdecl FUN_00755870(void);
extern void __cdecl FUN_00758580(void);
extern void __cdecl FUN_007585E0(void);

extern unsigned int g_8AADC8;
extern unsigned int g_858994;
extern unsigned int g_857F28;
extern unsigned int g_857F2C;
extern unsigned char g_87DD0A;
extern unsigned char g_858990;
extern unsigned int g_856B94;
extern unsigned int g_858BF8;
extern unsigned int g_858998;
extern unsigned int g_856A88;
extern unsigned int g_7A31F0;
extern unsigned int g_7A31F4;
extern unsigned int g_7A31F8;
extern unsigned int g_7A31FC;

__declspec(naked) void FUN_007575C0(void)
{
    __asm {
        sub     esp, 0x48
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        push    edi
        je      l_7575DD
        push    eax
        call    FUN_00740DB0
        mov     dword ptr [esi + 8], 0
    l_7575DD:
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      l_7575EF
        push    eax
        call    FUN_00740DB0
        mov     dword ptr [esi], 0
    l_7575EF:
        mov     edi, dword ptr [esi + 4]
        test    edi, edi
        lea     ebp, [esi + 4]
        je      l_75761A
        mov     eax, dword ptr [esi + 0x78]
        mov     ecx, dword ptr [g_8AADC8]
        push    1
        neg     eax
        push    eax
        push    ecx
        call    FUN_006F4940
        push    edi
        call    FUN_00740DB0
        mov     dword ptr [ebp], 0
    l_75761A:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        lea     ebx, [esi + 0xc]
        je      l_757630
        push    eax
        call    FUN_00740DB0
        mov     dword ptr [ebx], 0
    l_757630:
        push    0
        push    0
        call    FUN_006FAA30
        mov     eax, dword ptr [g_858994]
        cmp     eax, dword ptr [g_857F28]
        jb      l_75764D
        xor     eax, eax
        mov     dword ptr [g_858994], eax
    l_75764D:
        lea     edx, [eax + eax*4]
        shl     edx, 3
        sub     edx, eax
        push    0
        shl     edx, 4
        push    ebx
        add     edx, 0x856ba8
        push    edx
        mov     dword ptr [g_857F2C], eax
        mov     byte ptr [g_87DD0A], 1
        call    FUN_00757E20
        push    0
        push    1
        mov     edi, eax
        mov     byte ptr [g_87DD0A], 0
        call    FUN_006FAA30
        test    edi, edi
        jge     l_7576B4
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      l_75769B
        push    eax
        call    FUN_00740DB0
        mov     dword ptr [ebx], 0
    l_75769B:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_858990], 1
        mov     dword ptr [g_856B94], 0
        pop     ebx
        add     esp, 0x48
        ret
    l_7576B4:
        mov     ecx, esi
        call    FUN_00757410
        xor     eax, eax
        mov     ecx, 9
        lea     edi, [esp + 0x34]
        rep stosd
        mov     edi, dword ptr [ebx]
        mov     dword ptr [esp + 0x44], eax
        mov     eax, dword ptr [g_858BF8]
        push    2
        push    eax
        push    edi
        mov     dword ptr [esp + 0x40], 0x24
        mov     dword ptr [esp + 0x44], 0xd1
        mov     dword ptr [esi + 0xe4], 0x1de6
        call    FUN_00757E60
        push    0
        push    ebp
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    edi
        call    FUN_00757D70
        mov     eax, dword ptr [ebp]
        lea     edx, [esi + 0xc4]
        push    edx
        push    eax
        call    FUN_00757EB0
        mov     ecx, dword ptr [ebp]
        lea     eax, [esi + 0x70]
        push    eax
        push    ecx
        mov     dword ptr [eax], 0x14
        call    FUN_00757F60
        mov     edx, dword ptr [esi + 0x78]
        mov     eax, dword ptr [g_8AADC8]
        push    1
        push    edx
        push    eax
        call    FUN_006F4940
        mov     ecx, dword ptr [ebp]
        push    esi
        push    0x7a30c0
        push    ecx
        call    FUN_00740D60
        mov     edx, dword ptr [esi + 0xb4]
        mov     eax, dword ptr [esi + 0xb0]
        mov     ecx, dword ptr [esi + 0xac]
        push    1
        push    edx
        mov     edx, dword ptr [esi + 0xa8]
        push    eax
        mov     eax, dword ptr [esi + 0xa4]
        push    ecx
        mov     ecx, dword ptr [esi + 0xa0]
        push    edx
        mov     edx, dword ptr [esi]
        push    eax
        push    ecx
        push    edx
        call    FUN_007580C0
        mov     eax, dword ptr [g_858998]
        mov     edi, eax
        cmp     edi, eax
        mov     dword ptr [g_856A88], eax
        jge     l_7577C5
        lea     eax, [edi*4 + 0x856a8c]
        mov     dword ptr [esp + 0x10], eax
    l_757796:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [ecx]
        test    ebp, ebp
        je      l_7577B0
        mov     ecx, ebp
        call    FUN_00755930
        push    ebp
        call    FUN_004084E0
        add     esp, 4
    l_7577B0:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [g_856A88]
        inc     edi
        add     ecx, 4
        cmp     edi, eax
        mov     dword ptr [esp + 0x10], ecx
        jl      l_757796
    l_7577C5:
        xor     edx, edx
        mov     dword ptr [esp + 0x20], edx
        mov     eax, 1
        mov     dword ptr [esp + 0x24], edx
        mov     word ptr [esp + 0x20], ax
        mov     word ptr [esp + 0x22], ax
        xor     eax, eax
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x2c], edx
        mov     ecx, 9
        lea     edi, [esp + 0x34]
        rep stosd
        mov     ecx, dword ptr [g_7A31F0]
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x44], eax
        mov     eax, dword ptr [g_7A31F8]
        mov     word ptr [esp + 0x30], dx
        mov     edx, 0x10
        mov     dword ptr [esp + 0x50], eax
        mov     al, byte ptr [g_858990]
        test    al, al
        mov     word ptr [esp + 0x2e], dx
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [g_7A31F4]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [g_7A31FC]
        mov     dword ptr [esp + 0x24], 0x5622
        mov     word ptr [esp + 0x2c], 2
        mov     dword ptr [esp + 0x28], 0xac44
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x34], 0x24
        mov     dword ptr [esp + 0x3c], 0x8000
        mov     dword ptr [esp + 0x4c], edx
        mov     dword ptr [esp + 0x54], ecx
        jne     l_7579D5
        mov     ecx, dword ptr [ebx]
        push    0
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        push    ecx
        call    FUN_00757D70
        mov     edx, dword ptr [esp + 0x14]
        lea     edi, [esi + 8]
        push    edi
        push    0x7a30d0
        push    edx
        call    FUN_00740D60
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    FUN_00740DB0
        xor     ebp, ebp
        push    ebp
        push    ebp
        call    FUN_006FAA30
        mov     ebx, dword ptr [edi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x7a3120
        push    ebx
        mov     dword ptr [esp + 0x24], ebp
        mov     byte ptr [g_87DD0A], 1
        call    FUN_00740D60
        cmp     eax, ebp
        mov     byte ptr [g_87DD0A], 0
        jge     l_7578E4
        push    ebx
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_00740DB0
        mov     dword ptr [edi], ebp
        jmp     l_75797D
    l_7578E4:
        mov     eax, dword ptr [esp + 0x10]
        lea     edx, [esp + 0x18]
        push    edx
        push    3
        push    0x7a3310
        push    eax
        mov     byte ptr [g_87DD0A], 1
        call    FUN_00758580
        cmp     eax, ebp
        mov     byte ptr [g_87DD0A], 0
        jne     l_757973
        test    byte ptr [esp + 0x18], 2
        je      l_757973
        mov     edx, dword ptr [esp + 0x10]
        push    4
        lea     ecx, [esp + 0x20]
        push    ecx
        push    ebp
        push    ebp
        push    1
        push    0x7a3310
        push    edx
        mov     dword ptr [esp + 0x38], ebp
        call    FUN_007585E0
        mov     ecx, dword ptr [esp + 0x10]
        push    4
        lea     eax, [esi + 0xe0]
        push    eax
        push    ebp
        push    ebp
        push    4
        push    0x7a3310
        push    ecx
        call    FUN_007585E0
        mov     eax, dword ptr [esp + 0x10]
        push    4
        lea     edx, [esi + 0xdc]
        push    edx
        push    ebp
        push    ebp
        push    3
        push    0x7a3310
        push    eax
        call    FUN_007585E0
        or      dword ptr [esi + 0xe4], 0x6000
    l_757973:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_00740DB0
    l_75797D:
        push    ebp
        push    1
        call    FUN_006FAA30
        mov     eax, dword ptr [g_856A88]
        xor     edi, edi
        cmp     eax, ebp
        jle     l_7579D5
        mov     esi, 0x856a8c
    l_757995:
        mov     ecx, dword ptr [esi]
        cmp     ecx, ebp
        je      l_7579A3
        push    edi
        call    FUN_00756B00
        jmp     l_7579C8
    l_7579A3:
        mov     edx, dword ptr [g_8AADC8]
        push    edx
        push    0x120
        call    FUN_004084C0
        add     esp, 8
        cmp     eax, ebp
        je      l_7579C4
        mov     ecx, eax
        call    FUN_00755870
        jmp     l_7579C6
    l_7579C4:
        xor     eax, eax
    l_7579C6:
        mov     dword ptr [esi], eax
    l_7579C8:
        mov     eax, dword ptr [g_856A88]
        inc     edi
        add     esi, 4
        cmp     edi, eax
        jl      l_757995
    l_7579D5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret
    }
}
