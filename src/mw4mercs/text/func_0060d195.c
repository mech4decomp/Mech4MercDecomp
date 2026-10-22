/*
 * FUN_0060d195 (extent 0x60d195-0x60d479) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_0052b230(void);
extern void __cdecl FUN_0060d3d0(void);

__declspec(naked) void FUN_0060d195(void)
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
        sub    esp, 0x50
        mov    eax, dword ptr [g_007dab44]
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [eax]
        mov    ebx, ecx
        xor    esi, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esi + 0x4c]
        xor    ecx, 0x85739531
        push    edi
        mov    byte ptr [esp + 0x12], 0
        mov    byte ptr [esp + 0x13], 0
        je    L_d1d0
        mov    byte ptr [esp + 0x12], 1
L_d1d0:
        mov    edx, dword ptr [esi + 0x58]
        xor    edx, 0x85739531
        je    L_d1e0
        mov    byte ptr [esp + 0x13], 1
L_d1e0:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d20c
        mov    ecx, dword ptr [esi + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x8c]
        add    edx, 0x10
        push    edx
        mov    ecx, eax
        call    FUN_0052b230
        mov    ebp, eax
        jmp    L_d20e
L_d20c:
        xor    ebp, ebp
L_d20e:
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_d2b4
L_d21f:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_d22d
        cmp    dword ptr [esi + 0x20], 1
        je    L_d2a3
L_d22d:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_d23b
        cmp    dword ptr [esi + 0x20], 2
        je    L_d2a3
L_d23b:
        lea    ecx, [esp + 0x1c]
        call    FUN_004d1f10
        mov    ax, word ptr [esi + 0x10]
        mov    cx, word ptr [esi + 0x12]
        lea    edx, [esp + 0x14]
        mov    word ptr [esp + 0x14], ax
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        mov    word ptr [esp + 0x1e], cx
        call    FUN_004da8d0
        mov    cx, word ptr [esi + 0x10]
        mov    eax, dword ptr [esp + 0x38]
        mov    dx, word ptr [esi + 0x12]
        add    esp, 8
        mov    word ptr [esp + 0x18], cx
        mov    ecx, dword ptr [eax + 0x30]
        push    ecx
        mov    word ptr [esp + 0x1e], dx
        lea    edx, [esp + 0x60]
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, ebx
        call    FUN_0060d3d0
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [eax + 0x1c], 0xffffffff
        call    FUN_004d21c0
L_d2a3:
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_d21f
L_d2b4:
        mov    ecx, dword ptr [g_007dab44]
        mov    edi, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        push    0x14
        xor    edi, esi
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d2f8
        mov    edx, dword ptr [edi + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x88]
        add    eax, 0x10
        push    eax
        mov    ecx, esi
        call    FUN_00416bc0
        mov    dword ptr [esi], 0x779e88
        mov    edi, esi
        jmp    L_d2fa
L_d2f8:
        xor    edi, edi
L_d2fa:
        mov    ecx, edi
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_d3a0
L_d30b:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_d319
        cmp    dword ptr [esi + 0x20], 1
        je    L_d38f
L_d319:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_d327
        cmp    dword ptr [esi + 0x20], 2
        je    L_d38f
L_d327:
        lea    ecx, [esp + 0x1c]
        call    FUN_004d1f10
        mov    cx, word ptr [esi + 0x10]
        mov    dx, word ptr [esi + 0x12]
        lea    eax, [esp + 0x18]
        mov    word ptr [esp + 0x18], cx
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    word ptr [esp + 0x22], dx
        call    FUN_004da8d0
        mov    dx, word ptr [esi + 0x10]
        mov    ecx, dword ptr [esp + 0x38]
        mov    ax, word ptr [esi + 0x12]
        add    esp, 8
        mov    word ptr [esp + 0x14], dx
        mov    edx, dword ptr [ecx + 0x30]
        mov    word ptr [esp + 0x16], ax
        push    edx
        lea    eax, [esp + 0x60]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, ebx
        call    FUN_0060d3d0
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [eax + 0x1c], 0xffffffff
        call    FUN_004d21c0
L_d38f:
        mov    ecx, edi
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_d30b
L_d3a0:
        test    ebp, ebp
        je    L_d3ad
        mov    edx, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [edx]
L_d3ad:
        test    edi, edi
        je    L_d3b9
        mov    eax, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [eax]
L_d3b9:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x50
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
        lea    ebp, [ecx + 0x18]
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, ebp
        call    FUN_00416b60
        test    eax, eax
        je    L_d3f8
        mov    ecx, dword ptr [eax + 0x1c]
        cmp    ecx, -1
        je    L_d475
        inc    ecx
        mov    dword ptr [eax + 0x1c], ecx
        pop    ebp
        ret    0xc
L_d3f8:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d463
        mov    ecx, dword ptr [g_007b8c10]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    FUN_00415180
        mov    eax, dword ptr [esp + 0x10]
        mov    dx, word ptr [eax]
        mov    ax, word ptr [eax + 2]
        mov    word ptr [esi + 0x12], ax
        mov    eax, dword ptr [esp + 0x14]
        mov    cx, word ptr [eax]
        mov    word ptr [esi + 0x10], dx
        mov    dx, word ptr [eax + 2]
        mov    word ptr [esi + 0x14], cx
        mov    word ptr [esi + 0x16], dx
        mov    dword ptr [esi + 0x18], edi
        mov    dword ptr [esi + 8], 0
        mov    dword ptr [esi + 0xc], 0
        mov    dword ptr [esi], 0x78c0ac
        mov    dword ptr [esi + 0x1c], 1
        pop    edi
        jmp    L_d465
L_d463:
        xor    esi, esi
L_d465:
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        mov    ecx, ebp
        call    FUN_00416a90
        mov    eax, esi
        pop    esi
L_d475:
        pop    ebp
        ret    0xc
    }
}
