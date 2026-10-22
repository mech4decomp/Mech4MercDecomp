/*
 * FUN_004f2fa5 (extent 0x4f2fa5-0x4f319d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004f2370(void);

__declspec(naked) void FUN_004f2fa5(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    cx, word ptr [eax + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    dx, word ptr [esi + 0x18]
        cmp    cx, dx
        jne    L_2ff5
        push    edi
        mov    di, word ptr [eax + 0x1a]
        cmp    di, word ptr [esi + 0x1a]
        pop    edi
        jne    L_2fd8
        xor    eax, eax
        pop    esi
        ret    8
L_2fd8:
        cmp    cx, dx
        jne    L_2ff5
        mov    ax, word ptr [eax + 0x1a]
        cmp    word ptr [esi + 0x1a], ax
        pop    esi
        sbb    eax, eax
        neg    eax
        neg    al
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
L_2ff5:
        xor    eax, eax
        cmp    cx, dx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    dx, word ptr [eax + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    cx, word ptr [esi]
        cmp    cx, dx
        jne    L_3054
        push    edi
        mov    di, word ptr [esi + 2]
        cmp    di, word ptr [eax + 0x1a]
        pop    edi
        jne    L_3037
        xor    eax, eax
        pop    esi
        ret    8
L_3037:
        cmp    cx, dx
        jne    L_3054
        mov    cx, word ptr [esi + 2]
        cmp    word ptr [eax + 0x1a], cx
        pop    esi
        sbb    eax, eax
        neg    eax
        neg    al
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
L_3054:
        xor    eax, eax
        cmp    cx, dx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov    esi, ecx
        cmp    ebx, dword ptr [esi + 4]
        push    edi
        mov    dword ptr [esp + 0x10], esi
        je    L_3195
        test    ebx, ebx
        mov    ecx, dword ptr [esi]
        jbe    L_313f
        test    ecx, ecx
        je    L_30ea
        mov    eax, dword ptr [ecx - 4]
        lea    edx, [ecx - 4]
        lea    edi, [eax + eax*4]
        lea    edi, [eax + edi*2]
        dec    eax
        mov    dword ptr [esp + 0x18], edx
        lea    edi, [ecx + edi*4]
        js    L_30e1
        lea    esi, [edi + 0x10]
        lea    ebp, [eax + 1]
L_30b2:
        sub    esi, 0x2c
        lea    ecx, [esi + 8]
        sub    edi, 0x2c
        call    FUN_00417980
        mov    ecx, esi
        call    FUN_00417980
        lea    ecx, [esi - 8]
        call    FUN_00417980
        mov    ecx, edi
        call    FUN_00417980
        dec    ebp
        jne    L_30b2
        mov    edx, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x10]
L_30e1:
        push    edx
        call    FUN_004084e0
        add    esp, 4
L_30ea:
        lea    eax, [ebx + ebx*4]
        lea    ecx, [ebx + eax*2]
        lea    edx, [ecx*4 + 4]
        push    edx
        mov    dword ptr [esi + 4], ebx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3133
        lea    edi, [eax + 4]
        mov    dword ptr [eax], ebx
        lea    eax, [ebx - 1]
        test    eax, eax
        mov    esi, edi
        jl    L_3125
        lea    ebx, [eax + 1]
L_3118:
        mov    ecx, esi
        call    FUN_004f2370
        add    esi, 0x2c
        dec    ebx
        jne    L_3118
L_3125:
        mov    esi, dword ptr [esp + 0x10]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
L_3133:
        xor    edi, edi
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
L_313f:
        test    ecx, ecx
        je    L_318f
        mov    eax, dword ptr [ecx - 4]
        lea    ebp, [ecx - 4]
        lea    edx, [eax + eax*4]
        lea    edx, [eax + edx*2]
        dec    eax
        lea    edi, [ecx + edx*4]
        js    L_3186
        lea    esi, [edi + 0x10]
        lea    ebx, [eax + 1]
L_315b:
        sub    esi, 0x2c
        lea    ecx, [esi + 8]
        sub    edi, 0x2c
        call    FUN_00417980
        mov    ecx, esi
        call    FUN_00417980
        lea    ecx, [esi - 8]
        call    FUN_00417980
        mov    ecx, edi
        call    FUN_00417980
        dec    ebx
        jne    L_315b
        mov    esi, dword ptr [esp + 0x10]
L_3186:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_318f:
        mov    dword ptr [esi], 0
L_3195:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
