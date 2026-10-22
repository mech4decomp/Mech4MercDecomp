/*
 * FUN_00556268 (extent 0x556268-0x5564f4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc6b4;
extern char   g_007ddd78;
extern int    g_007f1f84;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004de980(void);
extern void __cdecl FUN_005acdb0(void);
extern void __cdecl FUN_00628d70(void);
extern void __cdecl FUN_00629290(void);

__declspec(naked) void FUN_00556268(void)
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
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_628f
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_628f
        mov    edx, dword ptr [ecx]
        push    0
        call    dword ptr [edx + 0xa4]
L_628f:
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
        nop    
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_62bf
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_62bf
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0xa4]
L_62bf:
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
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_62f7
        mov    al, byte ptr [ecx + 0x4b1]
        test    al, al
        sete    dl
        mov    byte ptr [ecx + 0x4b1], dl
        mov    ecx, dword ptr [g_007dc6b4]
        call    FUN_004de980
L_62f7:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jle    L_6344
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    cl, byte ptr [edx + 0x17]
        test    cl, cl
        je    L_6344
        mov    ecx, dword ptr [eax + 0x40]
        push    0xd
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    cl, byte ptr [eax + 0x6e]
        test    cl, cl
        sete    cl
        mov    byte ptr [eax + 0x6e], cl
L_6344:
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
        push    esi
        mov    esi, dword ptr [ecx + 0x384]
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_63a1
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_63a1
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        jne    L_63a1
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jle    L_63a1
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_63a1
        mov    ecx, dword ptr [esi + 0x408]
        test    ecx, ecx
        je    L_63a1
        call    FUN_005acdb0
L_63a1:
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
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_6427
        mov    dl, byte ptr [ecx + 0x589]
        test    dl, dl
        jne    L_6427
        mov    dl, byte ptr [ecx + 0x5ac]
        test    dl, dl
        jne    L_6427
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x10]
        test    edx, edx
        jle    L_6427
        mov    cl, byte ptr [eax + 0x2f8]
        test    cl, cl
        jne    L_6427
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        add    eax, 0x40
        xor    ecx, 0x85739531
        je    L_6427
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    al, byte ptr [ecx + 0x16a]
        test    al, al
        sete    al
        mov    byte ptr [ecx + 0x16a], al
        push    eax
        call    FUN_00628d70
L_6427:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_64a2
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_64a2
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        jne    L_64a2
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jle    L_64a2
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx]
        xor    eax, edx
        mov    edx, dword ptr [eax + 0x40]
        xor    edx, 0x85739531
        je    L_64a2
        mov    ecx, dword ptr [eax + 0x40]
        push    8
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    cl, byte ptr [eax + 0x114]
        test    cl, cl
        sete    cl
        mov    byte ptr [eax + 0x114], cl
        mov    byte ptr [g_007ddd78], cl
L_64a2:
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_64f1
        mov    ecx, dword ptr [eax + 0x40]
        push    9
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    cl, byte ptr [eax + 0x50]
        test    cl, cl
        jne    L_64ee
        mov    cl, byte ptr [eax + 4]
        test    cl, cl
        je    L_64ee
        mov    eax, 1
        ret    
L_64ee:
        xor    eax, eax
        ret    
L_64f1:
        xor    al, al
        ret    
    }
}
