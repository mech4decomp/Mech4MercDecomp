/*
 * FUN_004fdbf5 (extent 0x4fdbf5-0x4fdf1c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab1c;
extern int    g_007dc8f0;
extern int    g_007dc8f4;
extern int    g_007dc8f8;
extern int    g_007dc8fc;
extern int    g_007dc900;
extern int    g_007dc904;
extern int    g_007dc908;
extern int    g_007dc90c;
extern int    g_007dc910;
extern int    g_007dc914;
extern int    g_007dc918;
extern int    g_007dc91c;
extern int    g_007dc920;
extern int    g_007dc924;
extern int    g_007dc928;
extern int    g_007dc92c;
extern int    g_007dc930;
extern int    g_007dc934;
extern int    g_007dc938;
extern int    g_007dc93c;
extern int    g_007dc940;
extern int    g_007dc944;
extern int    g_007dc948;
extern int    g_007dc94c;
extern int    g_007dc950;
extern char   g_007dc954;
extern char   g_007dc955;
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004fdbf5(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [ecx + 0x10]
        cmp    eax, ecx
        jne    L_dc17
        xor    eax, eax
        ret    8
L_dc17:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x10]
        cmp    eax, ecx
        jne    L_dc46
        xor    eax, eax
        ret    8
L_dc46:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        /* __emit: forward jmp to L_dc70; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_dc70:
        mov    dword ptr [g_007dc940], 0x3f000000
        mov    dword ptr [g_007dc944], 0x3f000000
        mov    dword ptr [g_007dc948], 0x3f800000
        mov    dword ptr [g_007dc94c], 0x3e99999a
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        /* __emit: forward jmp to L_dcb0; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_dcb0:
        mov    dword ptr [g_007dc930], 0x3f000000
        mov    dword ptr [g_007dc934], 0x3f800000
        mov    dword ptr [g_007dc938], 0x3f000000
        mov    dword ptr [g_007dc93c], 0x3e99999a
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        /* __emit: forward jmp to L_dcf0; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_dcf0:
        sub    esp, 0x10
        __emit 0xC7  // mov dword ptr [esp], 0x3f800000 (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x80
__emit 0x3F
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    dword ptr [g_007dc8f0], eax
        mov    dword ptr [esp + 4], 0x3f000000
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [esp + 8], 0x3f000000
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [esp + 0xc], 0x3e99999a
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [g_007dc8f4], ecx
        mov    dword ptr [g_007dc8f8], edx
        mov    dword ptr [g_007dc8fc], eax
        __emit 0xC7  // mov dword ptr [esp], 0x3f800000 (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x80
__emit 0x3F
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        mov    dword ptr [esp + 4], 0x3f800000
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [esp + 8], 0x3f000000
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [g_007dc900], ecx
        mov    dword ptr [g_007dc904], edx
        mov    dword ptr [g_007dc908], eax
        mov    dword ptr [esp + 0xc], 0x3e99999a
        mov    ecx, dword ptr [esp + 0xc]
        __emit 0xC7  // mov dword ptr [esp], 0x3f000000 (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x3F
        __emit 0x8B  // 139 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        mov    dword ptr [esp + 4], 0x3f000000
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [g_007dc90c], ecx
        mov    dword ptr [esp + 8], 0x3f000000
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [esp + 0xc], 0x3e99999a
        mov    dword ptr [g_007dc910], edx
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [g_007dc914], eax
        __emit 0xC7  // mov dword ptr [esp], 0x3f800000 (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x80
__emit 0x3F
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    dword ptr [g_007dc918], ecx
        mov    dword ptr [g_007dc91c], edx
        mov    dword ptr [esp + 4], 0x3f800000
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [esp + 8], 0x3f800000
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [esp + 0xc], 0x3e99999a
        mov    dword ptr [g_007dc920], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [g_007dc924], ecx
        mov    dword ptr [g_007dc928], edx
        mov    dword ptr [g_007dc92c], eax
        add    esp, 0x10
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
        nop    
        push    0
        push    0
        push    0x4fde80
        push    0x4fde60
        push    0x7760e4
        call    FUN_0070f090
        push    0
        push    0
        push    0x4fded0
        push    0x4fde70
        push    0x7760c0
        call    FUN_0070f090
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
        nop    
        mov    al, byte ptr [g_007dc954]
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
        mov    al, byte ptr [g_007dc955]
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
        mov    al, byte ptr [g_007dc954]
        xor    ecx, ecx
        cmp    al, cl
        sete    al
        cmp    al, cl
        mov    byte ptr [g_007dc954], al
        je    L_deb9
        cmp    byte ptr [g_007dc955], cl
        je    L_dea4
        mov    byte ptr [g_007dc955], cl
        ret    
L_dea4:
        mov    eax, dword ptr [g_007dab1c]
        mov    dword ptr [g_007dc950], eax
        mov    dword ptr [g_007dab1c], 0x7b4364
        ret    
L_deb9:
        mov    edx, dword ptr [g_007dc950]
        mov    dword ptr [g_007dab1c], edx
        mov    dword ptr [g_007dc950], ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007dc955]
        xor    ecx, ecx
        cmp    al, cl
        sete    al
        cmp    al, cl
        mov    byte ptr [g_007dc955], al
        je    L_df09
        cmp    byte ptr [g_007dc954], cl
        je    L_def4
        mov    byte ptr [g_007dc954], cl
        ret    
L_def4:
        mov    eax, dword ptr [g_007dab1c]
        mov    dword ptr [g_007dc950], eax
        mov    dword ptr [g_007dab1c], 0x7b4364
        ret    
L_df09:
        mov    edx, dword ptr [g_007dc950]
        mov    dword ptr [g_007dab1c], edx
        mov    dword ptr [g_007dc950], ecx
        ret    
    }
}
