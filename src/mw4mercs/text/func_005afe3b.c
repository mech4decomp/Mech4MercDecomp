/*
 * FUN_005afe3b (extent 0x5afe3b-0x5b003f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077b640;
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005b0240(void);
extern void __cdecl FUN_005b12e0(void);
extern void __cdecl FUN_005b1300(void);
extern void __cdecl FUN_005b4470(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_005b003f(void);
extern void __cdecl FUN_005b0053(void);

__declspec(naked) void FUN_005afe3b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        push    edi
        lea    edi, [ecx + 0x370]
        lea    esi, [ecx + 0x30c]
        mov    ebx, 0xc
L_fe55:
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esi], 0xbf800000
        mov    dword ptr [esp + 0x10], 0
        call    FUN_00416b60
        test    eax, eax
        je    L_fe7d
        mov    ecx, dword ptr [eax + 0x48]
        mov    dword ptr [esi], ecx
        mov    dword ptr [eax + 0x3c], esi
        jmp    L_fe83
L_fe7d:
        mov    dword ptr [esi], 0xbf800000
L_fe83:
        add    esi, 4
        dec    ebx
        jne    L_fe55
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    esi
        push    0x76d414
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fea8
        int 3    
L_fea8:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005b1300
        pop    esi
        pop    ebp
        ret    8
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
        __emit 0x74  // je short FUN_005b003f - MSVC6 emits rel32 (0f 84) for extern fn; ref uses 74 17
        __emit 0x17
        dec    eax
        __emit 0x75  // jne short FUN_005b0053 - MSVC6 emits rel32 (0f 85) for extern fn; ref uses 75 28
        __emit 0x28
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005b0240
        pop    esi
        add    esp, 0xc
        ret    8
    }
}
