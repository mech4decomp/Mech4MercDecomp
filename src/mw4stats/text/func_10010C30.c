/*
 * FUN_10010c30 (1242 B) - __thiscall RET 0x258. HTTP request sender:
 * builds headers, writes body via chunked transfer, aggregates stats.
 * SEH frame (handler at 0x1001fcb1).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10011110(void);
extern void __cdecl FUN_100115d0(void);
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_1001c1c0(void);
extern void __cdecl FUN_1001c4e0(void);
extern void __cdecl FUN_1000a0d0(void);
extern void __cdecl FUN_1001c240(void);

extern void *g_100210f4;   /* wcslen */
extern void *g_100210c4;   /* wprintf */
extern void *g_100210ec;   /* free */

__declspec(naked) unsigned long __cdecl FUN_10010c30(void)
{
    __asm {
        push    -1
        push    0x1001fcb1
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x5fc
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        mov     eax, 0x400
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0x174], ebx
        mov     dword ptr [esp + 0x178], ebx
        mov     dword ptr [esp + 0x17c], ebx
        mov     dword ptr [esp + 0x180], ebx
        mov     dword ptr [esp + 0x184], ebx
        mov     dword ptr [esp + 0x188], eax
        mov     dword ptr [esp + 0x614], ebx
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x48], ebx
        mov     dword ptr [esp + 0x4c], ebx
        mov     dword ptr [esp + 0x50], ebx
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x58], eax
        mov     dword ptr [esp + 0xdc], ebx
        mov     dword ptr [esp + 0xe0], ebx
        mov     dword ptr [esp + 0xe4], ebx
        mov     dword ptr [esp + 0xe8], ebx
        mov     dword ptr [esp + 0xec], ebx
        mov     dword ptr [esp + 0xf0], eax
        mov     esi, dword ptr [esp + 0x63c]
        lea     eax, [esp + 0x174]
        push    esi
        push    eax
        mov     byte ptr [esp + 0x61c], 2
        call    FUN_10011110
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, edi
        call    FUN_100115d0
        cmp     dword ptr [esp + 0x870], ebx
        jz      L_10d38
        lea     ecx, [esp + 0xdc]
        call    FUN_100011a0
        push    0x100264b8
        lea     ecx, [esp + 0xe0]
        call    FUN_10001680
        mov     edx, dword ptr [esp + 0x180]
        mov     eax, dword ptr [esp + 0xe8]
        mov     ecx, dword ptr [esp + 0x50]
        add     eax, edx
        add     eax, ecx
        mov     dword ptr [edi + 0x144], eax
        jmp     L_10d58
L_10d38:
        cmp     esi, ebx
        jz      L_10d41
        lea     eax, [esi - 2]
        jmp     L_10d43
L_10d41:
        xor     eax, eax
L_10d43:
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x180]
        add     edx, ecx
        add     edx, eax
        mov     dword ptr [edi + 0x144], edx
L_10d58:
        push    0x10026488
        mov     dword ptr [esp + 0x20], 0x28
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], 0x10026488
        call    dword ptr [g_100210f4]
        add     esp, 4
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [edi + 0x144]
        lea     ebp, [edi + 0x18]
        push    ebx
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x34], 1
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x48], ebx
        call    FUN_1001c1c0
        test    eax, eax
        jz      L_10e2d
        cmp     byte ptr [edi + 0x14], bl
        jnz     L_10e2d
        mov     ecx, dword ptr [esp + 0x180]
        mov     eax, dword ptr [esp + 0x174]
        cmp     ecx, ebx
        ja      L_10dd0
        mov     eax, 0x100274ec
L_10dd0:
        lea     edx, [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        mov     ecx, ebp
        call    FUN_1001c4e0
        test    eax, eax
        jnz     L_10df2
        push    0x10026464
        call    dword ptr [g_100210c4]
        add     esp, 4
        jmp     L_10e2d
L_10df2:
        cmp     byte ptr [edi + 0x14], bl
        jnz     L_10e2d
        cmp     dword ptr [esp + 0x870], ebx
        jz      L_10e6f
        mov     ecx, dword ptr [esp + 0xe8]
        mov     eax, dword ptr [esp + 0xdc]
        cmp     ecx, ebx
        ja      L_10e17
        mov     eax, 0x100274ec
L_10e17:
        lea     edx, [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        mov     ecx, ebp
        call    FUN_1001c4e0
        test    eax, eax
        jnz     L_10f57
L_10e2d:
        lea     ecx, [esp + 0xdc]
        mov     byte ptr [esp + 0x614], 1
        call    FUN_100011a0
        lea     ecx, [esp + 0x44]
        mov     byte ptr [esp + 0x614], bl
        call    FUN_100011a0
        lea     ecx, [esp + 0x174]
        mov     dword ptr [esp + 0x614], 0xffffffff
        call    FUN_100011a0
        xor     eax, eax
        jmp     L_110ef
L_10e6f:
        cmp     esi, ebx
        jz      L_10f57
        mov     eax, 0x804021
        mov     dword ptr [esp + 0x14], ebx
        mul     esi
        sub     esi, edx
        mov     ebp, ebx
        shr     esi, 1
        add     esi, edx
        shr     esi, 9
        inc     esi
        mov     dword ptr [esp + 0x18], esi
        jz      L_10f3c
L_10e98:
        mov     eax, dword ptr [esp + 0x86c]
        mov     ecx, dword ptr [edi + 0x78]
        lea     esi, [esp + 0x14]
        push    ebx
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        push    esi
        lea     esi, [esp + 0x214]
        push    0x3fe
        push    esi
        push    eax
        call    dword ptr [edx + 0x18]
        test    eax, eax
        jz      L_10f3c
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jbe     L_10f3c
        cmp     byte ptr [esp + 0x20c], 0xff
        jnz     L_10ee4
        cmp     byte ptr [esp + 0x20d], 0xfe
        jnz     L_10ee4
        mov     esi, 2
        jmp     L_10ee6
L_10ee4:
        xor     esi, esi
L_10ee6:
        lea     ecx, [esp + 0x10]
        sub     eax, esi
        push    ecx
        lea     edx, [esp + esi*1 + 0x210]
        push    eax
        push    edx
        lea     ecx, [edi + 0x18]
        call    FUN_1001c4e0
        test    eax, eax
        jz      L_10fa9
        mov     eax, dword ptr [esp + 0x14]
        shr     esi, 1
        mov     byte ptr [esp + eax*1 + 0x20c], bl
        mov     byte ptr [esp + eax*1 + 0x20d], bl
        lea     eax, [esp + esi*2 + 0x20c]
        push    eax
        push    0x1002645c
        call    FUN_1000a0d0
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 8
        inc     ebp
        cmp     ebp, eax
        jc      L_10e98
L_10f3c:
        mov     esi, dword ptr [esp + 0x86c]
        mov     ecx, dword ptr [edi + 0x78]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov     dword ptr [esi], ebx
        mov     al, byte ptr [edi + 0x14]
        cmp     al, bl
        jnz     L_10f8b
L_10f57:
        mov     ecx, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x44]
        cmp     ecx, ebx
        ja      L_10f68
        mov     eax, 0x100274ec
L_10f68:
        lea     edx, [esp + 0x10]
        lea     esi, [edi + 0x18]
        push    edx
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_1001c4e0
        test    eax, eax
        jnz     L_10ff2
        push    0x10026414
        call    dword ptr [g_100210c4]
        add     esp, 4
L_10f8b:
        mov     eax, dword ptr [esp + 0xe8]
        mov     esi, dword ptr [g_100210ec]
        cmp     eax, ebx
        jbe     L_10fcb
        mov     eax, dword ptr [esp + 0xdc]
        cmp     eax, ebx
        jz      L_10fcb
        jmp     L_10fc5
L_10fa9:
        mov     eax, dword ptr [esp + 0xe8]
        mov     esi, dword ptr [g_100210ec]
        cmp     eax, ebx
        jbe     L_10fcb
        mov     eax, dword ptr [esp + 0xdc]
        cmp     eax, ebx
        jz      L_10fcb
L_10fc5:
        push    eax
        call    esi
        add     esp, 4
L_10fcb:
        mov     eax, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0xdc], ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0xec], ebx
        mov     dword ptr [esp + 0xe8], ebx
        jbe     L_11044
        mov     eax, dword ptr [esp + 0x44]
        cmp     eax, ebx
        jz      L_11044
        jmp     L_1103e
L_10ff2:
        cmp     byte ptr [edi + 0x14], bl
        jz      L_11070
        mov     eax, dword ptr [esp + 0xe8]
        mov     esi, dword ptr [g_100210ec]
        cmp     eax, ebx
        jbe     L_11019
        mov     eax, dword ptr [esp + 0xdc]
        cmp     eax, ebx
        jz      L_11019
        push    eax
        call    esi
        add     esp, 4
L_11019:
        mov     eax, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0xdc], ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0xec], ebx
        mov     dword ptr [esp + 0xe8], ebx
        jbe     L_11044
        mov     eax, dword ptr [esp + 0x44]
        cmp     eax, ebx
        jz      L_11044
L_1103e:
        push    eax
        call    esi
        add     esp, 4
L_11044:
        mov     eax, dword ptr [esp + 0x180]
        mov     dword ptr [esp + 0x44], ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x50], ebx
        jbe     L_1106c
        mov     eax, dword ptr [esp + 0x174]
        cmp     eax, ebx
        jz      L_1106c
        push    eax
        call    esi
        add     esp, 4
L_1106c:
        xor     eax, eax
        jmp     L_110ef
L_11070:
        push    ebx
        mov     ecx, esi
        call    FUN_1001c240
        mov     esi, dword ptr [g_100210ec]
        mov     edi, eax
        cmp     dword ptr [esp + 0xe8], ebx
        jbe     L_1109a
        mov     eax, dword ptr [esp + 0xdc]
        cmp     eax, ebx
        jz      L_1109a
        push    eax
        call    esi
        add     esp, 4
L_1109a:
        mov     eax, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0xdc], ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0xec], ebx
        mov     dword ptr [esp + 0xe8], ebx
        jbe     L_110c5
        mov     eax, dword ptr [esp + 0x44]
        cmp     eax, ebx
        jz      L_110c5
        push    eax
        call    esi
        add     esp, 4
L_110c5:
        mov     eax, dword ptr [esp + 0x180]
        mov     dword ptr [esp + 0x44], ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x50], ebx
        jbe     L_110ed
        mov     eax, dword ptr [esp + 0x174]
        cmp     eax, ebx
        jz      L_110ed
        push    eax
        call    esi
        add     esp, 4
L_110ed:
        mov     eax, edi
L_110ef:
        mov     ecx, dword ptr [esp + 0x60c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x608
        ret     0x258
    }
}
