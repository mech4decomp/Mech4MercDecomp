/*
 * FUN_006fb236 (extent 0x6fb236-0x6fb43c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern int    g_0076b0f4;
extern int    g_0076b108;
extern int    g_0076b10c;
extern int    g_0076b168;
extern int    g_0076b16c;
extern int    g_0076b17c;
extern int    g_0076b2d0;
extern int    g_0076b388;
extern int    g_008566d0;
extern int    g_008566d4;
extern int    g_008566f0;
extern int    g_008566f4;
extern int    g_008566f8;
extern int    g_008566fc;
extern int    g_00856700;
extern int    g_00856708;
extern int    g_00856710;
extern int    g_00859278;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00737300(void);

__declspec(naked) void FUN_006fb236(void)
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
        mov    eax, dword ptr [g_008566f0]
        test    eax, eax
        jne    L_b2b3
        cmp    dword ptr [g_00859278], 2
        je    L_b2b3
        push    esi
        push    0x8566d8
        call    dword ptr [g_0076b108]
        mov    esi, dword ptr [g_0076b16c]
        push    0
        push    0
        push    0
        push    0
        call    esi
        push    0
        push    0
        push    0
        push    0
        mov    dword ptr [g_008566d4], eax
        call    esi
        push    0x856708
        push    0
        push    0
        push    0x6fae50
        push    0
        push    0
        mov    dword ptr [g_008566d0], eax
        call    dword ptr [g_0076b388]
        add    esp, 0x18
        mov    dword ptr [g_008566f0], eax
        mov    eax, dword ptr [g_00856708]
        push    0x7a0220
        push    eax
        call    FUN_00737300
        pop    esi
L_b2b3:
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
        push    ebp
        mov    ebp, esp
        push    ebx
        push    esi
        mov    esi, dword ptr [g_008566f8]
        test    esi, esi
        push    edi
        mov    edi, dword ptr [g_0076b0ec]
        je    L_b320
        mov    ebx, dword ptr [g_0076b17c]
L_b2dc:
        mov    al, byte ptr [ebp + 8]
        test    al, al
        jne    L_b2f9
        lea    eax, [esi + 0x1c]
        push    eax
        push    0x7a0268
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_b2f9
        int 3    
L_b2f9:
        mov    ecx, dword ptr [esi + 0x10]
        push    ecx
        call    ebx
        mov    edx, dword ptr [esi + 0xc]
        push    edx
        call    edi
        mov    eax, dword ptr [esi + 8]
        push    eax
        call    edi
        mov    eax, esi
        mov    dword ptr [esi], 0
        mov    esi, dword ptr [esi + 4]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jne    L_b2dc
L_b320:
        mov    esi, dword ptr [g_008566fc]
        xor    eax, eax
        cmp    esi, eax
        mov    dword ptr [g_008566f4], eax
        mov    dword ptr [g_008566f8], eax
        je    L_b36b
L_b336:
        mov    al, byte ptr [ebp + 8]
        test    al, al
        jne    L_b353
        lea    ecx, [esi + 8]
        push    ecx
        push    0x7a0250
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_b353
        int 3    
L_b353:
        mov    edx, dword ptr [esi + 4]
        push    edx
        call    edi
        mov    eax, esi
        mov    esi, dword ptr [esi + 0x10c]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jne    L_b336
L_b36b:
        mov    ecx, dword ptr [g_008566f0]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [g_00856700], eax
        mov    dword ptr [g_008566fc], eax
        je    L_b3cb
        mov    eax, dword ptr [g_008566d0]
        push    eax
        call    dword ptr [g_0076b168]
        mov    ecx, dword ptr [g_008566f0]
        push    -1
        push    ecx
        call    dword ptr [g_0076b0f4]
        mov    edx, dword ptr [g_008566f0]
        push    edx
        call    edi
        push    0x8566d8
        call    dword ptr [g_0076b10c]
        mov    eax, dword ptr [g_008566d4]
        push    eax
        call    edi
        mov    ecx, dword ptr [g_008566d0]
        push    ecx
        call    edi
        mov    dword ptr [g_008566f0], 0
L_b3cb:
        mov    esi, dword ptr [g_00856710]
        test    esi, esi
        je    L_b42b
        mov    edi, dword ptr [g_0076b2d0]
        mov    ebx, 2
L_b3e0:
        mov    al, byte ptr [ebp + 8]
        test    al, al
        jne    L_b3fd
        lea    edx, [esi + 8]
        push    edx
        push    0x7a022c
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_b3fd
        int 3    
L_b3fd:
        mov    eax, dword ptr [esi + 0x110]
        test    eax, eax
        je    L_b41c
        cmp    dword ptr [g_00859278], ebx
        push    eax
        je    L_b417
        call    edi
        add    esp, 4
        jmp    L_b41c
L_b417:
        call    FUN_006f4230
L_b41c:
        mov    eax, esi
        mov    esi, dword ptr [esi + 4]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jne    L_b3e0
L_b42b:
        pop    edi
        pop    esi
        mov    dword ptr [g_00856710], 0
        pop    ebx
        pop    ebp
        ret    4
    }
}
