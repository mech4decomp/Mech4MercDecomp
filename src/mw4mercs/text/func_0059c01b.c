/*
 * FUN_0059c01b (extent 0x59c01b-0x59c11b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007dc140;
extern int    g_007f2000;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00417aa0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_0059c01b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        mov    edx, dword ptr [esp + 0x14]
        lea    eax, [ecx + 0x10]
        mov    dword ptr [esp + 4], eax
        mov    eax, dword ptr [eax]
        push    esi
        push    edi
        mov    dword ptr [edx], 0
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 8], 0x7838a0
L_c044:
        test    eax, eax
        je    L_c060
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x10], eax
        je    L_c060
        mov    esi, dword ptr [ecx + 0x1c]
        test    esi, esi
        je    L_c044
        inc    dword ptr [edx]
        jmp    L_c044
L_c060:
        push    0
        lea    ecx, [esp + 0xc]
        call    FUN_00417aa0
        mov    esi, dword ptr [esp + 0x18]
        xor    edx, edx
L_c071:
        mov    ecx, dword ptr [esp + 0x10]
L_c075:
        test    ecx, ecx
        je    L_c09a
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x10], ecx
        je    L_c09a
        mov    edi, dword ptr [eax + 0x1c]
        test    edi, edi
        je    L_c075
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ecx + edx], eax
        add    edx, 4
        jmp    L_c071
L_c09a:
        pop    edi
        pop    esi
        add    esp, 0xc
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
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_c0db
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x7838a0
        pop    esi
        ret    
L_c0db:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c110
        mov    ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x7838a4
        push    0x4b9
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007f2000], eax
        ret    
L_c110:
        mov    dword ptr [g_007f2000], 0
        ret    
    }
}
