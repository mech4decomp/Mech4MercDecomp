/*
 * FUN_00583277 (extent 0x583277-0x58344c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d048;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f1f84;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00583450(void);
extern void __cdecl FUN_00590c10(void);
extern void __cdecl FUN_005f79d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00583277(void)
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
        push    eax
        call    FUN_006f4950
        push    0x9e4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_32bb
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f1f84]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00583450
        mov    esi, eax
        jmp    L_32bd
L_32bb:
        xor    esi, esi
L_32bd:
        call    FUN_006f49a0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 4]
        mov    eax, esi
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
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0x158
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_005f79d0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    esi, eax
        mov    eax, dword ptr [edi + 0x408]
        fld    dword ptr [eax + 0x4c]
        mov    dword ptr [esi], 0x158
        fstp    dword ptr [esi + 0x148]
        fld    dword ptr [eax + 0x54]
        fstp    dword ptr [esi + 0x14c]
        fld    dword ptr [eax + 0x58]
        mov    al, byte ptr [edi + 0x510]
        mov    byte ptr [esi + 0x154], al
        mov    eax, dword ptr [edi + 0x3bc]
        cdq    
        and    edx, 3
        add    eax, edx
        sar    eax, 2
        fstp    dword ptr [esi + 0x150]
        mov    dword ptr [esi + 0x134], eax
        jns    L_3372
        mov    dword ptr [esi + 0x134], 0
        jmp    L_3381
L_3372:
        cmp    eax, 0x64
        jle    L_3381
        mov    dword ptr [esi + 0x134], 0x64
L_3381:
        mov    edx, dword ptr [edi + 0x78]
        mov    ebp, dword ptr [edi + 0x504]
        lea    ecx, [edi + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [ebp + 0x18c]
        mov    ebx, eax
        fsub    dword ptr [ebx + 0x2c8]
        fld    dword ptr [ebx + 0x2bc]
        fsub    dword ptr [ebx + 0x2c8]
        fdivp st(1), st(0)
        fmul    dword ptr [g_0076d048]
        call    FUN_0075db4a
        xor    ebp, ebp
        cmp    eax, ebp
        mov    dword ptr [esi + 0x138], eax
        jge    L_33cb
        mov    dword ptr [esi + 0x138], ebp
        jmp    L_33da
L_33cb:
        cmp    eax, 0x64
        jle    L_33da
        mov    dword ptr [esi + 0x138], 0x64
L_33da:
        mov    eax, dword ptr [edi + 0x9a4]
        fld    dword ptr [eax + 0x1b0]
        call    FUN_0075db4a
        lea    eax, [eax + eax*4]
        cmp    eax, ebp
        mov    dword ptr [esi + 0x140], eax
        jge    L_3400
        mov    dword ptr [esi + 0x140], ebp
        jmp    L_340f
L_3400:
        cmp    eax, 0x64
        jle    L_340f
        mov    dword ptr [esi + 0x140], 0x64
L_340f:
        mov    ecx, edi
        call    FUN_00590c10
        cmp    eax, ebp
        mov    dword ptr [esi + 0x13c], eax
        jge    L_3428
        mov    dword ptr [esi + 0x13c], ebp
        jmp    L_3437
L_3428:
        cmp    eax, 0x64
        jle    L_3437
        mov    dword ptr [esi + 0x13c], 0x64
L_3437:
        mov    ecx, dword ptr [ebx + 0x634]
        pop    edi
        mov    dword ptr [esi + 0x144], ecx
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
