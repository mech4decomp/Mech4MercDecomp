/*
 * FUN_0040387d (extent 0x40387d-0x4039e4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b7dc8;
extern int    g_007b7dd0;
extern int    g_007b7dd4;
extern int    g_007b7e6c;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00402e60(void);
extern void __cdecl FUN_00402ec0(void);
extern void __cdecl FUN_00703a20(void);

__declspec(naked) void FUN_0040387d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b7dc8]
        test    eax, eax
        jne    L_3894
        push    0
        push    0
        push    0
        call    FUN_00402e60
L_3894:
        mov    eax, dword ptr [g_007b7dd4]
        mov    ecx, dword ptr [g_007b7e6c]
        mov    edx, dword ptr [g_007b7dc8]
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [g_007b7dd0]
        push    ecx
        push    edx
        push    eax
        call    FUN_00703a20
        mov    edi, eax
        lea    eax, [edi - 1]
        cmp    eax, 6
        ja    L_39da
        jmp    dword ptr [eax*4 + 0x4039e4]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    esi, dword ptr [edx + 0xc]
        lea    eax, [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        xor    esi, 0x85739531
        push    0x7549
        jmp    L_39c1
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    esi, dword ptr [ecx + 0xc]
        lea    eax, [ecx + 0xc]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        xor    esi, 0x85739531
        push    0x7547
        jmp    L_3977
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    esi, dword ptr [edx + 0xc]
        lea    eax, [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        xor    esi, 0x85739531
        push    0x7548
        jmp    L_39c1
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    esi, dword ptr [ecx + 0xc]
        lea    eax, [ecx + 0xc]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        xor    esi, 0x85739531
        push    0x754a
L_3977:
        call    dword ptr [edx + 0x34]
        push    eax
        mov    eax, dword ptr [esi]
        push    0x7546
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_00402ec0
        add    esp, 8
        mov    eax, edi
        pop    edi
        pop    esi
        ret    0xc
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    esi, dword ptr [edx + 0xc]
        lea    eax, [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        xor    esi, 0x85739531
        push    0x754e
L_39c1:
        call    dword ptr [eax + 0x34]
        mov    edx, dword ptr [esi]
        push    eax
        push    0x7546
        mov    ecx, esi
        call    dword ptr [edx + 0x34]
        push    eax
        call    FUN_00402ec0
        add    esp, 8
L_39da:
        mov    eax, edi
        pop    edi
        pop    esi
        ret    0xc
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x004039E4 (59 relocated pointers)
        __emit 0xF9
        __emit 0x38
        __emit 0x40
        __emit 0x00
        __emit 0xCA
        __emit 0x38
        __emit 0x40
        __emit 0x00
        __emit 0xF9
        __emit 0x38
        __emit 0x40
        __emit 0x00
        __emit 0xF9
        __emit 0x38
        __emit 0x40
        __emit 0x00
        __emit 0x23
        __emit 0x39
        __emit 0x40
        __emit 0x00
        __emit 0x4F
        __emit 0x39
        __emit 0x40
        __emit 0x00
        __emit 0x97
        __emit 0x39
        __emit 0x40
        __emit 0x00
        __emit 0xE8
        __emit 0xEB
        __emit 0x4F
        __emit 0x2F
        __emit 0x00
        __emit 0x85
        __emit 0xC0
        __emit 0x74
        __emit 0x0A
        __emit 0xE8
        __emit 0xE2
        __emit 0x4F
        __emit 0x2F
        __emit 0x00
        __emit 0xE8
        __emit 0x4D
        __emit 0x2D
        __emit 0x2F
        __emit 0x00
        __emit 0xE8
        __emit 0x08
        __emit 0x51
        __emit 0x2F
        __emit 0x00
        __emit 0xE8
        __emit 0x33
        __emit 0x56
        __emit 0x2F
        __emit 0x00
        __emit 0xE8
        __emit 0x8E
        __emit 0x00
        __emit 0x30
        __emit 0x00
        __emit 0xB8
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xC2
        __emit 0x0C
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xE8
        __emit 0x9B
        __emit 0xCB
        __emit 0x2F
        __emit 0x00
        __emit 0x25
        __emit 0xFF
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xC2
        __emit 0x0C
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xE8
        __emit 0xDB
        __emit 0x53
        __emit 0x2F
        __emit 0x00
        __emit 0x85
        __emit 0xC0
        __emit 0x7E
        __emit 0x09
        __emit 0xE8
        __emit 0xA2
        __emit 0x4F
        __emit 0x2F
        __emit 0x00
        __emit 0x85
        __emit 0xC0
        __emit 0x75
        __emit 0x6C
        __emit 0xA0
        __emit 0x69
        __emit 0x79
        __emit 0x7B
        __emit 0x00
        __emit 0x84
        __emit 0xC0
        __emit 0x74
        __emit 0x0C
        __emit 0x6A
        __emit 0x00
        __emit 0xE8
        __emit 0xBE
        __emit 0x31
        __emit 0x30
        __emit 0x00
        __emit 0xE8
        __emit 0x99
        __emit 0x32
        __emit 0x30
        __emit 0x00
        __emit 0xA1
        __emit 0x6C
        __emit 0x79
        __emit 0x7B
        __emit 0x00
        __emit 0x57
        __emit 0x33
        __emit 0xFF
        __emit 0x85
        __emit 0xC0
        __emit 0x7E
        __emit 0x1F
        __emit 0x56
        __emit 0xBE
        __emit 0x70
        __emit 0x79
        __emit 0x7B
        __emit 0x00
        __emit 0x80
        __emit 0x3E
        __emit 0x00
        __emit 0x74
        __emit 0x06
        __emit 0x56
        __emit 0xE8
        __emit 0x9C
        __emit 0x31
        __emit 0x30
        __emit 0x00
        __emit 0xA1
        __emit 0x6C
        __emit 0x79
        __emit 0x7B
        __emit 0x00
        __emit 0x47
        __emit 0x83
        __emit 0xC6
        __emit 0x1E
        __emit 0x3B
        __emit 0xF8
        __emit 0x7C
        __emit 0xE8
        __emit 0x5E
        __emit 0xA0
        __emit 0x6A
        __emit 0x79
        __emit 0x7B
        __emit 0x00
        __emit 0x84
        __emit 0xC0
        __emit 0x5F
        __emit 0x74
        __emit 0x0E
        __emit 0xE8
        __emit 0x2F
        __emit 0xCB
        __emit 0x2F
        __emit 0x00
        __emit 0x84
        __emit 0xC0
        __emit 0x74
        __emit 0x05
        __emit 0xE8
        __emit 0x56
        __emit 0xB1
        __emit 0x2F
        __emit 0x00
        __emit 0xE8
        __emit 0x71
        __emit 0x53
        __emit 0x2F
        __emit 0x00
        __emit 0x85
        __emit 0xC0
        __emit 0x75
        __emit 0x06
        __emit 0x83
        __emit 0xC8
        __emit 0xFF
        __emit 0xC2
        __emit 0x0C
        __emit 0x00
        __emit 0xE8
        __emit 0x22
        __emit 0xE8
        __emit 0xFF
        __emit 0xFF
        __emit 0xB8
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xC2
        __emit 0x0C
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
