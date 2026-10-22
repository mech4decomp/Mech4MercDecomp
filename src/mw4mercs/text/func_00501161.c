/*
 * FUN_00501161 (extent 0x501161-0x501334) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005013f0(void);

__declspec(naked) void FUN_00501161(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [ecx + 0x10]
        cmp    eax, ecx
        jne    L_1187
        xor    eax, eax
        ret    8
L_1187:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x10]
        cmp    eax, ecx
        jne    L_11b6
        xor    eax, eax
        ret    8
L_11b6:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x10]
        mov    esi, edi
        mov    eax, ebp
L_11e6:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_120e
        test    cl, cl
        je    L_120a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_120e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_11e6
L_120a:
        xor    eax, eax
        jmp    L_1213
L_120e:
        sbb    eax, eax
        sbb    eax, -1
L_1213:
        test    eax, eax
        jne    L_121e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_121e:
        mov    esi, edi
        mov    eax, ebp
L_1222:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_124a
        test    cl, cl
        je    L_1246
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_124a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1222
L_1246:
        xor    eax, eax
        jmp    L_124f
L_124a:
        sbb    eax, eax
        sbb    eax, -1
L_124f:
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
        mov    edi, dword ptr [eax + 0x10]
        mov    esi, edi
        mov    eax, ebp
L_1285:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_12ad
        test    cl, cl
        je    L_12a9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_12ad
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1285
L_12a9:
        xor    eax, eax
        jmp    L_12b2
L_12ad:
        sbb    eax, eax
        sbb    eax, -1
L_12b2:
        test    eax, eax
        jne    L_12bd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_12bd:
        mov    esi, edi
        mov    eax, ebp
L_12c1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_12e9
        test    cl, cl
        je    L_12e5
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_12e9
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_12c1
L_12e5:
        xor    eax, eax
        jmp    L_12ee
L_12e9:
        sbb    eax, eax
        sbb    eax, -1
L_12ee:
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
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    0
        push    0xa
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x77634c
        mov    eax, esi
        pop    esi
        ret    8
    }
}
