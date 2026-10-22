/*
 * FUN_004f9017 (extent 0x4f9017-0x4f9253) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dc6e0;
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004af200(void);
extern void __cdecl FUN_004c3d80(void);
extern void __cdecl FUN_004c6920(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_004f9017(void)
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
        sub    esp, 0x44
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x4c]
        mov    dx, word ptr [ecx]
        mov    cx, word ptr [ecx + 2]
        lea    eax, [esi + 0x17a]
        mov    word ptr [eax], dx
        mov    dx, word ptr [esi + 0x17e]
        cmp    dx, word ptr [g_007db0ac]
        push    edi
        mov    word ptr [eax + 2], cx
        jne    L_905f
        mov    cx, word ptr [esi + 0x180]
        cmp    cx, word ptr [g_007db0ae]
        je    L_90b1
L_905f:
        push    1
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_004d1f80
        lea    edi, [esi + 0x1d4]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_9083
        mov    ecx, edi
        call    FUN_0041fcb0
L_9083:
        lea    edx, [esp + 8]
        push    0
        push    edx
        call    FUN_004af200
        add    esp, 4
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        call    FUN_004c6920
        add    esp, 0xc
        push    eax
        mov    ecx, edi
        call    FUN_0041fcd0
        lea    ecx, [esp + 8]
        call    FUN_004d21c0
L_90b1:
        mov    al, byte ptr [esi + 0x169]
        test    al, al
        jne    L_90da
        mov    ecx, dword ptr [g_007dc6e0]
        mov    edx, dword ptr [ecx + 0x4c]
        mov    edi, dword ptr [edx + 0x24]
        lea    ecx, [esi + 0x1d4]
        call    FUN_0041fd80
        push    eax
        mov    ecx, edi
        call    FUN_004c3d80
L_90da:
        pop    edi
        pop    esi
        add    esp, 0x44
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
        mov    eax, dword ptr [esp + 4]
        mov    dx, word ptr [eax + 2]
        sub    esp, 0x44
        push    ebx
        mov    ebx, ecx
        mov    cx, word ptr [eax]
        push    esi
        lea    esi, [ebx + 0x17e]
        mov    ax, cx
        cmp    ax, word ptr [g_007db0ac]
        mov    word ptr [esi], cx
        mov    word ptr [esi + 2], dx
        jne    L_9127
        mov    cx, dx
        cmp    cx, word ptr [g_007db0ae]
        je    L_9182
L_9127:
        push    edi
        lea    edi, [ebx + 0x1dc]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_9140
        mov    ecx, edi
        call    FUN_0041fcb0
L_9140:
        mov    ecx, edi
        call    FUN_0041fcb0
        push    1
        push    esi
        lea    ecx, [esp + 0x14]
        call    FUN_004d1f80
        lea    edx, [esp + 0xc]
        push    0
        push    edx
        call    FUN_004af200
        add    esp, 4
        push    eax
        lea    eax, [esp + 0x14]
        push    eax
        call    FUN_004c6920
        add    esp, 0xc
        push    eax
        mov    ecx, edi
        call    FUN_0041fcd0
        lea    ecx, [esp + 0xc]
        call    FUN_004d21c0
        pop    edi
L_9182:
        mov    al, byte ptr [ebx + 0x169]
        test    al, al
        je    L_91ab
        mov    ecx, dword ptr [g_007dc6e0]
        mov    edx, dword ptr [ecx + 0x4c]
        mov    esi, dword ptr [edx + 0x24]
        lea    ecx, [ebx + 0x1dc]
        call    FUN_0041fd80
        push    eax
        mov    ecx, esi
        call    FUN_004c3d80
L_91ab:
        pop    esi
        pop    ebx
        add    esp, 0x44
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
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        push    edi
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0xc]
        xor    eax, 0x85739531
        mov    dl, byte ptr [eax + 0x16]
        test    dl, dl
        mov    dword ptr [esp + 4], ecx
        je    L_9232
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        lea    esi, [ecx + 0x19c]
        push    ebx
        mov    ecx, esi
        call    FUN_00416b60
        mov    ebp, dword ptr [esp + 0x1c]
        push    ebp
        mov    ecx, esi
        mov    edi, eax
        call    FUN_00416b60
        test    edi, edi
        je    L_921d
        mov    cl, byte ptr [ebx]
        cmp    cl, byte ptr [ebp]
        jne    L_921a
        mov    dx, word ptr [ebx + 2]
        cmp    dx, word ptr [ebp + 2]
        je    L_921d
L_921a:
        inc    dword ptr [edi + 0x14]
L_921d:
        test    eax, eax
        pop    esi
        pop    ebp
        pop    ebx
        je    L_9227
        inc    dword ptr [eax + 0x18]
L_9227:
        mov    eax, dword ptr [esp + 4]
        mov    byte ptr [eax + 0x1b0], 1
L_9232:
        pop    edi
        pop    ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        ret    8
    }
}
