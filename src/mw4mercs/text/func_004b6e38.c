/*
 * FUN_004b6e38 (extent 0x4b6e38-0x4b7032) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b34a0;
extern int    g_007b34a4;
extern int    g_007b34a8;
extern void __cdecl FUN_004b7040(void);

__declspec(naked) void FUN_004b6e38(void)
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
        mov    dl, byte ptr [ecx + 0x150]
        mov    al, byte ptr [esp + 4]
        cmp    al, dl
        mov    dl, byte ptr [esp + 8]
        jne    L_6e5a
        cmp    dl, byte ptr [ecx + 0x151]
        je    L_6e79
L_6e5a:
        mov    byte ptr [ecx + 0x150], al
        mov    byte ptr [ecx + 0x151], dl
        movzx    ax, al
        movzx    dx, dl
        push    esi
        mov    esi, dword ptr [ecx]
        imul    eax, edx
        push    eax
        call    dword ptr [esi + 0x44]
        pop    esi
L_6e79:
        ret    8
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x15c]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x160]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x154]
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x158]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx], eax
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        mov    edx, eax
        shr    edx, 2
        and    eax, 0xc0
        and    edx, 1
        sub    al, 0x80
        shl    edx, 1
        neg    al
        sbb    eax, eax
        inc    eax
        or    edx, eax
        mov    eax, dword ptr [edx*4 + 0x7b3490]
        mov    dword ptr [ecx + 0x1c], eax
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
        mov    eax, dword ptr [g_007b34a0]
        mov    edx, dword ptr [g_007b34a4]
        mov    dword ptr [ecx + 0x130], eax
        mov    eax, dword ptr [g_007b34a8]
        mov    dword ptr [ecx + 0x134], edx
        mov    dword ptr [ecx + 0x138], eax
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
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 0xa
        and    eax, 1
        mov    edx, dword ptr [eax*4 + 0x7b34b0]
        mov    dword ptr [ecx + 0x13c], edx
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        push    0x4b6fe0
        mov    esi, ecx
        push    edi
        call    FUN_004b7040
        test    eax, eax
        je    L_6f6b
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        jne    L_6f64
        mov    eax, dword ptr [esi + 0x14]
        mov    dword ptr [edi + 8], eax
L_6f64:
        pop    edi
        mov    al, 1
        pop    esi
        ret    4
L_6f6b:
        pop    edi
        xor    al, al
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
        push    ecx
        push    ebp
        xor    eax, eax
        mov    ebp, ecx
        mov    ax, word ptr [ebp + 0x14c]
        test    eax, eax
        jle    L_6fd7
        push    ebx
        mov    ebx, dword ptr [ebp + 0x144]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], eax
L_6fa2:
        mov    esi, dword ptr [ebx]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x138]
        test    al, 2
        je    L_6fbf
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        je    L_6fbf
        mov    ebp, eax
L_6fbf:
        mov    eax, dword ptr [esp + 0x10]
        add    ebx, 4
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        jne    L_6fa2
        pop    edi
        pop    esi
        pop    ebx
        mov    eax, ebp
        pop    ebp
        pop    ecx
        ret    4
L_6fd7:
        mov    eax, ebp
        pop    ebp
        pop    ecx
        ret    4
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx + 0x144]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        and    eax, 0xffff
        mov    esi, dword ptr [edx + eax*4]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x134]
        test    al, al
        je    L_7021
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x18]
        mov    byte ptr [esp + 0x10], al
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        and    eax, 0xff
        pop    esi
        ret    
L_7021:
        mov    byte ptr [esp + 0x10], 0
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        and    eax, 0xff
        pop    esi
        ret    
    }
}
