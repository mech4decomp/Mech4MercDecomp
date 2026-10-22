/*
 * FUN_004130f1 (extent 0x4130f1-0x41325e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412b60(void);

__declspec(naked) void FUN_004130f1(void)
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x1c]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x1c]
        mov    esi, edi
        mov    eax, ebp
L_3116:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_313e
        test    cl, cl
        je    L_313a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_313e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_3116
L_313a:
        xor    eax, eax
        jmp    L_3143
L_313e:
        sbb    eax, eax
        sbb    eax, -1
L_3143:
        test    eax, eax
        jne    L_314e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_314e:
        mov    esi, edi
        mov    eax, ebp
L_3152:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_317a
        test    cl, cl
        je    L_3176
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_317a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_3152
L_3176:
        xor    eax, eax
        jmp    L_317f
L_317a:
        sbb    eax, eax
        sbb    eax, -1
L_317f:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x1c]
        mov    esi, edi
        mov    eax, ebp
L_31b5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_31dd
        test    cl, cl
        je    L_31d9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_31dd
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_31b5
L_31d9:
        xor    eax, eax
        jmp    L_31e2
L_31dd:
        sbb    eax, eax
        sbb    eax, -1
L_31e2:
        test    eax, eax
        jne    L_31ed
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_31ed:
        mov    esi, edi
        mov    eax, ebp
L_31f1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_3219
        test    cl, cl
        je    L_3215
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_3219
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_31f1
L_3215:
        xor    eax, eax
        jmp    L_321e
L_3219:
        sbb    eax, eax
        sbb    eax, -1
L_321e:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        push    esi
        mov    esi, ecx
        call    FUN_00412b60
        test    byte ptr [esp + 8], 1
        je    L_3258
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3258:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
