/*
 * FUN_00705f9c (extent 0x705f9c-0x706568) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern int    g_0076b2f8;
extern int    g_0076b320;
extern int    g_0076b420;
extern int    g_00858920;
extern int    g_00858a2c;
extern char   g_08080608;
extern void __cdecl FUN_006f59f0(void);
extern void __cdecl FUN_006f5ae0(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_006f6410(void);
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00705910(void);
extern void __cdecl FUN_00705d80(void);
extern void __cdecl FUN_00707920(void);

__declspec(naked) void FUN_00705f9c(void)
{
    __asm {
        sbb    bl, byte ptr [edi + 0x70]
        add    byte ptr [ebx - 0x3ff8fa2], ah
        pop    ebp
        jo    L_5fa8
L_5fa8:
        cmp    al, 0x5f
        jo    L_5fac
L_5fac:
        and    eax, 0x4e00705e
        pop    esi
        jo    L_5fb4
L_5fb4:
        pop    esi
        pop    edi
        jo    L_5fb8
L_5fb8:
        clc    
        pop    esi
        jo    L_5fbc
L_5fbc:
        sbb    dword ptr [edi + 0x70], 0x1080000
        or    byte ptr [eax], cl
        or    byte ptr [edx], al
        add    ecx, dword ptr [eax]
        or    byte ptr [eax], cl
        or    byte ptr [eax + ecx], al
        or    byte ptr [g_08080608], al
        or    byte ptr [edi], al
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
        sub    esp, 0x554
        test    byte ptr [ebp + 0x14], 1
        push    ebx
        push    esi
        push    edi
        je    L_5ffd
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_5ffd:
        call    FUN_006f89f0
        mov    edi, dword ptr [ebp + 0xc]
        mov    ebx, dword ptr [ebp + 8]
        mov    esi, eax
        mov    eax, dword ptr [edi + 0x30]
        push    0xbb8
        push    eax
        lea    ecx, [ebx + 0x7c]
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    ecx, ebx
        call    FUN_00705d80
        mov    al, byte ptr [ebx + 0x1878]
        test    al, al
        je    L_64e2
        xor    edx, edx
        mov    dl, byte ptr [edi + 0x17]
        xor    eax, eax
        mov    al, byte ptr [edi + 0x16]
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 0x15]
        push    edx
        xor    edx, edx
        mov    dl, byte ptr [edi + 0x14]
        push    eax
        push    ecx
        xor    eax, eax
        mov    al, byte ptr [edi + 0x13]
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 0x12]
        push    edx
        xor    edx, edx
        mov    dl, byte ptr [edi + 0x11]
        push    eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x10]
        push    ecx
        xor    ecx, ecx
        mov    cx, word ptr [edi + 0xe]
        push    edx
        xor    edx, edx
        mov    dx, word ptr [edi + 0xc]
        push    eax
        mov    eax, dword ptr [edi + 8]
        push    ecx
        lea    ecx, [ebp - 0x254]
        push    edx
        push    eax
        push    0x7a1120
        push    ecx
        call    dword ptr [g_0076b420]
        push    0x100
        lea    edx, [ebx + 0x4a]
        push    edx
        lea    eax, [ebp - 0x154]
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0x40
        push    0x100
        lea    ecx, [ebp - 0x154]
        push    0x7884c4
        push    ecx
        call    dword ptr [g_0076b2f8]
        push    0x100
        lea    eax, [ebx + 0x1878]
        push    eax
        lea    edx, [ebp - 0x154]
        push    edx
        call    dword ptr [g_0076b2f8]
        push    0x100
        lea    eax, [ebp - 0x254]
        push    eax
        lea    ecx, [ebp - 0x154]
        push    ecx
        call    dword ptr [g_0076b2f8]
        mov    eax, dword ptr [edi + 0x44]
        mov    edx, dword ptr [edi + 0x2c]
        mov    ecx, eax
        mov    dword ptr [ebp + 8], eax
        shr    eax, 8
        and    eax, 0xf
        shr    ecx, 0xc
        and    ecx, 0xf
        add    ecx, eax
        mov    eax, dword ptr [edi + 0x40]
        and    eax, 0x100
        neg    eax
        sbb    eax, eax
        add    edx, eax
        add    edx, ecx
        push    edx
        mov    dword ptr [ebp + 0xc], eax
        push    0x76b9a8
        lea    eax, [ebp - 0x354]
        mov    dword ptr [ebp + 0x14], ecx
        push    eax
        call    dword ptr [g_0076b420]
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [edi + 0x28]
        mov    edx, dword ptr [ebp + 0x14]
        add    ecx, eax
        add    ecx, edx
        push    ecx
        lea    edx, [ebp - 0x454]
        push    0x76b9a8
        push    edx
        call    dword ptr [g_0076b420]
        add    esp, 0x3c
        call    FUN_006f5ed0
        lea    eax, [ebp - 0x154]
        push    eax
        mov    ecx, esi
        call    FUN_006f5ae0
        test    al, al
        jne    L_61a9
        mov    edx, dword ptr [esi]
        lea    eax, [ebp - 0x154]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 4]
        test    al, al
        jne    L_61a9
        lea    ecx, [ebp - 0x154]
        push    ecx
        push    0x7a12f0
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_64dd
        int 3    
        call    FUN_006f5ee0
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_61a9:
        mov    eax, dword ptr [edi + 0x40]
        push    eax
        lea    edx, [ebp - 0x54]
        push    0x772f4c
        push    edx
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        call    FUN_00707920
        push    eax
        lea    eax, [ebp - 0x38]
        push    0x772f4c
        push    eax
        call    dword ptr [g_0076b420]
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        lea    edx, [ebp - 0x1c]
        push    0x772f4c
        push    edx
        call    dword ptr [g_0076b420]
        mov    eax, dword ptr [esi]
        add    esp, 0x18
        push    0x76b768
        push    0x79faa0
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 8]
        mov    eax, dword ptr [g_00858920]
        mov    edx, dword ptr [esi]
        push    eax
        push    0x79fa90
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebx + 0x18b8]
        push    eax
        push    0x79fa48
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebx + 0x2c]
        push    eax
        push    0x79fa18
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebp - 0x38]
        push    eax
        push    0x79fa54
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebx + 0x1878]
        push    eax
        push    0x79fa10
        lea    eax, [ebp - 0x154]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebp - 0x354]
        push    eax
        push    0x79fa24
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebp - 0x1c]
        push    eax
        push    0x79fa84
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebp - 0x454]
        push    eax
        push    0x79fa60
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        push    0x76b768
        push    0x79fa2c
        lea    eax, [ebp - 0x154]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [edi + 4]
        test    ah, 4
        mov    edx, dword ptr [esi]
        je    L_62f1
        push    0x770d38
        jmp    L_62f6
L_62f1:
        push    0x770d24
L_62f6:
        push    0x79fa34
        lea    eax, [ebp - 0x154]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebp - 0x254]
        push    eax
        push    0x79fa78
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebx + 0x14]
        push    eax
        push    0x79fab8
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebp - 0x54]
        push    eax
        push    0x79fae0
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [ebx + 0x78]
        mov    edx, dword ptr [esi]
        push    eax
        push    0x79fad4
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebx + 0x1834]
        push    eax
        push    0x79fa2c
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        xor    eax, eax
        mov    al, byte ptr [ebp + 0xa]
        lea    edx, [ebp - 0x554]
        push    edx
        push    0x100
        push    eax
        push    0
        call    dword ptr [g_00858a2c]
        mov    edx, dword ptr [esi]
        add    esp, 0x10
        lea    eax, [ebp - 0x554]
        push    eax
        push    0x79fa6c
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        push    0x7a12ec
        push    0x79fac8
        lea    eax, [ebp - 0x154]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        push    0x79fb4c
        push    0x79fafc
        lea    eax, [ebp - 0x154]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebx + 0x18f8]
        push    eax
        push    0x79fb0c
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebx + 0x1938]
        push    eax
        push    0x79fb1c
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        lea    eax, [ebx + 0x1978]
        push    eax
        push    0x79fb24
        lea    ecx, [ebp - 0x154]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        lea    edx, [ebp - 0x154]
        push    edx
        mov    ecx, esi
        call    FUN_006f6410
        mov    esi, eax
        test    esi, esi
        je    L_64dd
        mov    ecx, esi
        call    FUN_006f59f0
        mov    eax, dword ptr [ebx + 0x1874]
        xor    edi, edi
        test    eax, eax
        jle    L_64dd
        lea    eax, [ebx + 0x1234]
        mov    dword ptr [ebp + 0xc], eax
L_6469:
        push    edi
        lea    ecx, [ebp + 0x14]
        push    0x77b35c
        push    ecx
        call    dword ptr [g_0076b420]
        mov    edx, dword ptr [esi]
        add    esp, 0xc
        lea    eax, [ebp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [esi]
        add    eax, 0xfffffa00
        push    eax
        push    0x79fb68
        lea    ecx, [ebp + 0x14]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [esi]
        push    eax
        push    0x79fb70
        lea    ecx, [ebp + 0x14]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esi]
        push    0x7a12ec
        push    0x79fb7c
        lea    eax, [ebp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ebx + 0x1874]
        inc    edi
        add    ecx, 0x40
        cmp    edi, eax
        mov    dword ptr [ebp + 0xc], ecx
        jl    L_6469
L_64dd:
        call    FUN_006f5ee0
L_64e2:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    al, byte ptr [esi + 0x70]
        xor    ebx, ebx
        cmp    al, bl
        je    L_650f
        mov    eax, dword ptr [esi + 0x6c]
        push    eax
        call    dword ptr [g_0076b0ec]
        mov    dword ptr [esi + 0x6c], ebx
        mov    byte ptr [esi + 0x70], bl
L_650f:
        mov    eax, dword ptr [esi + 0x68]
        cmp    eax, ebx
        je    L_651c
        push    eax
        call    FUN_00705910
L_651c:
        mov    eax, dword ptr [esi + 0x28]
        cmp    eax, ebx
        je    L_652c
        mov    ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov    dword ptr [esi + 0x28], ebx
L_652c:
        mov    eax, dword ptr [esi + 0x28]
        cmp    eax, ebx
        je    L_653c
        mov    edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov    dword ptr [esi + 0x28], ebx
L_653c:
        pop    esi
        mov    al, 1
        pop    ebx
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
        mov    eax, dword ptr [esp + 4]
        add    eax, 0x4a
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 1
        ret    4
    }
}
