/*
 * FUN_0054ad39 (extent 0x54ad39-0x54b111) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc6b4;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_004d96e0(void);
extern void __cdecl FUN_004f9b40(void);
extern void __cdecl FUN_0054a880(void);
extern void __cdecl FUN_00557f60(void);
extern void __cdecl FUN_006272d0(void);
extern void __cdecl FUN_00627530(void);
extern void __cdecl FUN_00637b10(void);
extern void __cdecl FUN_0072f090(void);

__declspec(naked) void FUN_0054ad39(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004d96e0
        cmp    dword ptr [esi + 0x568], 3
        mov    byte ptr [esi + 0x70c], 0
        jne    L_ad9b
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        mov    dword ptr [esi + 0x568], 0
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax + 0x28]
        mov    dword ptr [esi + 0x518], ecx
        mov    ecx, dword ptr [eax + 0x2c]
        add    eax, 0x54
        mov    dword ptr [esi + 0x520], ecx
        push    eax
        lea    ecx, [esi + 0x524]
        mov    dword ptr [esi + 0x51c], edx
        call    FUN_0041ac80
L_ad9b:
        mov    edx, dword ptr [esi + 0x568]
        push    edi
        mov    ecx, esi
        mov    dword ptr [esi + 0x564], edx
        call    FUN_0054a880
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x40]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x40]
        je    L_add7
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        call    FUN_00627530
L_add7:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xa8]
        mov    ecx, dword ptr [esi + 0x56c]
        mov    edx, dword ptr [esi + 0x570]
        mov    eax, dword ptr [esi + 0x574]
        mov    edi, dword ptr [g_007dab40]
        mov    dword ptr [esi + 0x518], ecx
        mov    dword ptr [esi + 0x51c], edx
        mov    ecx, dword ptr [esi + 0x57c]
        mov    dword ptr [esi + 0x528], ecx
        mov    edx, dword ptr [esi + 0x578]
        mov    ecx, dword ptr [g_007dab44]
        mov    dword ptr [esi + 0x520], eax
        mov    eax, dword ptr [esi + 0x580]
        mov    dword ptr [esi + 0x524], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esi + 0x52c], eax
        xor    edx, edi
        mov    eax, dword ptr [edx + 0xc]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x4c]
        cmp    dword ptr [ecx + 0x14], 5
        jne    L_ae64
        mov    eax, dword ptr [esi + 0x384]
        test    eax, eax
        je    L_ae64
        mov    edx, dword ptr [esi + 0x564]
        push    0
        push    edx
        mov    ecx, esi
        call    FUN_00557f60
L_ae64:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    0xb
        mov    dword ptr [esi], 0x77cd9c
        call    FUN_004c8e90
        add    esp, 4
        call    FUN_00637b10
        mov    eax, dword ptr [esi + 0x938]
        xor    ebx, ebx
        cmp    eax, ebx
        mov    dword ptr [esi + 0x2d0], ebx
        je    L_aea9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_aea9:
        lea    edi, [esi + 0x93c]
        mov    ebp, 6
L_aeb4:
        mov    eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        add    edi, 4
        dec    ebp
        jne    L_aeb4
        lea    eax, [esi + 0x2f0]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x10], 0x77d010
        mov    dword ptr [esi + 0x2f8], ebx
L_aee3:
        cmp    eax, ebx
        je    L_af04
        mov    edi, dword ptr [eax]
        cmp    edi, ebx
        je    L_af04
        lea    ecx, [esp + 0x10]
        call    FUN_00417ad0
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx]
        mov    eax, dword ptr [esp + 0x18]
        jmp    L_aee3
L_af04:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x40]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x40]
        je    L_af2e
        mov    ecx, dword ptr [eax]
        push    1
        xor    ecx, 0x85739531
        call    FUN_006272d0
L_af2e:
        lea    ebp, [esi + 0x318]
        mov    ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        je    L_af56
        mov    ecx, ebp
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xe0]
        mov    edx, dword ptr [eax]
        push    ebx
        push    5
        mov    ecx, eax
        call    dword ptr [edx + 4]
L_af56:
        mov    eax, dword ptr [g_007dc6b4]
        mov    eax, dword ptr [eax + 0x34]
        cmp    eax, ebx
        je    L_afdf
        cmp    byte ptr [eax + 0x50], bl
        je    L_afdf
        lea    ecx, [esi + 0x4b8]
        push    ecx
        call    FUN_0072f090
        lea    edx, [esi + 0x4bc]
        push    edx
        call    FUN_0072f090
        lea    eax, [esi + 0x4c0]
        push    eax
        call    FUN_0072f090
        lea    ecx, [esi + 0x4c4]
        push    ecx
        call    FUN_0072f090
        lea    edx, [esi + 0x4c8]
        push    edx
        call    FUN_0072f090
        lea    eax, [esi + 0x4cc]
        push    eax
        call    FUN_0072f090
        lea    ecx, [esi + 0x4d0]
        push    ecx
        call    FUN_0072f090
        lea    edx, [esi + 0x4d4]
        push    edx
        call    FUN_0072f090
        lea    eax, [esi + 0x4d8]
        push    eax
        call    FUN_0072f090
        lea    ecx, [esi + 0x4dc]
        push    ecx
        call    FUN_0072f090
L_afdf:
        lea    edi, [esi + 0x934]
        mov    ebx, 6
L_afea:
        sub    edi, 8
        mov    ecx, edi
        call    FUN_00417980
        dec    ebx
        jne    L_afea
        lea    edi, [esi + 0x80c]
        lea    ecx, [edi + 0x1c]
        call    FUN_0041fc90
        lea    ecx, [edi + 0x14]
        call    FUN_0041fc90
        mov    ecx, edi
        call    FUN_00415380
        lea    edi, [esi + 0x744]
        lea    ecx, [edi + 0x1c]
        call    FUN_0041fc90
        lea    ecx, [edi + 0x14]
        call    FUN_0041fc90
        mov    ecx, edi
        call    FUN_00415380
        lea    ecx, [esi + 0x738]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x730]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x728]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x720]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x718]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x710]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x6d0]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x6c8]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x6a8]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x6a0]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x690]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x688]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x680]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x66c]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x664]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x65c]
        call    FUN_0041fc90
        lea    ecx, [esi + 0x5b0]
        call    FUN_0041fc90
        mov    ecx, ebp
        call    FUN_0041fc90
        lea    ecx, [esi + 0x2f0]
        call    FUN_00417980
        mov    ecx, esi
        call    FUN_004f9b40
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        ret    
    }
}
