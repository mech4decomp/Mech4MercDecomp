/*
 * FUN_1001e7f0 (908 B) - __stdcall (RET 0x8). Builds an XML stats
 * string buffer (param_2) from a stats object (param_1) plus several
 * global string constants, using swprintf/_snwprintf and wcslen.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_10011e20(void);
extern void __cdecl FUN_10005450(void);
extern void __cdecl FUN_100016b0(void);

extern void *g_100210f0;   /* IAT: time */
extern void *g_100210f4;   /* IAT: wcslen */
extern int  *g_100210c0;   /* IAT: _timezone (pointer to int) */
extern void *g_10021138;   /* IAT: swprintf */
extern void *g_10021100;   /* IAT: _snwprintf */
extern double g_10021578;  /* FPU const @ 0x10021578 */

extern unsigned short g_100245a0;
extern unsigned short g_10026510;
extern unsigned short g_10026500;
extern unsigned short g_10026b6c;
extern unsigned short g_10026b5c;
extern unsigned short g_10026b4c;
extern unsigned short g_10026b3c;

__declspec(naked) void __cdecl FUN_1001e7f0(void)
{
    __asm {
        sub     esp, 0x204
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x218]
        push    edi
        push    0x100265a0
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026594
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026b7c
        mov     ecx, esi
        call    FUN_10001680
        lea     eax, [esp + 0x10]
        push    eax
        call    dword ptr [g_100210f0]
        add     esp, 0x4
        mov     ecx, esi
        push    0x10026560
        call    FUN_10001680
        mov     ebx, dword ptr [esp + 0x218]
        mov     ecx, dword ptr [ebx + 0x64]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, esi
        push    edx
        call    FUN_10001680
        push    0x10026378
        mov     ecx, esi
        call    FUN_10001680
        mov     eax, dword ptr [ebx + 0x64]
        mov     ecx, dword ptr [eax + 0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_10011e20
        push    0x10026554
        mov     ecx, esi
        call    FUN_10001680
        push    0x100260d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x1002636c
        mov     ecx, esi
        call    FUN_10001680
        mov     ecx, esi
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_10011e20
        push    0x10026548
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], 0x4
        mov     dword ptr [esi + 0x4], 0x2
        call    FUN_10001680
        mov     eax, dword ptr [g_100210c0]
        sub     esp, 0x8
        mov     ecx, esi
        fild    dword ptr [eax]
        fmul    qword ptr [g_10021578]
        fstp    qword ptr [esp]
        call    FUN_10005450
        mov     ecx, 0x100245a0
        test    ecx, ecx
        jz      L1e8fe
        cmp     word ptr [g_100245a0], 0x0
        jz      L1e8fe
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    0x100245a0
        call    FUN_100016b0
L1e8fe:
        xor     ebp, ebp
        mov     dword ptr [esi + 0x8], ebp
        mov     dword ptr [esi + 0x4], ebp
        cmp     dword ptr [ebx + 0xa0], ebp
        jz      L1eb6d
        mov     edx, dword ptr [ebx + 0xbc]
        mov     eax, dword ptr [ebx + 0xb8]
        mov     edi, dword ptr [g_10021138]
        push    edx
        push    eax
        lea     ecx, [esp + 0x1c]
        push    0x10026258
        push    ecx
        call    edi
        mov     edx, dword ptr [ebx + 0xc4]
        mov     eax, dword ptr [ebx + 0xc0]
        add     esp, 0x10
        lea     ecx, [esp + 0x114]
        push    edx
        push    eax
        push    0x10026258
        push    ecx
        call    edi
        mov     edx, 0x10026510
        add     esp, 0x10
        test    edx, edx
        jz      L1e980
        cmp     word ptr [g_10026510], bp
        jz      L1e980
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    0x10026510
        call    FUN_100016b0
L1e980:
        mov     eax, dword ptr [ebx + 0xa8]
        mov     ebp, dword ptr [g_10021100]
        push    eax
        lea     edi, [esi + 0x18]
        push    0x10026250
        push    0x40
        push    edi
        call    ebp
        add     esp, 0x10
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    edi
        call    FUN_100016b0
        mov     eax, 0x10026500
        test    eax, eax
        jz      L1e9d4
        cmp     word ptr [g_10026500], 0x0
        jz      L1e9d4
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    0x10026500
        call    FUN_100016b0
L1e9d4:
        mov     eax, dword ptr [ebx + 0xa4]
        push    eax
        push    0x10026250
        push    0x40
        push    edi
        call    ebp
        add     esp, 0x10
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    edi
        call    FUN_100016b0
        mov     ecx, 0x10026b6c
        test    ecx, ecx
        jz      L1ea1f
        cmp     word ptr [g_10026b6c], 0x0
        jz      L1ea1f
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    0x10026b6c
        call    FUN_100016b0
L1ea1f:
        mov     eax, dword ptr [ebx + 0xb0]
        push    eax
        push    0x10026250
        push    0x40
        push    edi
        call    ebp
        add     esp, 0x10
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    edi
        call    FUN_100016b0
        mov     edx, 0x10026b5c
        test    edx, edx
        jz      L1ea6a
        cmp     word ptr [g_10026b5c], 0x0
        jz      L1ea6a
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    0x10026b5c
        call    FUN_100016b0
L1ea6a:
        mov     ebx, dword ptr [ebx + 0xac]
        push    ebx
        push    0x10026250
        push    0x40
        push    edi
        call    ebp
        add     esp, 0x10
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    edi
        call    FUN_100016b0
        mov     eax, 0x10026b4c
        test    eax, eax
        jz      L1eab9
        cmp     word ptr [g_10026b4c], 0x0
        jz      L1eab9
        mov     edi, dword ptr [g_100210f4]
        push    eax
        call    edi
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    0x10026b4c
        call    FUN_100016b0
        jmp     L1eabf
L1eab9:
        mov     edi, dword ptr [g_100210f4]
L1eabf:
        lea     ecx, [esp + 0x14]
        test    ecx, ecx
        jz      L1eae8
        cmp     word ptr [esp + 0x14], 0x0
        jz      L1eae8
        lea     edx, [esp + 0x14]
        push    edx
        call    edi
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_100016b0
L1eae8:
        mov     ecx, 0x10026b3c
        test    ecx, ecx
        jz      L1eb10
        cmp     word ptr [g_10026b3c], 0x0
        jz      L1eb10
        push    ecx
        call    edi
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    0x10026b3c
        call    FUN_100016b0
L1eb10:
        lea     edx, [esp + 0x114]
        test    edx, edx
        jz      L1eb45
        cmp     word ptr [esp + 0x114], 0x0
        jz      L1eb45
        lea     eax, [esp + 0x114]
        push    eax
        call    edi
        add     esp, 0x4
        lea     ecx, [esp + 0x114]
        shl     eax, 0x1
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_100016b0
L1eb45:
        mov     edx, 0x100245a0
        test    edx, edx
        jz      L1eb6d
        cmp     word ptr [g_100245a0], 0x0
        jz      L1eb6d
        push    edx
        call    edi
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    0x100245a0
        call    FUN_100016b0
L1eb6d:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x204
        ret     0x8
    }
}
