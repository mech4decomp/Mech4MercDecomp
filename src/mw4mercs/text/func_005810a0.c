/* FUN_005810a0 (0x005810A0, 364 bytes) */
/* Iterates through items, filters by condition, builds result array */

extern int DAT_007f23d8;
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_00566ca0(void);
extern void __cdecl FUN_00415230(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_005813f0(void);
extern void __cdecl FUN_00580640(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void func_005810a0(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebp
        push    esi
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xf]
        xor     esi, esi
        push    ecx
        lea     ecx, [esp + 0x28]
        mov     [esp + 0x20], esi
        mov     [esp + 0x24], esi
        mov     [esp + 0x14], esi
        call    FUN_00580580
        mov     eax, [esp + 0x28]
        push    esi
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_00566ca0
        mov     ebp, [esp + 0x24]
        mov     eax, [esp + 0x28]
        add     esp, 0xc
        cmp     ebp, eax
        mov     [esp + 0xc], ebp
        je      L_skip_loop
        push    ebx
        mov     ebx, [esp + 0x30]
        push    edi
L_loop_top:
        mov     esi, [ebp]
        mov     eax, [esi + 0x2fc]
        test    eax, eax
        je      L_next_item
        mov     ecx, dword ptr [DAT_007f23d8]
        push    ecx
        mov     ecx, [eax + 4]
        call    FUN_00415230
        cmp     al, 1
        jne     L_next_item
        mov     eax, [esi + 0x2fc]
        mov     esi, [ebx + 4]
        mov     edi, [ebx + 8]
        cmp     esi, edi
        mov     [esp + 0x18], eax
        je      L_grow_buffer
        test    esi, esi
        je      L_store_skip
        mov     [esi], eax
L_store_skip:
        add     esi, 4
        mov     [ebx + 4], esi
        jmp     L_next_item
L_grow_buffer:
        mov     ebp, [ebx]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x30], 1
        mov     [esp + 0x34], eax
        lea     ecx, [esp + 0x30]
        jb      L_grow_calc
        lea     ecx, [esp + 0x34]
L_grow_calc:
        mov     ecx, [ecx]
        add     ecx, eax
        mov     [esp + 0x34], ecx
        je      L_alloc_zero
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     [esp + 0x30], eax
        jmp     L_alloc_done
L_alloc_zero:
        mov     dword ptr [esp + 0x30], 0
L_alloc_done:
        mov     edx, [esp + 0x30]
        mov     eax, [esp + 0x30]
        push    edx
        push    eax
        push    esi
        push    ebp
        call    FUN_005813f0
        add     esp, 0x10
        test    eax, eax
        je      L_after_copy
        mov     ecx, [esp + 0x18]
        mov     [eax], ecx
L_after_copy:
        mov     edx, [esp + 0x30]
        push    edx
        add     eax, 4
        push    eax
        push    esi
        push    esi
        call    FUN_005813f0
        sub     edi, ebp
        sar     edi, 2
        push    edi
        push    ebp
        mov     esi, eax
        mov     [esp + 0x34], ebp
        call    FUN_00580640
        mov     eax, [esp + 0x48]
        mov     ecx, [esp + 0x4c]
        mov     ebp, [esp + 0x2c]
        lea     edx, [eax + ecx*4]
        add     esp, 0x18
        mov     [ebx], eax
        mov     [ebx + 4], esi
        mov     [ebx + 8], edx
L_next_item:
        mov     eax, [esp + 0x24]
        add     ebp, 4
        cmp     ebp, eax
        mov     [esp + 0x14], ebp
        jne     L_loop_top
        mov     ebp, [esp + 0x20]
        pop     edi
        pop     ebx
L_skip_loop:
        test    ebp, ebp
        je      L_done
        push    ebp
        call    FUN_004084e0
        add     esp, 4
L_done:
        pop     esi
        pop     ebp
        add     esp, 0x1c
        ret
    }
}
