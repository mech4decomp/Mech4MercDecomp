/*
 * FUN_0072bb90 (extent 0x72bb90-0x72bc33) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b560;
extern int    g_00858bf8;

__declspec(naked) void FUN_0072bb90(void)
{
    __asm {
        mov    edx, dword ptr [esp + 4]
        mov    al, byte ptr [edx]
        push    ebx
        push    esi
        xor    esi, esi
        xor    ecx, ecx
        test    al, al
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        je    L_bbc3
L_bba5:
        cmp    ecx, edi
        jge    L_bbc5
        xor    eax, eax
        mov    al, byte ptr [ecx + edx]
        inc    esi
        mov    bl, byte ptr [eax + 0x896b88]
        test    bl, bl
        je    L_bbba
        inc    ecx
L_bbba:
        mov    al, byte ptr [ecx + edx + 1]
        inc    ecx
        test    al, al
        jne    L_bba5
L_bbc3:
        cmp    ecx, edi
L_bbc5:
        je    L_bbc9
        neg    esi
L_bbc9:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
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
        nop    
        nop    
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        test    edi, edi
        je    L_bc2f
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [g_0076b560]
        jbe    L_bc0a
L_bbf7:
        mov    eax, dword ptr [g_00858bf8]
        push    0
        push    ebx
        push    0x100
        push    eax
        call    esi
        dec    edi
        jne    L_bbf7
L_bc0a:
        mov    ecx, dword ptr [g_00858bf8]
        push    0
        push    ebx
        push    0x101
        push    ecx
        call    esi
        mov    edx, dword ptr [g_00858bf8]
        push    0
        push    0
        push    0x102
        push    edx
        call    esi
        pop    esi
        pop    ebx
L_bc2f:
        pop    edi
        ret    8
    }
}
