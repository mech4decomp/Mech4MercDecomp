/*
 * FUN_00506e6d (extent 0x506e6d-0x506f6b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00502370(void);

__declspec(naked) void FUN_00506e6d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    bl, byte ptr [eax]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_00502370
        mov    ecx, dword ptr [esi + 0x10]
        add    esp, 0x14
        cmp    ecx, 6
        jne    L_6ecd
        test    bl, bl
        jne    L_6ecd
        mov    ax, word ptr [g_007db0ac]
        mov    cx, word ptr [g_007db0ae]
        mov    edx, dword ptr [esi]
        mov    word ptr [esp + 0x18], ax
        lea    eax, [esp + 0x18]
        push    eax
        mov    word ptr [esp + 0x1e], cx
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    al, 1
L_6ecd:
        pop    edi
        pop    esi
        pop    ebx
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ebx, ecx
        cmp    esi, dword ptr [ebx + 4]
        push    edi
        je    L_6f65
        xor    edi, edi
        cmp    esi, edi
        jbe    L_6f58
        mov    eax, dword ptr [ebx]
        cmp    eax, edi
        je    L_6f03
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6f03:
        lea    eax, [esi + esi*2]
        shl    eax, 2
        push    eax
        mov    dword ptr [ebx + 4], esi
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_6f4e
        lea    edx, [esi - 1]
        cmp    edx, edi
        jl    L_6f50
        lea    esi, [edx + 1]
        lea    ecx, [eax + 0xa]
        or    edx, 0xffffffff
L_6f29:
        mov    word ptr [ecx - 0xa], dx
        mov    word ptr [ecx - 8], di
        mov    word ptr [ecx - 6], dx
        mov    word ptr [ecx - 4], di
        mov    word ptr [ecx - 2], dx
        mov    word ptr [ecx], di
        add    ecx, 0xc
        dec    esi
        jne    L_6f29
        pop    edi
        pop    esi
        mov    dword ptr [ebx], eax
        pop    ebx
        ret    4
L_6f4e:
        xor    eax, eax
L_6f50:
        pop    edi
        pop    esi
        mov    dword ptr [ebx], eax
        pop    ebx
        ret    4
L_6f58:
        mov    ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx], edi
L_6f65:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
    }
}
