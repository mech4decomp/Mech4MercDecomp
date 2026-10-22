/*
 * FUN_00430e7a (extent 0x430e7a-0x43109a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041e110(void);
extern void __cdecl FUN_00430f10(void);

__declspec(naked) void FUN_00430e7a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        push    edi
        mov    edi, ecx
        mov    ebp, dword ptr [edi + 0xac]
        test    ebp, ebp
        je    L_0ed1
        mov    eax, dword ptr [edi + 0xa0]
        imul    eax, dword ptr [edi + 0x9c]
        test    eax, eax
        jle    L_0ebe
        push    ebx
        push    esi
        mov    esi, ebp
        mov    ebx, eax
L_0ea5:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov    dword ptr [esi], 0
        add    esp, 4
        add    esi, 4
        dec    ebx
        jne    L_0ea5
        pop    esi
        pop    ebx
L_0ebe:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0xac], 0
L_0ed1:
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x9c], ecx
        push    eax
        lea    ecx, [edi + 0xa4]
        mov    dword ptr [edi + 0xa0], edx
        call    FUN_00412780
        mov    ecx, edi
        call    FUN_00430f10
        pop    edi
        pop    ebp
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x40
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0xa4]
        push    0
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_0041de80
        mov    edi, dword ptr [esi + 0x9c]
        mov    eax, dword ptr [esi + 0xa0]
        mov    ebx, edi
        imul    ebx, eax
        mov    ebp, ebx
        shl    ebp, 0x10
        push    ebp
        call    FUN_004084d0
        add    esp, 4
        push    ebp
        push    eax
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x20], eax
        call    FUN_0041e110
        lea    ecx, [ebx*4]
        push    ecx
        call    FUN_004084d0
        mov    dword ptr [esi + 0xac], eax
        mov    eax, dword ptr [esi + 0xa0]
        add    esp, 4
        xor    ebp, ebp
        test    eax, eax
        jle    L_0fb2
L_0f7b:
        xor    ebx, ebx
        test    edi, edi
        jle    L_0fa7
L_0f81:
        push    0x2000
        call    FUN_004084d0
        imul    edi, ebp
        mov    edx, dword ptr [esi + 0xac]
        add    edi, ebx
        add    esp, 4
        mov    dword ptr [edx + edi*4], eax
        mov    edi, dword ptr [esi + 0x9c]
        inc    ebx
        cmp    ebx, edi
        jl    L_0f81
L_0fa7:
        mov    eax, dword ptr [esi + 0xa0]
        inc    ebp
        cmp    ebp, eax
        jl    L_0f7b
L_0fb2:
        mov    ecx, dword ptr [esi + 0xa0]
        test    ecx, ecx
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], 0
        jle    L_107a
L_0fcc:
        xor    ebp, ebp
L_0fce:
        mov    ecx, dword ptr [esi + 0x9c]
        xor    edi, edi
        test    ecx, ecx
        jle    L_1054
L_0fda:
        xor    edx, edx
L_0fdc:
        mov    ecx, dword ptr [esi + 0x9c]
        imul    ecx, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [esi + 0xac]
        add    ecx, edi
        mov    ecx, dword ptr [ebx + ecx*4]
        add    ecx, ebp
        mov    byte ptr [ecx + edx], 0
        mov    ecx, 0x80
        mov    dword ptr [esp + 0x14], 8
L_1005:
        mov    bl, byte ptr [eax]
        inc    eax
        cmp    bl, 0x80
        mov    dword ptr [esp + 0x1c], eax
        jbe    L_1036
        mov    eax, dword ptr [esi + 0x9c]
        imul    eax, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [esi + 0xac]
        add    eax, edi
        mov    eax, dword ptr [ebx + eax*4]
        add    eax, ebp
        mov    bl, byte ptr [eax + edx]
        add    eax, edx
        or    bl, cl
        mov    byte ptr [eax], bl
        mov    eax, dword ptr [esp + 0x1c]
L_1036:
        mov    ebx, dword ptr [esp + 0x14]
        sar    ecx, 1
        dec    ebx
        mov    dword ptr [esp + 0x14], ebx
        jne    L_1005
        inc    edx
        cmp    edx, 0x20
        jl    L_0fdc
        mov    ecx, dword ptr [esi + 0x9c]
        inc    edi
        cmp    edi, ecx
        jl    L_0fda
L_1054:
        add    ebp, 0x20
        cmp    ebp, 0x2000
        jl    L_0fce
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esi + 0xa0]
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [esp + 0x10], ecx
        jl    L_0fcc
L_107a:
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        lea    ecx, [esp + 0x20]
        call    FUN_0041dec0
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x40
        ret    
    }
}
