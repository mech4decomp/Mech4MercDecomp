/*
 * FUN_004172dd (extent 0x4172dd-0x4173f4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c14;
extern int    g_007b8c1c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_004170a0(void);
extern void __cdecl FUN_004170f0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004172dd(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    esi, dword ptr [ebx + 4]
        push    edi
        push    eax
        mov    ecx, esi
        call    FUN_004170a0
        mov    edi, eax
        cmp    edi, -1
        je    L_732f
        mov    al, byte ptr [esi + 8]
        test    al, al
        jne    L_731d
L_7302:
        mov    ecx, dword ptr [esi + 0xc]
        mov    edx, dword ptr [esi]
        lea    eax, [ecx + edi*4]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [eax - 4]
        push    ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        test    eax, eax
        jne    L_731d
        dec    edi
        jmp    L_7302
L_731d:
        mov    eax, dword ptr [esi + 0xc]
        mov    ecx, dword ptr [eax + edi*4]
        mov    eax, dword ptr [ecx + 0xc]
        mov    dword ptr [ebx + 0x10], edi
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_732f:
        pop    edi
        pop    esi
        mov    dword ptr [ebx + 0x10], 0xffffffff
        xor    eax, eax
        pop    ebx
        ret    4
        nop    
        nop    
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7352
        int 3    
L_7352:
        xor    eax, eax
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
        mov    eax, dword ptr [esp + 4]
        sub    eax, 0
        push    esi
        push    edi
        mov    esi, ecx
        je    L_7391
        dec    eax
        jne    L_73a9
        mov    eax, dword ptr [esi + 0x10]
        cmp    eax, -1
        je    L_73a9
        mov    ecx, dword ptr [esp + 0x10]
        cmp    dword ptr [ecx], eax
        jb    L_7388
        mov    edx, dword ptr [esi + 4]
        cmp    dword ptr [edx + 0x14], eax
        ja    L_73a9
L_7388:
        dec    eax
        pop    edi
        mov    dword ptr [esi + 0x10], eax
        pop    esi
        ret    8
L_7391:
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        push    eax
        call    FUN_004170f0
        cmp    eax, edi
        ja    L_73a9
        inc    edi
        mov    dword ptr [esi + 0x10], edi
L_73a9:
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_73e8
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    0x76d550
        mov    ecx, eax
        shr    ecx, 2
        push    ecx
        push    eax
        push    0x18
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8c1c], esi
        pop    esi
        ret    
L_73e8:
        mov    dword ptr [g_007b8c1c], 0
        pop    esi
        ret    
    }
}
