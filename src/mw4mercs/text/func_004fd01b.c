/*
 * FUN_004fd01b (extent 0x4fd01b-0x4fd37e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fc100(void);
extern void __cdecl FUN_004fc170(void);
extern void __cdecl FUN_004fcc00(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004fd01b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x776000
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_d032
        int 3    
L_d032:
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
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebx, eax
        mov    edi, eax
        mov    ebp, ecx
        sar    ebx, 0x18
        and    edi, 0xffffff
        cmp    eax, -1
        mov    dword ptr [esp + 0x14], ebp
        je    L_d352
        mov    eax, dword ptr [ebp + ebx*8 + 0x14]
        lea    esi, [eax - 1]
        cmp    edi, esi
        mov    dword ptr [esp + 0x18], esi
        jne    L_d16b
        mov    eax, dword ptr [ebp + ebx*8 + 0x14]
        cmp    edi, eax
        lea    esi, [ebp + ebx*8 + 0x14]
        mov    dword ptr [esp + 0x10], esi
        je    L_d352
        test    edi, edi
        jbe    L_d149
        lea    eax, [edi*8]
        sub    eax, edi
        lea    ecx, [eax*4 + 4]
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d0d0
        push    0x4fc100
        push    edi
        lea    esi, [eax + 4]
        push    0x1c
        push    esi
        mov    dword ptr [eax], edi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x24], esi
        mov    esi, dword ptr [esp + 0x10]
        jmp    L_d0d8
L_d0d0:
        mov    dword ptr [esp + 0x24], 0
L_d0d8:
        mov    eax, dword ptr [ebp + ebx*8 + 0x10]
        test    eax, eax
        je    L_d135
        mov    eax, dword ptr [esi]
        cmp    edi, eax
        jae    L_d0e8
        mov    eax, edi
L_d0e8:
        mov    edx, eax
        dec    eax
        test    edx, edx
        je    L_d127
        lea    esi, [eax*8]
        sub    esi, eax
        shl    esi, 2
        lea    ebp, [eax + 1]
L_d0fe:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx + ebx*8 + 0x10]
        mov    eax, esi
        add    eax, edx
        mov    edx, dword ptr [esp + 0x24]
        push    eax
        lea    ecx, [esi + edx]
        call    FUN_004fc170
        dec    ebp
        sub    esi, 0x1c
        test    ebp, ebp
        ja    L_d0fe
        mov    ebp, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x10]
L_d127:
        mov    ecx, dword ptr [ebp + ebx*8 + 0x10]
        test    ecx, ecx
        je    L_d135
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
L_d135:
        mov    ecx, dword ptr [esp + 0x24]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        mov    dword ptr [ebp + ebx*8 + 0x10], ecx
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    4
L_d149:
        mov    ecx, dword ptr [ebp + ebx*8 + 0x10]
        test    ecx, ecx
        je    L_d157
        mov    edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
L_d157:
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        mov    dword ptr [ebp + ebx*8 + 0x10], 0
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    4
L_d16b:
        cmp    eax, 1
        jne    L_d1a6
        mov    eax, dword ptr [ebp + ebx*8 + 0x14]
        test    eax, eax
        lea    esi, [ebp + ebx*8 + 0x14]
        je    L_d352
        mov    ecx, dword ptr [ebp + ebx*8 + 0x10]
        test    ecx, ecx
        je    L_d18e
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
L_d18e:
        pop    edi
        mov    dword ptr [esi], 0
        pop    esi
        mov    dword ptr [ebp + ebx*8 + 0x10], 0
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    4
L_d1a6:
        dec    eax
        cmp    edi, eax
        mov    dword ptr [esp + 0x10], edi
        mov    dword ptr [esp + 0x1c], eax
        jge    L_d24c
        mov    edx, dword ptr [ebp + ebx*8 + 0x10]
        lea    ecx, [edi*8]
        sub    ecx, edi
        lea    esi, [edx + ecx*4 + 0x2c]
L_d1c8:
        mov    dword ptr [esp + 0x24], 0
        mov    ecx, dword ptr [esi + 4]
        call    FUN_0041fd80
        push    esi
        lea    ecx, [esp + 0x28]
        mov    edi, eax
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x24]
        push    eax
        lea    ecx, [esi - 0x1c]
        call    FUN_00412780
        mov    ebp, dword ptr [esi - 0x18]
        mov    ecx, ebp
        call    FUN_0041fcb0
        test    edi, edi
        je    L_d215
        push    edi
        mov    ecx, ebp
        call    FUN_0041fcd0
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, ebx
        shl    ecx, 0x18
        add    ecx, eax
        mov    dword ptr [edi + 0x30], ecx
L_d215:
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        je    L_d230
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d230
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d230:
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x1c]
        inc    eax
        add    esi, 0x1c
        cmp    eax, ecx
        mov    dword ptr [esp + 0x10], eax
        jl    L_d1c8
        mov    ebp, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x18]
L_d24c:
        mov    eax, dword ptr [ebp + ebx*8 + 0x14]
        cmp    esi, eax
        lea    edi, [ebp + ebx*8 + 0x14]
        mov    dword ptr [esp + 0x14], edi
        je    L_d352
        test    esi, esi
        jbe    L_d33a
        lea    edx, [esi*8]
        sub    edx, esi
        lea    eax, [edx*4 + 4]
        push    eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d2c0
        add    eax, 4
        mov    dword ptr [eax - 4], esi
        lea    ecx, [esi - 1]
        test    ecx, ecx
        mov    dword ptr [esp + 0x1c], eax
        mov    edi, eax
        jl    L_d2b6
        inc    ecx
        mov    dword ptr [esp + 0x24], ecx
L_d29d:
        mov    ecx, edi
        call    FUN_004fc100
        mov    eax, dword ptr [esp + 0x24]
        add    edi, 0x1c
        dec    eax
        mov    dword ptr [esp + 0x24], eax
        jne    L_d29d
        mov    eax, dword ptr [esp + 0x1c]
L_d2b6:
        mov    edi, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x24], eax
        jmp    L_d2c8
L_d2c0:
        mov    dword ptr [esp + 0x24], 0
L_d2c8:
        mov    ecx, dword ptr [ebp + ebx*8 + 0x10]
        test    ecx, ecx
        je    L_d326
        mov    eax, dword ptr [edi]
        cmp    esi, eax
        jae    L_d2d8
        mov    eax, esi
L_d2d8:
        mov    edx, eax
        dec    eax
        test    edx, edx
        je    L_d318
        mov    edx, dword ptr [esp + 0x24]
        lea    esi, [eax*8]
        sub    esi, eax
        sub    ecx, edx
        lea    esi, [edx + esi*4]
        mov    dword ptr [esp + 0x1c], ecx
        lea    edi, [eax + 1]
        jmp    L_d2fe
L_d2fa:
        mov    ecx, dword ptr [esp + 0x1c]
L_d2fe:
        add    ecx, esi
        push    ecx
        mov    ecx, esi
        call    FUN_004fc170
        dec    edi
        sub    esi, 0x1c
        test    edi, edi
        ja    L_d2fa
        mov    esi, dword ptr [esp + 0x18]
        mov    edi, dword ptr [esp + 0x14]
L_d318:
        mov    ecx, dword ptr [ebp + ebx*8 + 0x10]
        test    ecx, ecx
        je    L_d326
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
L_d326:
        mov    ecx, dword ptr [esp + 0x24]
        mov    dword ptr [edi], esi
        pop    edi
        pop    esi
        mov    dword ptr [ebp + ebx*8 + 0x10], ecx
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    4
L_d33a:
        mov    ecx, dword ptr [ebp + ebx*8 + 0x10]
        test    ecx, ecx
        je    L_d348
        mov    edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
L_d348:
        mov    dword ptr [ebp + ebx*8 + 0x10], 0
        mov    dword ptr [edi], esi
L_d352:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004fcc00
        test    eax, eax
        je    L_d37b
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        lea    ecx, [eax + 0x10]
        call    FUN_00412780
L_d37b:
        ret    8
    }
}
