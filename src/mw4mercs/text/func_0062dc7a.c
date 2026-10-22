/*
 * FUN_0062dc7a (extent 0x62dc7a-0x62ddbd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0070e390(void);
extern void __cdecl FUN_0070e3c0(void);
extern void __cdecl FUN_0070e460(void);

__declspec(naked) void FUN_0062dc7a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    0x10
        lea    eax, [esp + 8]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0xc], 0
        call    FUN_0041eb40
        push    0x10
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0xc], 0
        call    FUN_0041eb40
        pop    esi
        pop    ecx
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
        mov    eax, 0x20
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
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        sub    esp, 0x6c
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        mov    ecx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x16]
        xor    ecx, 0x85739531
        test    al, al
        je    L_dd12
        mov    eax, dword ptr [esp + 0x7c]
        mov    ecx, dword ptr [ecx + 0x92c]
        lea    edx, [eax + eax*2]
        lea    eax, [eax + edx*4]
        lea    esi, [ecx + eax*4 + 0x37d4]
        jmp    L_dd1b
L_dd12:
        mov    esi, dword ptr [ecx + 0x930]
        add    esi, 0x18
L_dd1b:
        lea    edx, [esp + 0x18]
        push    edx
        call    FUN_0070e390
        mov    eax, dword ptr [esi + 0x28]
        mov    dword ptr [esp + 4], eax
        xor    esi, esi
L_dd2e:
        mov    ecx, dword ptr [esi + 0x7f2ce0]
        mov    edx, dword ptr [esi + 0x7b55f8]
        push    ecx
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        call    FUN_0070e3c0
        push    4
        lea    ecx, [esp + 8]
        push    ecx
        lea    edx, [esp + 0x20]
        push    edx
        call    FUN_0070e3c0
        add    esi, 4
        cmp    esi, 0x3c
        jb    L_dd2e
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        call    FUN_0070e460
        mov    esi, dword ptr [esp + 0x78]
        push    0x10
        lea    edx, [esp + 8]
        push    edx
        mov    ecx, esi
        call    FUN_0041ec50
        mov    dword ptr [esp + 0x7c], 0
        mov    cx, word ptr [esp + 0x7c]
        lea    eax, [esp + 8]
        mov    edx, 8
L_dd96:
        xor    cx, word ptr [eax]
        add    eax, 2
        dec    edx
        jne    L_dd96
        push    0x10
        lea    eax, [esp + 0x80]
        mov    word ptr [esp + 0x80], cx
        push    eax
        mov    ecx, esi
        call    FUN_0041ec50
        pop    esi
        add    esp, 0x6c
        ret    
    }
}
