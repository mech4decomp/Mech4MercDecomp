/*
 * FUN_005d64d0 (227 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Vector push_back: if capacity available, store param and bump size;
 * otherwise grow the buffer (realloc via FUN_004084D0 / FUN_004084E0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084D0(unsigned int size);
extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void FUN_005d64d0(void)
{
    __asm {
        sub     esp, 0xC
        mov     eax, dword ptr [ecx + 8]
        push    edi
        mov     edi, dword ptr [ecx + 4]
        cmp     edi, eax
        mov     dword ptr [esp + 0xC], ecx
        jz      grow
        test    edi, edi
        jz      skip_store
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax]
        mov     dword ptr [edi], edx
skip_store:
        add     edi, 4
        mov     dword ptr [ecx + 4], edi
        pop     edi
        add     esp, 0xC
        ret     4
grow:
        push    ebx
        mov     ebx, dword ptr [ecx]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 2
        cmp     eax, 1
        push    ebp
        push    esi
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      use_esp10
        lea     ecx, [esp + 0x14]
use_esp10:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      no_alloc
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084D0
        add     esp, 4
        mov     ebp, eax
        jmp     alloc_done
no_alloc:
        xor     ebp, ebp
alloc_done:
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
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
store_skip:
        cmp     edi, edi
        lea     esi, [eax + 4]
        jz      shift_done
        mov     eax, edi
        sub     eax, esi
shift_loop:
        test    esi, esi
        jz      shift_skip
        mov     ecx, dword ptr [eax + esi*1]
        mov     dword ptr [esi], ecx
shift_skip:
        add     esi, 4
        lea     edx, [eax + esi*1]
        cmp     edx, edi
        jnz     shift_loop
shift_done:
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      free_done
        push    ebx
        call    FUN_004084E0
        add     esp, 4
free_done:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 4], esi
        pop     esi
        lea     edx, [ebp + ecx*4]
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        mov     dword ptr [eax + 8], edx
        pop     edi
        add     esp, 0xC
        ret     4
    }
}
