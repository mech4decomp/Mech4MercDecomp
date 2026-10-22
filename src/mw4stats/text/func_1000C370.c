/*
 * FUN_1000c370 (1378 B) - __stdcall RET 0x10. ZoneStats client init:
 * validates params, copies GUID/strings, creates client, opens channel.
 * SEH frame (handler at 0x1001f9c9).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000b7d0(void);
extern void __cdecl FUN_1000b850(void);
extern void __cdecl FUN_1000a120(void);
extern void __cdecl FUN_1000f170(void);
extern void __cdecl FUN_1000f1e0(void);
extern void __cdecl FUN_1000c940(void);
extern void __cdecl FUN_1000cdc0(void);
extern void __cdecl FUN_1000cd70(void);
extern void __cdecl FUN_1000b7b0(void);
extern void __cdecl FUN_100016b0(void);

extern void *g_10021060;   /* IsBadReadPtr */
extern void *g_1002105c;   /* IsBadStringPtrW */
extern void *g_10021130;   /* _wcsdup */
extern void *g_100210ec;   /* free */
extern void *g_10021190;   /* CoCreateGuid */
extern void *g_10021138;   /* swprintf */
extern void *g_100210f4;   /* wcslen */
extern void *g_10021098;   /* GetLastError */

extern unsigned short g_100262f0;
extern unsigned short g_100262dc;

__declspec(naked) unsigned long __cdecl FUN_1000c370(void)
{
    __asm {
        mov     eax, fs:[0]
        push    -1
        push    0x1001f9c9
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x12c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x148]
        push    edi
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jnz     L_c8b2
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        jnz     L_c8b2
        mov     eax, dword ptr [esp + 0x150]
        mov     ebp, dword ptr [g_10021060]
        push    0x1c
        push    eax
        call    ebp
        test    eax, eax
        jnz     L_c43b
        mov     edi, dword ptr [esp + 0x154]
        push    0x30
        push    edi
        call    ebp
        test    eax, eax
        jnz     L_c43b
        mov     ecx, dword ptr [esp + 0x158]
        push    4
        push    ecx
        call    ebp
        test    eax, eax
        jnz     L_c43b
        lea     ebx, [edi + 0x10]
        push    0x10
        push    ebx
        call    ebp
        test    eax, eax
        jnz     L_c43b
        cmp     dword ptr [edi], 0x30
        jnz     L_c43b
        mov     edx, dword ptr [edi + 0x24]
        mov     ebp, dword ptr [g_1002105c]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jnz     L_c41f
        mov     eax, dword ptr [edi + 0x24]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        jnz     L_c41f
        mov     eax, 0x80070057
        jmp     L_c8b7
L_c41f:
        mov     ecx, dword ptr [edi + 0x28]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jnz     L_c445
        mov     edx, dword ptr [edi + 0x28]
        push    edx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        jnz     L_c445
L_c43b:
        mov     eax, 0x80070057
        jmp     L_c8b7
L_c445:
        mov     eax, dword ptr [esp + 0x150]
        mov     ecx, dword ptr [esp + 0x158]
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x3c], ecx
        mov     edx, dword ptr [edi]
        xor     ebp, ebp
        mov     dword ptr [esi + 0xc], edx
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [esi + 0x10], eax
        mov     ecx, dword ptr [edi + 0x8]
        mov     dword ptr [esi + 0x14], ecx
        mov     edx, dword ptr [edi + 0xc]
        mov     dword ptr [esi + 0x18], edx
        mov     eax, dword ptr [edi + 0x20]
        mov     dword ptr [esi + 0x2c], eax
        mov     edx, dword ptr [ebx]
        lea     ecx, [esi + 0x1c]
        mov     dword ptr [esi + 0x1c], edx
        mov     eax, dword ptr [ebx + 0x4]
        mov     dword ptr [ecx + 0x4], eax
        mov     edx, dword ptr [ebx + 0x8]
        mov     dword ptr [ecx + 0x8], edx
        mov     eax, dword ptr [ebx + 0xc]
        mov     ebx, dword ptr [g_10021130]
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [edi + 0x24]
        cmp     eax, ebp
        jz      L_c4bb
        cmp     word ptr [eax], bp
        jz      L_c4bb
        push    eax
        call    ebx
        add     esp, 4
        cmp     eax, ebp
        mov     dword ptr [esi + 0x30], eax
        jnz     L_c4bb
        mov     eax, 0x8007000e
        jmp     L_c8b7
L_c4bb:
        mov     eax, dword ptr [edi + 0x28]
        cmp     eax, ebp
        jz      L_c4de
        cmp     word ptr [eax], bp
        jz      L_c4de
        push    eax
        call    ebx
        add     esp, 4
        cmp     eax, ebp
        mov     dword ptr [esi + 0x34], eax
        jnz     L_c4de
        mov     eax, 0x8007000e
        jmp     L_c8b7
L_c4de:
        mov     eax, dword ptr [edi + 0x24]
        cmp     eax, ebp
        jz      L_c510
        cmp     word ptr [eax], bp
        jz      L_c510
        lea     ecx, [esi + 0x344]
        push    ecx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        jz      L_c506
        cmp     dword ptr [esi + 0x350], ebp
        jnz     L_c510
L_c506:
        mov     eax, 0x8007000e
        jmp     L_c8b7
L_c510:
        mov     edi, dword ptr [edi + 0x28]
        cmp     edi, ebp
        jz      L_c542
        cmp     word ptr [edi], bp
        jz      L_c542
        lea     edx, [esi + 0x3dc]
        push    edx
        push    edi
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        jz      L_c538
        cmp     dword ptr [esi + 0x3e8], ebp
        jnz     L_c542
L_c538:
        mov     eax, 0x8007000e
        jmp     L_c8b7
L_c542:
        push    0x58
        call    FUN_1000a120
        add     esp, 4
        mov     dword ptr [esp + 0x10], eax
        cmp     eax, ebp
        mov     dword ptr [esp + 0x144], ebp
        jz      L_c564
        mov     ecx, eax
        call    FUN_1000f170
        jmp     L_c566
L_c564:
        xor     eax, eax
L_c566:
        cmp     eax, ebp
        mov     dword ptr [esp + 0x144], 0xffffffff
        mov     dword ptr [esi + 0x48], eax
        jnz     L_c5a8
        mov     eax, dword ptr [esi + 0x34]
        mov     edi, dword ptr [g_100210ec]
        cmp     eax, ebp
        jz      L_c58e
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x34], ebp
L_c58e:
        mov     eax, dword ptr [esi + 0x30]
        cmp     eax, ebp
        jz      L_c59e
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x30], ebp
L_c59e:
        mov     eax, 0x8007000e
        jmp     L_c8b7
L_c5a8:
        mov     ecx, eax
        call    FUN_1000f1e0
        push    esi
        call    FUN_1000c940
        lea     eax, [esp + 0x14]
        push    eax
        call    dword ptr [g_10021190]
        test    eax, eax
        jge     L_c5f4
        mov     eax, dword ptr [esi + 0x34]
        mov     edi, dword ptr [g_100210ec]
        cmp     eax, ebp
        jz      L_c5da
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x34], ebp
L_c5da:
        mov     eax, dword ptr [esi + 0x30]
        cmp     eax, ebp
        jz      L_c5ea
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x30], ebp
L_c5ea:
        mov     eax, 0x80040220
        jmp     L_c8b7
L_c5f4:
        lea     edi, [esp + 0x14]
        lea     ebx, [esp + 0xbc]
        mov     ebp, 0x10
L_c604:
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        push    ecx
        push    0x100262f4
        push    ebx
        call    dword ptr [g_10021138]
        add     esp, 0xc
        inc     edi
        add     ebx, 4
        dec     ebp
        jnz     L_c604
        mov     eax, dword ptr [esi + 0x8]
        test    byte ptr [eax + 0x4], 2
        jnz     L_c6d8
        mov     ebx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [esi + 0xf0]
        lea     edi, [esi + 0xe4]
        xor     ebp, ebp
        cmp     eax, ebp
        jbe     L_c651
        mov     eax, dword ptr [edi]
        cmp     eax, ebp
        jz      L_c651
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_c651:
        cmp     ebx, ebp
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 0x10], ebp
        mov     dword ptr [edi + 0xc], ebp
        jz      L_c677
        cmp     word ptr [ebx], bp
        jz      L_c677
        push    ebx
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, edi
        shl     eax, 1
        push    eax
        push    ebx
        call    FUN_100016b0
L_c677:
        mov     edx, 0x100262f0
        test    edx, edx
        jz      L_c6a2
        cmp     word ptr [g_100262f0], bp
        jz      L_c6a2
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 4
        mov     ecx, edi
        shl     eax, 1
        push    eax
        push    0x100262f0
        call    FUN_100016b0
L_c6a2:
        mov     eax, dword ptr [esi + 0x58]
        lea     ebx, [esi + 0x4c]
        cmp     eax, ebp
        jbe     L_c6bc
        mov     eax, dword ptr [ebx]
        cmp     eax, ebp
        jz      L_c6bc
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_c6bc:
        mov     dword ptr [ebx], ebp
        mov     dword ptr [ebx + 0x10], ebp
        mov     dword ptr [ebx + 0xc], ebp
        mov     eax, dword ptr [edi + 0xc]
        cmp     eax, ebp
        jbe     L_c6da
        mov     edi, dword ptr [edi]
        push    eax
        push    edi
        mov     ecx, ebx
        call    FUN_100016b0
        jmp     L_c6da
L_c6d8:
        xor     ebp, ebp
L_c6da:
        lea     eax, [esp + 0xbc]
        test    eax, eax
        jz      L_c713
        cmp     word ptr [esp + 0xbc], bp
        jz      L_c713
        lea     ecx, [esp + 0xbc]
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 4
        lea     edx, [esp + 0xbc]
        shl     eax, 1
        push    eax
        push    edx
        lea     ecx, [esi + 0x4c]
        call    FUN_100016b0
L_c713:
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x2c], ebp
        mov     dword ptr [esp + 0x38], 0x400
        mov     eax, dword ptr [esi + 0x58]
        mov     dword ptr [esp + 0x144], 1
        cmp     eax, ebp
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x34], ebp
        mov     dword ptr [esp + 0x30], ebp
        jbe     L_c74f
        push    eax
        mov     eax, dword ptr [esi + 0x4c]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_100016b0
L_c74f:
        mov     ecx, 0x100262dc
        test    ecx, ecx
        jz      L_c77c
        cmp     word ptr [g_100262dc], bp
        jz      L_c77c
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 4
        lea     ecx, [esp + 0x24]
        shl     eax, 1
        push    eax
        push    0x100262dc
        call    FUN_100016b0
L_c77c:
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, ebp
        mov     eax, dword ptr [esp + 0x24]
        ja      L_c78d
        mov     eax, 0x100274ec
L_c78d:
        mov     ecx, dword ptr [esi + 0x3c]
        push    0x40000000
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        cmp     eax, -1
        mov     dword ptr [esi + 0x44], eax
        jnz     L_c7ef
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_c7bb
        mov     edi, dword ptr [g_100210ec]
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x34], ebp
        jmp     L_c7c1
L_c7bb:
        mov     edi, dword ptr [g_100210ec]
L_c7c1:
        mov     eax, dword ptr [esi + 0x30]
        cmp     eax, ebp
        jz      L_c7d1
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x30], ebp
L_c7d1:
        cmp     dword ptr [esp + 0x30], ebp
        jbe     L_c7e5
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebp
        jz      L_c7e5
        push    eax
        call    edi
        add     esp, 4
L_c7e5:
        mov     eax, 0x80040220
        jmp     L_c8b7
L_c7ef:
        push    esi
        call    FUN_1000cdc0
        test    eax, eax
        jnz     L_c849
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebp
        jz      L_c811
        mov     edi, dword ptr [g_100210ec]
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x34], ebp
        jmp     L_c817
L_c811:
        mov     edi, dword ptr [g_100210ec]
L_c817:
        mov     eax, dword ptr [esi + 0x30]
        cmp     eax, ebp
        jz      L_c827
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [esi + 0x30], ebp
L_c827:
        call    dword ptr [g_10021098]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, ebp
        jbe     L_c88d
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebp
        jz      L_c88d
        push    eax
        call    edi
        add     esp, 4
        mov     eax, esi
        jmp     L_c8b7
L_c849:
        push    1
        push    0x100262e8
        push    esi
        call    FUN_1000cd70
        test    eax, eax
        jnz     L_c891
        mov     eax, dword ptr [esi + 0x8]
        push    3
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    FUN_1000b7b0
        add     esp, 8
        call    dword ptr [g_10021098]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, ebp
        jbe     L_c88d
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebp
        jz      L_c88d
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_c88d:
        mov     eax, esi
        jmp     L_c8b7
L_c891:
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x40], ebp
        cmp     eax, ebp
        jbe     L_c8ae
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebp
        jz      L_c8ae
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_c8ae:
        xor     eax, eax
        jmp     L_c8b7
L_c8b2:
        mov     eax, 0x80040210
L_c8b7:
        mov     ecx, dword ptr [esp + 0x13c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x138
        ret     0x10
    }
}
