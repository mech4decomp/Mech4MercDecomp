/*
 * FUN_00490c9b (extent 0x490c9b-0x490fab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007b8ef4;
extern int    g_007b8ef8;
extern int    g_007da854;
extern int    g_007da858;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00490840(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_00717a60(void);

__declspec(naked) void FUN_00490c9b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x18]
        mov    ebx, dword ptr [esi + 0x18]
        test    bl, 1
        mov    ebp, ecx
        je    L_0cbf
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 8
        ret    8
L_0cbf:
        mov    eax, dword ptr [ebp + 0x18]
        test    eax, eax
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0xc], eax
        je    L_0cd9
        inc    byte ptr [eax - 1]
        mov    eax, dword ptr [esp + 0xc]
L_0cd9:
        push    edi
        mov    edi, dword ptr [esi + 0x10]
        push    edi
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_0d0d
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_0d0d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0d0d:
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412740
        mov    ecx, dword ptr [esp + 0x1c]
        push    0x7700b4
        push    ecx
        lea    ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_0d53
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_0d53
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0d53:
        mov    edx, dword ptr [esp + 0x1c]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        jne    L_0da7
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412740
        mov    ecx, dword ptr [esp + 0x1c]
        push    0x7700ac
        push    ecx
        lea    ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_0da7
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_0da7
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0da7:
        mov    ecx, dword ptr [ebp + 0x1c]
        test    ecx, ecx
        je    L_0dc3
        push    edi
        call    FUN_0040ecc0
        test    eax, eax
        je    L_0dc3
        push    eax
        call    FUN_00490840
        add    esp, 4
        jmp    L_0dc7
L_0dc3:
        mov    eax, dword ptr [esp + 0x20]
L_0dc7:
        mov    edx, dword ptr [esp + 0x1c]
        push    0
        push    0
        push    eax
        push    edx
        push    -1
        call    FUN_00717a60
        xor    ecx, ecx
        test    eax, eax
        setne    cl
        mov    dword ptr [esi + 0x1c], eax
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        or    ecx, ebx
        mov    bl, cl
        and    bl, 1
        test    eax, eax
        mov    dword ptr [esi + 0x18], ecx
        je    L_0e08
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_0e08
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0e08:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_0e23
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_0e23
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0e23:
        pop    esi
        pop    ebp
        mov    al, bl
        pop    ebx
        add    esp, 8
        ret    8
        nop    
        nop    
        mov    eax, dword ptr [g_007da858]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007da858], eax
        jne    L_0e86
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_0e7c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007da854], esi
        jmp    L_0e86
L_0e7c:
        mov    dword ptr [g_007da854], 0
L_0e86:
        mov    ecx, dword ptr [g_007da854]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_0eb1
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 8]
        push    ecx
        push    0
        mov    ecx, esi
        call    FUN_00416990
        pop    edi
        mov    dword ptr [esi], 0x7700bc
        mov    eax, esi
        pop    esi
        ret    
L_0eb1:
        pop    edi
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        push    ecx
        call    FUN_00412ab0
        xor    edx, edx
        div    dword ptr [esi + 0x10]
        add    esp, 4
        pop    esi
        mov    eax, edx
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x76ffe0
        call    FUN_00416320
        test    byte ptr [esp + 8], 1
        je    L_0efe
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0efe:
        mov    eax, esi
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
        mov    eax, dword ptr [g_007b8ef8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b8ef8], eax
        jne    L_0f66
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_0f5c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8ef4], esi
        jmp    L_0f66
L_0f5c:
        mov    dword ptr [g_007b8ef4], 0
L_0f66:
        mov    ecx, dword ptr [g_007b8ef4]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_0fa4
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d754
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_0fa4:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
    }
}
