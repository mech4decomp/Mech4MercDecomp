/*
 * FUN_004bf098 (extent 0x4bf098-0x4bf302) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daad8;
extern int    g_007daadc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_004bede0(void);
extern void __cdecl FUN_004bf380(void);
extern void __cdecl FUN_004c6540(void);
extern void __cdecl FUN_004c68f0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004bf098(void)
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
        push    ecx
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_004c6540
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, eax
        shr    ecx, 2
        and    ecx, 0x3f
        mov    edx, dword ptr [ecx*4 + 0x7b36f0]
        mov    ecx, eax
        shr    ecx, 5
        and    ecx, 0x1f
        lea    ecx, [ecx + ecx*2]
        shl    ecx, 2
        mov    dword ptr [esi + 0x1c], edx
        mov    edx, dword ptr [ecx + 0x7b3b28]
        mov    dword ptr [esi + 0x130], edx
        mov    edx, dword ptr [ecx + 0x7b3b2c]
        mov    ecx, dword ptr [ecx + 0x7b3b30]
        shr    eax, 0xa
        and    eax, 1
        xor    ebx, ebx
        mov    dword ptr [esi + 0x134], edx
        mov    edx, dword ptr [eax*4 + 0x7b37f0]
        mov    dword ptr [esi + 0x144], ebx
        push    0xc
        mov    dword ptr [esi + 0x148], ebx
        mov    dword ptr [esi], 0x771454
        mov    dword ptr [esi + 0x138], ecx
        mov    dword ptr [esi + 0x13c], edx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_f14e
        lea    ecx, [edi + 0x144]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [ecx]
        mov    ebp, eax
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x7714a4
        mov    dword ptr [esp + 0x1c], ebp
        jmp    L_f154
L_f14e:
        mov    dword ptr [esp + 0x1c], ebx
        mov    ebp, ebx
L_f154:
        mov    ecx, dword ptr [ebp + 4]
        call    FUN_00417a40
        mov    ebx, dword ptr [esi + 0x148]
        mov    edi, eax
        and    edi, 0xffff
        cmp    edi, ebx
        mov    dword ptr [esp + 0x10], eax
        mov    word ptr [esi + 0x14c], ax
        je    L_f1fe
        test    edi, edi
        jbe    L_f1db
        lea    edx, [edi*4]
        push    edx
        call    FUN_004084d0
        mov    edx, dword ptr [esi + 0x144]
        add    esp, 4
        test    edx, edx
        mov    ebp, eax
        je    L_f1cf
        cmp    edi, ebx
        mov    ecx, edi
        jb    L_f1a5
        mov    ecx, ebx
L_f1a5:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_f1c0
        lea    eax, [ebp + ecx*4]
        sub    edx, ebp
        inc    ecx
L_f1b3:
        mov    ebx, dword ptr [edx + eax]
        mov    dword ptr [eax], ebx
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_f1b3
L_f1c0:
        mov    eax, dword ptr [esi + 0x144]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f1cf:
        mov    dword ptr [esi + 0x144], ebp
        mov    ebp, dword ptr [esp + 0x1c]
        jmp    L_f1f4
L_f1db:
        mov    ecx, dword ptr [esi + 0x144]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x144], 0
L_f1f4:
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x148], edi
L_f1fe:
        mov    ecx, dword ptr [ebp + 4]
        mov    edx, dword ptr [ecx]
        xor    ebx, ebx
        test    ax, ax
        mov    dword ptr [ebp + 8], edx
        jbe    L_f23d
L_f20d:
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_f21e
        mov    edi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ebp + 8], eax
        jmp    L_f220
L_f21e:
        xor    edi, edi
L_f220:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0xc]
        push    edi
        push    ebx
        mov    ecx, esi
        call    FUN_004bf380
        inc    ebx
        cmp    bx, word ptr [esi + 0x14c]
        jb    L_f20d
L_f23d:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
        push    edi
        mov    edi, ecx
        mov    dword ptr [edi], 0x771454
        mov    eax, dword ptr [edi + 0x148]
        test    ax, ax
        jbe    L_f287
        push    ebx
        and    eax, 0xffff
        push    esi
        mov    esi, dword ptr [edi + 0x144]
        mov    ebx, eax
L_f273:
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_f27f
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_f27f:
        add    esi, 4
        dec    ebx
        jne    L_f273
        pop    esi
        pop    ebx
L_f287:
        mov    eax, dword ptr [edi + 0x144]
        test    eax, eax
        je    L_f29a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f29a:
        mov    ecx, edi
        call    FUN_004c68f0
        pop    edi
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
        mov    eax, dword ptr [g_007daad8]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x150
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f2f7
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    1
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    edx
        mov    edx, dword ptr [g_007daadc]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004bede0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_f2f7:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
    }
}
