/*
 * FUN_10011110 (1205 B) - __thiscall RET 0x8. Builds the XML request
 * header (version, cmd, co/g/z/t fields, timezone, U/N/V/I params, and
 * the ci/ca/ls/la/b custom fields). SEH frame (handler at 0x1001fce1).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_1001bb30(void);
extern void __cdecl FUN_10011e20(void);
extern void __cdecl FUN_10005450(void);
extern void __cdecl FUN_100016b0(void);

extern void *g_100210f0;   /* time */
extern void *g_10021138;   /* swprintf */
extern void *g_10021100;   /* _snwprintf */
extern void *g_100210f4;   /* wcslen */
extern void *g_100210ec;   /* free */
extern int  *g_100210c0;   /* _timezone */

extern double g_10021578;

extern unsigned short g_10026510;
extern unsigned short g_10026500;
extern unsigned short g_100264f0;
extern unsigned short g_100264e0;
extern unsigned short g_100264d4;
extern unsigned short g_100245a0;

__declspec(naked) unsigned long __cdecl FUN_10011110(void)
{
    __asm {
        push    -1
        push    0x1001fce1
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x2d4
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
        mov     eax, 0x400
        mov     ebp, ecx
        mov     dword ptr [esp + 0x14c], edi
        mov     dword ptr [esp + 0x150], edi
        mov     dword ptr [esp + 0x154], edi
        mov     dword ptr [esp + 0x158], edi
        mov     dword ptr [esp + 0x15c], edi
        mov     dword ptr [esp + 0x160], eax
        mov     dword ptr [esp + 0x2ec], edi
        mov     dword ptr [esp + 0xb4], edi
        mov     dword ptr [esp + 0xb8], edi
        mov     dword ptr [esp + 0xbc], edi
        mov     dword ptr [esp + 0xc0], edi
        mov     dword ptr [esp + 0xc4], edi
        mov     dword ptr [esp + 0xc8], eax
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x30], eax
        mov     esi, dword ptr [esp + 0x2f4]
        mov     ebx, 2
        push    0x100265a0
        mov     ecx, esi
        mov     byte ptr [esp + 0x2f0], bl
        call    FUN_10001680
        push    0x10026594
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026570
        mov     ecx, esi
        call    FUN_10001680
        lea     eax, [esp + 0x18]
        push    eax
        call    dword ptr [g_100210f0]
        add     esp, 4
        lea     ecx, [esp + 0x1c]
        lea     edx, [esp + 0xb4]
        lea     eax, [esp + 0x14c]
        push    ecx
        push    edx
        push    eax
        mov     ecx, ebp
        call    FUN_1001bb30
        push    0x10026560
        mov     ecx, esi
        call    FUN_10001680
        mov     ecx, dword ptr [ebp + 0x70]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, esi
        push    edx
        call    FUN_10001680
        push    0x10026378
        mov     ecx, esi
        call    FUN_10001680
        mov     eax, dword ptr [ebp + 0x70]
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
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, esi
        push    edx
        call    FUN_10011e20
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 4], ebx
        cmp     eax, edi
        mov     dword ptr [esi + 8], 4
        mov     ebx, 0x100274ec
        jbe     L_11291
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x10], eax
        jmp     L_11295
L_11291:
        mov     dword ptr [esp + 0x10], ebx
L_11295:
        cmp     dword ptr [esp + 0xc0], edi
        jbe     L_112ab
        mov     ecx, dword ptr [esp + 0xb4]
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_112af
L_112ab:
        mov     dword ptr [esp + 0x14], ebx
L_112af:
        cmp     dword ptr [esp + 0x158], edi
        jbe     L_112bf
        mov     ebx, dword ptr [esp + 0x14c]
L_112bf:
        push    0x10026548
        mov     ecx, esi
        call    FUN_10001680
        mov     edx, dword ptr [g_100210c0]
        sub     esp, 8
        mov     ecx, esi
        fild    dword ptr [edx]
        fmul    qword ptr [g_10021578]
        fstp    qword ptr [esp]
        call    FUN_10005450
        push    0x1002653c
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026530
        mov     ecx, esi
        call    FUN_10001680
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, esi
        push    eax
        call    FUN_10001680
        push    0x10026524
        mov     ecx, esi
        call    FUN_10001680
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_10001680
        push    0x100245a0
        mov     ecx, esi
        call    FUN_10001680
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 4], edi
        cmp     dword ptr [ebp + 0x124], edi
        jz      L_11533
        mov     edx, dword ptr [ebp + 0x13c]
        mov     eax, dword ptr [ebp + 0x138]
        push    edx
        push    eax
        lea     ecx, [esp + 0x1ec]
        push    0x10026258
        push    ecx
        call    dword ptr [g_10021138]
        mov     edx, 0x10026510
        add     esp, 0x10
        test    edx, edx
        jz      L_11397
        cmp     word ptr [g_10026510], di
        jz      L_11397
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x10026510
        call    FUN_100016b0
L_11397:
        mov     eax, dword ptr [ebp + 0x12c]
        mov     ebx, dword ptr [g_10021100]
        push    eax
        lea     edi, [esi + 0x18]
        push    0x10026250
        push    0x40
        push    edi
        call    ebx
        add     esp, 0x10
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    edi
        call    FUN_100016b0
        mov     eax, 0x10026500
        test    eax, eax
        jz      L_113eb
        cmp     word ptr [g_10026500], 0
        jz      L_113eb
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x10026500
        call    FUN_100016b0
L_113eb:
        mov     eax, dword ptr [ebp + 0x128]
        push    eax
        push    0x10026250
        push    0x40
        push    edi
        call    ebx
        add     esp, 0x10
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    edi
        call    FUN_100016b0
        mov     ecx, 0x100264f0
        test    ecx, ecx
        jz      L_11436
        cmp     word ptr [g_100264f0], 0
        jz      L_11436
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100264f0
        call    FUN_100016b0
L_11436:
        mov     eax, dword ptr [ebp + 0x134]
        push    eax
        push    0x10026250
        push    0x40
        push    edi
        call    ebx
        add     esp, 0x10
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    edi
        call    FUN_100016b0
        mov     edx, 0x100264e0
        test    edx, edx
        jz      L_11481
        cmp     word ptr [g_100264e0], 0
        jz      L_11481
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100264e0
        call    FUN_100016b0
L_11481:
        mov     ebp, dword ptr [ebp + 0x130]
        push    ebp
        push    0x10026250
        push    0x40
        push    edi
        call    ebx
        add     esp, 0x10
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    edi
        call    FUN_100016b0
        mov     eax, 0x100264d4
        test    eax, eax
        jz      L_114cc
        cmp     word ptr [g_100264d4], 0
        jz      L_114cc
        push    eax
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100264d4
        call    FUN_100016b0
L_114cc:
        lea     ecx, [esp + 0x1e4]
        test    ecx, ecx
        jz      L_11505
        cmp     word ptr [esp + 0x1e4], 0
        jz      L_11505
        lea     edx, [esp + 0x1e4]
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        lea     eax, [esp + 0x1e8]
        push    eax
        call    FUN_100016b0
L_11505:
        mov     ecx, 0x100245a0
        test    ecx, ecx
        jz      L_11531
        cmp     word ptr [g_100245a0], 0
        jz      L_11531
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100245a0
        call    FUN_100016b0
L_11531:
        xor     edi, edi
L_11533:
        mov     eax, dword ptr [esp + 0x28]
        mov     esi, dword ptr [g_100210ec]
        cmp     eax, edi
        jbe     L_1154f
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, edi
        jz      L_1154f
        push    eax
        call    esi
        add     esp, 4
L_1154f:
        mov     eax, dword ptr [esp + 0xc0]
        mov     dword ptr [esp + 0x1c], edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x28], edi
        jbe     L_11577
        mov     eax, dword ptr [esp + 0xb4]
        cmp     eax, edi
        jz      L_11577
        push    eax
        call    esi
        add     esp, 4
L_11577:
        mov     eax, dword ptr [esp + 0x158]
        mov     dword ptr [esp + 0xb4], edi
        cmp     eax, edi
        mov     dword ptr [esp + 0xc4], edi
        mov     dword ptr [esp + 0xc0], edi
        jbe     L_115a8
        mov     eax, dword ptr [esp + 0x14c]
        cmp     eax, edi
        jz      L_115a8
        push    eax
        call    esi
        add     esp, 4
L_115a8:
        mov     ecx, dword ptr [esp + 0x2e4]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2e0
        ret     0x8
    }
}
