/*
 * FUN_0065b2ee (extent 0x65b2ee-0x65b483) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d040;
extern float  g_0076d070;
extern float  g_007748c8;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c9850(void);
extern void __cdecl FUN_005c98a0(void);
extern void __cdecl FUN_0065a840(void);
extern void __cdecl FUN_0065a910(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0065b2ee(void)
{
    __asm {
        nop    
        nop    
        xor    al, al
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
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esi + 4]
        mov    eax, dword ptr [edi + 0x170]
        cmp    byte ptr [eax + 0xdc], 1
        je    L_b33b
        push    0
        mov    dword ptr [esi + 0x14], 0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x18]
        mov    ecx, dword ptr [esi + 8]
        push    ecx
        push    edi
        call    FUN_0065a840
        add    esp, 8
        mov    byte ptr [edi + 0x614], 1
L_b33b:
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        sub    esp, 8
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 4]
        mov    eax, dword ptr [esi + 0x170]
        cmp    byte ptr [eax + 0xdc], 1
        je    L_b461
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx + 0x60]
        cmp    dword ptr [esi + 0x570], eax
        jne    L_b386
        fld    dword ptr [esi + 0x56c]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b386
        mov    eax, dword ptr [edi + 8]
        push    eax
        jmp    L_b3bc
L_b386:
        lea    ebx, [esi + 0x1c8]
        mov    ecx, ebx
        call    FUN_0041fd80
        cmp    dword ptr [edi + 0x14], eax
        je    L_b3c5
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        je    L_b3b8
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        jne    L_b3c5
L_b3b8:
        mov    edx, dword ptr [edi + 8]
        push    edx
L_b3bc:
        push    esi
        call    FUN_0065a840
        add    esp, 8
L_b3c5:
        lea    ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        mov    dword ptr [edi + 0x14], eax
        mov    eax, dword ptr [edi + 8]
        push    eax
        push    esi
        call    FUN_0065a910
        add    esp, 8
        sub    eax, 0
        pop    ebx
        je    L_b457
        dec    eax
        je    L_b402
        dec    eax
        jne    L_b461
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0076d040]
        fstp    dword ptr [edi + 0x18]
        pop    edi
        pop    esi
        add    esp, 8
        ret    
L_b402:
        mov    ecx, dword ptr [esi + 0x170]
        mov    edx, dword ptr [ecx + 0x30]
        and    edx, 0x80000007
        jns    L_b418
        dec    edx
        or    edx, 0xfffffff8
        inc    edx
L_b418:
        mov    dword ptr [esp + 8], edx
        fild    dword ptr [esp + 8]
        push    0
        fadd    dword ptr [g_007748c8]
        fadd    dword ptr [edi + 0x18]
        fstp    qword ptr [esp + 0xc]
        call    FUN_00707e70
        fcomp    qword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b461
        mov    ecx, esi
        call    FUN_005c98a0
        test    al, al
        jne    L_b461
        mov    ecx, esi
        call    FUN_005c9850
        pop    edi
        pop    esi
        add    esp, 8
        ret    
L_b457:
        push    0
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x18]
L_b461:
        pop    edi
        pop    esi
        add    esp, 8
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
        mov    al, 1
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
        mov    al, 1
        ret    
    }
}
