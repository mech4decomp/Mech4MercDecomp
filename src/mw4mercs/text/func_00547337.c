/*
 * FUN_00547337 (extent 0x547337-0x5474ec) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0dc;
extern int    g_0076b2ac;
extern int    g_0076b58c;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);

__declspec(naked) void FUN_00547337(void)
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
        push    ecx
        mov    eax, dword ptr [esp + 8]
        push    ebx
        mov    ebx, dword ptr [eax]
        push    ebp
        push    esi
        or    ecx, 0xffffffff
        push    edi
        xor    eax, eax
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 4
        mov    dword ptr [esp + 0x10], ebx
        jbe    L_745c
        or    ecx, 0xffffffff
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        lea    ecx, [ecx + ebx - 4]
        push    0x779f4c
        push    ecx
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        jne    L_745c
        mov    edx, dword ptr [g_007dab44]
        mov    edi, dword ptr [edx]
        mov    esi, dword ptr [g_007dab40]
        push    0x14
        xor    edi, esi
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_73cc
        mov    eax, dword ptr [edi + 0xc]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x98]
        add    ecx, 0x10
        push    ecx
        mov    ecx, esi
        call    FUN_00416bc0
        mov    dword ptr [esi], 0x779cdc
        mov    ebp, esi
        jmp    L_73ce
L_73cc:
        xor    ebp, ebp
L_73ce:
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_744f
        jmp    L_73e1
L_73dd:
        mov    ebx, dword ptr [esp + 0x10]
L_73e1:
        mov    esi, dword ptr [edi + 0x1c]
        test    esi, esi
        je    L_73eb
        inc    byte ptr [esi - 1]
L_73eb:
        push    ebx
        push    esi
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    esi, esi
        je    L_7417
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7417
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7417:
        test    bl, bl
        je    L_7442
        mov    esi, dword ptr [edi + 0x18]
        test    esi, esi
        je    L_7442
        mov    dl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        inc    dl
        mov    cl, dl
        dec    cl
        mov    byte ptr [eax], dl
        mov    byte ptr [eax], cl
        jne    L_743d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_743d:
        cmp    byte ptr [esi], 0
        jne    L_7466
L_7442:
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_73dd
L_744f:
        test    ebp, ebp
        je    L_745c
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_745c:
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        pop    ecx
        ret    4
L_7466:
        mov    ecx, dword ptr [esp + 0x18]
        push    esi
        call    FUN_00412780
        test    ebp, ebp
        je    L_747d
        mov    edx, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [edx]
L_747d:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        pop    ecx
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    0x76b790
        push    esi
        call    dword ptr [g_0076b0dc]
        test    eax, eax
        jne    L_74ab
L_74a6:
        pop    esi
        xor    al, al
        pop    ebx
        ret    
L_74ab:
        mov    cl, byte ptr [esi]
        test    cl, cl
        mov    eax, esi
        je    L_74e4
        mov    bl, byte ptr [esp + 0x10]
        mov    esi, dword ptr [g_0076b58c]
L_74bd:
        movsx    ecx, cl
        add    ecx, -0x22
        cmp    ecx, 0x5a
        ja    L_74db
        xor    edx, edx
        mov    dl, byte ptr [ecx + 0x5474f8]
        jmp    dword ptr [edx*4 + 0x5474ec]
        test    bl, bl
        jne    L_74a6
L_74db:
        push    eax
        call    esi
        mov    cl, byte ptr [eax]
        test    cl, cl
        jne    L_74bd
L_74e4:
        pop    esi
        mov    al, 1
        pop    ebx
        ret    
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005474EC (0 relocated pointers)
    }
}
