/*
 * FUN_007570a0 (extent 0x7570a0-0x7571bd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00856a88;
extern int    g_00856b8c;
extern char   g_0087dd0a;
extern int    g_008aadc8;
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00755cc0(void);
extern void __cdecl FUN_00758540(void);

__declspec(naked) void FUN_007570a0(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_70b7
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi + 8], 0
L_70b7:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_70c9
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi], 0
L_70c9:
        push    edi
        mov    edi, dword ptr [esi + 4]
        test    edi, edi
        je    L_70f2
        mov    eax, dword ptr [esi + 0x78]
        mov    ecx, dword ptr [g_008aadc8]
        push    1
        neg    eax
        push    eax
        push    ecx
        call    FUN_006f4940
        push    edi
        call    FUN_00740db0
        mov    dword ptr [esi + 4], 0
L_70f2:
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        pop    edi
        je    L_7107
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi + 0xc], 0
L_7107:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    ebp
        mov    ebp, dword ptr [g_00856a88]
        push    esi
        push    edi
        mov    edi, ecx
        xor    ebx, ebx
        xor    cl, cl
        cmp    ebp, ebx
        jle    L_7147
        mov    edx, 0x856a8c
        mov    esi, ebp
L_712b:
        mov    eax, dword ptr [edx]
        test    byte ptr [eax + 0x68], 0x20
        je    L_713d
        cmp    byte ptr [eax + 0x75], bl
        je    L_713d
        mov    cl, 1
        mov    byte ptr [eax + 0x75], bl
L_713d:
        add    edx, 4
        dec    esi
        jne    L_712b
        cmp    cl, bl
        jne    L_7154
L_7147:
        mov    eax, dword ptr [g_00856b8c]
        cmp    byte ptr [eax + 0xe8], bl
        je    L_717b
L_7154:
        mov    ecx, dword ptr [edi]
        push    ecx
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00758540
        mov    edx, dword ptr [g_00856b8c]
        mov    ebp, dword ptr [g_00856a88]
        mov    byte ptr [g_0087dd0a], bl
        mov    byte ptr [edx + 0xe8], bl
L_717b:
        xor    edi, edi
        cmp    ebp, ebx
        jle    L_71b8
        mov    esi, 0x856a8c
L_7186:
        mov    ecx, dword ptr [esi]
        cmp    byte ptr [ecx + 0x98], bl
        je    L_71b0
        mov    eax, dword ptr [ecx + 0x9c]
        cmp    eax, 1
        mov    byte ptr [ecx + 0x98], bl
        je    L_71a5
        cmp    eax, ebx
        jne    L_71b0
L_71a5:
        call    FUN_00755cc0
        mov    ebp, dword ptr [g_00856a88]
L_71b0:
        inc    edi
        add    esi, 4
        cmp    edi, ebp
        jl    L_7186
L_71b8:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
    }
}
