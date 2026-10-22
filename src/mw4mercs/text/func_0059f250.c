/* FUN_0059f250 (0x0059F250, 477 bytes) */
/* Constructor - reads data from stream, builds object tree */

extern int DAT_007f2010;
extern int DAT_007b8c10;
extern void __cdecl FUN_004D5B10(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00412A00(void);
extern void __cdecl FUN_0059FC10(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004179B0(void);

__declspec(naked) void func_0059f250(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007f2010]
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_004D5B10
        push    1
        lea     esi, [ebx + 0x34]
        xor     ebp, ebp
        push    ebp
        mov     ecx, esi
        call    FUN_00416990
        mov     dword ptr [esi], 0x7839d0
        mov     esi, [esp + 0x24]
        cmp     esi, ebp
        mov     [ebx + 0x48], ebp
        mov     [ebx + 0x4c], ebp
        mov     dword ptr [ebx], 0x7839c4
        mov     [ebx + 0x50], ebp
        je      L_done
        mov     edx, [esi]
        push    4
        lea     eax, [ebx + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [ebx + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [ebx + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [ebx + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [ebx + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    1
        lea     eax, [ebx + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     [esp + 0x1c], ebp
        mov     [esp + 0x18], ebp
        jle     L_loop1_done
        or      edi, 0xffffffff
L_loop1_start:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     word ptr [esp + 0x18], di
        mov     word ptr [esp + 0x1a], bp
        mov     word ptr [esp + 0x2c], di
        mov     word ptr [esp + 0x2e], bp
        mov     [esp + 0x1c], ebp
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        call    FUN_00412A00
        mov     edx, [esp + 0x1c]
        add     esp, 8
        push    ebp
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, ebx
        call    FUN_0059FC10
        mov     eax, [esp + 0x14]
        cmp     eax, ebp
        je      L_loop1_skip_free
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_loop1_skip_free
        push    eax
        call    FUN_004084E0
        add     esp, 4
L_loop1_skip_free:
        mov     eax, [esp + 0x18]
        mov     ecx, [esp + 0x1c]
        inc     eax
        cmp     eax, ecx
        mov     [esp + 0x18], eax
        jl      L_loop1_start
L_loop1_done:
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx + 8]
        test    eax, eax
        jbe     L_done
L_loop2_start:
        lea     eax, [esp + 0x24]
        push    eax
        push    esi
        mov     [esp + 0x2c], ebp
        call    FUN_00412A00
        push    0x14
        call    FUN_004084D0
        mov     edi, eax
        add     esp, 0xc
        cmp     edi, ebp
        je      L_alloc_skip
        mov     ecx, dword ptr [DAT_007b8c10]
        push    ecx
        mov     ecx, edi
        call    FUN_00415180
        mov     dword ptr [edi], 0x76cd9c
        mov     [edi + 8], ebp
        mov     [edi + 0xc], ebp
        mov     edx, [esp + 0x24]
        mov     [edi + 0x10], edx
        mov     eax, [esp + 0x24]
        cmp     eax, ebp
        je      L_ref_skip
        inc     byte ptr [eax - 1]
L_ref_skip:
        mov     dword ptr [edi], 0x76d650
        jmp     L_alloc_done
L_alloc_skip:
        xor     edi, edi
L_alloc_done:
        push    edi
        lea     ecx, [ebx + 0x48]
        call    FUN_004179B0
        mov     eax, [esp + 0x24]
        cmp     eax, ebp
        je      L_loop2_skip_free
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_loop2_skip_free
        push    eax
        call    FUN_004084E0
        add     esp, 4
L_loop2_skip_free:
        mov     eax, [esi]
        mov     ecx, esi
        call    dword ptr [eax + 8]
        test    eax, eax
        ja      L_loop2_start
L_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
