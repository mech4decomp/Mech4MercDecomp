/*
 * FUN_0041e4a1 (extent 0x41e4a1-0x41e654) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c08;
extern int    g_007b9304;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0041e4a1(void)
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
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_e4c6:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_e4ee
        test    cl, cl
        je    L_e4ea
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_e4ee
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_e4c6
L_e4ea:
        xor    eax, eax
        jmp    L_e4f3
L_e4ee:
        sbb    eax, eax
        sbb    eax, -1
L_e4f3:
        test    eax, eax
        jne    L_e4fe
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_e4fe:
        mov    esi, edi
        mov    eax, ebp
L_e502:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_e52a
        test    cl, cl
        je    L_e526
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_e52a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_e502
L_e526:
        xor    eax, eax
        jmp    L_e52f
L_e52a:
        sbb    eax, eax
        sbb    eax, -1
L_e52f:
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
L_e565:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_e58d
        test    cl, cl
        je    L_e589
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_e58d
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_e565
L_e589:
        xor    eax, eax
        jmp    L_e592
L_e58d:
        sbb    eax, eax
        sbb    eax, -1
L_e592:
        test    eax, eax
        jne    L_e59d
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_e59d:
        mov    esi, edi
        mov    eax, ebp
L_e5a1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_e5c9
        test    cl, cl
        je    L_e5c5
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_e5c9
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_e5a1
L_e5c5:
        xor    eax, eax
        jmp    L_e5ce
L_e5c9:
        sbb    eax, eax
        sbb    eax, -1
L_e5ce:
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
        mov    eax, dword ptr [ecx + 0x14]
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
        push    0x76d75c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_e612
        int 3    
L_e612:
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_e649
        mov    ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76d79c
        push    0x12
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b9304], eax
        ret    
L_e649:
        mov    dword ptr [g_007b9304], 0
        ret    
    }
}
