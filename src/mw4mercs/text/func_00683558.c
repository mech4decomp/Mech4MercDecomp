/*
 * FUN_00683558 (extent 0x683558-0x6836c0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_00683530(void);

__declspec(naked) void FUN_00683558(void)
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
        sub    esp, 0x14
        mov    eax, dword ptr [esp + 0x18]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [eax + 0x3f8]
        xor    ebx, ebx
        push    esi
        push    edi
        mov    dword ptr [esp + 0x20], ebx
        mov    dword ptr [esp + 0x10], ebx
        mov    dword ptr [esp + 0x14], ebx
        mov    dword ptr [esp + 0x18], ebx
        mov    dword ptr [esp + 0x1c], ebx
L_3587:
        test    ebp, ebp
        je    L_3633
        mov    esi, dword ptr [ebp]
        test    esi, esi
        mov    ebp, dword ptr [ebp + 4]
        je    L_3633
        mov    ecx, esi
        call    FUN_005f07c0
        test    eax, eax
        je    L_3587
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_3587
        mov    edx, dword ptr [esi + 0x78]
        lea    edi, [esi + 0x78]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        test    eax, eax
        je    L_3587
        xor    eax, eax
        mov    al, byte ptr [esi + 0x170]
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], eax
        call    FUN_005f07c0
        lea    ecx, [esp + 0x28]
        add    eax, 0x384
        push    ecx
        mov    ecx, eax
        call    FUN_00416b60
        mov    esi, eax
        test    esi, esi
        je    L_3587
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    esi, dword ptr [esi + 0x3c]
        mov    eax, dword ptr [eax + 0x20]
        lea    ecx, [esi - 2]
        cmp    ecx, 4
        ja    L_3587
        jmp    dword ptr [ecx*4 + 0x6836c0]
        add    dword ptr [esp + 0x10], eax
        jmp    L_3587
        add    dword ptr [esp + 0x14], eax
        jmp    L_3587
        add    dword ptr [esp + 0x18], eax
        jmp    L_3587
        add    dword ptr [esp + 0x1c], eax
        jmp    L_3587
        add    ebx, eax
        jmp    L_3587
L_3633:
        mov    dword ptr [esp + 0x20], ebx
        mov    ebx, dword ptr [esp + 0x2c]
        xor    edi, edi
L_363d:
        cmp    edi, 4
        jge    L_36aa
        xor    esi, esi
        mov    eax, 1
        xor    edx, edx
L_364b:
        lea    ecx, [eax*4]
        mov    ebp, dword ptr [esp + ecx + 0x10]
        cmp    ebp, dword ptr [esp + edx + 0x10]
        jle    L_3660
        mov    esi, eax
        mov    edx, ecx
L_3660:
        inc    eax
        cmp    eax, 5
        jl    L_364b
        cmp    esi, 4
        mov    eax, 6
        ja    L_3691
        jmp    dword ptr [esi*4 + 0x6836d4]
        mov    eax, 2
        jmp    L_3691
        mov    eax, 5
        jmp    L_3691
        mov    eax, 4
        jmp    L_3691
        mov    eax, 3
L_3691:
        push    eax
        push    ebx
        call    FUN_00683530
        add    esp, 8
        test    eax, eax
        jne    L_36b5
        mov    dword ptr [esp + esi*4 + 0x10], 0xffffffff
        inc    edi
        jmp    L_363d
L_36aa:
        push    6
        push    ebx
        call    FUN_00683530
        add    esp, 8
L_36b5:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x006836C0 (5 relocated pointers)
        __emit 0x08
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x2C
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x23
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x11
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x1A
        __emit 0x36
        __emit 0x68
        __emit 0x00
        // jump-table data @ 0x006836D4 (7 relocated pointers)
        __emit 0x77
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x7E
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x91
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x85
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x8C
        __emit 0x36
        __emit 0x68
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        // jump-table data @ 0x00683974 (0 relocated pointers)
    }
}
