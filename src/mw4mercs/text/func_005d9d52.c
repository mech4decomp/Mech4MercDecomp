/*
 * FUN_005d9d52 (extent 0x5d9d52-0x5d9e31) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0080da90;
extern int    g_0080da94;
extern void __cdecl FUN_005d97c0(void);
extern void __cdecl FUN_005d97f0(void);
extern void __cdecl FUN_00676960(void);
extern void __cdecl FUN_006867a0(void);
extern void __cdecl FUN_006910a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005d9d52(void)
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor    ebp, ebp
        push    ebp
        mov    ebx, ecx
        call    FUN_00707e70
        mov    ecx, dword ptr [g_0080da94]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    FUN_00676960
        push    ebp
        call    FUN_00707e70
        mov    ecx, dword ptr [g_0080da90]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    FUN_00676960
        mov    dword ptr [esp + 0x10], ebp
L_9d9b:
        mov    al, byte ptr [ebx + 0x14]
        test    al, al
        jne    L_9df4
        mov    esi, dword ptr [ebx + 0x10]
        cmp    esi, ebp
        je    L_9de6
        mov    eax, dword ptr [esi + 0x20]
        mov    edi, eax
        cmp    edi, ebp
        mov    dword ptr [ebx + 0x10], eax
        mov    dword ptr [esi + 0x24], ebp
        mov    dword ptr [esi + 0x20], ebp
        je    L_9dbe
        mov    dword ptr [edi + 0x24], ebp
L_9dbe:
        mov    ecx, esi
        call    FUN_005d97c0
        mov    ecx, dword ptr [esi + 0x10]
        cmp    ecx, ebp
        mov    byte ptr [esi + 0x1d], 0
        je    L_9e00
        mov    edx, dword ptr [esi + 0x18]
        push    edx
        call    FUN_006867a0
L_9dd9:
        mov    byte ptr [esi + 0xc], 1
L_9ddd:
        mov    ecx, esi
        call    FUN_005d97f0
        xor    ebp, ebp
L_9de6:
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 2
        mov    dword ptr [esp + 0x10], eax
        jl    L_9d9b
L_9df4:
        pop    edi
        pop    esi
        pop    ebp
        mov    byte ptr [ebx + 0x14], 0
        xor    al, al
        pop    ebx
        pop    ecx
        ret    
L_9e00:
        mov    ebp, dword ptr [esi + 0x14]
        test    ebp, ebp
        je    L_9ddd
        mov    ecx, ebp
        call    FUN_006910a0
        mov    al, byte ptr [ebp + 0x25]
        test    al, al
        je    L_9dd9
        test    edi, edi
        mov    byte ptr [esi + 0x1d], 1
        mov    dword ptr [esi + 0x24], 0
        mov    dword ptr [esi + 0x20], edi
        je    L_9e2a
        mov    dword ptr [edi + 0x24], esi
L_9e2a:
        mov    dword ptr [ebx + 0x10], esi
        jmp    L_9ddd
        nop    
        ret    
    }
}
