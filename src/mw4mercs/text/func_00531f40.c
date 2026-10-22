/*
 * FUN_00531F40 (227 B) — Object lookup/find function
 * Called with __thiscall (ECX = this pointer).
 * Searches through a collection for an object matching a given ID,
 * returns a pointer to the found object with reference counting.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00531f40(void)
{
    

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void);
__asm {
sub     esp, 0x44
        push    ebp
        push    esi
        push    edi
        push    0x14
        mov     edi, ecx
        xor     ebp, ebp
        call FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      alloc_failed
        mov     eax, dword ptr [edi + 0x8C]
        add     eax, 0x10
        push    eax
        mov     ecx, esi
        call FUN_00416bc0
        mov     dword ptr [esi], 0x00779E88
        mov     edi, esi
        jmp     alloc_done

alloc_failed:
        xor     edi, edi

alloc_done:
        push    ebx
        mov     ecx, edi
        call FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      search_done

search_loop:
        mov     ebx, dword ptr [esp + 0x58]
search_loop_entry:
        lea     ecx, [esp + 0x10]
        call FUN_004d1f10
        mov     cx, word ptr [esi + 0x10]
        mov     dx, word ptr [esi + 0x12]
        lea     eax, [esp + 0x58]
        mov     word ptr [esp + 0x58], cx
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     word ptr [esp + 0x62], dx
        call FUN_004da8d0
        mov     edx, dword ptr [esp + 0x2C]
        mov     eax, dword ptr [edx + 0x30]
        add     esp, 0x08
        cmp     eax, ebx
        jz      found_match
        lea     ecx, [esp + 0x10]
        call FUN_004d21c0
        mov     ecx, edi
        call FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     search_loop_entry
        jmp     search_done

found_match:
        mov     esi, dword ptr [esi + 0x18]
        test    esi, esi
        jz      skip_ref_inc
        inc     byte ptr [esi - 0x01]

skip_ref_inc:
        test    esi, esi
        mov     ebp, esi
        jz      skip_ref_dec
        mov     cl, byte ptr [esi - 0x01]
        lea     eax, [esi - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_ref_dec
        push    eax
        call FUN_004084e0
        add     esp, 0x04

skip_ref_dec:
        lea     ecx, [esp + 0x10]
        call FUN_004d21c0

search_done:
        test    edi, edi
        pop     ebx
        jz      skip_release
        mov     eax, dword ptr [edi]
        push    0x01
        mov     ecx, edi
        call    dword ptr [eax]

skip_release:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        add     esp, 0x44
        ret     0x04
    }


}
