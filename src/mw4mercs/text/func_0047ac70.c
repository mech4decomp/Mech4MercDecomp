/*
 * FUN_0047ac70 (extent 0x47ac70-0x47ad95) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0047aef0(void);
extern void __cdecl FUN_0047ff10(void);

__declspec(naked) void FUN_0047ac70(void)
{
    __asm {
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        push    ebx
        mov    esi, ecx
        push    eax
        call    FUN_0047ff10
        test    bl, 1
        je    L_ac9f
        mov    ecx, esi
        call    FUN_0047aef0
L_ac9f:
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
        push    ecx
        mov    eax, dword ptr [esp + 8]
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 0x60], eax
        cmp    byte ptr [esp + 0x18], 1
        push    edi
        mov    dword ptr [esp + 0xc], esi
        mov    dword ptr [esi + 0x64], ebx
        jne    L_ad74
        mov    edi, dword ptr [esi + 0x5c]
        cmp    ebx, edi
        je    L_ad74
        push    ebp
        xor    ebp, ebp
        cmp    ebx, ebp
        jbe    L_ad61
        mov    ecx, ebx
        shl    ecx, 4
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_ad00
        lea    edx, [ebx - 1]
        mov    dword ptr [esp + 0x20], edx
        mov    ebp, eax
L_ad00:
        mov    esi, dword ptr [esi + 0x58]
        test    esi, esi
        je    L_ad4d
        cmp    ebx, edi
        mov    edx, ebx
        jb    L_ad0f
        mov    edx, edi
L_ad0f:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_ad44
        mov    ecx, edx
        shl    ecx, 4
        lea    eax, [ecx + esi]
        lea    ecx, [ecx + ebp + 8]
        inc    edx
L_ad23:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx - 8], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 8]
        mov    dword ptr [ecx], edi
        mov    edi, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 4], edi
        dec    edx
        sub    eax, 0x10
        sub    ecx, 0x10
        test    edx, edx
        ja    L_ad23
L_ad44:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_ad4d:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 0x58], ebp
        pop    ebp
        mov    esi, ecx
        pop    edi
        mov    dword ptr [esi + 0x5c], ebx
        pop    esi
        pop    ebx
        pop    ecx
        ret    0xc
L_ad61:
        mov    edx, dword ptr [esi + 0x58]
        push    edx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x58], ebp
        mov    dword ptr [esi + 0x5c], ebx
        pop    ebp
L_ad74:
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x64]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x60]
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [ecx], eax
        ret    8
    }
}
