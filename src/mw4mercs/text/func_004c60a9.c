/*
 * FUN_004c60a9 (extent 0x4c60a9-0x4c63b2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007b9590;
extern int    g_007da724;
extern int    g_007dab08;
extern int    g_007dab0c;
extern int    g_007dab10;
extern int    g_007dab14;
extern int    g_007dab18;
extern int    g_007dab20;
extern int    g_007dab24;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0045d440(void);
extern void __cdecl FUN_0047ec20(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_00487ce0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004c60a9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        push    edi
        xor    edi, edi
L_60ba:
        test    esi, esi
        je    L_60d0
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_60d0
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x20]
        add    edi, eax
        jmp    L_60ba
L_60d0:
        mov    eax, edi
        pop    edi
        pop    esi
        ret    
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
        mov    eax, dword ptr [ecx + 0x144]
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        jmp    L_60f3
L_60ef:
        mov    eax, dword ptr [esp + 0x28]
L_60f3:
        xor    esi, esi
        cmp    eax, esi
        je    L_621b
        mov    ecx, dword ptr [eax]
        cmp    ecx, esi
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x28], eax
        je    L_621b
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 0x18]
        push    eax
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x20], esi
        call    dword ptr [edx + 0x3c]
        mov    ebx, dword ptr [esp + 0x30]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, dword ptr [esp + 0x1c]
        lea    ebp, [ecx + edi]
        cmp    ebp, edi
        mov    dword ptr [esp + 0x14], edi
        je    L_61c9
        cmp    ebp, esi
        jbe    L_61b9
        lea    edx, [ebp + ebp*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, esi
        je    L_6161
        lea    ecx, [ebp - 1]
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, eax
        mov    dword ptr [esp + 0x10], ecx
        jmp    L_6167
L_6161:
        mov    dword ptr [esp + 0x10], esi
        mov    ecx, esi
L_6167:
        mov    edx, dword ptr [ebx]
        cmp    edx, esi
        je    L_61b5
        cmp    ebp, edi
        mov    eax, ebp
        jb    L_6175
        mov    eax, edi
L_6175:
        mov    esi, eax
        dec    eax
        test    esi, esi
        je    L_61a4
        lea    esi, [eax + eax*2]
        mov    ebx, edx
        lea    esi, [ecx + esi*4]
        sub    ebx, ecx
        lea    edi, [eax + 1]
L_6189:
        lea    edx, [ebx + esi]
        push    edx
        mov    ecx, esi
        call    FUN_0040c410
        dec    edi
        sub    esi, 0xc
        test    edi, edi
        ja    L_6189
        mov    ebx, dword ptr [esp + 0x30]
        mov    edi, dword ptr [esp + 0x14]
L_61a4:
        mov    eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x14]
        add    esp, 4
        xor    esi, esi
L_61b5:
        mov    dword ptr [ebx], ecx
        jmp    L_61c6
L_61b9:
        mov    eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx], esi
L_61c6:
        mov    dword ptr [ebx + 4], ebp
L_61c9:
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jbe    L_6201
        mov    eax, dword ptr [ebx]
        lea    ecx, [edi + edi*2]
        xor    edx, edx
        lea    eax, [eax + ecx*4]
L_61db:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edi, dword ptr [ecx + edx]
        add    ecx, edx
        mov    dword ptr [eax], edi
        mov    edi, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edi
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        inc    esi
        add    edx, 0xc
        add    eax, 0xc
        cmp    esi, ecx
        jb    L_61db
L_6201:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_60ef
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_60ef
L_621b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
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
        /* __emit: reference uses near jmp E9 0B 00 00 00 (rel32) to L_6240;
           MSVC6 collapses the nearby forward jump to short EB 0B, shifting the
           following layout by 3 bytes. Emit the near form verbatim. */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_6240:
        mov    dword ptr [g_007dab10], 0xbf800000
        mov    dword ptr [g_007dab0c], 0xbf800000
        mov    dword ptr [g_007dab08], 0xbf800000
        mov    dword ptr [g_007dab14], 0xbf800000
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x30
        push    esi
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_62aa
        mov    eax, dword ptr [g_007b8c10]
        push    eax
        push    0x771734
        push    0x80
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0
        mov    dword ptr [g_007dab18], esi
        jmp    L_62b4
L_62aa:
        mov    dword ptr [g_007dab18], 0
L_62b4:
        lea    ecx, [esp + 4]
        call    FUN_00491280
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 4]
        or    eax, 0x1c000
        mov    dword ptr [esp + 0xc], eax
        mov    eax, dword ptr [esp + 8]
        and    ecx, 0xffff3fff
        or    ecx, 0x10000
        and    eax, 0xffffffef
        mov    dword ptr [esp + 4], ecx
        mov    ecx, dword ptr [esp + 0x14]
        and    eax, 0xfffffff0
        or    eax, 8
        lea    edx, [esp + 4]
        or    ecx, 0x10
        mov    dword ptr [esp + 8], eax
        push    edx
        lea    eax, [esp + 0x20]
        or    ecx, 0xf
        push    eax
        mov    dword ptr [esp + 0x1c], ecx
        mov    dword ptr [esp + 0x28], 1
        mov    byte ptr [esp + 0x2c], 1
        mov    dword ptr [esp + 0x30], 0x3f800000
        mov    dword ptr [esp + 0x34], 0x3f800000
        mov    byte ptr [esp + 0x38], 1
        call    FUN_0045d440
        mov    ecx, dword ptr [g_007b9590]
        add    esp, 8
        push    ecx
        mov    dword ptr [g_007dab20], eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6367
        mov    edx, dword ptr [g_007da724]
        push    edx
        push    1
        mov    ecx, eax
        call    FUN_00487830
        mov    dword ptr [g_007dab24], eax
        jmp    L_6371
L_6367:
        mov    dword ptr [g_007dab24], 0
L_6371:
        lea    eax, [esp + 4]
        push    eax
        push    0x3f800000
        call    FUN_0047ec20
        add    esp, 8
        mov    esi, eax
        call    FUN_006f49a0
        mov    ecx, dword ptr [g_007dab24]
        push    esi
        call    FUN_00487ce0
        dec    word ptr [esi + 8]
        cmp    word ptr [esi + 8], 0
        jne    L_63ad
        test    esi, esi
        je    L_63ad
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_63ad:
        pop    esi
        add    esp, 0x30
        ret    
    }
}
