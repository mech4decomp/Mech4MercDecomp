/*
 * FUN_00708030 (937 B) — Application/window initialization routine.
 *
 * Loads cursors, queries device caps, resolves kernel32 exports, checks the
 * OS version, formats a message, registers a window class and creates the
 * main window. Calls several IAT imports and game helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void *g_76b534;   /* LoadCursorA */
extern void *g_76b05c;   /* GetDeviceCaps */
extern void *g_76b14c;   /* GetModuleHandleA */
extern void *g_76b0c8;   /* GetProcAddress */
extern void *g_76b4d0;   /* SystemParametersInfoA */
extern void *g_76b204;   /* GetVersionExA */
extern void *g_76b138;   /* FormatMessageA */
extern void *g_76b228;   /* EnumResourceNamesA */
extern void *g_76b4d4;   /* LoadIconA */
extern void *g_76b070;   /* GetStockObject */
extern void *g_76b4d8;   /* RegisterClassA */
extern void *g_76b4dc;   /* AdjustWindowRect */
extern void *g_76b4e0;   /* CreateWindowExA */
extern void *g_76b568;   /* ShowWindow */
extern void *g_76b598;   /* MessageBoxA */
extern void *g_76b38c;   /* exit */

/* Data globals */
extern int g_896cb0;
extern int g_858c00;
extern int g_858ba0;
extern int g_858b9c;
extern int g_858bac;
extern int g_858ba8;
extern int g_858ba4;
extern int g_858c0c;
extern char g_858c0d;
extern int g_859278;
extern char g_859b9c;
extern int g_896c88;
extern char g_859afd;
extern int g_87dbf0;
extern int g_87dbfc;
extern int g_858940;
extern int g_858944;
extern char g_8589d6;
extern int g_858bd0;
extern int g_858bfc;
extern int g_858bd4;
extern int g_858bd8;
extern int g_858bdc;
extern int g_858be0;
extern int g_858c18;
extern int g_858be4;
extern int g_858be8;
extern int g_858bec;
extern int g_858920;
extern int g_858bf0;
extern int g_858bf4;
extern int g_7b6fb0;
extern int g_7b6fb4;
extern int g_7b6fb8;
extern int g_7b6fbc;
extern int g_858bf8;
extern char g_859aff;
extern int g_858c08;

extern void __cdecl FUN_006fabf0(void *p);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_0072fed0(void);
extern void __cdecl FUN_0070c960(void);
extern void __cdecl FUN_006fab90(void *p);
extern void __cdecl FUN_0072c6c0(void *p);
extern void __cdecl FUN_0072c090(void *p);

__declspec(naked) void __cdecl FUN_00708030(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2a8
        push    ebx
        push    esi
        push    edi
        push    0x7f00
        xor     ebx, ebx
        push    ebx
        call    dword ptr [g_76b534]
        mov     esi, dword ptr [g_76b05c]
        mov     dword ptr [g_896cb0], eax
        mov     eax, dword ptr [g_858c00]
        push    0xc
        push    eax
        call    esi
        mov     ecx, dword ptr [g_858c00]
        push    0xa
        push    ecx
        mov     dword ptr [g_858ba0], eax
        call    esi
        mov     edx, dword ptr [g_858c00]
        push    0x8
        mov     edi, eax
        push    edx
        shl     edi, 0x10
        call    esi
        mov     esi, dword ptr [g_76b14c]
        push    0x7a14ac
        add     edi, eax
        push    0x7a149c
        mov     dword ptr [g_858b9c], edi
        mov     dword ptr [g_858bac], ebx
        call    esi
        mov     edi, dword ptr [g_76b0c8]
        push    eax
        call    edi
        push    0x7a1484
        push    0x7a149c
        mov     dword ptr [g_858bac], eax
        call    esi
        push    eax
        call    edi
        push    0x7a1470
        push    0x7a149c
        mov     dword ptr [g_858ba8], eax
        call    esi
        push    eax
        call    edi
        mov     dword ptr [g_858ba4], eax
        mov     eax, dword ptr [g_858bac]
        cmp     eax, ebx
        jz      L_7080e5
        push    0x80000003
        call    eax
L_7080e5:
        mov     esi, dword ptr [g_76b4d0]
        push    ebx
        push    0x858c0c
        push    ebx
        push    0x10
        call    esi
        push    0x2
        push    ebx
        push    ebx
        push    0x11
        call    esi
        lea     eax, [ebp - 0xa8]
        push    eax
        mov     byte ptr [g_858c0d], 0x1
        mov     dword ptr [ebp - 0xa8], 0x94
        call    dword ptr [g_76b204]
        cmp     dword ptr [ebp - 0x98], 0x2
        mov     esi, 0x5
        jnz     L_708150
        cmp     dword ptr [ebp - 0xa4], esi
        jnz     L_708150
        cmp     dword ptr [ebp - 0x9c], 0x893
        jnc     L_708150
        push    0x7a1440
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_708150
        int     3
L_708150:
        cmp     dword ptr [g_859278], ebx
        jnz     L_70838c
        mov     eax, dword ptr [g_858ba0]
        cmp     eax, 0x1
        jz      L_708184
        cmp     byte ptr [g_859b9c], bl
        jnz     L_70823e
        cmp     eax, 0x10
        jz      L_70823e
        cmp     eax, 0x20
        jz      L_70823e
L_708184:
        cmp     eax, 0x8
        jnz     L_708190
        push    0x3fe
        jmp     L_70819e
L_708190:
        cmp     eax, 0x18
        jnz     L_7083ac
        push    0x3ff
L_70819e:
        mov     ecx, dword ptr [g_896c88]
        push    ecx
        call    FUN_0072d830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebp - 0x1a8]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        lea     edx, [ebp - 0x14]
        push    edx
        push    0x100
        mov     ecx, eax
        and     ecx, 0x3
        lea     eax, [ebp - 0x2a8]
        push    eax
        rep     movsb
        push    ebx
        lea     ecx, [ebp - 0x1a8]
        push    ebx
        mov     dword ptr [ebp - 0x14], ecx
        mov     ecx, dword ptr [g_896c88]
        push    0x3fd
        push    ecx
        call    FUN_0072d830
        push    eax
        push    0x2400
        call    dword ptr [g_76b138]
        cmp     byte ptr [g_859afd], bl
        lea     edx, [ebp - 0x2a8]
        mov     dword ptr [g_87dbf0], edx
        jnz     L_70823e
        call    FUN_0072fed0
        cmp     dword ptr [g_87dbfc], -0x1
        jnz     L_70822e
        call    FUN_0070c960
L_70822e:
        cmp     dword ptr [g_87dbfc], 0x1
        jnz     L_70823e
        mov     byte ptr [g_859b9c], 0x1
L_70823e:
        mov     eax, dword ptr [g_858940]
        mov     ecx, dword ptr [g_858944]
        mov     dword ptr [g_7b6fb0], eax
        cmp     byte ptr [g_8589d6], bl
        mov     dword ptr [g_7b6fb4], ecx
        mov     dword ptr [g_858bd0], 0x1023
        jz      L_708270
        mov     dword ptr [g_858bd0], 0x102b
L_708270:
        mov     eax, dword ptr [g_858bfc]
        push    ebx
        push    0x708020
        push    0xe
        push    eax
        mov     dword ptr [g_858bd4], 0x72e580
        mov     dword ptr [g_858bd8], ebx
        mov     dword ptr [g_858bdc], ebx
        mov     dword ptr [g_858be0], eax
        call    dword ptr [g_76b228]
        mov     eax, dword ptr [g_858c18]
        cmp     eax, ebx
        jz      L_7082c2
        mov     edx, dword ptr [g_858bfc]
        and     eax, 0xffff
        push    eax
        push    edx
        call    dword ptr [g_76b4d4]
        mov     dword ptr [g_858be4], eax
        jmp     L_7082c8
L_7082c2:
        mov     dword ptr [g_858be4], ebx
L_7082c8:
        push    0x4
        mov     dword ptr [g_858be8], ebx
        call    dword ptr [g_76b070]
        mov     dword ptr [g_858bec], eax
        mov     eax, dword ptr [g_858920]
        push    0x858bd0
        mov     dword ptr [g_858bf0], eax
        mov     dword ptr [g_858bf4], eax
        call    dword ptr [g_76b4d8]
        test    ax, ax
        jz      L_708393
        mov     eax, dword ptr [g_7b6fb0]
        mov     ecx, dword ptr [g_7b6fb4]
        push    ebx
        push    0xcb0000
        lea     edx, [ebp - 0x10]
        push    edx
        mov     dword ptr [ebp - 0x10], ebx
        mov     dword ptr [ebp - 0xc], ebx
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x4], ecx
        call    dword ptr [g_76b4dc]
        mov     edx, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x8]
        mov     esi, dword ptr [ebp - 0x10]
        push    ebx
        sub     ecx, edx
        mov     edx, dword ptr [g_858bfc]
        push    edx
        push    ebx
        push    ebx
        push    ecx
        mov     ecx, dword ptr [g_7b6fb8]
        sub     eax, esi
        push    eax
        mov     eax, dword ptr [g_7b6fbc]
        push    eax
        mov     eax, dword ptr [g_858920]
        push    ecx
        push    0xcb0000
        push    eax
        push    eax
        push    ebx
        call    dword ptr [g_76b4e0]
        cmp     eax, ebx
        mov     dword ptr [g_858bf8], eax
        jz      L_708393
        cmp     byte ptr [g_859aff], bl
        jnz     L_708380
        push    0xa
        push    eax
        call    dword ptr [g_76b568]
        mov     eax, dword ptr [g_858bf8]
L_708380:
        push    eax
        call    FUN_0072c6c0
        push    ebx
        call    FUN_0072c090
L_70838c:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_708393:
        push    0x7a1424
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_70838c
        int     3
        /* dead code after int 3 — reproduce exactly to keep branch offsets */
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_7083ac:
        mov     edx, dword ptr [g_896c88]
        push    0x30
        push    0x859694
        push    0x3fc
        push    edx
        call    FUN_0072d830
        push    eax
        push    ebx
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], esi
        call    dword ptr [g_76b38c]
        nop
        nop
        nop
        nop
        nop
        nop
    }
}
