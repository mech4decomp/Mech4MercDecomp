/*
 * FUN_004c6024 (extent 0x4c6024-0x4c6269) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab08;
extern int    g_007dab0c;
extern int    g_007dab10;
extern int    g_007dab14;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);

__declspec(naked) void FUN_004c6024(void)
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
        mov    eax, dword ptr [ecx + 0x18]
        push    ebx
        shr    eax, 0xe
        push    ebp
        not    al
        test    al, 1
        push    esi
        push    edi
        je    L_6069
        mov    esi, dword ptr [ecx + 0x144]
        mov    edi, dword ptr [esp + 0x1c]
        mov    ebx, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [esp + 0x14]
L_6052:
        test    esi, esi
        je    L_6069
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_6069
        mov    edx, dword ptr [ecx]
        push    edi
        push    ebx
        push    ebp
        call    dword ptr [edx + 0x30]
        jmp    L_6052
L_6069:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        push    edi
        mov    edi, dword ptr [esp + 0x20]
L_6086:
        test    esi, esi
        je    L_60a2
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_60a2
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [ecx]
        push    edi
        push    ebx
        push    ebp
        push    edx
        call    dword ptr [eax + 0x34]
        jmp    L_6086
L_60a2:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        push    edi
        xor    edi, edi
L_60ba:
        test    esi, esi
        je    L_60d0
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_60d0
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x20]
        add    edi, eax
        jmp    L_60ba
L_60d0:
        mov    eax, edi
        pop    edi
        pop    esi
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
        mov    eax, dword ptr [ecx + 0x144]
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        jmp    L_60f3
L_60ef:
        mov    eax, dword ptr [esp + 0x28]
L_60f3:
        xor    esi, esi
        cmp    eax, esi
        je    L_621b
        mov    ecx, dword ptr [eax]
        cmp    ecx, esi
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x28], eax
        je    L_621b
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 0x18]
        push    eax
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x20], esi
        call    dword ptr [edx + 0x3c]
        mov    ebx, dword ptr [esp + 0x30]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, dword ptr [esp + 0x1c]
        lea    ebp, [ecx + edi]
        cmp    ebp, edi
        mov    dword ptr [esp + 0x14], edi
        je    L_61c9
        cmp    ebp, esi
        jbe    L_61b9
        lea    edx, [ebp + ebp*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, esi
        je    L_6161
        lea    ecx, [ebp - 1]
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, eax
        mov    dword ptr [esp + 0x10], ecx
        jmp    L_6167
L_6161:
        mov    dword ptr [esp + 0x10], esi
        mov    ecx, esi
L_6167:
        mov    edx, dword ptr [ebx]
        cmp    edx, esi
        je    L_61b5
        cmp    ebp, edi
        mov    eax, ebp
        jb    L_6175
        mov    eax, edi
L_6175:
        mov    esi, eax
        dec    eax
        test    esi, esi
        je    L_61a4
        lea    esi, [eax + eax*2]
        mov    ebx, edx
        lea    esi, [ecx + esi*4]
        sub    ebx, ecx
        lea    edi, [eax + 1]
L_6189:
        lea    edx, [ebx + esi]
        push    edx
        mov    ecx, esi
        call    FUN_0040c410
        dec    edi
        sub    esi, 0xc
        test    edi, edi
        ja    L_6189
        mov    ebx, dword ptr [esp + 0x30]
        mov    edi, dword ptr [esp + 0x14]
L_61a4:
        mov    eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x14]
        add    esp, 4
        xor    esi, esi
L_61b5:
        mov    dword ptr [ebx], ecx
        jmp    L_61c6
L_61b9:
        mov    eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx], esi
L_61c6:
        mov    dword ptr [ebx + 4], ebp
L_61c9:
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jbe    L_6201
        mov    eax, dword ptr [ebx]
        lea    ecx, [edi + edi*2]
        xor    edx, edx
        lea    eax, [eax + ecx*4]
L_61db:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edi, dword ptr [ecx + edx]
        add    ecx, edx
        mov    dword ptr [eax], edi
        mov    edi, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edi
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        inc    esi
        add    edx, 0xc
        add    eax, 0xc
        cmp    esi, ecx
        jb    L_61db
L_6201:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_60ef
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_60ef
L_621b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
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
        __emit 0xE9  // jmp L_6240 (rel32; MSVC6 emits eb rel8 for this short target)
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
L_6240:
        mov    dword ptr [g_007dab10], 0xbf800000
        mov    dword ptr [g_007dab0c], 0xbf800000
        mov    dword ptr [g_007dab08], 0xbf800000
        mov    dword ptr [g_007dab14], 0xbf800000
        ret    
    }
}
