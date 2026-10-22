/*
 * FUN_00448c6b (extent 0x448c6b-0x448dfa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b98a4;
extern int    g_007b98e4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004487d0(void);
extern void __cdecl FUN_00448e40(void);
extern void __cdecl FUN_00455560(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00448c6b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b98e4]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x190
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8cb0
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007b98a4]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004487d0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_8cb0:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    esi, ecx
        xor    eax, eax
        push    edi
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x20], eax
        call    FUN_00455560
        mov    ecx, esi
        call    FUN_00448e40
        mov    eax, dword ptr [edi]
        push    1
        lea    ecx, [esi + 0x188]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    1
        lea    ecx, [esi + 0x189]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x18b]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    1
        lea    ecx, [esi + 0x18c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        add    esi, 0xc8
        mov    ebx, 0x20
L_8d2a:
        mov    edx, dword ptr [edi]
        mov    eax, esi
        push    4
        push    eax
        mov    ecx, edi
        add    esi, 4
        call    dword ptr [edx + 0x24]
        dec    ebx
        jne    L_8d2a
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], 0
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        mov    byte ptr [esp + 0x1c], 3
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    cl, byte ptr [esp + 8]
        cmp    cl, byte ptr [esi + 0x18a]
        je    L_8df6
        mov    al, byte ptr [esi + 0x18b]
        cmp    cl, al
        jae    L_8d9b
        mov    al, cl
L_8d9b:
        test    al, al
        mov    byte ptr [esp + 8], al
        jbe    L_8dc0
L_8da3:
        mov    ecx, dword ptr [esp + 8]
        and    ecx, 0xff
        mov    edx, dword ptr [esi + ecx*4 + 0xa8]
        test    edx, edx
        jne    L_8dc0
        dec    al
        mov    byte ptr [esp + 8], al
        jne    L_8da3
L_8dc0:
        mov    ecx, esi
        mov    byte ptr [esi + 0x18a], al
        call    FUN_00448e40
        mov    ecx, dword ptr [esi + 0x34]
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x18a]
        or    ecx, 0x3fff
        mov    eax, dword ptr [esi + edx*4 + 0xa8]
        mov    dword ptr [esi + 0x34], ecx
        mov    ecx, dword ptr [esi + 0x2c]
        and    ecx, 0xffffc000
        or    ecx, eax
        mov    dword ptr [esi + 0x2c], ecx
L_8df6:
        pop    esi
        ret    4
    }
}
