/*
 * FUN_0056ca78 (extent 0x56ca78-0x56cef9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f24d8;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_005dbe50(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0056ca78(void)
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
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        sub    edx, 4
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805918]
        mov    edx, dword ptr [g_0080592c]
        movsx    ecx, byte ptr [eax]
        sub    edx, 4
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_0080592c], edx
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
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
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_cb4a
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_cb4a
        push    0x780154
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_cb4a
        int 3    
L_cb4a:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edi, dword ptr [eax + 0x20]
        mov    al, byte ptr [g_007dde2c]
        xor    edi, 0x85739531
        test    al, al
        je    L_cbac
        test    esi, esi
        jge    L_cb86
        push    0x780120
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_cb86
        int 3    
L_cb86:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_cbac
        cmp    esi, 0x20
        jl    L_cbac
        push    0x7800e8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_cbac
        int 3    
L_cbac:
        lea    ecx, [esi + esi*2]
        shl    ecx, 4
        lea    ecx, [ecx + edi + 0x1bb8]
        call    FUN_006100a0
        call    FUN_0075db4a
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_cbee
        push    0
        call    FUN_00563060
        add    esp, 4
L_cbee:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
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
        xor    ebx, ebx
        cmp    al, bl
        je    L_cc71
        push    edi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_cc71
        push    0x7801e4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_cc71
        int 3    
L_cc71:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    esi, dword ptr [eax]
        mov    al, byte ptr [g_007dde2c]
        xor    edx, esi
        mov    esi, dword ptr [edx + 0x20]
        xor    esi, 0x85739531
        cmp    al, bl
        mov    dword ptr [ebp - 4], ecx
        je    L_ccfe
        cmp    edi, ebx
        jge    L_ccd9
        push    0x7801b0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ccd9
        int 3    
L_ccd9:
        cmp    byte ptr [g_007dde2c], bl
        je    L_ccfe
        cmp    edi, 0x20
        jl    L_ccfe
        push    0x780178
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ccfe
        int 3    
L_ccfe:
        lea    ecx, [edi + edi*2]
        shl    ecx, 4
        mov    eax, dword ptr [ecx + esi + 0x1be0]
        cmp    eax, ebx
        lea    esi, [ecx + esi + 0x1bb8]
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 8], ebx
        mov    dword ptr [esi + 4], ebx
        mov    dword ptr [esi + 0xc], ebx
        je    L_cd2a
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x18]
L_cd2a:
        mov    dword ptr [esi + 0x20], ebx
        mov    dword ptr [esi + 0x10], ebx
        push    ebx
        mov    dword ptr [esi + 0x24], ebx
        mov    dword ptr [esi + 0x14], ebx
        call    FUN_00707e70
        fisub    dword ptr [ebp - 4]
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        pop    edi
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        fstp    qword ptr [esi]
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
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
        mov    edx, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        add    edx, 0xa000
        cmp    esi, edx
        jb    L_cd9c
        push    0
        call    FUN_00563060
        add    esp, 4
L_cd9c:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 0
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_ce17
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_ce17
        push    0x780260
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ce17
        int 3    
L_ce17:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_cec5
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_ce88
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_ce5d
        push    0x780234
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ce5d
        int 3    
L_ce5d:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_ce88
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_ce88
        push    0x780208
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ce88
        int 3    
L_ce88:
        push    edi
        mov    ecx, esi
        call    FUN_005dbe50
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_cebb
        push    0
        call    FUN_00563060
        add    esp, 4
L_cebb:
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        ret    
L_cec5:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_ceec
        push    0
        call    FUN_00563060
        add    esp, 4
L_ceec:
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [esi], 0
        pop    esi
        ret    
    }
}
