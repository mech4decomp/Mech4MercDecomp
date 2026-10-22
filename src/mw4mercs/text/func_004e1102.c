/*
 * FUN_004e1102 (extent 0x4e1102-0x4e13e8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b95a4;
extern int    g_007da848;
extern int    g_007dc740;
extern int    g_007dc7fc;
extern int    g_007dc830;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416530(void);
extern void __cdecl FUN_004165b0(void);
extern void __cdecl FUN_00416670(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0048f210(void);
extern void __cdecl FUN_00490660(void);
extern void __cdecl FUN_004e4870(void);
extern void __cdecl FUN_004e4af0(void);
extern void __cdecl FUN_004e5bb0(void);
extern void __cdecl FUN_004ee860(void);
extern void __cdecl FUN_004eed30(void);
extern void __cdecl FUN_004ef200(void);
extern void __cdecl FUN_004ef5e0(void);
extern void __cdecl FUN_004ef970(void);
extern void __cdecl FUN_004efc50(void);
extern void __cdecl FUN_004efe40(void);
extern void __cdecl FUN_004f0310(void);
extern void __cdecl FUN_004f0850(void);
extern void __cdecl FUN_004f10d0(void);
extern void __cdecl FUN_004f3360(void);
extern void __cdecl FUN_004f3420(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004e1102(void)
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
        sub    esp, 0x18
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x24]
        test    ebp, ebp
        mov    ebx, ecx
        jne    L_11ff
        mov    eax, dword ptr [g_007dc830]
        push    eax
        lea    ecx, [esp + 0xc]
        mov    dword ptr [ebx + 0x48], ebp
        mov    dword ptr [ebx + 0x4c], ebp
        call    FUN_00416530
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x773c18
        call    FUN_00416670
        test    eax, eax
        je    L_1171
L_114d:
        dec    word ptr [eax + 0x10]
        cmp    word ptr [eax + 0x10], 0
        jne    L_1164
        test    eax, eax
        je    L_1164
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_1164:
        lea    ecx, [esp + 8]
        call    FUN_00416670
        test    eax, eax
        jne    L_114d
L_1171:
        lea    ecx, [esp + 8]
        call    FUN_004165b0
        mov    eax, dword ptr [g_007b95a4]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007da848]
        test    ecx, ecx
        je    L_1195
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_1195:
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_11b5
        mov    ecx, esi
        call    FUN_00490660
        mov    dword ptr [esi], 0x773bc4
        jmp    L_11b7
L_11b5:
        xor    esi, esi
L_11b7:
        push    0x1003c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_11d9
        push    3
        push    esi
        mov    ecx, eax
        call    FUN_0048f210
        mov    dword ptr [g_007da848], eax
        jmp    L_11e3
L_11d9:
        mov    dword ptr [g_007da848], 0
L_11e3:
        call    FUN_006f49a0
        mov    ecx, dword ptr [g_007dc7fc]
        call    FUN_004179f0
        pop    esi
        mov    dword ptr [ebx + 0x10], ebp
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    4
L_11ff:
        mov    dword ptr [ebx + 0x10], ebp
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x14
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        mov    ecx, edi
        call    FUN_004f3420
        mov    esi, dword ptr [edi + 0x4c]
        test    esi, esi
        je    L_129b
        mov    edx, dword ptr [esi + 0x24]
        mov    eax, dword ptr [g_007dc740]
        mov    ecx, dword ptr [eax]
        push    edx
        call    FUN_004e5bb0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        add    edi, 0x50
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x773c58
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_1292
L_126a:
        mov    ecx, dword ptr [esi + 0x24]
        add    ecx, 0x27c
        call    FUN_0041fd80
        test    eax, eax
        je    L_1283
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
L_1283:
        lea    ecx, [esp + 8]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_126a
L_1292:
        lea    ecx, [esp + 8]
        call    FUN_00416c60
L_129b:
        pop    edi
        pop    esi
        add    esp, 0x14
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
        nop    
        mov    edx, dword ptr [esp + 4]
        lea    eax, [edx - 0x21a]
        cmp    eax, 0xd
        ja    L_13d0
        jmp    dword ptr [eax*4 + 0x4e13e8]
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004f0850
        add    esp, 8
        ret    0x10
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    edx
        push    eax
        push    ecx
        call    FUN_004f0310
        add    esp, 0xc
        ret    0x10
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_004ef970
        add    esp, 8
        ret    0x10
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        call    FUN_004efc50
        add    esp, 8
        ret    0x10
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004ef5e0
        add    esp, 8
        ret    0x10
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_004ef200
        add    esp, 8
        ret    0x10
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        call    FUN_004eed30
        add    esp, 8
        ret    0x10
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    edx
        call    FUN_004e4af0
        add    esp, 0xc
        ret    0x10
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004e4870
        add    esp, 8
        ret    0x10
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_004efe40
        add    esp, 8
        ret    0x10
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        call    FUN_004ee860
        add    esp, 8
        ret    0x10
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004f10d0
        add    esp, 8
        ret    0x10
L_13d0:
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        push    edx
        call    FUN_004f3360
        ret    0x10
        // jump-table data @ 0x004E13E8 (0 relocated pointers)
    }
}
