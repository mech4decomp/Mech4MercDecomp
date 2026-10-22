/*
 * FUN_005481cd (extent 0x5481cd-0x548f4c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_007b46c0;
extern int    g_007b8c10;
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d1420(void);
extern void __cdecl FUN_004d1480(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00595ce0(void);
extern void __cdecl FUN_0059b8c0(void);
extern void __cdecl FUN_0059c700(void);
extern void __cdecl FUN_0059e310(void);
extern void __cdecl FUN_0059f5d0(void);
extern void __cdecl FUN_005de0f0(void);
extern void __cdecl FUN_00613a00(void);
extern void __cdecl FUN_00614050(void);
extern void __cdecl FUN_0061a510(void);
extern void __cdecl FUN_0062fa00(void);
extern void __cdecl FUN_0062fb70(void);
extern void __cdecl FUN_0062fc80(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_005481cd(void)
{
    __asm {
        nop    
        nop    
        nop    
        push    0x77b8ec
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_81e2
        int 3    
L_81e2:
        xor    eax, eax
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, dword ptr [g_0076b2ac]
        push    0x77b958
        push    esi
        mov    ebx, ecx
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    0x77b94c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    0x77b944
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    0x77b938
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    0x77b92c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    0x77b924
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    0x77b91c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    0x77b90c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    0x77b904
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8298
        push    esi
        mov    ecx, ebx
        call    FUN_004d1420
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_8298:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    4
        sub    esp, 0xf4
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x100]
        push    edi
        mov    edi, dword ptr [g_0076b2ac]
        push    0x77b94c
        push    esi
        mov    ebx, ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_83c1
        mov    eax, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    eax
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    ecx, dword ptr [esp + 0xb0]
        push    esi
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8319
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8319
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_83a0
L_8319:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    edx, [esp + 0xb0]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        call    FUN_00595ce0
        mov    ecx, dword ptr [g_007b8c10]
        add    esp, 8
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    edx, [esp + 0xbc]
        push    edx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_83a0:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_83c1:
        push    0x77b958
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_84ca
        mov    edx, dword ptr [esp + 0x108]
        push    1
        push    1
        push    edx
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    eax, dword ptr [esp + 0xb0]
        xor    esi, esi
        push    esi
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8423
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8423
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_84a9
L_8423:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    ecx, [esp + 0xb0]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        call    FUN_005de0f0
        mov    eax, dword ptr [g_007b8c10]
        add    esp, 8
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    ecx, [esp + 0xbc]
        push    ecx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    edx, [esp + 0xc]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_84a9:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_84ca:
        push    0x77b944
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_85d3
        mov    ecx, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    ecx
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    edx, dword ptr [esp + 0xb0]
        push    esi
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_852b
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_852b
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_85b2
L_852b:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    eax, [esp + 0xb0]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        call    FUN_0059f5d0
        mov    edx, dword ptr [g_007b8c10]
        add    esp, 8
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    eax, [esp + 0xbc]
        push    eax
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_85b2:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_85d3:
        push    0x77b97c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_86dc
        mov    eax, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    eax
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    ecx, dword ptr [esp + 0xb0]
        push    esi
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8634
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8634
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_86bb
L_8634:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    edx, [esp + 0xb0]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        call    FUN_0059e310
        mov    ecx, dword ptr [g_007b8c10]
        add    esp, 8
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    edx, [esp + 0xbc]
        push    edx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_86bb:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_86dc:
        push    0x77b970
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_87d9
        mov    edx, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    edx
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    eax, dword ptr [esp + 0xb0]
        push    esi
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8739
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8739
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_87b8
L_8739:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    ecx, [esp + 0x44]
        push    ecx
        call    FUN_0059c700
        mov    edx, dword ptr [g_007b8c10]
        add    esp, 4
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    eax, [esp + 0xbc]
        push    eax
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_87b8:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_87d9:
        push    0x77b964
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_88e2
        mov    eax, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    eax
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    ecx, dword ptr [esp + 0xb0]
        push    esi
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_883a
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_883a
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_88c1
L_883a:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    edx, [esp + 0xb0]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        call    FUN_0059b8c0
        mov    ecx, dword ptr [g_007b8c10]
        add    esp, 8
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    edx, [esp + 0xbc]
        push    edx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_88c1:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_88e2:
        push    0x77b938
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_89ea
        mov    edx, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    edx
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    eax, dword ptr [esp + 0xb0]
        push    esi
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8943
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8943
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_89c9
L_8943:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    ecx, [esp + 0xb0]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        call    FUN_0062fa00
        mov    eax, dword ptr [g_007b8c10]
        add    esp, 8
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    ecx, [esp + 0xbc]
        push    ecx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    edx, [esp + 0xc]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_89c9:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_89ea:
        push    0x77b92c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8af3
        mov    ecx, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    ecx
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    edx, dword ptr [esp + 0xb0]
        push    esi
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8a4b
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8a4b
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_8ad2
L_8a4b:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    eax, [esp + 0xb0]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        call    FUN_0062fc80
        mov    edx, dword ptr [g_007b8c10]
        add    esp, 8
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    eax, [esp + 0xbc]
        push    eax
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_8ad2:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_8af3:
        push    0x77b924
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8bfc
        mov    eax, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    eax
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    ecx, dword ptr [esp + 0xb0]
        push    esi
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8b54
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8b54
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_8bdb
L_8b54:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    edx, [esp + 0xb0]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        call    FUN_0062fb70
        mov    ecx, dword ptr [g_007b8c10]
        add    esp, 8
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    edx, [esp + 0xbc]
        push    edx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_8bdb:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_8bfc:
        push    0x77b91c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8d05
        mov    edx, dword ptr [esp + 0x108]
        push    1
        push    1
        push    edx
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    eax, dword ptr [esp + 0xb0]
        xor    esi, esi
        push    esi
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8c5e
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8c5e
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_8ce4
L_8c5e:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    ecx, [esp + 0x44]
        push    ecx
        lea    edx, [esp + 0xb4]
        push    edx
        call    FUN_00613a00
        mov    eax, dword ptr [g_007b8c10]
        add    esp, 8
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    ecx, [esp + 0xbc]
        push    ecx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    edx, [esp + 0xc]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_8ce4:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_8d05:
        push    0x77b904
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8e0e
        mov    ecx, dword ptr [esp + 0x108]
        xor    esi, esi
        push    esi
        push    1
        push    ecx
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    edx, dword ptr [esp + 0xb0]
        push    esi
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8d66
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8d66
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_8ded
L_8d66:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    eax, [esp + 0x44]
        push    eax
        lea    ecx, [esp + 0xb4]
        push    ecx
        call    FUN_0061a510
        mov    edx, dword ptr [g_007b8c10]
        add    esp, 8
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    eax, [esp + 0xbc]
        push    eax
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_8ded:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_8e0e:
        push    0x77b90c
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8f18
        mov    eax, dword ptr [esp + 0x108]
        push    1
        push    1
        push    eax
        lea    ecx, [esp + 0xbc]
        call    FUN_0040dca0
        mov    ecx, dword ptr [esp + 0xb0]
        xor    esi, esi
        push    esi
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2000
        cmp    dword ptr [esp + 0xa8], esi
        je    L_8e70
        cmp    dword ptr [esp + 0x88], esi
        jbe    L_8e70
        lea    ecx, [esp + 0x6c]
        call    FUN_004d24f0
        test    al, al
        jne    L_8ef7
L_8e70:
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_0041ee70
        lea    edx, [esp + 0x44]
        push    edx
        lea    eax, [esp + 0xb4]
        push    eax
        call    FUN_00614050
        mov    ecx, dword ptr [g_007b8c10]
        add    esp, 8
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_00415180
        push    esi
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        lea    edx, [esp + 0xbc]
        push    edx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        lea    ecx, [esp + 0x74]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc]
        call    FUN_00412b60
        lea    ecx, [esp + 0x44]
        call    FUN_0041ef60
L_8ef7:
        lea    ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xb0]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
L_8f18:
        mov    edx, dword ptr [esp + 0x108]
        push    edx
        push    esi
        mov    ecx, ebx
        call    FUN_004d1480
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
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
        mov    eax, dword ptr [g_007b46c0]
        mov    dword ptr [ecx + 0x368], eax
        ret    
    }
}
