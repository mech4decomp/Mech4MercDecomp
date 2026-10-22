/*
 * FUN_005e3fe7 (extent 0x5e3fe7-0x5e42e0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern char   g_007dc694;
extern int    g_007dc696;
extern int    g_007dd234;
extern int    g_007f2554;
extern int    g_007f268c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_004d62e0(void);
extern void __cdecl FUN_005e4080(void);
extern void __cdecl FUN_005e4360(void);
extern void __cdecl FUN_005e4400(void);
extern void __cdecl FUN_005e6590(void);
extern void __cdecl FUN_005ecef0(void);
extern void __cdecl FUN_005fb740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00767430(void);

__declspec(naked) void FUN_005e3fe7(void)
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
        nop    
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edi, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        lea    edx, [edi + 0x54]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004d62e0
        test    eax, eax
        je    L_403d
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        mov    ecx, eax
        mov    esi, eax
        call    FUN_005e4400
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_403d:
        push    0x2d4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4070
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f2554]
        push    0
        push    edx
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_005e4080
        mov    esi, eax
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_4070:
        xor    esi, esi
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        sub    esp, 0xc
        push    ebx
        mov    ebx, dword ptr [esp + 0x18]
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov    ecx, esi
        call    FUN_005ecef0
        lea    ebp, [esi + 0x258]
        push    0
        mov    ecx, ebp
        call    FUN_0041fc80
        lea    edi, [esi + 0x260]
        push    0
        mov    ecx, edi
        mov    dword ptr [ebp], 0x773328
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x786cb4
        xor    edi, edi
        mov    word ptr [esi + 0x2ce], 0xffff
        mov    word ptr [esi + 0x2d0], di
        mov    ecx, ebp
        mov    dword ptr [esi], 0x788fe8
        call    FUN_0041fcb0
        mov    eax, dword ptr [ebx + 0xb8]
        mov    ecx, dword ptr [ebx + 0xbc]
        mov    edx, dword ptr [ebx + 0xc0]
        mov    dword ptr [esi + 0x278], edi
        mov    dword ptr [esi + 0x27c], edi
        mov    dword ptr [esi + 0x280], edi
        lea    edi, [esi + 0x26c]
        mov    dword ptr [edi], eax
        mov    eax, dword ptr [ebx + 0xc4]
        add    ebx, 0xb4
        mov    dword ptr [edi + 4], ecx
        mov    cl, byte ptr [ebx]
        mov    dword ptr [esi + 0x294], eax
        cmp    cl, byte ptr [g_007dc694]
        mov    dword ptr [edi + 8], edx
        jne    L_414d
        mov    dx, word ptr [ebx + 2]
        cmp    dx, word ptr [g_007dc696]
        je    L_423a
L_414d:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0x14]
        xor    edx, edx
        mov    dl, byte ptr [ebx]
        xor    ecx, 0x85739531
        push    edx
        call    FUN_004cdfa0
        test    eax, eax
        je    L_423a
        push    ebx
        mov    ecx, eax
        call    FUN_004ceeb0
        mov    ebx, eax
        test    ebx, ebx
        je    L_423a
        mov    ecx, ebp
        call    FUN_0041fcb0
        push    ebx
        mov    ecx, ebp
        call    FUN_0041fcd0
        mov    ecx, dword ptr [edi + 4]
        mov    eax, dword ptr [edi]
        mov    edx, dword ptr [edi + 8]
        mov    dword ptr [esi + 0x27c], ecx
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [esi + 0x278], eax
        mov    eax, dword ptr [edi]
        mov    dword ptr [esi + 0x280], edx
        mov    edx, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x18], edx
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, edi
        call    FUN_0041c7d0
        mov    ecx, ebp
        call    FUN_0041fd80
        push    eax
        mov    ecx, esi
        call    FUN_005e6590
        lea    ebp, [esi + 0x260]
        mov    ecx, ebp
        mov    ebx, eax
        call    FUN_0041fcb0
        test    ebx, ebx
        je    L_4221
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_4221
        push    ebx
        mov    ecx, ebp
        call    FUN_0041fcd0
L_4221:
        mov    ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        je    L_423a
        mov    ecx, ebp
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005fb740
L_423a:
        mov    ecx, dword ptr [edi]
        mov    eax, dword ptr [edi + 8]
        mov    edx, dword ptr [edi + 4]
        mov    dword ptr [esi + 0x284], ecx
        mov    cx, word ptr [g_007db0ac]
        mov    dword ptr [esi + 0x28c], eax
        xor    eax, eax
        mov    dword ptr [esi + 0x290], eax
        mov    byte ptr [esi + 0x299], al
        mov    dword ptr [esi + 0x2b8], eax
        mov    dword ptr [esi + 0x2bc], eax
        mov    dword ptr [esi + 0x2c8], eax
        mov    byte ptr [esi + 0x2cc], al
        mov    dword ptr [esi + 0x288], edx
        mov    dx, word ptr [g_007db0ae]
        lea    eax, [esi + 0x1e0]
        mov    word ptr [esi + 0x2ce], cx
        push    eax
        lea    ecx, [esi + 0x29c]
        mov    byte ptr [esi + 0x298], 1
        mov    dword ptr [esi + 0x2c0], 0xbf19999a
        mov    dword ptr [esi + 0x2c4], 0x3f4ccccd
        mov    word ptr [esi + 0x2d0], dx
        call    FUN_00767430
        mov    ecx, esi
        mov    dword ptr [esi + 0x2b4], 0
        call    FUN_005e4360
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    0x10
    }
}
