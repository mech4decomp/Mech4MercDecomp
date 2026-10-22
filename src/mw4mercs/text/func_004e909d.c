/*
 * FUN_004e909d (extent 0x4e909d-0x4e92b4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007744a4;
extern int    g_007daa20;
extern int    g_007dc728;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_004b6a30(void);
extern void __cdecl FUN_004b6c10(void);
extern void __cdecl FUN_004b99a0(void);
extern void __cdecl FUN_004e2e90(void);
extern void __cdecl FUN_004e86e0(void);

__declspec(naked) void FUN_004e909d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x20]
        mov    eax, dword ptr [edi]
        mov    esi, ecx
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], 0x81
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ebx, [esi + 0x18]
        push    ebx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esi + 0x140]
        test    ecx, ecx
        je    L_90df
        push    edi
        call    FUN_004b99a0
L_90df:
        test    byte ptr [ebx], 1
        jne    L_90f1
        mov    eax, dword ptr [edi]
        push    0x30
        lea    ecx, [esi + 0x50]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
L_90f1:
        mov    edx, dword ptr [ebx]
        shr    edx, 5
        test    dl, 1
        je    L_912a
        mov    eax, dword ptr [edi]
        push    0x30
        lea    ecx, [esi + 0xb0]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    0xc
        lea    ecx, [esi + 0xe0]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + 0xec]
        push    4
        push    ecx
        mov    ecx, eax
        jmp    L_9163
L_912a:
        mov    eax, dword ptr [esi + 0xcc]
        mov    edx, dword ptr [esi + 0xbc]
        mov    ecx, dword ptr [esi + 0xdc]
        mov    dword ptr [esp + 0x14], eax
        push    0xc
        lea    eax, [esp + 0x14]
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [edi]
        mov    dword ptr [esp + 0x1c], ecx
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0xec]
        push    eax
        mov    ecx, edi
L_9163:
        call    dword ptr [edx + 0x24]
        lea    ecx, [esi + 0x144]
        mov    esi, dword ptr [ecx]
        call    FUN_00417a40
        mov    edx, dword ptr [edi]
        mov    dword ptr [esp + 0x20], eax
        push    4
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
L_9185:
        test    esi, esi
        je    L_919a
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_919a
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        jmp    L_9185
L_919a:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
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
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x164
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_91ed
        mov    ecx, dword ptr [g_007daa20]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [g_007744a4]
        push    ecx
        push    ecx
        mov    ecx, dword ptr [esp + 0x20]
        push    edx
        push    ecx
        push    8
        push    8
        mov    ecx, eax
        call    FUN_004b6a30
        jmp    L_91ef
L_91ed:
        xor    eax, eax
L_91ef:
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        mov    dword ptr [edi + 0x17c], eax
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [edi + 0x17c]
        or    dword ptr [eax + 0x18], 2
        mov    byte ptr [esp + 0x18], 0
L_920c:
        mov    ebp, dword ptr [esp + 0x18]
        xor    bl, bl
        mov    byte ptr [esp + 0x14], bl
L_9216:
        push    0x18c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9251
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 0x151]
        shl    cl, 3
        add    cl, bl
        xor    edx, edx
        mov    dl, byte ptr [edi + 0x150]
        shl    dl, 3
        push    ecx
        add    dl, byte ptr [esp + 0x1c]
        mov    ecx, eax
        push    edx
        push    edi
        call    FUN_004e86e0
        mov    esi, eax
        jmp    L_9253
L_9251:
        xor    esi, esi
L_9253:
        xor    eax, eax
        mov    al, byte ptr [esi + 0x151]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x150]
        push    esi
        push    eax
        push    ecx
        mov    ecx, dword ptr [g_007dc728]
        call    FUN_004e2e90
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [edi + 0x17c]
        push    esi
        push    edx
        push    ebp
        call    FUN_004b6c10
        mov    edx, dword ptr [esi + 0x18]
        or    edx, 2
        inc    bl
        cmp    bl, 8
        mov    dword ptr [esi + 0x18], edx
        mov    byte ptr [esp + 0x14], bl
        jb    L_9216
        mov    al, byte ptr [esp + 0x18]
        inc    al
        cmp    al, 8
        mov    byte ptr [esp + 0x18], al
        jb    L_920c
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
