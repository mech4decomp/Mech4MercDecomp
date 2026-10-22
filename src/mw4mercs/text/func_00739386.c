/*
 * FUN_00739386 (extent 0x739386-0x739564) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0e0;
extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_0076b1d4;
extern void __cdecl FUN_00739570(void);

__declspec(naked) void FUN_00739386(void)
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
        push    ecx
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, ebp
        and    eax, 0xff
        xor    edx, edx
        div    dword ptr [esi + 0x18]
        push    edi
        lea    ebx, [esi + 0x30]
        push    ebx
        mov    dword ptr [esp + 0x14], 0x80004005
        mov    edi, edx
        call    dword ptr [g_0076b110]
        mov    esi, dword ptr [esi + 4]
        test    esi, esi
        je    L_9403
        shl    edi, 5
        mov    eax, dword ptr [edi + esi + 0x1c]
        test    eax, eax
        je    L_9403
L_93cf:
        cmp    dword ptr [eax], ebp
        je    L_93ed
        mov    eax, dword ptr [eax + 0x1c]
        test    eax, eax
        jne    L_93cf
        push    ebx
        call    dword ptr [g_0076b100]
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    0x10
L_93ed:
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [eax + 0x10], ecx
        mov    dword ptr [eax + 0x14], edx
        mov    dword ptr [esp + 0x10], 0
L_9403:
        push    ebx
        call    dword ptr [g_0076b100]
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    0x10
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
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        mov    eax, ebp
        and    eax, 0xff
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        xor    edx, edx
        div    dword ptr [edi + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        mov    ebx, 0x80004005
        mov    esi, edx
        jne    L_9450
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ebx
        pop    ebx
        ret    0xc
L_9450:
        lea    eax, [edi + 0x30]
        push    eax
        mov    dword ptr [esp + 0x18], eax
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [edi + 4]
        test    eax, eax
        je    L_94d2
        shl    esi, 5
        mov    esi, dword ptr [esi + eax + 0x1c]
        test    esi, esi
        je    L_94d2
L_9470:
        cmp    dword ptr [esi], ebp
        je    L_948f
        mov    esi, dword ptr [esi + 0x1c]
        test    esi, esi
        jne    L_9470
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ebx
        pop    ebx
        ret    0xc
L_948f:
        call    dword ptr [g_0076b0e0]
        mov    ecx, dword ptr [esi + 8]
        xor    ebx, ebx
        cmp    ecx, ebx
        je    L_94c9
        mov    ecx, dword ptr [esi + 0xc]
        cmp    eax, ecx
        jb    L_94a9
        sub    eax, ecx
        jmp    L_94ac
L_94a9:
        sub    eax, ecx
        dec    eax
L_94ac:
        mov    ecx, dword ptr [edi + 0x18]
        lea    ecx, [ecx + ecx*4]
        lea    ecx, [ecx + ecx*4]
        lea    ecx, [ecx + ecx*4]
        shl    ecx, 5
        cmp    eax, ecx
        jbe    L_94c9
        mov    dword ptr [esi + 8], ebx
        mov    dword ptr [esi + 4], 0xffffffff
L_94c9:
        mov    edx, dword ptr [esi + 4]
        mov    eax, dword ptr [esp + 0x1c]
        mov    dword ptr [eax], edx
L_94d2:
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ebx
        pop    ebx
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
        mov    ecx, dword ptr [esp + 4]
        call    FUN_00739570
        push    0
        call    dword ptr [g_0076b1d4]
        xor    eax, eax
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_951b
        ret    8
L_951b:
        mov    edx, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 0x1c]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        xor    esi, esi
        test    edx, edx
        mov    byte ptr [edi], 0
        jbe    L_955e
L_9531:
        test    eax, eax
        jne    L_955e
        mov    ebp, dword ptr [ecx + 0x1c]
        inc    ebp
        mov    eax, ebp
        cmp    eax, edx
        mov    dword ptr [ecx + 0x1c], ebp
        jb    L_954c
        mov    dword ptr [ecx + 0x1c], 0
        mov    byte ptr [edi], 1
L_954c:
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ebp, dword ptr [ecx + 4]
        shl    eax, 5
        mov    eax, dword ptr [eax + ebp + 0x1c]
        inc    esi
        cmp    esi, edx
        jb    L_9531
L_955e:
        pop    edi
        pop    esi
        pop    ebp
        ret    8
    }
}
