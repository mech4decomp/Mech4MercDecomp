/*
 * FUN_005f9191 (extent 0x5f9191-0x5f94e6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dc68c;
extern int    g_007f25b4;
extern int    g_007f26a4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_00415510(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004da960(void);
extern void __cdecl FUN_004f93d0(void);
extern void __cdecl FUN_004fdfc0(void);
extern void __cdecl FUN_004fe1e0(void);
extern void __cdecl FUN_004fec10(void);
extern void __cdecl FUN_005f8fa0(void);
extern void __cdecl FUN_005f94f0(void);
extern void __cdecl FUN_005fcc80(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005f9191(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_004da960
        mov    eax, dword ptr [g_007f26a4]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_91db
        lea    ebx, [edi + 0x398]
        push    ebx
        mov    ecx, esi
        call    FUN_00415510
        test    al, al
        jne    L_91db
        push    esi
        mov    ecx, ebx
        call    FUN_004179b0
L_91db:
        mov    eax, dword ptr [g_007f25b4]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_921f
        lea    ebx, [edi + 0x34c]
        push    ebx
        mov    ecx, esi
        call    FUN_00415510
        test    al, al
        jne    L_921f
        push    esi
        mov    ecx, ebx
        call    FUN_004179b0
        mov    eax, dword ptr [esi + 0xe0]
        cmp    dword ptr [eax + 0x14], 1
        je    L_921f
        push    esi
        lea    ecx, [edi + 0x354]
        call    FUN_004179b0
L_921f:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f25b4]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_9266
        lea    eax, [esi + 0x34c]
        push    eax
        mov    ecx, edi
        call    FUN_004154d0
        add    esi, 0x354
        push    esi
        mov    ecx, edi
        call    FUN_004154d0
L_9266:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f25b4]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_92c9
        mov    eax, dword ptr [esi + 0xe0]
        mov    ecx, dword ptr [eax + 0x10]
        mov    edx, 1
        cmp    ecx, edx
        jne    L_92b6
        cmp    dword ptr [eax + 0x14], edx
        je    L_92b2
        push    esi
        lea    ecx, [edi + 0x354]
        call    FUN_004179b0
        pop    edi
        pop    esi
        ret    4
L_92b2:
        cmp    ecx, edx
        je    L_92c9
L_92b6:
        cmp    dword ptr [eax + 0x14], edx
        jne    L_92c9
        add    edi, 0x354
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
L_92c9:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        sub    esp, 0x44
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x124]
        test    eax, eax
        push    edi
        jne    L_9458
        mov    eax, dword ptr [esi + 0x128]
        test    eax, eax
        jne    L_9458
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    ebx
        call    dword ptr [eax + 4]
        mov    ebx, eax
        mov    cx, word ptr [ebx + 0x10]
        cmp    cx, word ptr [g_007db0ac]
        lea    edi, [ebx + 0x10]
        jne    L_931c
        mov    dx, word ptr [edi + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_9379
L_931c:
        mov    eax, dword ptr [g_007dc68c]
        push    eax
        call    FUN_006f4950
        push    1
        push    edi
        lea    ecx, [esp + 0x14]
        call    FUN_004d1f80
        push    0xa0
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_9363
        lea    ecx, [esp + 0xc]
        push    ecx
        call    FUN_004fec10
        add    esp, 4
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        push    esi
        mov    ecx, edi
        call    FUN_004fdfc0
        jmp    L_9365
L_9363:
        xor    eax, eax
L_9365:
        mov    dword ptr [esi + 0x124], eax
        call    FUN_006f49a0
        lea    ecx, [esp + 0xc]
        call    FUN_004d21c0
L_9379:
        mov    ax, word ptr [g_007db0ac]
        cmp    word ptr [ebx + 0x294], ax
        lea    edi, [ebx + 0x294]
        pop    ebx
        jne    L_93a0
        mov    cx, word ptr [g_007db0ae]
        cmp    word ptr [edi + 2], cx
        je    L_9458
L_93a0:
        mov    edx, dword ptr [g_007dc68c]
        push    edx
        call    FUN_006f4950
        push    1
        push    edi
        lea    ecx, [esp + 0x10]
        call    FUN_004d1f80
        mov    eax, dword ptr [esi + 0x398]
        test    eax, eax
        je    L_9408
        push    0xa0
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_93fe
        lea    eax, [esp + 8]
        push    eax
        call    FUN_004fec10
        add    esp, 4
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        push    esi
        push    0x5f94a0
        push    esi
        mov    ecx, edi
        call    FUN_004fe1e0
        mov    dword ptr [esi + 0x128], eax
        jmp    L_944a
L_93fe:
        xor    eax, eax
        mov    dword ptr [esi + 0x128], eax
        jmp    L_944a
L_9408:
        mov    eax, dword ptr [esi + 0x124]
        test    eax, eax
        jne    L_944a
        push    0xa0
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_9442
        lea    edx, [esp + 8]
        push    edx
        call    FUN_004fec10
        add    esp, 4
        push    eax
        lea    eax, [esp + 0xc]
        push    eax
        push    esi
        mov    ecx, edi
        call    FUN_004fdfc0
        jmp    L_9444
L_9442:
        xor    eax, eax
L_9444:
        mov    dword ptr [esi + 0x124], eax
L_944a:
        call    FUN_006f49a0
        lea    ecx, [esp + 8]
        call    FUN_004d21c0
L_9458:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        call    FUN_004f93d0
        test    al, al
        jne    L_947f
        mov    ecx, esi
        call    FUN_005f94f0
L_947f:
        mov    edx, dword ptr [esp + 0x50]
        push    edx
        mov    ecx, esi
        call    FUN_005fcc80
        pop    edi
        pop    esi
        add    esp, 0x44
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        call    FUN_005f8fa0
        ret    
        nop    
        mov    al, byte ptr [esp + 4]
        test    al, al
        je    L_94e3
        mov    eax, dword ptr [ecx + 0x10]
        shr    eax, 0x13
        test    al, 1
        je    L_94e3
        push    esi
        mov    esi, dword ptr [ecx + 0xd8]
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi]
        or    eax, 0xc0
        mov    ecx, esi
        mov    dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        pop    esi
L_94e3:
        ret    4
    }
}
