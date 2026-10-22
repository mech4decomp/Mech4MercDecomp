/*
 * FUN_0057d1cd (extent 0x57d1cd-0x57d4ff) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_0080592c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005667c0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c10(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_0057d150(void);
extern void __cdecl FUN_005e0b50(void);
extern void __cdecl FUN_005e0bd0(void);
extern void __cdecl FUN_00621b40(void);
extern void __cdecl FUN_00623560(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0057d1cd(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    esi, dword ptr [ecx + 0x20]
        push    edi
        xor    esi, 0x85739531
        call    FUN_00566c10
        add    esp, 4
        cmp    al, 1
        jne    L_d276
        and    edi, 0xff
        jne    L_d266
        mov    ecx, dword ptr [esi + 0x225c]
        push    ebx
        mov    edi, 8
        push    edi
        call    FUN_00623560
        jmp    L_d2b6
L_d266:
        mov    ecx, dword ptr [esi + 0x225c]
        dec    edi
        push    ebx
        push    edi
        call    FUN_00623560
        jmp    L_d2b6
L_d276:
        push    edi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_d299
        push    esi
        push    ebx
        push    edi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0057d150
        add    esp, 0xc
        jmp    L_d2b6
L_d299:
        push    edi
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_d2b6
        mov    ecx, dword ptr [esi + 0x225c]
        push    ebx
        add    eax, 0x14
        push    eax
        call    FUN_00621b40
L_d2b6:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ebx
        ret    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_005667c0
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_d350
        test    esi, esi
        jne    L_d354
        push    0x78142c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_d3b1
        int 3    
        jmp    L_d3b1
L_d350:
        test    esi, esi
        je    L_d3b1
L_d354:
        push    edi
        call    FUN_005668b0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        jne    L_d37c
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
L_d37c:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d3a9
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_d3a9
        push    0x781400
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_d3a9
        int 3    
L_d3a9:
        push    edi
        mov    ecx, esi
        call    FUN_005e0b50
L_d3b1:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005667c0
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_d425
        test    esi, esi
        jne    L_d425
        push    0x78142c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_d425
        int 3    
L_d425:
        mov    ecx, esi
        call    FUN_005e0bd0
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
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
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [ebp - 4], ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005667c0
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_d4d4
        test    esi, esi
        jne    L_d4d4
        push    0x78142c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_d4d4
        int 3    
L_d4d4:
        push    0
        call    FUN_00707e70
        fiadd    dword ptr [ebp - 4]
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        fstp    qword ptr [esi + 0x438]
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
