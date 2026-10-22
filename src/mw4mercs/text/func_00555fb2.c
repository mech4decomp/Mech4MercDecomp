/*
 * FUN_00555fb2 (extent 0x555fb2-0x5560f8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc700;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_00551c20(void);
extern void __cdecl FUN_005564b0(void);
extern void __cdecl FUN_006283b0(void);

__declspec(naked) void FUN_00555fb2(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_60f4
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_60f4
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_60f4
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle    L_60f4
        push    ebx
        lea    ebx, [esi + 0x6a0]
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcb0
        mov    ecx, dword ptr [esi + 0x6b0]
        push    0
        call    FUN_004c3d50
        lea    ecx, [esi + 0x65c]
        call    FUN_0041fd80
        mov    edi, eax
        test    edi, edi
        je    L_60d5
        mov    eax, dword ptr [g_007dc700]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_60d5
        push    edi
        mov    ecx, esi
        call    FUN_00551c20
        mov    edi, eax
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
        mov    ecx, esi
        call    FUN_005564b0
        test    al, al
        je    L_60c8
        mov    eax, dword ptr [edi + 0xd8]
        push    eax
        jmp    L_60ca
L_60c8:
        push    0
L_60ca:
        mov    ecx, dword ptr [esi + 0x6b0]
        call    FUN_004c3d50
L_60d5:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x40]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_006283b0
        pop    edi
        pop    ebx
L_60f4:
        pop    esi
        ret    4
    }
}
