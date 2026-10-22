/*
 * FUN_006d2f60 (extent 0x6d2f60-0x6d315c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_00417280(void);
extern void __cdecl FUN_004db540(void);
extern void __cdecl FUN_004db550(void);
extern void __cdecl FUN_006d2ed0(void);
extern void __cdecl FUN_006d2f50(void);
extern void __cdecl FUN_006d2ff0(void);

__declspec(naked) void FUN_006d2f60(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 4]
        sub    esp, 0x14
        push    esi
        lea    esi, [ecx + 4]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        test    al, al
        jne    L_2fc2
        mov    edi, dword ptr [esp + 0x20]
        test    edi, edi
        je    L_2fc2
        push    esi
        lea    ecx, [esp + 0xc]
        call    FUN_00417170
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x79e9d8
        call    FUN_00417280
        test    eax, eax
        je    L_2fb9
L_2f9b:
        cmp    edi, eax
        je    L_2fcc
        lea    ecx, [esp + 8]
        call    FUN_00417230
        test    eax, eax
        je    L_2fb9
        lea    ecx, [esp + 8]
        call    FUN_00417280
        test    eax, eax
        jne    L_2f9b
L_2fb9:
        lea    ecx, [esp + 8]
        call    FUN_004171b0
L_2fc2:
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x14
        ret    4
L_2fcc:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [edx + eax*4]
        mov    esi, dword ptr [ecx + 0x10]
        lea    ecx, [esp + 8]
        call    FUN_004171b0
        pop    edi
        mov    eax, esi
        pop    esi
        add    esp, 0x14
        ret    4
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        test    ecx, ecx
        je    L_3001
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_3001:
        mov    byte ptr [esi + 0x5c], 1
        pop    esi
        ret    4
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
        push    eax
        call    FUN_006d2ed0
        push    eax
        mov    ecx, esi
        call    FUN_006d2ff0
        mov    byte ptr [esi + 0x5c], 1
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        xor    al, al
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
        push    ecx
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        test    ebx, ebx
        push    esi
        push    edi
        mov    edi, ecx
        je    L_3153
        push    ebx
        call    FUN_006d2f50
        mov    esi, eax
        mov    eax, dword ptr [esi + 0x24]
        shr    eax, 3
        test    al, 1
        je    L_306d
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        pop    ecx
        ret    8
L_306d:
        mov    edx, dword ptr [esi]
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ebp, eax
        test    ebp, ebp
        je    L_312a
        mov    eax, dword ptr [edi]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0x18]
        push    0x76c5a8
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_30c3
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_30c3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_30c3:
        mov    edx, dword ptr [ebp]
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_30fa
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_30fa
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_30fa:
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    esi
        call    FUN_004db550
        mov    eax, dword ptr [esp + 0x24]
        add    esp, 0xc
        test    eax, eax
        je    L_3139
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3139
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_3139
L_312a:
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        push    ebx
        push    esi
        call    FUN_004db540
        add    esp, 0xc
L_3139:
        mov    eax, dword ptr [esi + 0x30]
        test    eax, eax
        pop    ebp
        je    L_3153
        mov    eax, dword ptr [esi + 0x24]
        or    eax, 8
        pop    edi
        mov    dword ptr [esi + 0x24], eax
        pop    esi
        mov    al, 1
        pop    ebx
        pop    ecx
        ret    8
L_3153:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        pop    ecx
        ret    8
    }
}
