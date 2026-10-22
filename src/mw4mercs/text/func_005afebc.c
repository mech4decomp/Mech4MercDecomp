/*
 * FUN_005afebc (extent 0x5afebc-0x5b005c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077b640;
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005b0100(void);
extern void __cdecl FUN_005b0240(void);
extern void __cdecl FUN_005b12e0(void);
extern void __cdecl FUN_005b4470(void);

__declspec(naked) void FUN_005afebc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    dword ptr [ecx + 0x61c], eax
        mov    dword ptr [ecx + 0x5f4], eax
        mov    byte ptr [ecx + 0x624], al
        mov    dword ptr [ecx + 0x620], eax
        mov    eax, dword ptr [esp + 4]
        push    eax
        mov    dword ptr [ecx + 0x5e8], 4
        mov    byte ptr [ecx + 0x608], 1
        call    FUN_005b12e0
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0xc
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005b4470
        mov    al, byte ptr [esi + 0x608]
        test    al, al
        je    L_ffb4
        mov    al, byte ptr [esi + 0x609]
        test    al, al
        je    L_ffb4
        mov    edx, dword ptr [esi + 0x5f8]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x50
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00419480
        mov    edx, dword ptr [esi + 0x5fc]
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x50
        mov    dword ptr [esi + 0x60c], ecx
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00419480
        mov    edx, dword ptr [esi + 0x600]
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x50
        mov    dword ptr [esi + 0x610], ecx
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00419480
        mov    edx, dword ptr [esi + 0x604]
        mov    eax, dword ptr [edx + 0xd8]
        mov    ecx, dword ptr [esp + 0xc]
        add    eax, 0x50
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esi + 0x614], ecx
        mov    dword ptr [esi + 0x618], eax
L_ffb4:
        mov    ecx, dword ptr [esi + 0xe0]
        push    edi
        mov    edi, dword ptr [ecx + 0x14]
        lea    ecx, [esi + 0x54c]
        mov    byte ptr [esi + 0x608], 0
        call    FUN_0041fd80
        test    eax, eax
        je    L_ffeb
        fld    qword ptr [esi + 0x61c]
        fadd    qword ptr [g_0077b640]
        fcomp    qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        je    L_0016
L_ffeb:
        mov    al, byte ptr [esi + 0x624]
        test    al, al
        je    L_0016
        mov    cl, byte ptr [esi + 0x514]
        test    cl, cl
        mov    al, 1
        je    L_0009
        mov    byte ptr [esi + 0x53e], al
        jmp    L_0010
L_0009:
        mov    byte ptr [esi + 0x53e], 0
L_0010:
        mov    byte ptr [esi + 0x53d], al
L_0016:
        fld    qword ptr [esp + 0x18]
        mov    eax, edi
        sub    eax, 0x17
        fsub    qword ptr [esi + 0xe4]
        pop    edi
        je    L_003f
        dec    eax
        jne    L_0053
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005b0240
        pop    esi
        add    esp, 0xc
        ret    8
L_003f:
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005b0100
        pop    esi
        add    esp, 0xc
        ret    8
L_0053:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    esi
        add    esp, 0xc
        ret    8
    }
}
