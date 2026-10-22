/*
 * FUN_004153db (extent 0x4153db-0x4154d0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c20;
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00417890(void);

__declspec(naked) void FUN_004153db(void)
{
    __asm {
        nop    
        nop    
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
        nop    
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, edx
        test    ecx, ecx
        jne    L_53fc
        xor    eax, eax
        ret    
L_53fc:
        xor    eax, eax
L_53fe:
        mov    ecx, dword ptr [ecx + 8]
        inc    eax
        cmp    ecx, edx
        jne    L_53fe
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
        mov    edx, dword ptr [ecx + 8]
        mov    eax, edx
        test    eax, eax
        push    esi
        je    L_5436
        mov    esi, dword ptr [esp + 8]
        cmp    dword ptr [eax + 4], esi
        je    L_542f
L_5423:
        mov    eax, dword ptr [eax + 8]
        cmp    eax, edx
        je    L_5436
        cmp    dword ptr [eax + 4], esi
        jne    L_5423
L_542f:
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx]
L_5436:
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    esi, dword ptr [ebx + 8]
        test    esi, esi
        push    edi
        je    L_5460
L_544c:
        mov    eax, dword ptr [esi]
        mov    edi, dword ptr [esi + 8]
        push    ebx
        mov    ecx, esi
        call    dword ptr [eax]
        cmp    esi, edi
        je    L_5460
        test    edi, edi
        mov    esi, edi
        jne    L_544c
L_5460:
        pop    edi
        pop    esi
        pop    ebx
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
        mov    ecx, dword ptr [ecx + 8]
        mov    eax, ecx
        test    eax, eax
        je    L_5493
        mov    edx, dword ptr [esp + 4]
        cmp    dword ptr [eax + 4], edx
        je    L_548e
L_5482:
        mov    eax, dword ptr [eax + 8]
        cmp    eax, ecx
        je    L_5493
        cmp    dword ptr [eax + 4], edx
        jne    L_5482
L_548e:
        mov    al, 1
        ret    4
L_5493:
        xor    al, al
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 0xc]
        test    esi, esi
        push    edi
        je    L_54cd
L_54a9:
        test    esi, esi
        mov    edi, dword ptr [esi + 0x10]
        je    L_54c3
        mov    ecx, esi
        call    FUN_00417890
        mov    ecx, dword ptr [g_007b8c20]
        push    esi
        call    FUN_00416130
L_54c3:
        cmp    esi, edi
        je    L_54cd
        test    edi, edi
        mov    esi, edi
        jne    L_54a9
L_54cd:
        pop    edi
        pop    esi
        ret    
    }
}
