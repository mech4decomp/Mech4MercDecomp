/*
 * FUN_004ceb93 (extent 0x4ceb93-0x4cec66) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c0c;
extern void __cdecl FUN_004ced60(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004ceb93(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [g_007b8c0c]
        mov    ecx, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [edx + ecx*4]
        mov    dl, byte ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x20]
        mov    byte ptr [esp + 4], dl
        mov    dx, word ptr [eax + 0x1a]
        mov    word ptr [esp + 6], dx
        lea    edx, [esp + 4]
        push    edx
        push    eax
        call    ecx
        add    esp, 8
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
        push    esi
        lea    esi, [eax + 0x10]
        lea    edx, [esi + 0x10]
        push    edx
        call    FUN_004ceeb0
        test    eax, eax
        je    L_ebfd
        push    esi
        mov    ecx, eax
        call    FUN_004d5b70
L_ebfd:
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
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        inc    word ptr [esi + 0x36]
        xor    eax, eax
        mov    ax, word ptr [esi + 0x36]
        push    edi
        xor    edi, edi
        and    eax, 0xffff
        push    eax
        call    FUN_004ced60
        test    al, al
        je    L_ec60
L_ec2f:
        inc    word ptr [esi + 0x36]
        cmp    edi, 0x10001
        jle    L_ec4d
        push    0x771c0c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_ec4d
        int 3    
L_ec4d:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x36]
        mov    ecx, esi
        inc    edi
        push    eax
        call    FUN_004ced60
        test    al, al
        jne    L_ec2f
L_ec60:
        pop    edi
        lea    eax, [esi + 0x34]
        pop    esi
        ret    
    }
}
