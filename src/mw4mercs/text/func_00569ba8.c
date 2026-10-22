/*
 * FUN_00569ba8 (extent 0x569ba8-0x569dc9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dde2c;
extern int    g_007f24d8;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_00580560(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00569ba8(void)
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_9c0a
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_9c0a
        push    0x77fbe8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_9c0a
        int 3    
L_9c0a:
        push    esi
        call    FUN_005669d0
        add    esp, 4
        test    eax, eax
        je    L_9c4c
        mov    cl, byte ptr [g_007dde2c]
        test    cl, cl
        je    L_9c4c
        mov    ecx, dword ptr [g_007f24d8]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        jne    L_9c4c
        push    0x77fbc4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_9c4c
        int 3    
L_9c4c:
        push    esi
        call    FUN_005668b0
        fld    dword ptr [eax + 0x304]
        add    esp, 4
        call    FUN_0075db4a
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_9c8b
        push    0
        call    FUN_00563060
        add    esp, 4
L_9c8b:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x28
        push    esi
        lea    eax, [esp + 7]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00580540
        mov    edx, dword ptr [esp + 0x34]
        push    0
        lea    ecx, [esp + 0x24]
        push    ecx
        push    edx
        call    FUN_00566ef0
        mov    eax, dword ptr [esp + 0x30]
        mov    esi, dword ptr [esp + 0x2c]
        mov    ecx, eax
        sub    ecx, esi
        add    esp, 0xc
        test    ecx, 0xfffffffc
        jne    L_9d0b
        mov    esi, dword ptr [esp + 0x30]
        mov    eax, 0xbf800000
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 8], eax
        call    FUN_00580560
        mov    eax, esi
        pop    esi
        add    esp, 0x28
        ret    
L_9d0b:
        cmp    esi, eax
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0
        je    L_9d6e
L_9d27:
        mov    edx, dword ptr [esi]
        mov    eax, dword ptr [edx + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 8], ecx
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0xc], edx
        mov    eax, dword ptr [eax + 0x2c]
        lea    ecx, [esp + 8]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x18], eax
        call    FUN_0040c9e0
        mov    eax, dword ptr [esp + 0x24]
        add    esi, 4
        cmp    esi, eax
        jne    L_9d27
        mov    esi, dword ptr [esp + 0x20]
L_9d6e:
        sub    eax, esi
        sar    eax, 2
        test    esi, esi
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], 0
        fild    qword ptr [esp + 8]
        fld    dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x34]
        fdiv st(0), st(1)
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fdiv st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x1c]
        mov    dword ptr [edi + 4], eax
        fdivr    dword ptr [esp + 0x20]
        fst    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x18]
        fstp    dword ptr [edi]
        fstp    dword ptr [edi + 8]
        je    L_9dc1
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9dc1:
        mov    eax, edi
        pop    edi
        pop    esi
        add    esp, 0x28
        ret    
    }
}
