/*
 * FUN_006f5391 (extent 0x6f5391-0x6f545a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0dc;
extern int    g_0076b294;
extern int    g_0076b2d0;

__declspec(naked) void FUN_006f5391(void)
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
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b294]
        add    esp, 4
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
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
        nop    
        mov    edx, dword ptr [esp + 4]
        push    esi
        xor    eax, eax
        test    edx, edx
        push    edi
        je    L_5430
        mov    cl, byte ptr [edx]
        xor    esi, esi
        test    cl, cl
        je    L_5430
L_5414:
        mov    edi, esi
        inc    esi
        cmp    edi, 0x10
        jge    L_5430
        mov    edi, eax
        shl    edi, 4
        add    edi, eax
        movsx    eax, cl
        mov    cl, byte ptr [edx + 1]
        add    eax, edi
        inc    edx
        test    cl, cl
        jne    L_5414
L_5430:
        pop    edi
        pop    esi
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        push    eax
        push    edx
        call    dword ptr [g_0076b0dc]
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    8
    }
}
