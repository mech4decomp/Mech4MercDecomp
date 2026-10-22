/*
 * FUN_0051f845 (extent 0x51f845-0x51fe64) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041dac0(void);
extern void __cdecl FUN_0041db80(void);
extern void __cdecl FUN_0041dbe0(void);
extern void __cdecl FUN_0041dc10(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_0051fe70(void);
extern void __cdecl FUN_00520f80(void);
extern void __cdecl FUN_00544690(void);
extern void __cdecl FUN_005446c0(void);
extern void __cdecl FUN_00544800(void);
extern void __cdecl FUN_005449f0(void);
extern void __cdecl FUN_006fb780(void);
extern void __cdecl FUN_006fbce0(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_00704820(void);

__declspec(naked) void FUN_0051f845(void)
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
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [ecx]
        cmp    esi, 0xff
        jle    L_f867
        xor    eax, eax
        pop    esi
        ret    0xc
L_f867:
        cmp    esi, 2
        jge    L_f872
        xor    eax, eax
        pop    esi
        ret    0xc
L_f872:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jne    L_f897
        pop    esi
        ret    0xc
L_f897:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_00544800
        mov    eax, 1
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [ecx]
        cmp    esi, 0xff
        jle    L_f8d7
        xor    eax, eax
        pop    esi
        ret    0xc
L_f8d7:
        cmp    esi, 0x15
        jge    L_f8e2
        xor    eax, eax
        pop    esi
        ret    0xc
L_f8e2:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jne    L_f907
        pop    esi
        ret    0xc
L_f907:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_005449f0
        mov    eax, 1
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [ecx]
        cmp    esi, 0xff
        jle    L_f947
        xor    eax, eax
        pop    esi
        ret    0xc
L_f947:
        cmp    esi, 2
        jge    L_f952
        xor    eax, eax
        pop    esi
        ret    0xc
L_f952:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jne    L_f977
        pop    esi
        ret    0xc
L_f977:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        push    1
        push    esi
        xor    ecx, 0x85739531
        call    FUN_005446c0
        mov    eax, 1
        pop    esi
        ret    0xc
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [ecx]
        cmp    esi, 0xff
        jle    L_f9b7
        xor    eax, eax
        pop    esi
        ret    0xc
L_f9b7:
        cmp    esi, 2
        jge    L_f9c2
        xor    eax, eax
        pop    esi
        ret    0xc
L_f9c2:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jne    L_f9e7
        pop    esi
        ret    0xc
L_f9e7:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_00544690
        mov    eax, 1
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [ecx]
        cmp    esi, 0xff
        jle    L_fa27
        xor    eax, eax
        pop    esi
        ret    0xc
L_fa27:
        cmp    esi, 1
        jge    L_fa32
        xor    eax, eax
        pop    esi
        ret    0xc
L_fa32:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jne    L_fa57
        pop    esi
        ret    0xc
L_fa57:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, esi
        shl    eax, 7
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        add    eax, esi
        shl    eax, 3
        sub    eax, esi
        xor    ecx, ecx
        xor    edx, 0x85739531
        mov    cl, byte ptr [edx + eax*8 + 0x3540]
        pop    esi
        mov    eax, ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        xor    eax, eax
        mov    al, byte ptr [edx + 0x308c]
        ret    0xc
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
        mov    eax, dword ptr [g_007dd268]
        test    eax, eax
        je    L_fafc
        mov    eax, dword ptr [eax + 0x40ee8]
        mov    ecx, dword ptr [eax + 0x84]
        test    ecx, ecx
        je    L_fafc
        mov    ecx, dword ptr [eax + 0x68]
        test    ecx, ecx
        je    L_fafc
        cmp    byte ptr [ecx], 0
        je    L_fafc
        mov    eax, dword ptr [eax + 0x80]
        test    eax, eax
        je    L_fafc
        cmp    byte ptr [eax], 0
        je    L_fafc
        mov    eax, 1
        ret    0xc
L_fafc:
        xor    eax, eax
        ret    0xc
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
        mov    eax, dword ptr [g_007dd268]
        sub    esp, 0x400
        test    eax, eax
        je    L_fb65
        mov    ecx, dword ptr [eax + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x80]
        test    edx, edx
        je    L_fb65
        mov    edx, ecx
        mov    eax, dword ptr [edx + 0x80]
        push    eax
        lea    ecx, [esp + 4]
        push    0x77a10c
        push    ecx
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        push    3
        call    FUN_00704820
        mov    eax, 1
        add    esp, 0x400
        ret    0xc
L_fb65:
        xor    eax, eax
        add    esp, 0x400
        ret    0xc
        sub    esp, 0x34
        push    edi
        mov    edi, ecx
        push    0x77a0c8
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x30], edi
        mov    byte ptr [esp + 0xb], 0
        call    FUN_00412570
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jne    L_fbaa
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fb780
        mov    byte ptr [esp + 7], 1
L_fbaa:
        mov    edx, dword ptr [esp + 0x10]
        push    ebx
        push    esi
        push    0x772548
        push    edx
        lea    ecx, [esp + 0x2c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        lea    ecx, [esp + 0x24]
        call    FUN_0040d9b0
        push    0x38
        call    FUN_004084d0
        xor    esi, esi
        add    esp, 4
        cmp    eax, esi
        je    L_fbf4
        mov    ecx, dword ptr [esp + 0x18]
        push    1
        push    ecx
        mov    ecx, eax
        call    FUN_0041d890
        mov    ebx, eax
        jmp    L_fbf6
L_fbf4:
        xor    ebx, ebx
L_fbf6:
        mov    ecx, ebx
        call    FUN_0041db80
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        cmp    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x20], esi
        mov    dword ptr [esp + 0x38], esi
        mov    dword ptr [esp + 0x3c], esi
        je    L_fdbb
        push    ebp
L_fc1e:
        push    0x77a0c8
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        lea    ecx, [esp + 0x2c]
        call    FUN_0040d9b0
        mov    ecx, dword ptr [esp + 0x14]
        push    0x77a150
        push    ecx
        lea    ecx, [esp + 0x38]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        lea    ecx, [esp + 0x30]
        call    FUN_0040d9b0
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fc98
        mov    edx, dword ptr [esp + 0x14]
        push    0
        push    edx
        mov    ecx, eax
        call    FUN_0041d890
        mov    ebp, eax
        jmp    L_fc9a
L_fc98:
        xor    ebp, ebp
L_fc9a:
        mov    eax, dword ptr [ebp + 4]
        test    eax, eax
        mov    dword ptr [esp + 0x20], eax
        je    L_fca8
        inc    byte ptr [eax - 1]
L_fca8:
        mov    ecx, ebp
        call    FUN_0041dc10
        push    eax
        lea    ecx, [esp + 0x2c]
        call    FUN_00412570
        mov    eax, dword ptr [esp + 0x28]
        test    eax, eax
        je    L_fd29
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x3c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x34]
        test    eax, eax
        je    L_fcf5
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fcf5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fcf5:
        mov    ecx, dword ptr [esp + 0x20]
        push    ecx
        call    FUN_006fbce0
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x40]
        mov    edi, edx
        cmp    edi, eax
        jl    L_fd29
        jg    L_fd13
        cmp    esi, dword ptr [esp + 0x3c]
        jbe    L_fd29
L_fd13:
        lea    edx, [esp + 0x18]
        push    edx
        lea    ecx, [esp + 0x28]
        call    FUN_00412740
        mov    dword ptr [esp + 0x3c], esi
        mov    dword ptr [esp + 0x40], edi
L_fd29:
        test    ebp, ebp
        je    L_fd3d
        mov    ecx, ebp
        call    FUN_0041dac0
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_fd3d:
        mov    ecx, ebx
        call    FUN_0041dbe0
        mov    ecx, ebx
        call    FUN_0041db80
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412780
        mov    eax, dword ptr [esp + 0x28]
        test    eax, eax
        je    L_fd70
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fd70
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fd70:
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_fd8b
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fd8b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fd8b:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_fda6
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fda6
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fda6:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        jne    L_fc1e
        mov    esi, dword ptr [esp + 0x3c]
        mov    edi, dword ptr [esp + 0x38]
        pop    ebp
L_fdbb:
        test    ebx, ebx
        je    L_fdcf
        mov    ecx, ebx
        call    FUN_0041dac0
        push    ebx
        call    FUN_004084e0
        add    esp, 4
L_fdcf:
        or    esi, dword ptr [esp + 0x3c]
        pop    esi
        pop    ebx
        je    L_fddf
        mov    al, byte ptr [esp + 7]
        test    al, al
        je    L_fe02
L_fddf:
        push    0
        push    0
        push    1
        push    0x13ec
        push    0x772c5c
        push    0x772c5c
        mov    ecx, edi
        call    FUN_00520f80
        push    0x772c5c
        jmp    L_fe07
L_fe02:
        mov    eax, dword ptr [esp + 0x18]
        push    eax
L_fe07:
        mov    ecx, edi
        call    FUN_0051fe70
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        pop    edi
        je    L_fe2a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fe2a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fe2a:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_fe45
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fe45
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fe45:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_fe60
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fe60
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fe60:
        add    esp, 0x34
        ret    
    }
}
