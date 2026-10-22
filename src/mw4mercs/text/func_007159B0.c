/*
 * FUN_007159B0 (1103 B true extent; 1104 B block w/ trailing nop pad) —
 * __cdecl. Initializes a UI/input state: issues a series of control
 * commands (via FUN_0074A590 / FUN_0074A670) and resets a set of global
 * counters/state words.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074A590(void);
extern void __cdecl FUN_0074A670(void);

extern unsigned char g_858956;
extern unsigned int g_87C2B4;
extern unsigned int g_85A254;
extern unsigned int g_85A248;
extern unsigned int g_859F80;
extern unsigned int g_85A204;
extern unsigned char g_858955;
extern unsigned int g_87C268;
extern unsigned int g_7B70C0;
extern unsigned char g_87C254;
extern unsigned int g_87C144;
extern unsigned int g_87C13C;
extern unsigned int g_87C134;
extern unsigned int g_87C12C;
extern unsigned int g_87C124;
extern unsigned int g_87C11C;
extern unsigned int g_87C114;
extern unsigned int g_87C10C;
extern unsigned int g_87C104;
extern unsigned int g_87C0FC;
extern unsigned int g_87C0F4;
extern unsigned int g_7B70B8;
extern unsigned int g_7B70BC;
extern unsigned int g_87C264;

__declspec(naked) void FUN_007159B0(void)
{
    __asm {
        mov     al, byte ptr [g_858956]
        test    al, al
        je      l_7159D7
        mov     eax, dword ptr [g_87C2B4]
        test    eax, eax
        je      l_7159D7
        mov     eax, dword ptr [g_85A254]
        test    eax, eax
        je      l_7159D7
        mov     eax, dword ptr [g_85A248]
        push    2
        push    2
        push    eax
        jmp     l_7159E2
    l_7159D7:
        mov     ecx, dword ptr [g_85A248]
        push    0
        push    2
        push    ecx
    l_7159E2:
        call    FUN_0074A590
        mov     ecx, dword ptr [g_859F80]
        push    ebx
        xor     eax, eax
        test    ch, 0x40
        push    edi
        mov     ebx, 1
        jne     l_715A02
        test    ch, 0x80
        je      l_715A02
        mov     eax, ebx
    l_715A02:
        mov     edx, dword ptr [g_85A248]
        push    eax
        push    0x21
        push    edx
        call    FUN_0074A590
        mov     eax, dword ptr [g_85A204]
        test    eax, eax
        je      l_715A92
        mov     eax, dword ptr [g_85A248]
        push    ebx
        push    0x34
        push    eax
        call    FUN_0074A590
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    0x39
        push    ecx
        call    FUN_0074A590
        mov     edx, dword ptr [g_85A248]
        push    -1
        push    0x3a
        push    edx
        call    FUN_0074A590
        mov     eax, dword ptr [g_85A248]
        push    -1
        push    0x3b
        push    eax
        call    FUN_0074A590
        mov     ecx, dword ptr [g_85A248]
        push    7
        push    0x35
        push    ecx
        call    FUN_0074A590
        mov     edx, dword ptr [g_85A248]
        push    7
        push    0x37
        push    edx
        call    FUN_0074A590
        mov     eax, dword ptr [g_85A248]
        push    7
        push    0x36
        push    eax
        call    FUN_0074A590
        mov     ecx, dword ptr [g_85A248]
        push    8
        push    0x38
        push    ecx
        jmp     l_715A9D
    l_715A92:
        mov     edx, dword ptr [g_85A248]
        push    0
        push    0x34
        push    edx
    l_715A9D:
        call    FUN_0074A590
        mov     eax, dword ptr [g_85A248]
        push    0
        push    0x29
        push    eax
        call    FUN_0074A590
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    0x10
        push    ecx
        call    FUN_0074A590
        mov     edx, dword ptr [g_85A248]
        push    0
        push    0x1c
        push    edx
        call    FUN_0074A590
        mov     eax, dword ptr [g_85A248]
        push    0
        push    0x23
        push    eax
        call    FUN_0074A590
        mov     ecx, dword ptr [g_85A248]
        push    6
        push    0x19
        push    ecx
        call    FUN_0074A590
        mov     edx, dword ptr [g_85A248]
        push    0
        push    0x18
        push    edx
        call    FUN_0074A590
        mov     al, byte ptr [g_858955]
        test    al, al
        je      l_715B14
        mov     eax, dword ptr [g_85A248]
        push    0
        push    7
        push    eax
        jmp     l_715B1E
    l_715B14:
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    7
        push    ecx
    l_715B1E:
        call    FUN_0074A590
        mov     edx, dword ptr [g_85A248]
        push    0
        push    0x1b
        push    edx
        mov     dword ptr [g_87C268], 0
        call    FUN_0074A590
        mov     eax, dword ptr [g_85A248]
        push    ebx
        push    4
        push    eax
        call    FUN_0074A590
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    0x12
        push    0
        push    ecx
        mov     dword ptr [g_7B70C0], ebx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    0
        push    0x80
        push    edx
        call    FUN_0074A590
        mov     eax, dword ptr [g_85A248]
        push    0
        push    0x81
        push    eax
        call    FUN_0074A590
        mov     ecx, dword ptr [g_85A248]
        push    0
        push    0x8a
        push    ecx
        call    FUN_0074A590
        mov     edx, dword ptr [g_85A248]
        push    0
        push    0x88
        push    edx
        call    FUN_0074A590
        mov     eax, dword ptr [g_85A248]
        push    0
        push    0x8e
        push    eax
        call    FUN_0074A590
        mov     ecx, dword ptr [g_85A248]
        push    4
        push    ebx
        push    0
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    2
        push    2
        push    0
        push    edx
        call    FUN_0074A670
        mov     eax, dword ptr [g_85A248]
        push    0
        push    3
        push    0
        push    eax
        call    FUN_0074A670
        mov     ecx, dword ptr [g_85A248]
        push    4
        push    4
        push    0
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    2
        push    5
        push    0
        push    edx
        call    FUN_0074A670
        mov     eax, dword ptr [g_85A248]
        push    0
        push    6
        push    0
        push    eax
        call    FUN_0074A670
        push    ebx
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    ebx
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    ebx
        push    4
        push    ebx
        push    edx
        call    FUN_0074A670
        mov     eax, dword ptr [g_85A248]
        push    0
        push    0xb
        push    0
        push    eax
        call    FUN_0074A670
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    0xb
        push    ebx
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    2
        push    0xb
        push    2
        push    edx
        call    FUN_0074A670
        mov     eax, dword ptr [g_85A248]
        push    3
        push    0xc
        push    0
        push    eax
        call    FUN_0074A670
        mov     ecx, dword ptr [g_85A248]
        push    3
        push    0xc
        push    ebx
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    ebx
        push    0xc
        push    2
        push    edx
        call    FUN_0074A670
        mov     eax, dword ptr [g_85A248]
        push    ebx
        push    ebx
        push    2
        push    eax
        call    FUN_0074A670
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    4
        push    2
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    ebx
        push    ebx
        push    3
        push    edx
        call    FUN_0074A670
        mov     eax, dword ptr [g_85A248]
        push    ebx
        push    4
        push    3
        push    eax
        call    FUN_0074A670
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    ebx
        push    4
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    ebx
        push    4
        push    4
        push    edx
        call    FUN_0074A670
        mov     eax, dword ptr [g_85A248]
        push    ebx
        push    ebx
        push    5
        push    eax
        call    FUN_0074A670
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    4
        push    5
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    ebx
        push    ebx
        push    6
        push    edx
        call    FUN_0074A670
        mov     eax, dword ptr [g_85A248]
        push    ebx
        push    4
        push    6
        push    eax
        call    FUN_0074A670
        mov     ecx, dword ptr [g_85A248]
        push    ebx
        push    ebx
        push    7
        push    ecx
        call    FUN_0074A670
        mov     edx, dword ptr [g_85A248]
        push    ebx
        push    4
        push    7
        push    edx
        call    FUN_0074A670
        mov     ecx, 8
        mov     eax, 0x1010101
        mov     edi, 0x87c0d0
        rep stosd
        stosb
        mov     ecx, 0x21
        or      eax, 0xffffffff
        mov     edi, 0x87c14c
        rep stosd
        pop     edi
        mov     byte ptr [g_87C254], bl
        mov     dword ptr [g_87C144], ebx
        mov     dword ptr [g_87C13C], ebx
        mov     dword ptr [g_87C134], ebx
        mov     dword ptr [g_87C12C], ebx
        mov     dword ptr [g_87C124], ebx
        mov     dword ptr [g_87C11C], ebx
        mov     dword ptr [g_87C114], ebx
        mov     dword ptr [g_87C10C], ebx
        mov     dword ptr [g_87C104], ebx
        mov     dword ptr [g_87C0FC], ebx
        mov     dword ptr [g_87C0F4], ebx
        mov     dword ptr [g_7B70C0], ebx
        mov     dword ptr [g_7B70B8], 0xffffffff
        mov     dword ptr [g_7B70BC], 0xffffffff
        mov     dword ptr [g_87C264], 0
        pop     ebx
        ret
    }
}
