/*
 * FUN_0056f1e8 (extent 0x56f1e8-0x56f76c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0077f670;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_0056f050(void);
extern void __cdecl FUN_005c77d0(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0056f1e8(void)
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
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_f295
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f275
        push    0x780460
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f275
        int 3    
L_f275:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, eax
        jmp    L_f351
L_f295:
        push    edi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_f306
        push    esi
        push    edi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0056f050
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 8
        cmp    esi, edx
        mov    bl, al
        mov    dword ptr [g_0080592c], esi
        jb    L_f2e0
        push    0
        call    FUN_00563060
        add    esp, 4
L_f2e0:
        xor    eax, eax
        test    bl, bl
        setne    al
        pop    edi
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
L_f306:
        push    edi
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        jne    L_f380
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f334
        push    0x780444
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f334
        int 3    
L_f334:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, edx
L_f351:
        jb    L_f35d
        push    0
        call    FUN_00563060
        add    esp, 4
L_f35d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        mov    dword ptr [esi], 0
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
L_f380:
        mov    edx, dword ptr [g_0077f670]
        push    edx
        push    esi
        mov    ecx, eax
        call    FUN_005c77d0
        mov    esi, dword ptr [g_0080592c]
        mov    bl, al
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_f3b8
        push    0
        call    FUN_00563060
        add    esp, 4
L_f3b8:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        pop    edi
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [esi], ecx
        pop    esi
        pop    ebx
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f438
        push    ecx
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_f438
        push    0x78047c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f438
        int 3    
L_f438:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        add    eax, 0xa000
        cmp    esi, eax
        jb    L_f470
        push    0
        call    FUN_00563060
        add    esp, 4
L_f470:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 1
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        mov    dword ptr [g_0080592c], ecx
        mov    cl, byte ptr [g_007dde2c]
        test    cl, cl
        je    L_f4f9
        push    eax
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_f4f9
        push    0x7804a4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f4f9
        int 3    
L_f4f9:
        mov    edx, dword ptr [g_00805928]
        push    esi
        mov    esi, dword ptr [g_0080592c]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_f523
        push    0
        call    FUN_00563060
        add    esp, 4
L_f523:
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [esi], 1
        pop    esi
        ret    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f588
        push    ecx
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_f588
        push    0x7804d4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f588
        int 3    
L_f588:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        add    eax, 0xa000
        cmp    esi, eax
        jb    L_f5c0
        push    0
        call    FUN_00563060
        add    esp, 4
L_f5c0:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 1
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
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
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    ecx
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
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f64f
        push    edi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_f64f
        push    0x780578
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f64f
        int 3    
L_f64f:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        push    eax
        call    FUN_0064c950
        mov    ecx, dword ptr [g_0080d9bc]
        add    esp, 4
        cmp    eax, ecx
        mov    eax, dword ptr [g_0080592c]
        jne    L_f684
        fild    dword ptr [eax]
        fstp    dword ptr [eax]
L_f684:
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    esi, dword ptr [eax + 0x20]
        mov    al, byte ptr [g_007dde2c]
        xor    esi, 0x85739531
        test    al, al
        mov    dword ptr [ebp - 4], ecx
        je    L_f6f3
        test    edi, edi
        jge    L_f6cd
        push    0x780540
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f6cd
        int 3    
L_f6cd:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f6f3
        cmp    edi, 0x20
        jl    L_f6f3
        push    0x780504
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f6f3
        int 3    
L_f6f3:
        lea    ecx, [edi + edi*2]
        shl    ecx, 4
        lea    ecx, [ecx + esi + 0x1bb8]
        call    FUN_006100a0
        fld    dword ptr [ebp - 4]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_f718
        mov    ebx, 1
        jmp    L_f71a
L_f718:
        xor    ebx, ebx
L_f71a:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_f743
        push    0
        call    FUN_00563060
        add    esp, 4
L_f743:
        xor    eax, eax
        test    bl, bl
        setne    al
        pop    edi
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
