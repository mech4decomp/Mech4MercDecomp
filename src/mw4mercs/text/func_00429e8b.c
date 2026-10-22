/*
 * FUN_00429e8b (extent 0x429e8b-0x42a12d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87ec;
extern int    g_007da848;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_0042a130(void);
extern void __cdecl FUN_00482160(void);
extern void __cdecl FUN_004821a0(void);
extern void __cdecl FUN_004912b0(void);

__declspec(naked) void FUN_00429e8b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        mov    esi, ecx
        push    edi
        call    FUN_00482160
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esi + 0x9c]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    esi, dword ptr [esi + 0x8c]
        test    esi, esi
        je    L_9f37
        add    esi, 0xc
        push    esi
        lea    ecx, [esp + 0xc]
        call    FUN_004912b0
        mov    eax, dword ptr [esp + 8]
        and    eax, 0x3fff
        jle    L_9f1f
        mov    edx, dword ptr [g_007da848]
        mov    eax, dword ptr [edx + eax*4 + 0x24]
        test    eax, eax
        je    L_9f1f
        mov    eax, dword ptr [eax + 0x10]
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_00412570
        lea    ecx, [esp + 0x24]
        push    ecx
        push    edi
        call    FUN_00412a50
        mov    eax, dword ptr [esp + 0x2c]
        add    esp, 8
        test    eax, eax
        je    L_9f46
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_9f46
        push    eax
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
L_9f1f:
        mov    edx, dword ptr [g_007b87ec]
        push    edx
        push    edi
        call    FUN_00412a50
        add    esp, 8
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
L_9f37:
        mov    eax, dword ptr [g_007b87ec]
        push    eax
        push    edi
        call    FUN_00412a50
        add    esp, 8
L_9f46:
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        mov    esi, ecx
        push    edi
        call    FUN_004821a0
        mov    eax, dword ptr [esi + 0x9c]
        push    eax
        push    0x76e044
        mov    ecx, edi
        call    FUN_00411dc0
        mov    esi, dword ptr [esi + 0x8c]
        test    esi, esi
        je    L_9fb4
        add    esi, 0xc
        push    esi
        lea    ecx, [esp + 0xc]
        call    FUN_004912b0
        mov    eax, dword ptr [esp + 8]
        and    eax, 0x3fff
        jg    L_9f9a
        xor    eax, eax
        jmp    L_9fa4
L_9f9a:
        mov    ecx, dword ptr [g_007da848]
        mov    eax, dword ptr [ecx + eax*4 + 0x24]
L_9fa4:
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        push    0x76e060
        mov    ecx, edi
        call    FUN_00411c40
L_9fb4:
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
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
        sub    esp, 0x18
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x8c]
        test    ecx, ecx
        je    L_9ff0
        dec    dword ptr [ecx + 8]
        jne    L_9ff0
        test    ecx, ecx
        je    L_9ff0
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_9ff0:
        mov    esi, dword ptr [esp + 0x24]
        test    esi, esi
        mov    dword ptr [edi + 0x8c], esi
        jne    L_a006
        mov    eax, dword ptr [edi + 0x78]
        and    eax, 0xffffffbf
        jmp    L_a013
L_a006:
        mov    ecx, dword ptr [esi + 8]
        mov    eax, dword ptr [edi + 0x78]
        inc    ecx
        mov    dword ptr [esi + 8], ecx
        or    eax, 0x40
L_a013:
        lea    ecx, [esi + 0xc]
        push    ecx
        lea    ecx, [esp + 0xc]
        mov    dword ptr [edi + 0x78], eax
        call    FUN_004912b0
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, eax
        and    eax, 0xffff3fff
        or    eax, 0x10000
        or    ecx, 0x1c000
        and    eax, 0xbfffffff
        or    ecx, 0x40000000
        sub    esp, 0x18
        mov    dword ptr [esp + 0x20], eax
        mov    dword ptr [esp + 0x28], ecx
        lea    eax, [esp + 0x20]
        and    edx, 0x3fff
        mov    ecx, esp
        push    eax
        mov    dword ptr [edi + 0x94], edx
        call    FUN_004912b0
        mov    ecx, esi
        call    FUN_0042a130
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    ebx
        mov    bl, byte ptr [esp + 0x20]
        push    esi
        mov    esi, ecx
        cmp    bl, byte ptr [esi + 0x98]
        push    edi
        je    L_a124
        mov    edi, dword ptr [esi + 0x8c]
        lea    eax, [edi + 0xc]
        push    eax
        lea    ecx, [esp + 0x10]
        mov    byte ptr [esi + 0x98], bl
        call    FUN_004912b0
        cmp    bl, 1
        jne    L_a0d8
        mov    ecx, dword ptr [esi + 0x90]
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [ecx + 0x1c]
        and    eax, 0xffffc000
        or    esi, 0x3fff
        mov    dword ptr [esp + 0x14], esi
        jmp    L_a0f5
L_a0d8:
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esi + 0x94]
        and    eax, 0xffffc000
        or    edx, 0x3fff
        mov    dword ptr [esp + 0x14], edx
L_a0f5:
        mov    edx, dword ptr [esp + 0x14]
        or    edx, 0x40000000
        or    eax, ecx
        sub    esp, 0x18
        mov    dword ptr [esp + 0x2c], edx
        lea    edx, [esp + 0x24]
        and    eax, 0xbfffffff
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x28], eax
        call    FUN_004912b0
        mov    ecx, edi
        call    FUN_0042a130
L_a124:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x18
        ret    4
    }
}
