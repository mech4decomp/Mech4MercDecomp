/*
 * FUN_004ed3ce (extent 0x4ed3ce-0x4ed54b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc140;
extern int    g_007dc7f4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004ed3ce(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_d3e6:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_d40e
        test    cl, cl
        je    L_d40a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_d40e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_d3e6
L_d40a:
        xor    eax, eax
        jmp    L_d413
L_d40e:
        sbb    eax, eax
        sbb    eax, -1
L_d413:
        test    eax, eax
        jne    L_d41e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_d41e:
        mov    esi, edi
        mov    eax, ebp
L_d422:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_d44a
        test    cl, cl
        je    L_d446
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_d44a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_d422
L_d446:
        xor    eax, eax
        jmp    L_d44f
L_d44a:
        sbb    eax, eax
        sbb    eax, -1
L_d44f:
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
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_d485:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_d4ad
        test    cl, cl
        je    L_d4a9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_d4ad
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_d485
L_d4a9:
        xor    eax, eax
        jmp    L_d4b2
L_d4ad:
        sbb    eax, eax
        sbb    eax, -1
L_d4b2:
        test    eax, eax
        jne    L_d4bd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_d4bd:
        mov    esi, edi
        mov    eax, ebp
L_d4c1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_d4e9
        test    cl, cl
        je    L_d4e5
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_d4e9
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_d4c1
L_d4e5:
        xor    eax, eax
        jmp    L_d4ee
L_d4e9:
        sbb    eax, eax
        sbb    eax, -1
L_d4ee:
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d540
        mov    ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x774910
        push    0x214
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc7f4], eax
        ret    
L_d540:
        mov    dword ptr [g_007dc7f4], 0
        ret    
    }
}
