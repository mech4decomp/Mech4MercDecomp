/*
 * FUN_00581210 (232 B) — __stdcall vector insert function.
 * this (ecx) = pointer to struct { int* begin; int* end; int* capacity; }
 * arg1 (stack) = insertion point pointer
 * arg2 (stack) = source data pointer
 * arg3 (stack) = count
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_00581210(void)
{
    

extern void __cdecl FUN_10040849c(void);
extern void __cdecl FUN_100408420(void);
__asm {
push    ecx                         ; save original this
        push    ebx
        push    ebp
        push    esi
        mov     esi, [esp + 0x1C]           ; esi = arg3 (count) - before push edi
        mov     ebx, ecx                    ; ebx = this
        mov     ebp, [ebx]                  ; ebp = this->begin
        push    edi
        mov     edi, [ebx + 4]              ; edi = this->end
        mov     eax, edi
        sub     eax, ebp                    ; eax = size in bytes
        sar     eax, 2                      ; eax = element count
        cmp     eax, esi                    ; compare with count
        mov     [esp + 0x10], eax           ; save element count
        lea     ecx, [esp + 0x20]           ; ecx = &arg3 (count)
        jb      L_use_count
        lea     ecx, [esp + 0x10]           ; ecx = &local (element count)
    L_use_count:
        mov     ecx, [ecx]                  ; ecx = growth value
        add     ecx, eax                    ; ecx = new count
        mov     [esp + 0x10], ecx           ; store new count
        je      L_no_alloc

        ; Allocate memory for new_count * 4 bytes
        lea     eax, [ecx * 4]
        push    eax
        ; call FUN_004084d0 (malloc wrapper)
        call FUN_10040849c
        add     esp, 4
        mov     [esp + 0x20], eax           ; store new buffer
        jmp     L_alloc_done

    L_no_alloc:
        mov     dword ptr [esp + 0x20], 0

    L_alloc_done:
        mov     edx, [esp + 0x18]           ; edx = arg1 (insertion point)
        cmp     ebp, edx                    ; compare begin with insertion point
        mov     eax, [esp + 0x20]           ; eax = new buffer
        je      L_copy_done

        ; Copy elements from begin to insertion point
    L_copy_loop:
        mov     ecx, ebp
    L_copy_inner:
        test    eax, eax
        je      L_skip_store1
        mov     ebp, [ecx]
        mov     [eax], ebp
    L_skip_store1:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jne     L_copy_inner

    L_copy_done:
        cmp     esi, 1
        jne     L_copy_multi

        ; Copy single element from source
        test    eax, eax
        je      L_skip_single
        mov     ecx, [esp + 0x1C]           ; ecx = arg2 (source ptr)
        mov     ecx, [ecx]
        mov     [eax], ecx
    L_skip_single:
        add     eax, 4
        jmp     L_copy_remaining

    L_copy_multi:
        test    esi, esi
        jbe     L_copy_remaining

        ; Copy multiple elements from source
        mov     ecx, esi
        mov     esi, [esp + 0x1C]           ; esi = arg2 (source ptr)
    L_multi_loop:
        test    eax, eax
        je      L_skip_store2
        mov     ebp, [esi]
        mov     [eax], ebp
    L_skip_store2:
        add     eax, 4
        dec     ecx
        jne     L_multi_loop

    L_copy_remaining:
        cmp     edx, edi                    ; compare insertion point with end
        mov     esi, eax                    ; esi = new end
        je      L_cleanup

        ; Copy remaining elements after insertion point
        mov     ecx, edx
        sub     ecx, eax
    L_remaining_loop:
        test    esi, esi
        je      L_skip_store3
        mov     edx, [ecx + esi]
        mov     [esi], edx
    L_skip_store3:
        add     esi, 4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jne     L_remaining_loop

    L_cleanup:
        mov     eax, [ebx]                  ; eax = old begin
        test    eax, eax
        mov     [esp + 0x1C], eax           ; save old begin
        je      L_skip_free
        push    eax
        ; call FUN_004084e0 (free wrapper)
        call FUN_100408420
        add     esp, 4

    L_skip_free:
        mov     eax, [esp + 0x20]           ; eax = new buffer
        mov     ecx, [esp + 0x10]           ; ecx = new count
        pop     edi
        mov     [ebx + 4], esi              ; this->end = new end
        pop     esi
        lea     edx, [eax + ecx * 4]        ; edx = new capacity
        pop     ebp
        mov     [ebx], eax                  ; this->begin = new buffer
        mov     [ebx + 8], edx              ; this->capacity = new capacity
        pop     ebx
        pop     ecx
        ret     0xC
    }


}
