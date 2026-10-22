/*
 * FUN_004AC110 (177 B) — __thiscall alloc/init.
 * Calls FUN_004940a0(param_1, param_2, param_3), then allocates
 * buffer of size param_2->field_268 * param_2->field_26c into
 * this+0xa8, stores size at this+0xac, zeros this+0xa0/this+0xa4.
 * Returns this.
 * RET 0x0c (three stack params).
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_004940a0(void);
extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) int __fastcall FUN_004ac110(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x0c]
        push    ebx
        mov     ebx, dword ptr [esp + 0x0c]
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ebx
        push    ecx
        mov     ecx, esi
        call    FUN_004940a0
        mov     edi, dword ptr [ebx + 0x26c]
        imul    edi, dword ptr [ebx + 0x268]
        xor     ebp, ebp
        mov     ebx, ebp
        cmp     edi, ebx
        mov     dword ptr [esi + 0xa8], ebp
        mov     dword ptr [esi + 0xac], ebp
        jz      l_skip_alloc
        cmp     edi, ebp
        jbe     l_free_old_ptr
        push    edi
        call    FUN_004084d0
        mov     ecx, ebx
        add     esp, 4
        test    ecx, ecx
        mov     ebp, eax
        jz      l_store_ptr
        cmp     edi, ebx
        mov     eax, edi
        jc      l_use_count
        mov     eax, ebx
    l_use_count:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      l_free_old_ptr2
    l_copy_loop:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebp], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     l_copy_loop
    l_free_old_ptr2:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
    l_store_ptr:
        mov     dword ptr [esi + 0xa8], ebp
        xor     ebp, ebp
        jmp     l_set_size
    l_free_old_ptr:
        mov     eax, dword ptr [esi + 0xa8]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0xa8], ebp
    l_set_size:
        mov     dword ptr [esi + 0xac], edi
    l_skip_alloc:
        pop     edi
        mov     dword ptr [esi + 0xa0], ebp
        mov     dword ptr [esi + 0xa4], ebp
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x0c
    }
}
