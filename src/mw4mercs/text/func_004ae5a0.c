/*
 * FUN_004AE5A0 (246 B) — __thiscall resize/realloc from stream.
 * Reads count from stream via vtable[0x20], reallocates this+4 array
 * (element size 12 bytes), copies old data, then reads new data from stream.
 * RET 0x8 (two stack params: int *stream, int param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_004ae5a0(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        sub     esp, 8
        cmp     eax, 0x0f
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    edi
        mov     edi, ecx
        jge     l_read_count
        mov     eax, dword ptr [ebp]
        push    4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [eax + 0x20]
    l_read_count:
        mov     edx, dword ptr [ebp]
        push    esi
        push    4
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x0c]
        mov     esi, dword ptr [edi + 8]
        cmp     eax, esi
        mov     dword ptr [esp + 0x1c], eax
        jz      l_read_data
        test    eax, eax
        jbe     l_free_old
        lea     ecx, [eax + eax * 2]
        shl     ecx, 2
        push    ebx
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 4]
        add     esp, 4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [esp + 0x14], ebx
        jz      l_store_new_ptr
        mov     ecx, dword ptr [esp + 0x20]
        cmp     ecx, esi
        jc      l_use_new_count
        mov     ecx, esi
    l_use_new_count:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      l_free_old_ptr
        lea     eax, [ecx + ecx * 2]
        sub     edx, ebx
        lea     eax, [ebx + eax * 4]
        inc     ecx
    l_copy_loop:
        lea     esi, [edx + eax]
        mov     ebp, dword ptr [esi]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [esi + 4]
        mov     dword ptr [ebx + 4], ebp
        mov     esi, dword ptr [esi + 8]
        dec     ecx
        sub     eax, 0x0c
        test    ecx, ecx
        mov     dword ptr [ebx + 8], esi
        ja      l_copy_loop
        mov     ebp, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x14]
    l_free_old_ptr:
        mov     eax, dword ptr [edi + 4]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_store_new_ptr:
        mov     dword ptr [edi + 4], ebx
        pop     ebx
        jmp     l_update_count
    l_free_old:
        mov     ecx, dword ptr [edi + 4]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 4], 0
    l_update_count:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x0c]
        mov     dword ptr [edi + 8], edx
    l_read_data:
        test    eax, eax
        pop     esi
        jbe     l_return
        mov     ecx, dword ptr [edi + 4]
        mov     edx, dword ptr [ebp]
        lea     eax, [eax + eax * 2]
        shl     eax, 2
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 0x20]
    l_return:
        pop     edi
        pop     ebp
        add     esp, 8
        ret     8
    }
}
