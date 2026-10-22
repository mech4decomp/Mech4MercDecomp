/*
 * FUN_004878A0 (90 B) — MLR array container destructor body (__fastcall, ECX=this).
 *
 * Decrements refcount on each item, frees items whose refcount reaches 0,
 * frees the item array, then calls base destructor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_00415380(void *this);

__declspec(naked) void __fastcall FUN_004878a0(void *this)
{
    __asm {
        push    edi
        mov     edi, ecx
        xor     eax, eax
        mov     al, [edi + 0x1c]            ; count
        mov     dword ptr [edi], 0x76fcc8    ; mov dword ptr [edi], 0x76fcc8
        dec     eax
        js      l_free_array                ; if count-1 < 0, skip loop
        mov     ecx, [edi + 0x14]           ; item array
        push    ebx
        push    esi
        lea     esi, [ecx + eax * 4]        ; point to last item
        lea     ebx, [eax + 1]              ; counter = count
    l_loop:
        mov     ecx, [esi]                  ; item pointer
        dec     word ptr [ecx + 8]          ; decrement refcount
        cmp     word ptr [ecx + 8], 0
        mov     dword ptr [esi], 0           ; mov dword ptr [esi], 0
        jnz     l_next
        test    ecx, ecx
        jz      l_next
        mov     edx, [ecx]                  ; vtable
        push    1
        call    dword ptr [edx]             ; call dword ptr [edx] — vtable[0](1)
    l_next:
        sub     esi, 4
        dec     ebx
        jnz     l_loop
        pop     esi
        pop     ebx
    l_free_array:
        mov     eax, [edi + 0x14]           ; item array
        test    eax, eax
        jz      l_base_dtor
        push    eax
        call    FUN_004084e0                ; free(item array)
        add     esp, 4
    l_base_dtor:
        mov     ecx, edi
        call    FUN_00415380                ; base destructor
        pop     edi
        ret
    }
}
