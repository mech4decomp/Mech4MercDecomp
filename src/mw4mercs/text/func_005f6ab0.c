/*
 * FUN_005f6ab0 (144 B) — Removes a node from a linked list and recomputes
 * a packed count field.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005f6b40(void *param);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __fastcall FUN_005f6ab0(void *param)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4f4]
        test    eax, eax
        push    esi
        push    edi
        jl      done
        call    FUN_005f6b40
        test    eax, eax
        jz      done
        mov     ecx, dword ptr [ebx + 0x4f4]
        mov     edx, dword ptr [ebx + 0x4f8]
        lea     ecx, [ecx + ecx*4]
        lea     ecx, [edx + ecx*4]
        lea     esi, [eax + ecx*8]
        test    esi, esi
        mov     edi, esi
        jz      count
remove_loop:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      count
        cmp     dword ptr [eax + 0x4], ebx
        jnz     next
        test    eax, eax
        mov     edx, dword ptr [eax]
        mov     dword ptr [edi], edx
        jz      check
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     check
next:
        mov     edi, eax
check:
        test    edi, edi
        jnz     remove_loop
count:
        mov     eax, dword ptr [esi]
        mov     ecx, eax
        xor     edx, edx
        test    ecx, ecx
        jz      count_done
count_loop:
        mov     ecx, dword ptr [ecx]
        inc     edx
        test    ecx, ecx
        jnz     count_loop
count_done:
        shl     edx, 0x18
        test    eax, eax
        mov     dword ptr [esi + 0x4], edx
        jz      done
sum_loop:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx + 0x30]
        mov     edi, dword ptr [esi + 0x4]
        mov     eax, dword ptr [eax]
        and     edx, 0xffffff
        add     edi, edx
        test    eax, eax
        mov     dword ptr [esi + 0x4], edi
        jnz     sum_loop
done:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
