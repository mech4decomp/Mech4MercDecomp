/*
 * FUN_00608bde (extent 0x608bde-0x608d55) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0078bf64;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00608710(void);
extern void __cdecl FUN_00608d60(void);
extern void __cdecl FUN_00608d70(void);
extern void __cdecl FUN_00615ff0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00608b90(void);

__declspec(naked) void FUN_00608bde(void)
{
    __asm {
        mov    edi, edi
        clc    
        __emit 0x89  // mov dword ptr [eax+0], esp (explicit disp8=0)
        __emit 0x60
        __emit 0x00
        __emit 0x11  // adc dword ptr [edx+0], ecx (explicit disp8=0)
        __emit 0x8A
        __emit 0x60
        __emit 0x00
        __emit 0x22  // and byte ptr [edx+0], cl (explicit disp8=0)
        __emit 0x8A
        __emit 0x60
        __emit 0x00
        __emit 0x30  // xor byte ptr [edx+0], cl (explicit disp8=0)
        __emit 0x8A
        __emit 0x60
        __emit 0x00
        inc    edx
        __emit 0x8A  // mov ah, byte ptr [eax+0] (explicit disp8=0)
        __emit 0x60
        __emit 0x00
        push   esp
        __emit 0x8A  // mov ah, byte ptr [eax+0] (explicit disp8=0)
        __emit 0x60
        __emit 0x00
        pop    esi
        __emit 0x8A  // mov ah, byte ptr [eax+0] (explicit disp8=0)
        __emit 0x60
        __emit 0x00
        __emit 0x64  // mov ah, byte ptr fs:[eax+0] (explicit disp8=0)
        __emit 0x8A
        __emit 0x60
        __emit 0x00
        outsb
        __emit 0x8A  // mov ah, byte ptr [eax+0] (explicit disp8=0)
        __emit 0x60
        __emit 0x00
        __emit 0x78  // js 0x608C90 (rel8)
        __emit 0x8A
        pushad    
        __emit 0x00  // add byte ptr [edx+0x608a], dl
        __emit 0x92
        __emit 0x8A
        __emit 0x60
        __emit 0x00
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        add    ecx, 0x28
        push    ecx
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 4], 0
        call    FUN_00416bc0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x78bf24
        call    FUN_00416cc0
        test    eax, eax
        je    L_8c65
L_8c3d:
        fild    dword ptr [eax + 0x30]
        fmul    dword ptr [eax + 0x18]
        call    FUN_0075db4a
        mov    dword ptr [esp + 4], eax
        fild    dword ptr [esp + 4]
        lea    ecx, [esp + 8]
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        jne    L_8c3d
L_8c65:
        lea    ecx, [esp + 8]
        call    FUN_00416c60
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 0x1c
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
        sub    esp, 0x1c
        add    ecx, 0x28
        push    esi
        push    ecx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 8], 0
        call    FUN_00416bc0
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x78bf24
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_8ce1
L_8cb0:
        fld    dword ptr [esi + 0x18]
        fmul    dword ptr [g_0078bf64]
        call    FUN_0075db4a
        imul    eax, dword ptr [esi + 0x30]
        mov    dword ptr [esp + 8], eax
        lea    ecx, [esp + 0xc]
        fild    dword ptr [esp + 8]
        fadd    dword ptr [esp + 4]
        fstp    dword ptr [esp + 4]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_8cb0
L_8ce1:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        fld    dword ptr [esp + 4]
        pop    esi
        add    esp, 0x1c
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
        push    ebx
        push    esi
        mov    esi, ecx
        xor    bl, bl
        call    FUN_00608d60
        test    al, al
        je    L_8d50
        mov    ecx, esi
        call    FUN_00608d70
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        lea    eax, [ecx + 0x44]
        push    0
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x6c]
        push    0
        push    ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        call    FUN_00615ff0
        mov    ecx, esi
        call    FUN_00608710
        pop    esi
        mov    al, 1
        pop    ebx
        ret    
L_8d50:
        pop    esi
        mov    al, bl
        pop    ebx
        ret    
    }
}
