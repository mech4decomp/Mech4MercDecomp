/*
 * FUN_004084eb (extent 0x4084eb-0x408b5f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_0040e500(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_0040edc0(void);
extern void __cdecl FUN_0040eef0(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_00411ba0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411c80(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_00411f50(void);
extern void __cdecl FUN_004123f0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006fb7c0(void);

__declspec(naked) void FUN_004084eb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006f4230
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x144
        push    0
        lea    ecx, [esp + 0x58]
        call    FUN_0040dd50
        mov    eax, dword ptr [g_007b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_8541
        lea    ecx, [esp + 0x98]
        mov    dword ptr [eax + 4], ecx
        mov    edx, dword ptr [esp + 0x98]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        jmp    L_8543
L_8541:
        xor    eax, eax
L_8543:
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_004084e0
        add    esp, 4
        push    0x76cd50
        lea    ecx, [esp + 0x68]
        call    FUN_0040e500
        push    0x76cd48
        lea    ecx, [esp + 0x68]
        call    FUN_0040edc0
        mov    ebx, eax
        push    0x76cd3c
        push    0x76cd34
        mov    ecx, ebx
        call    FUN_00411c40
        push    0x76cd48
        lea    ecx, [esp + 0x68]
        call    FUN_0040ecc0
        push    0x76cd2c
        push    0x76cd24
        mov    ecx, ebx
        call    FUN_00411c40
        push    0x76cd1c
        lea    ecx, [esp + 0x68]
        call    FUN_0040edc0
        mov    edi, eax
        push    0x76cd18
        push    0x76cd10
        mov    ecx, edi
        call    FUN_00411c40
        push    0x76cd08
        lea    ecx, [esp + 0x68]
        call    FUN_0040edc0
        mov    esi, eax
        push    0x76ccfc
        push    0x76ccf4
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76ccec
        lea    ecx, [esp + 0x68]
        call    FUN_0040edc0
        push    0x76cce0
        push    0x76ccd8
        mov    ecx, ebx
        mov    ebp, eax
        call    FUN_00411c40
        push    0x76ccfc
        push    0x76cd34
        mov    ecx, edi
        call    FUN_00411c40
        push    1
        push    0x76cd10
        mov    ecx, esi
        call    FUN_00411f20
        push    0x76cccc
        push    0x76ccd8
        mov    ecx, ebp
        call    FUN_00411c40
        push    0x76ccc4
        lea    ecx, [esp + 0x68]
        call    FUN_0040edc0
        push    0x76cd3c
        push    0x76cd10
        mov    ecx, eax
        mov    dword ptr [esp + 0x18], eax
        call    FUN_00411c40
        push    0
        push    0x76cd24
        mov    ecx, esi
        call    FUN_00411f20
        push    0
        lea    ecx, [esp + 0x18]
        call    FUN_0040dd50
        push    0x76ccb8
        lea    ecx, [esp + 0x18]
        call    FUN_0040edc0
        push    0x76cd3c
        push    0x76ccb0
        mov    ecx, eax
        call    FUN_00411c40
        lea    eax, [esp + 0x14]
        push    eax
        push    0x76cd24
        mov    ecx, edi
        call    FUN_004123f0
        push    0x76ccb0
        mov    ecx, ebp
        call    FUN_00411ba0
        push    0x76cd10
        mov    ecx, edi
        call    FUN_00411ba0
        push    0x76ccac
        push    0x76ccb0
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cccc
        push    0x76ccd8
        mov    ecx, ebx
        call    FUN_00411c40
        push    0x76cd18
        push    0x76ccb0
        mov    ecx, edi
        call    FUN_00411c40
        mov    ecx, dword ptr [esp + 0x10]
        push    0x76ccfc
        push    0x76cd10
        call    FUN_00411c80
        push    0x76cca8
        push    0x76ccd8
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cce0
        push    0x76ccb0
        mov    ecx, ebp
        call    FUN_00411c40
        push    0x76cd2c
        push    0x76cca0
        mov    ecx, edi
        call    FUN_00411c40
        push    1
        push    0x76cca0
        mov    ecx, esi
        call    FUN_00411f50
        push    0x76cd18
        push    0x76cd24
        mov    ecx, ebp
        call    FUN_00411c40
        push    0
        push    0x76cd34
        mov    ecx, esi
        call    FUN_00411f20
        push    0x76cd50
        lea    ecx, [esp + 0x68]
        call    FUN_0040e500
        mov    ecx, dword ptr [g_007b8810]
        push    ecx
        push    0xc
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_879a
        lea    edx, [esp + 0xa8]
        mov    dword ptr [eax + 4], edx
        mov    ecx, dword ptr [esp + 0xa8]
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x76cd64
        jmp    L_879c
L_879a:
        xor    eax, eax
L_879c:
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_87a9
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], edx
L_87a9:
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_87b6
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], ecx
L_87b6:
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_87c3
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], edx
L_87c3:
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_87d0
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], ecx
L_87d0:
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_87dd
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], edx
L_87dd:
        push    eax
        call    FUN_004084e0
        mov    eax, dword ptr [g_007b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add    esp, 0xc
        test    eax, eax
        je    L_8813
        lea    ecx, [esp + 0xa8]
        mov    dword ptr [eax + 4], ecx
        mov    edx, dword ptr [esp + 0xa8]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        jmp    L_8815
L_8813:
        xor    eax, eax
L_8815:
        push    eax
        call    FUN_004084e0
        add    esp, 4
        push    0
        push    0
        push    0x76cd50
        lea    ecx, [esp + 0xc0]
        call    FUN_0040dca0
        push    0x76ccc4
        lea    ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        push    0xc
        mov    esi, eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8867
        lea    ecx, [esi + 0x18]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x76cc9c
        jmp    L_8869
L_8867:
        xor    eax, eax
L_8869:
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_8876
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], edx
L_8876:
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_8883
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], ecx
L_8883:
        push    eax
        call    FUN_004084e0
        add    esp, 4
        push    0x76cc94
        lea    ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        push    0x76cd48
        lea    ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        push    0x76cd1c
        lea    ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        push    0x76cd08
        lea    ecx, [esp + 0xb8]
        mov    esi, eax
        call    FUN_0040ecc0
        push    0
        lea    ecx, [esp + 0x108]
        call    FUN_0040dd50
        push    0x76ccb8
        lea    ecx, [esp + 0x108]
        call    FUN_0040ecc0
        push    0x76cd48
        lea    ecx, [esp + 0xb8]
        call    FUN_0040eef0
        push    0x76ccb0
        mov    ecx, esi
        call    FUN_00411ba0
        push    0xc
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8930
        mov    edx, dword ptr [esi + 0x18]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cc9c
        jmp    L_8932
L_8930:
        xor    eax, eax
L_8932:
        push    eax
        call    FUN_004084e0
        add    esp, 4
        lea    ecx, [esp + 0x104]
        mov    byte ptr [esp + 0xb8], 0
        call    FUN_0040de20
        lea    ecx, [esp + 0xb4]
        call    FUN_0040de20
        lea    ecx, [esp + 0x14]
        call    FUN_0040de20
        lea    ecx, [esp + 0x64]
        call    FUN_0040de20
        push    0
        lea    ecx, [esp + 0x18]
        call    FUN_0040dd50
        push    0x76cd1c
        lea    ecx, [esp + 0x18]
        call    FUN_0040edc0
        mov    esi, eax
        push    0x76cc84
        push    0x76cc74
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cc6c
        push    0x76cc64
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cc50
        mov    ecx, esi
        call    FUN_00411b00
        push    0x76cc3c
        push    0x76cc30
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cd50
        push    0x76cc28
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cc1c
        lea    ecx, [esp + 0x18]
        call    FUN_0040e500
        lea    ecx, [esp + 0x14]
        call    FUN_0040de20
        push    0
        lea    ecx, [esp + 0x18]
        call    FUN_0040dd50
        push    0x76cc14
        lea    ecx, [esp + 0x18]
        call    FUN_0040edc0
        mov    esi, eax
        push    0x76cc08
        push    0x76cc00
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cbf4
        push    0x76cbec
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cbdc
        push    0x76cbd0
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cbb8
        push    0x76cba8
        mov    ecx, esi
        call    FUN_00411c40
        push    0x76cba0
        lea    ecx, [esp + 0x18]
        call    FUN_0040e500
        lea    ecx, [esp + 0x14]
        call    FUN_0040de20
        push    0
        push    2
        push    0x76cc1c
        lea    ecx, [esp + 0x20]
        call    FUN_0040dca0
        push    0x76cc14
        lea    ecx, [esp + 0x18]
        call    FUN_0040ecc0
        push    0x76cd1c
        lea    ecx, [esp + 0x18]
        call    FUN_0040ecc0
        lea    ecx, [esp + 0x14]
        call    FUN_0040de20
        push    0
        push    0
        push    0x76cc1c
        lea    ecx, [esp + 0x20]
        call    FUN_0040dca0
        push    0x76cd50
        lea    ecx, [esp + 0x18]
        call    FUN_0040e500
        push    0x76cc14
        lea    ecx, [esp + 0x18]
        call    FUN_0040ecc0
        lea    ecx, [esp + 0x14]
        call    FUN_0040de20
        push    0x76cc1c
        call    FUN_006fb7c0
        push    0x76cba0
        call    FUN_006fb7c0
        push    0x76cd50
        call    FUN_006fb7c0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x144
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_8b2b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        pop    esi
        ret    
L_8b2b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_8b5b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cc9c
        pop    esi
        ret    
L_8b5b:
        xor    eax, eax
        pop    esi
        ret    
    }
}
