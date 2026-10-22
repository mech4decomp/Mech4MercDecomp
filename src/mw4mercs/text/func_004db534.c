/*
 * FUN_004db534 (extent 0x4db534-0x4db622) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041e110(void);
extern void __cdecl FUN_006cee90(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004db534(void)
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x34
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        push    ebx
        lea    ecx, [ebp + 0xc]
        call    FUN_00412570
        mov    eax, dword ptr [ebp + 0xc]
        push    0x773488
        push    eax
        lea    ecx, [ebp - 4]
        call    FUN_004125e0
        push    eax
        lea    ecx, [ebp + 0xc]
        call    FUN_00412740
        mov    eax, dword ptr [ebp - 4]
        test    eax, eax
        je    L_b599
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_b599
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_b599:
        lea    ecx, [ebp + 0xc]
        call    FUN_004128e0
        mov    ecx, dword ptr [ebp + 0xc]
        push    0
        push    ecx
        lea    ecx, [ebp - 0x34]
        call    FUN_0041de80
        mov    edi, dword ptr [ebp + 8]
        mov    ecx, edi
        call    FUN_006cee90
        mov    esi, eax
        push    esi
        call    FUN_004084d0
        mov    edx, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    dword ptr [edi + 0x30], eax
        sub    edx, dword ptr [ebp - 0x20]
        add    edx, ecx
        add    esp, 4
        cmp    esi, edx
        mov    dword ptr [edi + 0x2c], esi
        je    L_b5ec
        push    ebx
        push    0x773468
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_b5ec
        int 3    
L_b5ec:
        mov    eax, dword ptr [edi + 0x30]
        push    esi
        push    eax
        lea    ecx, [ebp - 0x34]
        call    FUN_0041e110
        lea    ecx, [ebp - 0x34]
        call    FUN_0041dec0
        mov    eax, dword ptr [ebp + 0xc]
        test    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        je    L_b61e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_b61e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_b61e:
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
