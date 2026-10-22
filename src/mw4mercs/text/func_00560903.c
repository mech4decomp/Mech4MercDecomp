/*
 * FUN_00560903 (extent 0x560903-0x560b10) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_007ddd80;
extern float  g_007ddd84;
extern int    g_007dddd8;
extern int    g_007ddddc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0055e790(void);
extern void __cdecl FUN_0055e7d0(void);
extern void __cdecl FUN_0055f440(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_007274d0(void);
extern void __cdecl FUN_007275f0(void);
extern void __cdecl FUN_00727630(void);
extern void __cdecl FUN_00732b20(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00560903(void)
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
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x120]
        fild    dword ptr [esi + 0x114]
        mov    eax, dword ptr [esi + 0x11c]
        mov    edx, dword ptr [esi + 0x124]
        push    edi
        fstp    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esi + 0x128]
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    dword ptr [esp + 0x24], edx
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x20], eax
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    dword ptr [esp + 0x34], 0
        call    FUN_0055e790
        fld    dword ptr [esp + 0x2c]
        add    esp, 0x10
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x20]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x14]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x1c]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_00727630
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        call    FUN_0055e7d0
        mov    ecx, dword ptr [esi + 0x10c]
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 8
        push    0
        push    ecx
        mov    ecx, dword ptr [esi + 0x104]
        push    0
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x110]
        push    0
        push    1
        push    edx
        mov    edx, dword ptr [esi + 0x108]
        push    eax
        push    ecx
        push    edx
        call    FUN_007274d0
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [g_0076d064]
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [g_0076d064]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_007275f0
        mov    eax, dword ptr [esi + 0x118]
        test    eax, eax
        je    L_0a17
        dec    dword ptr [eax]
        jns    L_0a17
        mov    dword ptr [eax], 0
L_0a17:
        fld    dword ptr [esp + 0x18]
        call    FUN_0075db4a
        mov    ebx, dword ptr [esp + 0x34]
        mov    ebp, dword ptr [esp + 0x30]
        push    eax
        lea    eax, [esi + 4]
        push    eax
        push    ebx
        push    ebp
        call    FUN_00732b20
        test    eax, eax
        mov    dword ptr [esi + 0x118], eax
        je    L_0a40
        inc    dword ptr [eax]
L_0a40:
        mov    ecx, dword ptr [ebp]
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x28], 0
        fild    qword ptr [esp + 0x24]
        fdiv    dword ptr [g_007ddd84]
        call    FUN_0075db4a
        mov    edx, dword ptr [ebx]
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x28], 0
        fild    qword ptr [esp + 0x24]
        mov    edi, eax
        mov    dword ptr [ebp], edi
        fdiv    dword ptr [g_007ddd80]
        call    FUN_0075db4a
        mov    dword ptr [esi + 0x12c], edi
        pop    edi
        mov    byte ptr [esi + 0x134], 1
        mov    dword ptr [esi + 0x130], eax
        pop    esi
        pop    ebp
        mov    dword ptr [ebx], eax
        pop    ebx
        add    esp, 0x1c
        ret    8
        nop    
        push    esi
        mov    esi, ecx
        push    0
        call    FUN_00560190
        mov    eax, dword ptr [g_007ddddc]
        test    eax, eax
        mov    dword ptr [esi], 0x77df4c
        jne    L_0afc
        push    0x44
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0af2
        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0
        push    0
        push    0x77df44
        mov    ecx, eax
        call    FUN_0055f440
        mov    dword ptr [g_007dddd8], eax
        jmp    L_0afc
L_0af2:
        mov    dword ptr [g_007dddd8], 0
L_0afc:
        inc    dword ptr [g_007ddddc]
        mov    dword ptr [esi + 0x114], 0xfffffff8
        mov    eax, esi
        pop    esi
        ret    
    }
}
