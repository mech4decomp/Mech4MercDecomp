/*
 * FUN_00562E90 (121 B) — Heap sift-down / insertion helper.
 *
 * Performs a sift-down operation on a heap-like structure, then
 * inserts a pivot value into the correct position.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00562E90(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x0c]
        mov     ecx, dword ptr [esp + 4]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        lea     eax, dword ptr [esi + esi + 2]
        cmp     eax, edx
        push    edi
        mov     ebx, esi
        jge     check_right
sift_loop:
        mov     edi, dword ptr [ecx + eax*4]
        cmp     edi, dword ptr [ecx + eax*4 - 4]
        jae     no_dec
        dec     eax
no_dec:
        mov     edi, dword ptr [ecx + eax*4]
        mov     dword ptr [ecx + esi*4], edi
        mov     esi, eax
        lea     eax, dword ptr [eax + eax + 2]
        cmp     eax, edx
        jl      sift_loop
check_right:
        cmp     eax, edx
        jne     insert_phase
        mov     edx, dword ptr [ecx + eax*4 - 4]
        mov     dword ptr [ecx + esi*4], edx
        lea     esi, dword ptr [eax - 1]
insert_phase:
        lea     eax, dword ptr [esi - 1]
        cdq
        sub     eax, edx
        sar     eax, 1
        cmp     esi, ebx
        jle     done_early
        mov     edi, dword ptr [esp + 0x1c]
insert_loop:
        mov     edx, dword ptr [ecx + eax*4]
        cmp     edx, edi
        jae     place_pivot
        mov     dword ptr [ecx + esi*4], edx
        mov     esi, eax
        dec     eax
        cdq
        sub     eax, edx
        sar     eax, 1
        cmp     esi, ebx
        jg      insert_loop
place_pivot:
        mov     dword ptr [ecx + esi*4], edi
        pop     edi
        pop     esi
        pop     ebx
        ret
done_early:
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        mov     dword ptr [ecx + esi*4], eax
        pop     esi
        pop     ebx
        ret
    }
}
