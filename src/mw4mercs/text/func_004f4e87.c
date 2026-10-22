/*
 * FUN_004f4e87 (extent 0x4f4e87-0x4f5025) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004dabf0(void);
extern void __cdecl FUN_004f5430(void);
extern void __cdecl FUN_004f5630(void);
extern void __cdecl FUN_004facd0(void);
extern void __cdecl FUN_004fae10(void);

__declspec(naked) void FUN_004f4e87(void)
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
        mov    eax, 1
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
        mov    eax, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [esp + 4]
        or    eax, 0x40
        mov    dword ptr [ecx + 0x10], eax
        mov    eax, dword ptr [esp + 8]
        push    eax
        push    edx
        call    FUN_004facd0
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x18
        test    al, 1
        je    L_4f12
        lea    ecx, [esi + 0x210]
        call    FUN_0041fd80
        test    eax, eax
        je    L_4ee5
        mov    ecx, esi
        call    FUN_004f5430
        jmp    L_4f12
L_4ee5:
        lea    ecx, [esi + 0x218]
        call    FUN_0041fd80
        test    eax, eax
        je    L_4efd
        mov    ecx, esi
        call    FUN_004f5630
        jmp    L_4f12
L_4efd:
        mov    ecx, dword ptr [esi + 0xe0]
        cmp    dword ptr [ecx + 0x14], 5
        je    L_4f12
        mov    edx, dword ptr [ecx]
        push    0
        push    5
        call    dword ptr [edx + 4]
L_4f12:
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004fae10
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx + 0x14]
        sub    eax, 5
        je    L_4f55
        dec    eax
        jne    L_4f79
        mov    al, byte ptr [esi + 0x250]
        test    al, al
        jne    L_4f79
        mov    eax, dword ptr [esi + 0x254]
        test    eax, eax
        jne    L_4f79
        mov    edx, dword ptr [ecx]
        push    0
        push    5
        call    dword ptr [edx + 4]
        pop    esi
        ret    8
L_4f55:
        mov    al, byte ptr [esi + 0x250]
        test    al, al
        jne    L_4f79
        mov    eax, dword ptr [esi + 0x254]
        test    eax, eax
        jne    L_4f79
        mov    eax, dword ptr [ecx]
        push    0
        push    4
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
L_4f79:
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        lea    eax, [ecx + 0xc]
        xor    edx, 0x85739531
        mov    cl, byte ptr [edx + 0x16]
        test    cl, cl
        je    L_4fdd
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x50]
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        je    L_4fdd
        mov    edx, dword ptr [esi + 0x10]
        and    edx, 0xfffffeff
        or    edx, 0x80
        mov    byte ptr [esi + 0x250], 0
        mov    dword ptr [esi + 0x254], 0
        mov    dword ptr [esi + 0x10], edx
        pop    esi
        ret    4
L_4fdd:
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov    cl, byte ptr [eax + 0x50]
        test    cl, cl
        mov    ecx, dword ptr [esi + 0xe0]
        je    L_500c
        mov    edx, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, esi
        call    FUN_004dabf0
        pop    esi
        ret    4
L_500c:
        mov    eax, dword ptr [ecx]
        push    0
        push    4
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, esi
        call    FUN_004dabf0
        pop    esi
        ret    4
    }
}
