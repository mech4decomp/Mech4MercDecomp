/*
 * FUN_006a20b8 (extent 0x6a20b8-0x6a2224) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f1f84;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0063b370(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_006a20b8(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        sub    esp, 0x10
        push    esi
        mov    esi, dword ptr [g_007dab40]
        push    edi
        mov    edi, ecx
        xor    ecx, ecx
        xor    eax, esi
        mov    esi, dword ptr [esp + 0x24]
        mov    cl, byte ptr [esi]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        je    L_21d6
        push    esi
        mov    ecx, eax
        call    FUN_004ceeb0
        mov    esi, eax
        test    esi, esi
        je    L_21d6
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_21d6
        mov    eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        je    L_21d6
        cmp    byte ptr [esi + 0xdc], 1
        je    L_21d6
        lea    edx, [esp + 8]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x10], 0
        call    FUN_00580580
        lea    ecx, [esp + 0xc]
        push    0
        push    ecx
        call    FUN_0063b370
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        add    esp, 8
        cmp    edx, ecx
        mov    eax, edx
        je    L_218b
L_2180:
        cmp    dword ptr [eax], esi
        je    L_218b
        add    eax, 4
        cmp    eax, ecx
        jne    L_2180
L_218b:
        cmp    eax, ecx
        je    L_21c9
        mov    ecx, dword ptr [esi + 0x2fc]
        lea    edx, [esp + 0x24]
        push    edx
        call    FUN_005dd7a0
        push    eax
        push    9
        lea    ecx, [edi + 0x30]
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        je    L_21c5
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_21c5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_21c5:
        mov    edx, dword ptr [esp + 0xc]
L_21c9:
        test    edx, edx
        je    L_21d6
        push    edx
        call    FUN_004084e0
        add    esp, 4
L_21d6:
        pop    edi
        pop    esi
        add    esp, 0x10
        ret    0xc
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi]
        mov    eax, ecx
        and    eax, 1
        cmp    al, 1
        jne    L_221c
        mov    edx, ecx
        and    edx, 2
        cmp    dl, 2
        jne    L_220e
        and    ecx, 0xfffffffc
        mov    dword ptr [esi], ecx
        je    L_221c
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax + 0xc]
        mov    dword ptr [esi], 0
        pop    esi
        ret    
L_220e:
        and    ecx, 0xfffffffc
        mov    dword ptr [esi], ecx
        je    L_221c
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0xc]
L_221c:
        mov    dword ptr [esi], 0
        pop    esi
        ret    
    }
}
