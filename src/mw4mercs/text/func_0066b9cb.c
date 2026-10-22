/*
 * FUN_0066b9cb (extent 0x66b9cb-0x66bb95) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b2b0;
extern int    g_0076b2d8;
extern int    g_0076b2dc;
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0066afa0(void);
extern void __cdecl FUN_0066b130(void);
extern void __cdecl FUN_0066b880(void);
extern void __cdecl FUN_0066bd70(void);
extern void __cdecl FUN_0066bdd0(void);
extern void __cdecl FUN_00767d20(void);

__declspec(naked) void FUN_0066b9cb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    ebx
        push    ecx
        push    ebp
        mov    ecx, edi
        call    FUN_0066b880
        push    1
        lea    edx, [esp + 0x24]
        push    edx
        push    0x796e70
        mov    ecx, ebp
        call    FUN_00411bf0
        mov    esi, dword ptr [ebx]
        mov    ecx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [edi + 0x10]
        mov    eax, dword ptr [eax + 0x34]
        lea    edx, [esi + esi*2]
        push    ecx
        lea    ecx, [eax + edx*8]
        mov    dword ptr [edi + 0x40], esi
        mov    dword ptr [esp + 0x20], eax
        call    FUN_0066bd70
        push    1
        lea    eax, [esp + 0x24]
        push    eax
        inc    esi
        push    0x796e60
        mov    ecx, ebp
        mov    dword ptr [ebx], esi
        call    FUN_00411bf0
        mov    ecx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
        lea    edx, [esi + esi*2]
        push    ecx
        lea    ecx, [eax + edx*8]
        mov    dword ptr [edi + 0x44], esi
        call    FUN_0066bd70
        inc    esi
        pop    edi
        mov    dword ptr [ebx], esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    0x796e48
        mov    ecx, ebx
        call    FUN_00767d20
        mov    eax, dword ptr [eax + 4]
        mov    edi, dword ptr [esi + 0x10]
        push    eax
        mov    ecx, edi
        call    FUN_0066afa0
        mov    ebp, eax
        push    ebp
        mov    ecx, edi
        call    FUN_0066b130
        mov    ecx, dword ptr [edi + 0x30]
        mov    edx, dword ptr [esp + 0x18]
        mov    esi, eax
        mov    dword ptr [ecx + edx*4], esi
        push    0x796eac
        mov    ecx, ebx
        mov    dword ptr [esi + 4], ebp
        call    FUN_00767d20
        mov    ebp, dword ptr [eax + 4]
        push    5
        push    0x796ea4
        push    ebp
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        test    eax, eax
        jne    L_bad9
        mov    dword ptr [esi + 0x10], eax
        lea    eax, [esi + 0xc]
        push    eax
        push    0x796e98
        push    ebp
        call    dword ptr [g_0076b2dc]
        add    esp, 0xc
        jmp    L_baed
L_bad9:
        push    ebp
        mov    dword ptr [esi + 0xc], 0xffffffff
        call    dword ptr [g_0076b2d8]
        fstp    dword ptr [esi + 0x10]
        add    esp, 4
L_baed:
        mov    eax, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esi]
        push    eax
        push    ebx
        push    edi
        mov    ecx, esi
        call    dword ptr [edx]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [ecx]
        mov    ebx, dword ptr [ebx + 4]
        test    ebx, ebx
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esi + 0x18], ebp
        mov    dword ptr [esi + 0x14], 0
        je    L_bb85
L_bb15:
        lea    eax, [ebx + 8]
        push    0x796e90
        push    eax
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        jne    L_bb50
        mov    ebp, dword ptr [esi + 0x14]
        mov    edx, dword ptr [ebx + 4]
        mov    eax, dword ptr [esp + 0x14]
        add    eax, ebp
        push    edx
        mov    edx, dword ptr [edi + 0x34]
        lea    ecx, [eax + eax*2]
        lea    ecx, [edx + ecx*8]
        call    FUN_0066bd70
        inc    ebp
        mov    dword ptr [esi + 0x14], ebp
        mov    ebp, dword ptr [esp + 0x14]
        jmp    L_bb7f
L_bb50:
        lea    eax, [ebx + 8]
        push    0x796e84
        push    eax
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        jne    L_bb7f
        mov    eax, dword ptr [ebx + 4]
        mov    ecx, dword ptr [esi + 0x14]
        mov    edx, dword ptr [edi + 0x34]
        push    eax
        mov    eax, ebp
        add    eax, ecx
        lea    ecx, [eax + eax*2]
        lea    ecx, [edx + ecx*8]
        call    FUN_0066bdd0
L_bb7f:
        mov    ebx, dword ptr [ebx]
        test    ebx, ebx
        jne    L_bb15
L_bb85:
        add    ebp, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esp + 0x1c]
        pop    edi
        pop    esi
        mov    dword ptr [eax], ebp
        pop    ebp
        pop    ebx
        ret    0x10
    }
}
