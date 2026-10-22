/*
 * FUN_006c6630 (186 B) — __thiscall (ECX = this), RET (no args).
 *
 * Decrements a refcount at this+0x44 -> +0x18; when it reaches zero,
 * frees a linked list of objects (FUN_00717c10 / FUN_006f4230), walks
 * a second list, unlinks this+0x44 from the global list DAT_0083a208,
 * and frees this+0x3c via FUN_007336d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_83a208;   /* DAT_0083a208 */

extern void __cdecl FUN_00717c10(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006c7fa0(void);
extern void __cdecl FUN_006c85a0(void);
extern void __cdecl FUN_007336d0(void);

__declspec(naked) void __fastcall FUN_006c6630(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp + 0x44]
        mov     eax, dword ptr [ebx + 0x18]
        dec     eax
        push    esi
        mov     dword ptr [ebx + 0x18], eax
        jnz     tail
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      list2
        push    edi
list1:
        mov     edi, esi
        mov     eax, dword ptr [edi + 0x4]
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_00717c10
        push    edi
        call    FUN_006f4230
        test    esi, esi
        jnz     list1
        pop     edi
list2:
        mov     esi, dword ptr [ebx + 0x4]
        test    esi, esi
        jz      unlink
list2_loop:
        mov     eax, dword ptr [esi + 0x88]
        test    eax, eax
        jz      list2_next
        push    eax
        mov     ecx, ebp
        call    FUN_006c7fa0
list2_next:
        mov     eax, esi
        mov     esi, dword ptr [esi + 0x80]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jnz     list2_loop
unlink:
        mov     esi, dword ptr [ebp + 0x44]
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        lea     eax, [esi + 0xc]
        jz      find
        push    eax
        call    FUN_006c85a0
find:
        mov     eax, dword ptr [g_83a208]
        xor     ecx, ecx
        test    eax, eax
        jz      tail
find_loop:
        cmp     eax, esi
        jz      found
        mov     ecx, eax
        mov     eax, dword ptr [eax + 0x1c]
        test    eax, eax
        jnz     find_loop
        jmp     tail
found:
        test    ecx, ecx
        jz      found_head
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x1c], edx
        jmp     free_it
found_head:
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [g_83a208], eax
free_it:
        push    esi
        call    FUN_006f4230
tail:
        mov     ecx, dword ptr [ebp + 0x3c]
        test    ecx, ecx
        lea     eax, [ebp + 0x3c]
        pop     esi
        pop     ebp
        pop     ebx
        jz      done
        push    eax
        call    FUN_007336d0
done:
        ret
    }
}
