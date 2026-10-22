/*
 * FUN_005bec0a (extent 0x5bec0a-0x5bedf5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f1f84;
extern int    g_007f1fdc;
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004d93a0(void);
extern void __cdecl FUN_005e1340(void);
extern void __cdecl FUN_0061b160(void);
extern void __cdecl FUN_0061b210(void);
extern void __cdecl FUN_0067c550(void);

__declspec(naked) void FUN_005bec0a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    ebp, ecx
        mov    ecx, edi
        call    FUN_004d93a0
        cmp    eax, dword ptr [g_007f1f84]
        jne    L_ecd4
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007dab40]
        push    ebx
        lea    esi, [edi + 0x14]
        xor    ebx, ebx
        mov    bl, byte ptr [esi]
        xor    ecx, eax
        mov    ecx, dword ptr [ecx + 0x20]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp + ebx*4 + 0x530], edi
        add    edi, 0x2c
        push    edi
        push    esi
        call    dword ptr [edx + 0xb8]
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x16]
        test    al, al
        je    L_ec8c
        mov    ecx, dword ptr [ebp + 0x92c]
        test    ecx, ecx
        je    L_ec8c
        push    ebx
        call    FUN_0067c550
L_ec8c:
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [esi]
        xor    ecx, dword ptr [g_007dab40]
        pop    ebx
        mov    edi, eax
        mov    eax, dword ptr [ecx + 0xc]
        xor    eax, 0x85739531
        mov    esi, dword ptr [eax + 0x307c]
        test    esi, esi
        je    L_ed16
        mov    ecx, dword ptr [ecx + 0x14]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        mov    eax, dword ptr [eax + 0x30]
        push    edi
        push    eax
        mov    ecx, esi
        call    FUN_0061b160
        pop    edi
        pop    esi
        pop    ebp
        ret    4
L_ecd4:
        mov    ecx, edi
        call    FUN_004d93a0
        cmp    eax, dword ptr [g_007f1fdc]
        jne    L_ed16
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    al, byte ptr [ecx + 0x16]
        test    al, al
        je    L_ed16
        mov    ecx, dword ptr [ebp + 0x92c]
        test    ecx, ecx
        je    L_ed16
        xor    edx, edx
        mov    dl, byte ptr [edi + 0x14]
        push    edx
        call    FUN_0067c550
L_ed16:
        pop    edi
        pop    esi
        pop    ebp
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        push    ebx
        mov    ebx, dword ptr [g_007dab40]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, ebx
        mov    edx, dword ptr [ecx + 0xc]
        mov    ebx, dword ptr [esp + 0xc]
        lea    eax, [ecx + 0xc]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x307c]
        test    ecx, ecx
        je    L_ed66
        mov    edx, dword ptr [eax]
        xor    ecx, ecx
        mov    cl, byte ptr [ebx + 0x14]
        xor    edx, 0x85739531
        push    ecx
        mov    ecx, dword ptr [edx + 0x307c]
        call    FUN_0061b210
L_ed66:
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [g_007dab40]
        xor    ecx, ecx
        mov    cl, byte ptr [ebx + 0x14]
        push    esi
        lea    esi, [ebx + 0x14]
        xor    edx, eax
        mov    eax, ecx
        shl    eax, 7
        add    eax, ecx
        shl    eax, 3
        sub    eax, ecx
        mov    dword ptr [edi + ecx*4 + 0x530], 0
        mov    ecx, dword ptr [edx + 0xc]
        shl    eax, 3
        xor    ecx, 0x85739531
        mov    edi, dword ptr [ecx + eax + 0x3584]
        test    edi, edi
        je    L_edc5
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx + eax + 0x3584]
        mov    dword ptr [eax + 0x170], 0
L_edc5:
        mov    ecx, dword ptr [edx + 0x20]
        xor    ecx, 0x85739531
        je    L_ede2
        mov    ecx, dword ptr [edx + 0x20]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0xbc]
L_ede2:
        test    ebx, ebx
        pop    esi
        je    L_edf0
        push    ebx
        call    FUN_005e1340
        add    esp, 4
L_edf0:
        pop    edi
        pop    ebx
        ret    4
    }
}
