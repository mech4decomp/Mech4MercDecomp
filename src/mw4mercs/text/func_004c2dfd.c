/*
 * FUN_004c2dfd (extent 0x4c2dfd-0x4c3020) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daaf4;
extern char   g_007daaf8;
extern int    g_007dab04;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00487e30(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004c2dfd(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        push    ebx
        mov    ebx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [ebx + 4]
        push    esi
        push    edi
        xor    edi, edi
        cmp    eax, edi
        mov    esi, ecx
        je    L_2e25
        mov    eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx], edi
        mov    dword ptr [ebx + 4], edi
L_2e25:
        mov    ecx, dword ptr [esi + 0x174]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x1c]
        mov    dword ptr [esp + 0x18], ecx
        mov    dword ptr [esp + 0x14], edi
        cmp    eax, edi
        mov    dword ptr [esp + 0x24], eax
        jle    L_2f63
        push    ebp
        jmp    L_2e4b
L_2e47:
        mov    ecx, dword ptr [esp + 0x1c]
L_2e4b:
        mov    edx, dword ptr [esp + 0x18]
        push    edx
        call    FUN_00487e30
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x28]
        mov    edi, dword ptr [ebx + 4]
        mov    edx, dword ptr [esp + 0x14]
        lea    ebp, [edi + edx]
        cmp    ebp, edi
        mov    dword ptr [esp + 0x20], edi
        je    L_2f13
        test    ebp, ebp
        jbe    L_2eff
        lea    eax, [ebp + ebp*2]
        shl    eax, 2
        push    eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2ea3
        lea    ecx, [ebp - 1]
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, eax
        mov    dword ptr [esp + 0x10], ecx
        jmp    L_2eaf
L_2ea3:
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
L_2eaf:
        mov    edx, dword ptr [ebx]
        test    edx, edx
        je    L_2efb
        cmp    ebp, edi
        mov    eax, ebp
        jb    L_2ebd
        mov    eax, edi
L_2ebd:
        mov    esi, eax
        dec    eax
        test    esi, esi
        je    L_2eec
        lea    esi, [eax + eax*2]
        mov    ebx, edx
        lea    esi, [ecx + esi*4]
        sub    ebx, ecx
        lea    edi, [eax + 1]
L_2ed1:
        lea    edx, [ebx + esi]
        push    edx
        mov    ecx, esi
        call    FUN_0040c410
        dec    edi
        sub    esi, 0xc
        test    edi, edi
        ja    L_2ed1
        mov    ebx, dword ptr [esp + 0x30]
        mov    edi, dword ptr [esp + 0x20]
L_2eec:
        mov    eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x14]
        add    esp, 4
L_2efb:
        mov    dword ptr [ebx], ecx
        jmp    L_2f10
L_2eff:
        mov    eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx], 0
L_2f10:
        mov    dword ptr [ebx + 4], ebp
L_2f13:
        mov    eax, dword ptr [esp + 0x14]
        xor    esi, esi
        test    eax, eax
        jle    L_2f4d
        mov    eax, dword ptr [ebx]
        lea    ecx, [edi + edi*2]
        xor    edx, edx
        lea    eax, [eax + ecx*4]
L_2f27:
        mov    ecx, dword ptr [esp + 0x24]
        mov    edi, dword ptr [ecx + edx]
        add    ecx, edx
        mov    dword ptr [eax], edi
        mov    edi, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edi
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0x14]
        inc    esi
        add    edx, 0xc
        add    eax, 0xc
        cmp    esi, ecx
        jl    L_2f27
L_2f4d:
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x28]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [esp + 0x18], eax
        jl    L_2e47
        pop    ebp
L_2f63:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x1c
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2fa7
        mov    eax, dword ptr [g_007dab04]
        push    eax
        push    0x771648
        push    0x82
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4c3490
        mov    dword ptr [g_007daaf4], esi
        jmp    L_2fb1
L_2fa7:
        mov    dword ptr [g_007daaf4], 0
L_2fb1:
        push    0
        push    0
        push    0x4c3010
        push    0x4c3000
        push    0x771624
        call    FUN_0070f090
        mov    ecx, dword ptr [esp + 8]
        test    ecx, ecx
        pop    esi
        je    L_2ff3
        push    0x76d9ec
        call    FUN_0040ecc0
        test    eax, eax
        je    L_2ff3
        push    0
        push    0x7daaf8
        push    0x77161c
        mov    ecx, eax
        call    FUN_00411ec0
L_2ff3:
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
        mov    al, byte ptr [g_007daaf8]
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
        mov    al, byte ptr [g_007daaf8]
        test    al, al
        sete    al
        mov    byte ptr [g_007daaf8], al
        ret    
    }
}
