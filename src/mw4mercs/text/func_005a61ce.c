/*
 * FUN_005a61ce (extent 0x5a61ce-0x5a62fc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d3c8;
extern void __cdecl FUN_0050e230(void);
extern void __cdecl FUN_005a6bb0(void);
extern void __cdecl FUN_005f0430(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005a61ce(void)
{
    __asm {
        nop    
        nop    
        nop    
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
        push    ebp
        mov    ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x14]
        push    edi
        mov    edi, dword ptr [ebp + 8]
        cmp    edi, eax
        mov    dword ptr [ebp - 4], eax
        je    L_62f0
        cmp    edi, 6
        mov    esi, dword ptr [ebx + 0x18]
        jne    L_622a
        mov    eax, dword ptr [esi + 0x1c0]
        push    eax
        call    FUN_0050e230
        fcomp    dword ptr [g_0076d3c8]
        add    esp, 4
        fnstsw  ax
        test    ah, 1
        je    L_6233
        mov    eax, dword ptr [ebp - 4]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_622a:
        cmp    edi, 5
        je    L_62f0
L_6233:
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    edi
        mov    ecx, ebx
        call    FUN_005f0430
        dec    eax
        cmp    eax, 6
        ja    L_62db
        jmp    dword ptr [eax*4 + 0x5a62fc]
        mov    eax, dword ptr [esi + 0x10]
        or    eax, 0x40
        push    0
        mov    dword ptr [esi + 0x10], eax
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xe4]
        mov    edx, dword ptr [esi + 0x1b0]
        mov    ecx, dword ptr [edx + 0xe0]
        cmp    dword ptr [ecx + 0x14], 0xb
        mov    al, 1
        mov    byte ptr [esi + 0x1ac], al
        jne    L_6286
        mov    byte ptr [esi + 0x1ad], al
L_6286:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    eax, dword ptr [ebx + 0x14]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        cmp    dword ptr [ebx + 0x10], 7
        je    L_62ac
L_62a5:
        mov    ecx, esi
        call    FUN_005a6bb0
L_62ac:
        push    0
        mov    byte ptr [esi + 0x1ac], 0
        mov    byte ptr [esi + 0x1ad], 0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    eax, dword ptr [ebx + 0x14]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        cmp    dword ptr [ebx + 0x10], 1
        je    L_62ac
        jmp    L_62a5
L_62db:
        push    0x7849b8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_62ed
        int 3    
L_62ed:
        mov    eax, dword ptr [ebx + 0x14]
L_62f0:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005A62FC (0 relocated pointers)
    }
}
