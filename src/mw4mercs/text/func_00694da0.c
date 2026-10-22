/*
 * FUN_00694da0 (268 B) — __thiscall HUD element array insertion. Allocates
 * a new element (0x38 bytes) via FUN_004084d0, constructs it via
 * FUN_00694b10, then inserts it into the element array at [0x18,0x20),
 * growing the array (realloc via FUN_004084d0) when full. Returns the new
 * element pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00694b10(void);

__declspec(naked) void FUN_00694da0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    38h
        mov     dword ptr [esp+14h], ebx
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 4
        cmp     eax, ebp
        jz      alloc_fail
        mov     ecx, dword ptr [esp+20h]
        mov     edx, dword ptr [esp+1ch]
        push    ecx
        mov     ecx, dword ptr [esp+1ch]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00694b10
        mov     esi, eax
        mov     dword ptr [esp+20h], esi
        jmp     have_elem
alloc_fail:
        mov     dword ptr [esp+20h], ebp
        mov     esi, ebp
have_elem:
        mov     edi, dword ptr [ebx+1ch]
        cmp     edi, dword ptr [ebx+20h]
        jz      grow
        cmp     edi, ebp
        jz      skip_store
        mov     dword ptr [edi], esi
skip_store:
        add     edi, 4
        mov     dword ptr [ebx+1ch], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0ch
grow:
        mov     ebx, dword ptr [ebx+18h]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp+1ch], 1
        mov     dword ptr [esp+18h], eax
        lea     ecx, [esp+1ch]
        jc      use_one
        lea     ecx, [esp+18h]
use_one:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp+1ch], ecx
        jz      no_alloc
        lea     edx, [ecx*4]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
no_alloc:
        cmp     ebx, edi
        mov     eax, ebp
        jz      copy_done
        mov     ecx, ebx
copy_loop:
        test    eax, eax
        jz      copy_skip
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
copy_skip:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edi
        jnz     copy_loop
copy_done:
        test    eax, eax
        jz      store_skip
        mov     dword ptr [eax], esi
store_skip:
        cmp     edi, edi
        lea     esi, [eax+4]
        jz      shift_done
        mov     eax, edi
        sub     eax, esi
shift_loop:
        test    esi, esi
        jz      shift_skip
        mov     ecx, dword ptr [eax+esi]
        mov     dword ptr [esi], ecx
shift_skip:
        add     esi, 4
        lea     edx, [eax+esi]
        cmp     edx, edi
        jnz     shift_loop
shift_done:
        test    ebx, ebx
        mov     dword ptr [esp+18h], ebx
        jz      no_free
        push    ebx
        call    FUN_004084e0
        add     esp, 4
no_free:
        mov     eax, dword ptr [esp+10h]
        mov     ecx, dword ptr [esp+1ch]
        pop     edi
        mov     dword ptr [eax+1ch], esi
        pop     esi
        mov     dword ptr [eax+18h], ebp
        lea     edx, [ebp+ecx*4]
        pop     ebp
        mov     dword ptr [eax+20h], edx
        mov     eax, dword ptr [esp+14h]
        pop     ebx
        pop     ecx
        ret     0ch
    }
}
