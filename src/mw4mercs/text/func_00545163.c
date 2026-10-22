/*
 * FUN_00545163 (extent 0x545163-0x54545a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_00613930(void);
extern void __cdecl FUN_00613f80(void);
extern void __cdecl FUN_0072d830(void);

__declspec(naked) void FUN_00545163(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x80]
        push    eax
        push    ecx
        call    FUN_0072d830
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
        sub    esp, 0x198
        push    esi
        push    edi
        xor    edi, edi
        push    edi
        mov    esi, ecx
        push    0x77b85c
        lea    ecx, [esp + 0x164]
        call    FUN_004d2000
        lea    ecx, [esp + 0x15c]
        call    FUN_004d2310
        cmp    dword ptr [esp + 0x198], edi
        je    L_5209
        cmp    dword ptr [esp + 0x178], edi
        jbe    L_5209
        mov    ecx, dword ptr [esi + 0x84]
        cmp    ecx, edi
        je    L_51e2
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [esi + 0x84], edi
L_51e2:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_5201
        lea    ecx, [esp + 0x15c]
        push    ecx
        mov    ecx, eax
        call    FUN_00613f80
        jmp    L_5203
L_5201:
        xor    eax, eax
L_5203:
        mov    dword ptr [esi + 0x84], eax
L_5209:
        push    edi
        push    0x77b840
        lea    ecx, [esp + 0xdc]
        call    FUN_004d2000
        lea    ecx, [esp + 0xd4]
        call    FUN_004d2310
        cmp    dword ptr [esp + 0x110], edi
        je    L_5276
        cmp    dword ptr [esp + 0xf0], edi
        jbe    L_5276
        mov    ecx, dword ptr [esi + 0x88]
        cmp    ecx, edi
        je    L_524f
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [esi + 0x88], edi
L_524f:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_526e
        lea    ecx, [esp + 0xd4]
        push    ecx
        mov    ecx, eax
        call    FUN_00613f80
        jmp    L_5270
L_526e:
        xor    eax, eax
L_5270:
        mov    dword ptr [esi + 0x88], eax
L_5276:
        push    edi
        push    0x77b828
        lea    ecx, [esp + 0x54]
        call    FUN_004d2000
        lea    ecx, [esp + 0x4c]
        call    FUN_004d2310
        cmp    dword ptr [esp + 0x88], edi
        je    L_52d7
        cmp    dword ptr [esp + 0x68], edi
        jbe    L_52d7
        mov    ecx, dword ptr [esi + 0x8c]
        cmp    ecx, edi
        je    L_52b3
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [esi + 0x8c], edi
L_52b3:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_52cf
        lea    ecx, [esp + 0x4c]
        push    ecx
        mov    ecx, eax
        call    FUN_00613f80
        jmp    L_52d1
L_52cf:
        xor    eax, eax
L_52d1:
        mov    dword ptr [esi + 0x8c], eax
L_52d7:
        push    edi
        push    0x77b80c
        lea    ecx, [esp + 0x10]
        call    FUN_004d2000
        lea    ecx, [esp + 8]
        call    FUN_004d2310
        cmp    dword ptr [esp + 0x44], edi
        je    L_5335
        cmp    dword ptr [esp + 0x24], edi
        jbe    L_5335
        mov    ecx, dword ptr [esi + 0x90]
        cmp    ecx, edi
        je    L_5311
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [esi + 0x90], edi
L_5311:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_532d
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, eax
        call    FUN_00613f80
        jmp    L_532f
L_532d:
        xor    eax, eax
L_532f:
        mov    dword ptr [esi + 0x90], eax
L_5335:
        push    edi
        push    0x77b7f4
        lea    ecx, [esp + 0x98]
        call    FUN_004d2000
        lea    ecx, [esp + 0x90]
        call    FUN_004d2310
        cmp    dword ptr [esp + 0xcc], edi
        je    L_53a2
        cmp    dword ptr [esp + 0xac], edi
        jbe    L_53a2
        mov    ecx, dword ptr [esi + 0x94]
        cmp    ecx, edi
        je    L_537b
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [esi + 0x94], edi
L_537b:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_539a
        lea    ecx, [esp + 0x90]
        push    ecx
        mov    ecx, eax
        call    FUN_00613930
        jmp    L_539c
L_539a:
        xor    eax, eax
L_539c:
        mov    dword ptr [esi + 0x94], eax
L_53a2:
        push    edi
        push    0x77b7dc
        lea    ecx, [esp + 0x120]
        call    FUN_004d2000
        lea    ecx, [esp + 0x118]
        call    FUN_004d2310
        cmp    dword ptr [esp + 0x154], edi
        je    L_540f
        cmp    dword ptr [esp + 0x134], edi
        jbe    L_540f
        mov    ecx, dword ptr [esi + 0x98]
        cmp    ecx, edi
        je    L_53e8
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [esi + 0x98], edi
L_53e8:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_5407
        lea    ecx, [esp + 0x118]
        push    ecx
        mov    ecx, eax
        call    FUN_00613930
        jmp    L_5409
L_5407:
        xor    eax, eax
L_5409:
        mov    dword ptr [esi + 0x98], eax
L_540f:
        lea    ecx, [esp + 0x118]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x90]
        call    FUN_004d21c0
        lea    ecx, [esp + 8]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x4c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xd4]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x15c]
        call    FUN_004d21c0
        pop    edi
        pop    esi
        add    esp, 0x198
        ret    
    }
}
