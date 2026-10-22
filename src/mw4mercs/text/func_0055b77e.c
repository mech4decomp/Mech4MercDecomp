/*
 * FUN_0055b77e (extent 0x55b77e-0x55b873) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0e4;
extern int    g_0076b0e8;
extern int    g_0076b0ec;
extern int    g_0076b2d0;
extern int    g_0076b420;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_008a9868;
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_0070b130(void);
extern void __cdecl FUN_007218f0(void);

__declspec(naked) void FUN_0055b77e(void)
{
    __asm {
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x10]
        sub    esp, 0x20
        test    ecx, ecx
        push    ebx
        jle    L_b83a
        call    FUN_0070b130
        call    FUN_007218f0
        mov    ebx, eax
        test    ebx, ebx
        je    L_b83a
        push    esi
        push    edi
        mov    edi, dword ptr [g_0076b420]
        xor    esi, esi
L_b7c1:
        push    0x77de88
        push    esi
        lea    ecx, [esp + 0x14]
        push    0x77de78
        push    ecx
        call    edi
        add    esp, 0x10
        lea    edx, [esp + 0xc]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        je    L_b7ed
        inc    esi
        cmp    esi, 0x270f
        jbe    L_b7c1
L_b7ed:
        push    0
        push    0x8000080
        push    2
        push    0
        push    0
        push    0x40000000
        lea    eax, [esp + 0x24]
        push    eax
        call    dword ptr [g_0076b0e8]
        mov    esi, eax
        cmp    esi, -1
        je    L_b82e
        mov    edx, dword ptr [g_008a9868]
        push    0
        lea    ecx, [esp + 0x34]
        push    ecx
        push    edx
        push    ebx
        push    esi
        call    dword ptr [g_0076b0e4]
        push    esi
        call    dword ptr [g_0076b0ec]
L_b82e:
        push    ebx
        call    dword ptr [g_0076b2d0]
        add    esp, 4
        pop    edi
        pop    esi
L_b83a:
        pop    ebx
        add    esp, 0x20
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
        nop    
        nop    
        mov    eax, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d8c]
        mov    dword ptr [ecx + 0x5bc], eax
        mov    eax, dword ptr [g_007b8d90]
        mov    dword ptr [ecx + 0x5c0], edx
        mov    dword ptr [ecx + 0x5c4], eax
        ret    
    }
}
