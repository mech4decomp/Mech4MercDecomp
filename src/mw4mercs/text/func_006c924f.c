/*
 * FUN_006c924f (extent 0x6c924f-0x6c9429) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006c9330(void);
extern void __cdecl FUN_006c93b0(void);
extern void __cdecl FUN_006c9430(void);

__declspec(naked) void FUN_006c924f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [ecx + 0xc]
        imul    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        add    eax, ecx
        mov    ecx, dword ptr [esp + 0xc]
        lea    eax, [eax + edx*4]
        mov    edx, ecx
        shr    edx, 0x18
        mov    byte ptr [eax + 3], dl
        mov    edx, ecx
        shr    edx, 0x10
        mov    byte ptr [eax + 2], dl
        mov    edx, ecx
        shr    edx, 8
        mov    byte ptr [eax + 1], dl
        mov    byte ptr [eax], cl
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
        mov    eax, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [ecx + 0xc]
        imul    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        add    eax, ecx
        mov    cl, byte ptr [esp + 0xc]
        lea    eax, [eax + edx*4]
        mov    dl, byte ptr [esp + 0x10]
        mov    byte ptr [eax + 3], cl
        mov    cl, byte ptr [esp + 0x14]
        mov    byte ptr [eax + 2], dl
        mov    dl, byte ptr [esp + 0x18]
        mov    byte ptr [eax + 1], cl
        mov    byte ptr [eax], dl
        ret    0x18
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
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 0x10]
        cmp    edx, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebx, 1
        jbe    L_92f5
        mov    edi, dword ptr [esp + 0x1c]
        mov    esi, edx
        mov    edx, eax
        mov    eax, esi
        mov    esi, dword ptr [esp + 0x14]
        jmp    L_92fd
L_92f5:
        mov    esi, dword ptr [esp + 0x1c]
        mov    edi, dword ptr [esp + 0x14]
L_92fd:
        sub    esi, edi
        sub    eax, edx
        test    esi, esi
        jg    L_930a
        neg    esi
        or    ebx, 0xffffffff
L_930a:
        cmp    esi, eax
        mov    ebp, dword ptr [esp + 0x24]
        push    ebp
        push    ebx
        push    eax
        push    esi
        push    edx
        push    edi
        jle    L_9324
        call    FUN_006c9330
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x14
L_9324:
        call    FUN_006c93b0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x14
        sub    esp, 8
        mov    eax, dword ptr [esp + 0x18]
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 0x20]
        push    edi
        lea    edi, [eax*4]
        lea    edx, [esi*4]
        mov    eax, edi
        sub    eax, edx
        mov    dword ptr [esp + 0x28], eax
        mov    eax, dword ptr [esp + 0x30]
        push    eax
        push    ebp
        mov    dword ptr [esp + 0x18], edi
        push    ebx
        mov    dword ptr [esp + 0x20], ecx
        sub    edi, esi
        call    FUN_006c9430
        mov    ecx, esi
        dec    esi
        test    ecx, ecx
        je    L_93a5
        inc    esi
L_937b:
        test    edi, edi
        jl    L_9386
        mov    eax, dword ptr [esp + 0x28]
        inc    ebp
        jmp    L_938a
L_9386:
        mov    eax, dword ptr [esp + 0x10]
L_938a:
        mov    edx, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        add    ebx, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    ebp
        push    ebx
        add    edi, eax
        call    FUN_006c9430
        dec    esi
        jne    L_937b
L_93a5:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0x18
        nop    
        push    ecx
        mov    eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        mov    esi, dword ptr [esp + 0x20]
        push    edi
        lea    edi, [eax*4]
        mov    eax, dword ptr [esp + 0x2c]
        lea    edx, [esi*4]
        mov    ebx, edi
        sub    ebx, edx
        mov    edx, dword ptr [esp + 0x1c]
        push    eax
        push    edx
        mov    dword ptr [esp + 0x28], edi
        push    ebp
        mov    dword ptr [esp + 0x1c], ecx
        sub    edi, esi
        call    FUN_006c9430
        mov    eax, esi
        dec    esi
        test    eax, eax
        je    L_9421
        inc    esi
L_93f5:
        test    edi, edi
        jl    L_9401
        add    ebp, dword ptr [esp + 0x28]
        add    edi, ebx
        jmp    L_9405
L_9401:
        add    edi, dword ptr [esp + 0x20]
L_9405:
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        inc    eax
        push    eax
        push    ebp
        mov    dword ptr [esp + 0x28], eax
        call    FUN_006c9430
        dec    esi
        jne    L_93f5
L_9421:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    0x18
    }
}
